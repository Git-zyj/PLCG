/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204218
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
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_8)), (var_0)))) ? (((/* implicit */int) (unsigned char)30)) : (((/* implicit */int) var_1))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned char) min((var_14), ((unsigned char)208)));
        var_15 = ((/* implicit */short) min(((((-(((/* implicit */int) arr_0 [i_0] [i_0])))) * (((/* implicit */int) ((short) 929913849591626828LL))))), (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) == (((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) arr_0 [i_0] [i_0 - 1])))))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            var_16 *= ((/* implicit */unsigned long long int) arr_6 [i_1 - 2]);
            arr_7 [i_0] [i_1] = ((/* implicit */signed char) var_0);
            var_17 = ((/* implicit */_Bool) ((max(((_Bool)1), (((((/* implicit */_Bool) arr_2 [(short)0] [(_Bool)1])) || (((/* implicit */_Bool) arr_3 [i_1 - 2] [(_Bool)1])))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_3 [i_0] [i_1]))));
        }
    }
    var_18 = ((/* implicit */signed char) (~(((/* implicit */int) var_1))));
    /* LoopSeq 3 */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        var_19 += ((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_2 + 1] [i_2 + 1])) + (((((/* implicit */_Bool) arr_9 [i_2 + 1] [i_2 + 1])) ? (((/* implicit */int) arr_9 [i_2 + 1] [i_2 + 1])) : (((/* implicit */int) arr_8 [i_2 + 1] [i_2 + 1]))))));
        arr_10 [i_2] = ((/* implicit */signed char) min((min((((/* implicit */int) (signed char)97)), (((((/* implicit */_Bool) arr_8 [i_2] [i_2])) ? (((/* implicit */int) (signed char)28)) : (((/* implicit */int) (signed char)33)))))), (((/* implicit */int) var_6))));
    }
    /* vectorizable */
    for (short i_3 = 1; i_3 < 15; i_3 += 1) 
    {
        arr_13 [i_3] [i_3 - 1] = (signed char)69;
        /* LoopNest 3 */
        for (signed char i_4 = 3; i_4 < 14; i_4 += 4) 
        {
            for (unsigned char i_5 = 1; i_5 < 15; i_5 += 2) 
            {
                for (signed char i_6 = 0; i_6 < 16; i_6 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_7 = 3; i_7 < 15; i_7 += 1) 
                        {
                            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3]))) % (-474278051612425304LL))))));
                            var_21 -= ((/* implicit */int) (unsigned char)146);
                            var_22 += ((/* implicit */short) var_11);
                        }
                        arr_25 [(unsigned short)11] [i_3] [i_5] [3] [(unsigned short)11] [i_3] = (+(((/* implicit */int) arr_4 [i_6])));
                        /* LoopSeq 3 */
                        for (unsigned short i_8 = 2; i_8 < 15; i_8 += 3) 
                        {
                            arr_28 [(signed char)12] [i_4] [i_3] [i_6] [i_4 + 1] = ((/* implicit */int) arr_11 [i_3 - 1] [i_5 - 1]);
                            arr_29 [i_3] [i_4] [i_5] [i_3 - 1] [i_3 - 1] [i_8 - 2] [i_5 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)33))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) arr_17 [3LL] [i_5 - 1] [i_5 - 1]))));
                            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (_Bool)1))));
                            var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_18 [i_5 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((((/* implicit */_Bool) (signed char)56)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)72))) : (7977944427501710848LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(var_8))))))))));
                        }
                        for (short i_9 = 0; i_9 < 16; i_9 += 1) 
                        {
                            var_25 |= ((/* implicit */short) ((((/* implicit */int) var_6)) / (((((/* implicit */int) (short)-17433)) % (((/* implicit */int) (short)32))))));
                            var_26 *= ((/* implicit */_Bool) (((~(((/* implicit */int) arr_31 [i_4] [i_4] [i_4] [i_6] [i_9] [i_6] [i_4])))) + (((((/* implicit */int) arr_1 [i_6])) - (((/* implicit */int) var_10))))));
                            var_27 = ((/* implicit */_Bool) arr_2 [i_5] [i_5]);
                        }
                        for (signed char i_10 = 2; i_10 < 12; i_10 += 3) 
                        {
                            var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) (((_Bool)0) ? (-8121577652181566256LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)124))))))));
                            var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) ((((arr_32 [i_3] [i_4] [(unsigned char)6] [i_6] [i_10 + 1] [i_10]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_11 [i_3 - 1] [(short)9]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_3] [i_3] [i_5 - 1])))))))))));
                            arr_35 [i_10] [i_3] [i_5] [i_4] [i_3] = ((/* implicit */_Bool) (+(((((/* implicit */int) arr_33 [i_5])) ^ (((/* implicit */int) (signed char)123))))));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_11 = 0; i_11 < 16; i_11 += 1) 
        {
            for (signed char i_12 = 3; i_12 < 14; i_12 += 1) 
            {
                {
                    arr_41 [i_3] [i_3] = (!(((/* implicit */_Bool) arr_33 [i_3 + 1])));
                    var_30 = ((/* implicit */_Bool) arr_0 [0LL] [i_12]);
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_13 = 3; i_13 < 21; i_13 += 1) 
    {
        arr_44 [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) arr_42 [i_13 - 1])) ? (((/* implicit */int) arr_43 [i_13 + 2])) : (((/* implicit */int) arr_43 [i_13 - 1]))));
        arr_45 [i_13 + 1] |= (signed char)69;
        var_31 = ((/* implicit */unsigned char) (+(((((/* implicit */int) arr_42 [i_13 - 1])) & (((/* implicit */int) arr_42 [i_13]))))));
        var_32 += ((/* implicit */unsigned int) var_8);
    }
}
