/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215748
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
    var_10 = ((/* implicit */short) var_1);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned char) ((((/* implicit */int) max(((unsigned char)109), (arr_0 [i_0])))) <= ((((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */unsigned char) var_2)))))))));
        var_12 = ((unsigned char) ((unsigned int) arr_1 [i_0] [i_0]));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                for (unsigned int i_3 = 2; i_3 < 13; i_3 += 3) 
                {
                    {
                        var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((arr_9 [i_3] [i_3 - 1] [i_3] [i_3]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 + 2] [i_3]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)146))))))));
                        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (4294967295U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_1 + 2] [i_1 + 2] [i_1] [i_1 + 2])) ? (((/* implicit */int) var_6)) : (((((/* implicit */int) (short)-21238)) + (((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_0]))))))))))));
                        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) min((((((/* implicit */_Bool) min((1643619258U), (var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_8 [i_1 + 2] [i_1] [i_3] [i_3 - 2]))), (((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_5 [i_0] [i_1] [i_0] [i_2]))))))))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_4 = 1; i_4 < 13; i_4 += 4) 
            {
                for (unsigned int i_5 = 2; i_5 < 13; i_5 += 2) 
                {
                    {
                        var_16 += ((/* implicit */unsigned int) ((min((arr_12 [i_5 + 1] [i_4]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (arr_13 [i_0] [i_1]) : (((/* implicit */long long int) arr_2 [i_0] [i_1] [i_4]))))))) << (((/* implicit */int) max((var_9), (((/* implicit */unsigned char) ((_Bool) (short)21238))))))));
                        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (arr_15 [(_Bool)1] [(_Bool)1] [i_4] [i_4 - 1] [i_4] [(_Bool)1]) : (arr_10 [i_5 - 2] [i_0] [i_0]))))));
                        var_18 |= ((/* implicit */unsigned short) 3844194113095483583ULL);
                    }
                } 
            } 
        }
    }
    for (long long int i_6 = 0; i_6 < 19; i_6 += 4) 
    {
        var_19 = ((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_6]))) | ((~(((unsigned int) arr_17 [i_6] [i_6])))));
        arr_20 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_19 [i_6])), (max((((/* implicit */unsigned short) arr_17 [i_6] [(unsigned char)12])), (arr_18 [i_6])))))) ? (((/* implicit */int) ((unsigned char) arr_18 [(short)9]))) : (((/* implicit */int) min((((/* implicit */short) ((((/* implicit */int) arr_19 [i_6])) <= (((/* implicit */int) arr_17 [i_6] [i_6]))))), ((short)(-32767 - 1)))))));
    }
    /* vectorizable */
    for (unsigned int i_7 = 3; i_7 < 11; i_7 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_8 = 0; i_8 < 13; i_8 += 1) 
        {
            arr_28 [i_7 - 2] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_7 - 2] [i_7 - 2] [i_7])) ? (((/* implicit */int) arr_3 [i_8] [i_7])) : (((/* implicit */int) arr_17 [i_7 - 2] [i_7 - 1]))));
            var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_19 [i_7 - 1]))));
            arr_29 [i_7] = ((/* implicit */short) ((unsigned char) arr_6 [i_8] [i_7 - 1] [i_7 - 1]));
            var_21 = ((/* implicit */unsigned char) ((arr_10 [i_8] [i_7] [i_7]) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) arr_17 [i_8] [i_7]))))))));
        }
        for (unsigned int i_9 = 0; i_9 < 13; i_9 += 1) 
        {
            var_22 = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
            var_23 = ((/* implicit */_Bool) arr_27 [i_7]);
        }
        var_24 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_26 [12U])) >= (((/* implicit */int) arr_26 [8ULL]))));
        var_25 = ((/* implicit */unsigned int) ((arr_25 [i_7] [i_7 - 1] [i_7 - 1]) + (((/* implicit */long long int) arr_31 [i_7] [i_7 - 1]))));
    }
}
