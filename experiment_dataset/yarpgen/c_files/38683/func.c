/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38683
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
    var_14 = ((/* implicit */unsigned long long int) (~((+(var_10)))));
    var_15 = ((_Bool) 3821619613U);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) arr_0 [(short)2] [(short)2]);
        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) var_11)))), ((-(((/* implicit */int) arr_0 [i_0] [i_0]))))))) ? (min((((arr_0 [i_0] [i_0]) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))), (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_0 [5LL] [5LL])), (var_5)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned int i_3 = 1; i_3 < 8; i_3 += 1) 
                {
                    for (unsigned short i_4 = 1; i_4 < 6; i_4 += 1) 
                    {
                        {
                            var_17 = ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_4 [i_1])));
                            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) var_0))));
                            arr_13 [i_1] [i_3] [i_1] [i_1] [i_1] = ((/* implicit */long long int) (+(var_12)));
                            var_19 *= ((/* implicit */_Bool) ((arr_0 [i_2 + 1] [i_3]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_10)));
                        }
                    } 
                } 
                var_20 = ((/* implicit */long long int) arr_8 [i_0] [i_0] [i_2]);
                arr_14 [(unsigned char)2] [(_Bool)1] [i_2] [(unsigned char)2] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_2 - 1] [i_2 + 1] [i_2 - 1])) ? (((/* implicit */int) arr_6 [i_2 + 1] [i_2 - 1] [i_2 - 1])) : (((/* implicit */int) arr_8 [i_2 - 1] [i_2 - 1] [i_2 - 1]))))) ? (((((/* implicit */_Bool) arr_8 [i_2 + 1] [i_2 + 1] [i_2 + 1])) ? (arr_7 [i_2 + 1] [i_2 + 1] [(unsigned short)0]) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2 + 1] [i_2 + 1] [i_2 + 1]))))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_8 [i_2 - 1] [i_2 - 1] [i_2 - 1])))))));
            }
            arr_15 [i_1] [9U] = ((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [9LL] [i_0] [i_0]))))) ? (arr_5 [i_1]) : (((/* implicit */int) var_6)))) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_1] [8] [i_1] [i_1])) ? (arr_10 [i_0] [i_0] [0] [i_1] [i_1] [7U] [i_0]) : (var_0))))));
        }
        for (int i_5 = 0; i_5 < 10; i_5 += 2) 
        {
            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (~(((/* implicit */int) var_3)))))));
            var_22 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [(_Bool)1] [i_5])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((unsigned int) arr_5 [i_5])) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        }
        arr_19 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((-(var_12))), (((/* implicit */int) (!(arr_0 [i_0] [i_0]))))))) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : ((+(((/* implicit */int) arr_4 [(_Bool)1]))))));
    }
}
