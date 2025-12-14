/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37224
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
    var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) (~(var_9))))));
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_10)))) ? (var_3) : (((/* implicit */long long int) ((int) min((var_10), (((/* implicit */unsigned long long int) (_Bool)1))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((int) arr_3 [i_1 + 1] [i_2] [i_1 - 1]))), (max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_4 [i_1] [i_1] [i_2])) / (7251398465023021063LL)))), (((var_10) * (((/* implicit */unsigned long long int) arr_6 [i_2])))))))))));
                    arr_9 [i_0] [i_0] [i_0] [6] = ((/* implicit */unsigned long long int) min(((-(arr_1 [i_0] [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1769305552)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)64462)))))));
                }
            } 
        } 
    } 
    var_14 = ((int) min(((+(var_6))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_9) : (1664451501))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_3 = 4; i_3 < 19; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_15 [12U] [0LL]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 2) 
                    {
                        for (int i_7 = 0; i_7 < 20; i_7 += 2) 
                        {
                            {
                                var_16 = ((int) ((unsigned long long int) arr_22 [i_3] [i_3] [i_3] [i_3 - 1] [i_3]));
                                arr_24 [i_3] [i_3] [i_3] [i_5] [0] = ((((/* implicit */_Bool) ((short) (unsigned short)6548))) ? (((/* implicit */int) arr_19 [i_3] [i_5] [i_3 - 2] [i_5] [17LL])) : (arr_23 [i_7] [i_6] [i_5] [i_4] [i_3] [i_3]));
                                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_3] [i_3 - 1] [i_3 - 4] [i_3] [i_3] [i_3 - 4])) ? (0) : (arr_23 [(_Bool)1] [i_3 - 1] [i_3] [i_3] [i_3 - 4] [i_3 - 3])));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_18 = ((/* implicit */signed char) (~(((var_1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_12 [i_3 + 1]))))));
                        var_19 = ((/* implicit */short) (~(((/* implicit */int) arr_19 [i_3] [i_3 - 2] [i_3 - 4] [i_5] [i_3]))));
                        arr_27 [i_4] [(signed char)19] [i_4] [i_5] = var_0;
                    }
                    for (unsigned short i_9 = 4; i_9 < 16; i_9 += 2) 
                    {
                        var_20 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_3 - 4] [i_3] [i_3] [i_3 + 1] [i_3 - 2] [i_3 + 1])) ? (arr_23 [i_3 + 1] [i_3] [i_3 - 4] [i_9 + 2] [i_9 + 4] [(unsigned short)12]) : (((/* implicit */int) ((unsigned short) var_4)))));
                        arr_30 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((((/* implicit */_Bool) arr_19 [i_9] [i_9 + 3] [i_9] [i_5] [i_9])) ? (((/* implicit */int) arr_16 [i_3] [i_3] [i_5])) : ((-(arr_23 [i_3] [i_5] [i_4] [i_9] [i_3] [8LL]))));
                        var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)44759)) ? (((/* implicit */int) (unsigned short)482)) : (((/* implicit */int) (unsigned short)65510))));
                    }
                    for (long long int i_10 = 0; i_10 < 20; i_10 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (short i_11 = 0; i_11 < 20; i_11 += 2) 
                        {
                            arr_35 [i_5] [i_10] [i_10] [(unsigned short)15] = ((/* implicit */int) arr_29 [i_3 - 3] [i_4] [i_5] [6]);
                            var_22 |= ((/* implicit */_Bool) ((signed char) arr_12 [i_3 + 1]));
                            var_23 = ((/* implicit */int) min((var_23), (((((/* implicit */_Bool) (unsigned short)20776)) ? (((/* implicit */int) arr_10 [i_3 - 4] [i_3 - 1])) : (((/* implicit */int) arr_10 [i_3 - 3] [i_3 - 2]))))));
                        }
                        for (int i_12 = 1; i_12 < 18; i_12 += 1) 
                        {
                            arr_39 [i_3] [i_3] [i_5] [i_5] [i_5] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_5])) ? (arr_38 [i_5] [i_4] [i_4] [i_4] [i_4] [i_4]) : (((/* implicit */unsigned long long int) -3044017512419561720LL)))));
                            var_24 = ((signed char) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_31 [i_3] [i_4] [i_5] [i_5]))));
                        }
                        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_2) : (((/* implicit */unsigned long long int) arr_26 [i_10] [i_10] [(short)15] [(short)15] [i_3 - 4]))))) ? (var_6) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1685430501)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))))))));
                    }
                    for (unsigned int i_13 = 0; i_13 < 20; i_13 += 4) 
                    {
                        arr_42 [i_5] [i_4] [i_5] [i_13] = ((/* implicit */signed char) -7251398465023021064LL);
                        arr_43 [i_4] [i_5] [i_13] = ((/* implicit */unsigned short) arr_26 [i_3 - 2] [i_3 - 3] [i_3] [i_3] [13]);
                        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_17 [i_13])))))));
                    }
                    var_27 = ((/* implicit */_Bool) ((int) ((((var_3) + (9223372036854775807LL))) << (((((/* implicit */int) arr_12 [i_3])) - (35708))))));
                }
            } 
        } 
        arr_44 [i_3] = ((/* implicit */int) ((_Bool) (-(((/* implicit */int) var_8)))));
        var_28 = ((((/* implicit */_Bool) arr_25 [i_3] [i_3] [14LL] [i_3] [i_3 + 1])) ? (var_9) : (arr_25 [i_3] [i_3 - 1] [(unsigned short)2] [i_3] [i_3 - 2]));
    }
}
