/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214705
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
    var_20 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((int) var_16))) > ((+(var_5)))))), (max((((((/* implicit */_Bool) var_7)) ? (1033943741U) : (((/* implicit */unsigned int) ((/* implicit */int) var_19))))), (((((/* implicit */_Bool) (signed char)33)) ? (3261023554U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)6270)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (short i_2 = 4; i_2 < 19; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_2] [i_3] [i_0] [i_1] = ((/* implicit */long long int) var_13);
                        var_21 |= ((/* implicit */unsigned int) arr_7 [i_3] [i_3] [i_3] [i_0]);
                        /* LoopSeq 1 */
                        for (signed char i_4 = 2; i_4 < 20; i_4 += 2) 
                        {
                            var_22 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)72)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_4 - 1]))) : (arr_0 [i_4 - 1]))) | (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned short)42491))))));
                            arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_4 - 2])) : (((/* implicit */int) (unsigned short)44789))));
                        }
                        /* LoopSeq 2 */
                        for (short i_5 = 0; i_5 < 21; i_5 += 3) 
                        {
                            var_23 = ((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [(short)15] [i_0] [i_0] [i_0]);
                            arr_18 [i_1] = ((/* implicit */short) ((unsigned char) var_7));
                            var_24 = ((/* implicit */unsigned char) var_1);
                        }
                        for (unsigned char i_6 = 3; i_6 < 19; i_6 += 1) 
                        {
                            arr_21 [i_0] [i_1 + 1] [i_2] [i_0] [13] [i_6] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) arr_3 [i_1] [i_6 - 2]))) | (((/* implicit */int) (!(((/* implicit */_Bool) 879245477U)))))));
                            var_25 -= ((/* implicit */_Bool) arr_20 [i_0] [i_1 + 1] [i_2 + 2] [i_6 - 1] [i_0]);
                        }
                        /* LoopSeq 3 */
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) /* same iter space */
                        {
                            arr_25 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_1] [(_Bool)1] [i_1] = ((/* implicit */short) 1274580073);
                            var_26 *= ((((/* implicit */_Bool) arr_14 [i_1] [i_1 - 1] [i_1 - 1] [i_1 + 1])) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)39903)) : (arr_5 [i_1] [i_2]))) : (((/* implicit */int) arr_24 [i_3] [i_0])));
                            arr_26 [i_0] [i_0] [(short)9] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(arr_20 [i_0] [i_2 + 2] [i_2] [i_3] [i_3])));
                            var_27 = (i_1 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_1] [i_2 - 1] [i_2 - 4])) << (((((/* implicit */int) arr_4 [i_1] [i_2 + 2] [i_2 - 1])) - (114)))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_4 [i_1] [i_2 - 1] [i_2 - 4])) + (2147483647))) << (((((((((/* implicit */int) arr_4 [i_1] [i_2 + 2] [i_2 - 1])) - (114))) + (237))) - (21))))));
                        }
                        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) /* same iter space */
                        {
                            var_28 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_17))));
                            arr_29 [i_0] [i_0] [i_1] = var_9;
                            var_29 &= (-(3261023553U));
                        }
                        for (int i_9 = 4; i_9 < 19; i_9 += 2) 
                        {
                            arr_33 [i_1] [i_1] [i_2] [i_0] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3261023549U)) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) arr_19 [i_1] [i_3] [i_2] [i_1] [i_1] [i_0] [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))));
                            var_30 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) var_5))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)63))) : (((((/* implicit */_Bool) (short)-6296)) ? (((/* implicit */unsigned int) var_2)) : (arr_16 [i_0] [i_0] [(signed char)17] [i_2] [i_0] [i_0] [i_0])))));
                            arr_34 [i_0] [i_3] [i_0] [i_3] [i_9 - 2] [i_1] [i_2] |= ((/* implicit */unsigned short) arr_4 [i_9] [4ULL] [i_3]);
                            var_31 = ((/* implicit */unsigned int) arr_14 [i_0] [i_1 + 1] [i_2 - 4] [i_9 + 2]);
                            arr_35 [i_9] [i_1] [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)44789)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7149)))))) ? (arr_19 [i_2] [i_2] [i_2 - 3] [i_1] [i_2] [i_2] [i_2]) : (arr_10 [i_0] [i_0] [i_0] [i_0])));
                        }
                    }
                } 
            } 
            arr_36 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) 4294967295U);
            var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_4)) : (var_11))) | (((/* implicit */int) arr_8 [i_0] [(short)8] [(short)8] [(short)8])))))));
        }
        for (unsigned short i_10 = 0; i_10 < 21; i_10 += 2) /* same iter space */
        {
            arr_40 [i_0] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
            arr_41 [i_0] [i_0] [i_10] = ((/* implicit */signed char) ((var_9) == (((/* implicit */unsigned long long int) arr_0 [i_10]))));
            /* LoopSeq 3 */
            for (unsigned int i_11 = 0; i_11 < 21; i_11 += 2) 
            {
                arr_44 [i_0] [5ULL] [5ULL] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((/* implicit */long long int) ((/* implicit */int) var_19))) : (arr_0 [i_10])));
                var_33 = var_1;
            }
            for (int i_12 = 0; i_12 < 21; i_12 += 2) 
            {
                var_34 = -1433810807;
                var_35 ^= ((/* implicit */unsigned long long int) (((+(((/* implicit */int) (signed char)30)))) >> (((arr_19 [i_0] [i_0] [i_0] [i_12] [i_10] [i_12] [i_12]) + (3256654189206814711LL)))));
            }
            for (unsigned short i_13 = 1; i_13 < 17; i_13 += 2) 
            {
                var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)4094))));
                arr_50 [i_10] [i_13] = ((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_10] [(_Bool)1] [i_13]);
                /* LoopSeq 3 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    arr_55 [i_14] [i_0] [i_0] [i_10] [i_0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_1 [i_13 + 4]))));
                    arr_56 [i_0] [i_10] [6LL] [i_14] [i_14] = ((/* implicit */unsigned short) arr_8 [i_14] [i_10] [i_10] [i_0]);
                    arr_57 [i_14] [i_10] [i_0] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_46 [i_13 - 1] [i_13 + 1]))));
                }
                for (unsigned long long int i_15 = 2; i_15 < 20; i_15 += 2) 
                {
                    var_37 = ((/* implicit */unsigned int) (~(var_10)));
                    var_38 = ((/* implicit */short) (-(((/* implicit */int) var_19))));
                }
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    var_39 = ((/* implicit */short) ((var_0) / (((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned short)9])) ? (arr_10 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) arr_51 [i_0] [i_0] [i_0]))))));
                    var_40 = ((/* implicit */unsigned int) ((_Bool) arr_8 [i_0] [i_10] [i_10] [i_0]));
                    var_41 |= ((/* implicit */_Bool) ((((/* implicit */int) arr_46 [i_13] [i_13 + 3])) * (((/* implicit */int) var_15))));
                    arr_64 [(unsigned short)12] [i_10] [i_10] [i_10] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_28 [i_10])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_10] [i_0] [i_10] [i_0] [i_16])))));
                }
                /* LoopNest 2 */
                for (short i_17 = 2; i_17 < 17; i_17 += 2) 
                {
                    for (short i_18 = 1; i_18 < 18; i_18 += 2) 
                    {
                        {
                            var_42 += ((/* implicit */unsigned short) var_9);
                            var_43 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1984297868)) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (((((/* implicit */_Bool) (signed char)67)) ? (((/* implicit */unsigned long long int) arr_48 [i_0] [i_10] [i_13] [i_18])) : (var_1)))));
                            var_44 |= ((/* implicit */unsigned char) var_6);
                        }
                    } 
                } 
            }
        }
        for (unsigned short i_19 = 0; i_19 < 21; i_19 += 2) /* same iter space */
        {
            var_45 = ((/* implicit */unsigned short) (((-(var_18))) / (((/* implicit */unsigned long long int) ((arr_10 [i_0] [(short)3] [i_0] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) var_16))))))));
            arr_72 [i_0] = ((/* implicit */unsigned long long int) (unsigned short)11524);
        }
        arr_73 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_49 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_12 [i_0] [i_0] [8U] [8U] [i_0])) : (((/* implicit */int) ((short) var_5)))));
    }
    for (unsigned char i_20 = 3; i_20 < 12; i_20 += 1) 
    {
        var_46 = ((((/* implicit */_Bool) (short)-1)) ? (2526789819U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54011))));
        var_47 = ((/* implicit */_Bool) max(((+(arr_0 [i_20 - 2]))), (((/* implicit */long long int) ((_Bool) (short)-14)))));
    }
}
