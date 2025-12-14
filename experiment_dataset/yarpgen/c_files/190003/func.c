/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190003
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
    var_18 = var_6;
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */_Bool) var_13);
                    /* LoopSeq 1 */
                    for (short i_3 = 2; i_3 < 15; i_3 += 4) 
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_20 ^= ((/* implicit */short) arr_8 [i_0] [5U] [i_2] [i_3] [i_4] [i_0]);
                            arr_13 [i_2] [i_0] [i_2] = ((unsigned int) arr_12 [i_3 + 2] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 1]);
                        }
                        /* vectorizable */
                        for (short i_5 = 3; i_5 < 17; i_5 += 2) 
                        {
                            arr_16 [i_0] [i_2] [i_3] = ((/* implicit */unsigned int) ((int) ((unsigned short) arr_5 [i_3] [i_2])));
                            arr_17 [i_0] [i_3 - 1] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */int) ((long long int) ((signed char) 5050267187322219745LL)));
                            var_21 = ((/* implicit */int) (!(arr_3 [i_0] [i_1])));
                        }
                        for (int i_6 = 0; i_6 < 18; i_6 += 2) /* same iter space */
                        {
                            arr_20 [i_0] [i_0] [i_2] [i_3 + 2] [i_6] = ((/* implicit */short) arr_8 [i_3 + 1] [i_3 + 2] [i_3] [i_3 + 1] [i_3] [i_3 - 1]);
                            var_22 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((short) (_Bool)0))), (min((((/* implicit */unsigned int) var_9)), (((unsigned int) (_Bool)1))))));
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] = ((/* implicit */unsigned long long int) max((((/* implicit */short) ((signed char) (+(((/* implicit */int) (_Bool)1)))))), (var_1)));
                            arr_22 [i_0] = ((/* implicit */short) -802200867);
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 18; i_7 += 2) /* same iter space */
                        {
                            var_23 = (short)9314;
                            var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_15)))))));
                            arr_26 [i_0] = ((/* implicit */long long int) arr_14 [i_0]);
                            var_25 = var_6;
                            var_26 = ((/* implicit */signed char) (short)-19783);
                        }
                        arr_27 [i_0] [i_3] = arr_1 [i_3 - 2];
                        var_27 = ((/* implicit */unsigned int) arr_4 [i_0 - 1]);
                        arr_28 [i_3] &= min((((2464897812767880789ULL) >= (((/* implicit */unsigned long long int) ((1371492538) ^ (((/* implicit */int) var_7))))))), ((_Bool)0));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 18; i_8 += 4) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned int) 8706870772342184055LL);
                                arr_34 [i_9] [i_8] [i_0] [i_0] [i_0 - 1] [i_0] = ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) arr_32 [i_0] [i_0] [i_9] [4ULL] [i_0] [i_9])))), ((+(((/* implicit */int) arr_32 [i_0 + 1] [i_0 + 1] [i_1] [i_2] [i_0] [i_9]))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (signed char i_10 = 0; i_10 < 18; i_10 += 4) 
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 18; i_11 += 1) 
                        {
                            arr_40 [i_0] [i_10] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((int) (unsigned short)44236));
                            arr_41 [i_0] [i_0] [i_2] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */int) (-(((unsigned long long int) (_Bool)1))));
                            var_29 = ((int) arr_14 [i_0]);
                            arr_42 [i_0] [i_0] = ((/* implicit */long long int) 1392334706);
                            arr_43 [i_0 + 1] [i_0] [i_2] [i_10] [i_11] = ((/* implicit */int) ((unsigned short) (-9223372036854775807LL - 1LL)));
                        }
                        for (int i_12 = 4; i_12 < 17; i_12 += 3) /* same iter space */
                        {
                            var_30 = ((/* implicit */short) ((unsigned int) arr_19 [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0 + 1]));
                            var_31 = ((/* implicit */int) ((unsigned int) ((long long int) var_3)));
                            var_32 = ((/* implicit */signed char) ((_Bool) (unsigned short)29704));
                        }
                        for (int i_13 = 4; i_13 < 17; i_13 += 3) /* same iter space */
                        {
                            var_33 = ((/* implicit */int) min((min((3735352983171016437ULL), (((/* implicit */unsigned long long int) (short)9314)))), (min((((/* implicit */unsigned long long int) var_10)), (arr_11 [i_0] [i_13 - 1])))));
                            var_34 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_46 [i_0] [i_1] [i_1]))) < (var_13)));
                        }
                        for (int i_14 = 4; i_14 < 17; i_14 += 3) /* same iter space */
                        {
                            var_35 = ((/* implicit */_Bool) 288230376151711743ULL);
                            var_36 = ((/* implicit */short) 3325892672U);
                        }
                        var_37 &= arr_1 [i_0 - 1];
                        var_38 = max((((/* implicit */int) ((_Bool) (+(2851659184U))))), (max((((((/* implicit */int) var_3)) | (arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]))), (((/* implicit */int) ((short) (unsigned short)18371))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_15 = 2; i_15 < 17; i_15 += 1) 
                    {
                        var_39 &= ((/* implicit */long long int) ((int) ((int) arr_15 [i_15])));
                        /* LoopSeq 2 */
                        for (unsigned int i_16 = 0; i_16 < 18; i_16 += 4) 
                        {
                            var_40 = ((/* implicit */short) ((((((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1])) + (2147483647))) >> (((2147483647) - (2147483619)))));
                            arr_56 [i_0] [i_0 + 1] [i_0 - 1] [i_0] [i_0] [i_0] [i_0 + 1] = ((/* implicit */_Bool) (short)633);
                        }
                        for (unsigned long long int i_17 = 2; i_17 < 16; i_17 += 2) 
                        {
                            var_41 = ((/* implicit */signed char) ((short) (unsigned short)55303));
                            var_42 = ((/* implicit */int) var_10);
                            var_43 &= ((/* implicit */unsigned short) arr_10 [i_17 - 2] [i_2] [i_0 + 1]);
                        }
                        arr_59 [i_0 - 1] [i_1] [i_1] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) -8706870772342184057LL);
                    }
                    for (long long int i_18 = 0; i_18 < 18; i_18 += 4) 
                    {
                        var_44 += ((/* implicit */unsigned short) arr_37 [i_0 + 1] [i_0 + 1] [i_2] [i_18]);
                        arr_62 [i_0] = ((/* implicit */int) ((signed char) 3732283174U));
                        arr_63 [i_0] [i_0] [i_0] [i_0] [i_18] [i_18] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) ((long long int) (short)32753))) && (((/* implicit */_Bool) ((unsigned int) var_1))))));
                    }
                    var_45 = ((/* implicit */unsigned int) (-(min((((/* implicit */long long int) var_9)), (arr_52 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                }
            } 
        } 
    } 
    var_46 = ((unsigned long long int) ((short) ((((/* implicit */int) var_7)) & (((/* implicit */int) var_2)))));
}
