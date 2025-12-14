/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234422
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) var_1);
        arr_4 [i_0] [19U] |= ((/* implicit */unsigned long long int) ((_Bool) var_2));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_10 = ((/* implicit */unsigned long long int) (unsigned short)11624);
        var_11 |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [9U]))))) || (((/* implicit */_Bool) (-(arr_7 [i_1])))))) ? (((/* implicit */int) (unsigned char)255)) : (arr_7 [i_1])));
        arr_8 [i_1] = ((max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) % (((/* implicit */int) var_8))))), (max((arr_1 [i_1] [(unsigned short)13]), (((/* implicit */unsigned long long int) var_7)))))) ^ ((~(10214581550571960967ULL))));
        var_12 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)12824)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_0 [i_1]))))))))) != (max((arr_1 [i_1] [i_1]), (((/* implicit */unsigned long long int) ((short) var_3)))))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_11 [i_2] |= ((/* implicit */int) (unsigned char)254);
        /* LoopSeq 3 */
        for (int i_3 = 1; i_3 < 19; i_3 += 3) 
        {
            var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_3 + 2])) << (((var_3) ? (127112206U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))));
            var_14 = ((/* implicit */unsigned int) arr_9 [15]);
        }
        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 2) 
        {
            var_15 *= ((/* implicit */unsigned short) ((((/* implicit */int) (!(arr_18 [(unsigned short)16] [i_4] [i_4])))) / (((/* implicit */int) ((((/* implicit */int) arr_17 [i_2] [i_4] [19U])) <= (((/* implicit */int) var_0)))))));
            var_16 &= ((/* implicit */unsigned long long int) (_Bool)0);
            arr_19 [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) var_8))) * (127112206U))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [17U] [i_4] [i_4])))));
            arr_20 [(unsigned short)17] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))));
            /* LoopSeq 1 */
            for (int i_5 = 0; i_5 < 21; i_5 += 3) 
            {
                var_17 = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) var_9))) / (arr_13 [i_5]))) + (((/* implicit */unsigned int) ((int) var_7)))));
                arr_23 [(short)18] = ((/* implicit */unsigned long long int) var_3);
                arr_24 [i_2] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */_Bool) ((short) var_4))) ? (((10214581550571960967ULL) + (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (-686267515) : (((/* implicit */int) arr_21 [i_2] [i_2] [(unsigned char)18])))))));
            }
        }
        for (unsigned short i_6 = 0; i_6 < 21; i_6 += 1) 
        {
            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) != (((/* implicit */int) ((unsigned char) (unsigned short)26003))))))));
            arr_27 [i_2] [i_2] [i_6] = ((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_2])) << (((/* implicit */int) var_6))));
            var_19 |= var_6;
        }
        var_20 = ((((/* implicit */int) arr_18 [(short)12] [i_2] [i_2])) * (((/* implicit */int) var_2)));
    }
    var_21 = ((/* implicit */unsigned int) ((unsigned long long int) (-((-(((/* implicit */int) var_4)))))));
    var_22 = var_1;
    var_23 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)22345)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) min((var_9), (var_2))))))), (min((((/* implicit */unsigned long long int) max((var_0), ((unsigned short)38782)))), (((((/* implicit */_Bool) var_5)) ? (8232162523137590649ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))));
    var_24 = ((/* implicit */unsigned int) var_0);
}
