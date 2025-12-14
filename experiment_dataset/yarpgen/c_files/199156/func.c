/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199156
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned char) ((var_9) & (((((((/* implicit */_Bool) arr_2 [i_0])) ? (549755813887ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_7) < (((/* implicit */unsigned long long int) var_2))))))))));
                                var_12 = ((/* implicit */unsigned int) var_0);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 3; i_5 < 9; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 3; i_6 < 6; i_6 += 3) 
                        {
                            {
                                arr_21 [i_0] [(signed char)7] [i_2] [i_5] [9ULL] [i_0] [(signed char)7] = ((/* implicit */short) (-(((long long int) (~(-1LL))))));
                                arr_22 [i_0] [i_1] [i_2] [i_0] [(unsigned char)7] = ((/* implicit */_Bool) ((unsigned int) 340090330U));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */signed char) ((((/* implicit */int) (short)59)) ^ (((/* implicit */int) max(((signed char)18), ((signed char)-14))))));
                }
            } 
        } 
    } 
    var_14 = ((((/* implicit */_Bool) ((((/* implicit */int) ((signed char) var_4))) ^ (var_3)))) ? (((((/* implicit */int) max(((unsigned char)159), ((unsigned char)58)))) - (((/* implicit */int) ((((/* implicit */int) (signed char)4)) > (((/* implicit */int) (unsigned char)165))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_2)), (2278757139U))))))));
    var_15 = ((/* implicit */short) 17391920456545887772ULL);
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 21; i_7 += 1) 
    {
        for (int i_8 = 3; i_8 < 20; i_8 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) min((((/* implicit */unsigned int) (signed char)-120)), (arr_24 [i_7])))))) | (min((var_9), (var_8)))));
                arr_29 [i_7] [i_8] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(2278757119U))))))), (min((arr_28 [i_7] [8LL] [9ULL]), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) + (arr_27 [i_7] [i_7] [i_7])))))));
                arr_30 [i_7] [6U] = ((((/* implicit */_Bool) var_2)) ? ((-(((/* implicit */int) (signed char)-33)))) : (((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) var_2))))), (var_6)))));
                /* LoopSeq 2 */
                for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 4) /* same iter space */
                {
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_7] [(short)17] [i_7]))) : (min((((((/* implicit */long long int) var_3)) - (-1700922748034576978LL))), (((/* implicit */long long int) ((((/* implicit */int) arr_31 [i_7] [7] [i_7] [i_7])) & (var_1))))))));
                    arr_34 [i_7] = (!(((/* implicit */_Bool) (+(((var_10) & (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_7] [i_8] [i_7] [i_7])))))))));
                    arr_35 [i_7] [i_9] = ((/* implicit */unsigned char) (+(var_1)));
                }
                /* vectorizable */
                for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 4) /* same iter space */
                {
                    arr_40 [i_7] [i_7] [i_7] = arr_26 [i_7];
                    /* LoopSeq 3 */
                    for (unsigned long long int i_11 = 1; i_11 < 19; i_11 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (int i_12 = 3; i_12 < 20; i_12 += 1) 
                        {
                            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) 0U))));
                            arr_45 [(signed char)14] [i_8 - 2] [i_7] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -174168048)) && (((/* implicit */_Bool) var_1))));
                            var_19 = ((/* implicit */unsigned char) var_0);
                        }
                        for (int i_13 = 2; i_13 < 19; i_13 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned char) var_8);
                            var_21 = ((/* implicit */short) arr_24 [i_7]);
                            var_22 = ((/* implicit */signed char) var_2);
                            arr_48 [i_7] [i_8] [i_7] [i_7] [i_11] [i_13] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-2))) ^ (4081138015U))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_7] [i_8] [i_7]))) > (arr_38 [i_7] [(unsigned char)11] [i_7])))))));
                            arr_49 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_24 [i_7])) ? (((/* implicit */int) ((var_9) == (((/* implicit */unsigned long long int) var_10))))) : (arr_43 [i_7] [i_8 - 3] [i_10] [i_11] [i_13 - 2] [i_8] [i_11])));
                        }
                        for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                        {
                            var_23 = ((/* implicit */signed char) (~(((((/* implicit */unsigned int) arr_26 [i_7])) + (arr_24 [i_7])))));
                            var_24 = ((/* implicit */unsigned int) var_3);
                            arr_52 [i_11] [i_7] [i_7] [i_11 + 2] [(unsigned char)19] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-121)) && (((/* implicit */_Bool) var_9))))) + ((+(-1)))));
                            arr_53 [i_7] [i_7] [i_10] [i_11 - 1] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (arr_27 [i_8 - 3] [i_8 - 3] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_7])))));
                        }
                        var_25 -= ((/* implicit */unsigned char) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) + (863342439942235070ULL)))));
                        var_26 += ((long long int) arr_47 [i_11 + 1]);
                        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)81)) >> (((((/* implicit */int) (unsigned char)85)) - (67)))))) ? (((/* implicit */unsigned long long int) ((1126087440) >> (((4795317184748293717ULL) - (4795317184748293699ULL)))))) : (arr_37 [i_7] [i_7] [i_11 + 1] [16LL])));
                    }
                    for (signed char i_15 = 1; i_15 < 20; i_15 += 1) 
                    {
                        var_28 = ((/* implicit */_Bool) var_1);
                        var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) var_10))));
                    }
                    for (int i_16 = 1; i_16 < 18; i_16 += 2) 
                    {
                        arr_60 [i_7] [i_7] [6ULL] [(unsigned char)17] [6ULL] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-106)) ? (14225975387600498291ULL) : (17483241386335172295ULL)))) ? (((/* implicit */unsigned int) var_2)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [7ULL] [(signed char)0] [i_7]))) : (arr_55 [i_7])))));
                        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_33 [i_7] [i_7] [12])))))));
                    }
                    var_31 = ((((/* implicit */_Bool) arr_37 [i_7] [i_8 + 1] [i_8] [i_10])) ? (((/* implicit */unsigned long long int) var_10)) : (arr_37 [i_7] [i_8 + 1] [i_10] [i_10]));
                }
                /* LoopNest 2 */
                for (long long int i_17 = 0; i_17 < 21; i_17 += 2) 
                {
                    for (unsigned long long int i_18 = 0; i_18 < 21; i_18 += 2) 
                    {
                        {
                            arr_68 [i_7] [i_7] [i_17] [i_7] [(short)8] = (-((+(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)79))) * (var_9))))));
                            arr_69 [i_7] [18ULL] [(unsigned char)6] [(unsigned char)6] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((2147483647) - (((/* implicit */int) (unsigned char)165))))))) ? ((~(1521574967U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_7])))));
                        }
                    } 
                } 
            }
        } 
    } 
}
