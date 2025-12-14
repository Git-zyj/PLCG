/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49123
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
    var_18 = ((/* implicit */signed char) var_11);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 6; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */signed char) ((min((((/* implicit */unsigned int) ((int) (short)32767))), ((~(arr_2 [i_1]))))) + (((/* implicit */unsigned int) ((/* implicit */int) (short)-5199)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (signed char i_3 = 1; i_3 < 6; i_3 += 4) 
                    {
                        {
                            arr_14 [i_0 + 3] [i_1] [i_2] [i_3 + 1] = ((/* implicit */short) (+((+(((/* implicit */int) arr_6 [i_0 - 1] [i_2] [i_3 + 3]))))));
                            arr_15 [i_0] [i_1] [i_2] [i_3 + 3] = ((/* implicit */long long int) arr_11 [i_0 + 2] [i_0] [i_0]);
                            arr_16 [i_0 + 4] [i_1] [i_2] [i_3 + 4] = ((/* implicit */_Bool) arr_11 [i_3 + 3] [i_3] [i_3 + 1]);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned long long int i_4 = 2; i_4 < 9; i_4 += 2) 
                {
                    var_20 = ((/* implicit */int) max((var_20), (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))))));
                    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (_Bool)1))));
                }
                for (signed char i_5 = 2; i_5 < 9; i_5 += 3) 
                {
                    arr_22 [i_5] = ((/* implicit */signed char) (_Bool)1);
                    /* LoopSeq 2 */
                    for (signed char i_6 = 0; i_6 < 10; i_6 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_28 [i_5] [i_6] = ((/* implicit */unsigned long long int) ((signed char) max((((/* implicit */unsigned char) (_Bool)1)), (var_14))));
                            var_22 -= ((/* implicit */unsigned int) var_10);
                            var_23 = ((/* implicit */int) min((((/* implicit */unsigned int) (_Bool)1)), (1995800329U)));
                        }
                        for (unsigned short i_8 = 2; i_8 < 7; i_8 += 4) 
                        {
                            arr_31 [i_8] [i_5] [i_6] [i_5 - 2] [i_5] [i_0 + 4] = ((/* implicit */signed char) ((((/* implicit */int) arr_11 [i_0] [i_5 - 1] [i_6])) % (((/* implicit */int) arr_12 [i_0 + 2] [i_0 + 4] [i_0]))));
                            var_24 = arr_1 [i_0 + 2] [i_0 + 4];
                        }
                        var_25 = max((1995800329U), (((/* implicit */unsigned int) arr_7 [i_6])));
                        /* LoopSeq 3 */
                        for (long long int i_9 = 2; i_9 < 9; i_9 += 4) 
                        {
                            arr_34 [i_9] [i_5] [i_5] [i_0 + 3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1995800329U))));
                            var_26 &= ((/* implicit */signed char) max((var_11), (((/* implicit */int) var_3))));
                            arr_35 [i_0 + 1] [i_1] [i_5] [i_5] [i_6] [i_9 - 2] = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */int) arr_6 [i_0 - 1] [i_1] [i_9 - 2])) != (2147483647)))), (2147483647)));
                        }
                        for (unsigned char i_10 = 3; i_10 < 8; i_10 += 1) 
                        {
                            arr_40 [i_6] [i_5] [i_6] [i_6] [i_6] [i_6] = 1995800329U;
                            arr_41 [i_0 + 4] [i_5] [i_0] [i_0] = ((/* implicit */unsigned char) (signed char)62);
                        }
                        for (unsigned int i_11 = 0; i_11 < 10; i_11 += 1) 
                        {
                            var_27 += (signed char)(-127 - 1);
                            var_28 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_29 [i_5])) + (((/* implicit */int) (unsigned short)5633)))) / (((var_11) - (((/* implicit */int) arr_29 [i_5]))))));
                            var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) min((max(((!(var_1))), ((!(((/* implicit */_Bool) (unsigned short)12)))))), (((((/* implicit */_Bool) min(((-2147483647 - 1)), (((/* implicit */int) var_13))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)73)), (var_0)))))))))));
                            var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((9594816930979983480ULL) < (((/* implicit */unsigned long long int) arr_23 [i_5] [i_0 + 4] [i_0] [i_0 + 4]))))) + (((/* implicit */int) var_14))));
                            var_31 = ((/* implicit */signed char) ((0ULL) != (((/* implicit */unsigned long long int) 820136636U))));
                        }
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            var_32 = ((/* implicit */_Bool) (signed char)-50);
                            var_33 -= ((/* implicit */short) arr_43 [i_0 + 2] [i_1] [i_5 - 2] [(_Bool)1] [i_13]);
                        }
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                        {
                            var_34 += ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-107)) && (((/* implicit */_Bool) max((arr_45 [i_0 + 4] [i_0 + 3] [i_0] [i_0 - 1] [i_0 - 1]), (arr_45 [i_0 + 4] [i_0 + 3] [i_0] [i_0] [i_0]))))));
                            arr_52 [i_0 + 4] [i_1] [i_5] [i_12] [i_14] = ((/* implicit */signed char) ((unsigned short) min((((/* implicit */signed char) (_Bool)1)), ((signed char)127))));
                        }
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                        {
                            arr_56 [i_0 + 1] [(unsigned short)2] [i_5] [i_12] [i_15] &= ((/* implicit */short) (~(((/* implicit */int) (signed char)88))));
                            var_35 = ((((arr_23 [i_5] [i_5] [i_12] [i_15]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_5 - 2] [i_15]))))) ? (((((/* implicit */_Bool) (signed char)81)) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)-50), ((signed char)43))))) : (((unsigned int) arr_29 [i_5])))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)220))));
                            var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) (unsigned char)175))));
                            arr_57 [i_5] [i_1] [i_5 - 1] [i_12] [i_15] = ((/* implicit */signed char) ((((/* implicit */unsigned int) (-(((/* implicit */int) min((((/* implicit */short) arr_46 [i_0] [i_1] [i_5])), ((short)-27523))))))) < (((unsigned int) var_13))));
                        }
                        arr_58 [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((signed char) arr_1 [i_0 + 1] [i_0])))));
                        var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) (signed char)105))));
                    }
                    /* LoopSeq 4 */
                    for (unsigned long long int i_16 = 1; i_16 < 9; i_16 += 1) 
                    {
                        var_38 = ((/* implicit */unsigned short) (+(((arr_25 [i_0 + 1] [i_0 + 1] [i_16 - 1]) | (((/* implicit */long long int) ((/* implicit */int) min(((signed char)-114), (arr_30 [i_5])))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_17 = 1; i_17 < 9; i_17 += 2) 
                        {
                            arr_64 [i_17 + 1] [i_17 - 1] [i_5] [i_5 + 1] [i_5] [i_1] [i_0 + 1] = ((/* implicit */_Bool) (signed char)49);
                            var_39 += ((/* implicit */short) min((var_3), ((_Bool)1)));
                        }
                        arr_65 [i_5] [i_1] [i_5] [i_16 - 1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_5])) || (((/* implicit */_Bool) var_2))))), (((unsigned long long int) (unsigned char)175))));
                    }
                    for (long long int i_18 = 0; i_18 < 10; i_18 += 1) 
                    {
                        var_40 -= ((/* implicit */unsigned char) max((max((((3051512309568105038ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned long long int) min((-5800195505385619101LL), (((/* implicit */long long int) var_0))))))), (max((((/* implicit */unsigned long long int) -170602691)), (((unsigned long long int) var_9))))));
                        var_41 -= ((/* implicit */short) max((((/* implicit */int) min((arr_50 [i_0 + 1] [i_1] [i_1] [i_5 - 1] [i_18]), ((unsigned short)27471)))), ((~(((/* implicit */int) (unsigned char)80))))));
                    }
                    for (unsigned int i_19 = 0; i_19 < 10; i_19 += 1) 
                    {
                        arr_72 [i_19] [i_5] [i_5] [i_0 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 927553792U)) ? ((~(max((3555098971U), (((/* implicit */unsigned int) var_6)))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_0 + 4] [i_5 - 1] [i_5 - 2] [i_5])) ? (((/* implicit */int) arr_39 [i_5 - 1] [i_0 + 1] [i_5] [i_5] [i_0] [i_0 + 2])) : (((/* implicit */int) arr_9 [i_0 - 1] [i_5 - 2] [i_19] [i_19])))))));
                        var_42 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-21984)) ? (((/* implicit */int) (signed char)-35)) : (((/* implicit */int) (signed char)49))));
                        var_43 &= ((/* implicit */short) (+(((/* implicit */int) ((signed char) -1521181942)))));
                    }
                    for (unsigned char i_20 = 0; i_20 < 10; i_20 += 2) 
                    {
                        arr_76 [i_5] [i_5] [i_1] [i_5] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)119))))) % (((/* implicit */int) arr_48 [i_0] [i_5] [i_5] [i_20]))));
                        var_44 = ((/* implicit */signed char) min((var_44), (((/* implicit */signed char) 1995800344U))));
                    }
                }
                var_45 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6327))) - (8769178044509269527ULL)));
                var_46 = ((/* implicit */short) (signed char)50);
            }
        } 
    } 
}
