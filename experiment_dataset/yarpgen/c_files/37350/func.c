/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37350
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_11 = var_9;
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((min((((/* implicit */long long int) arr_1 [i_0] [i_0])), (6353641966530304621LL))) - (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_1 [i_0] [i_1])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        for (long long int i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 1; i_4 < 14; i_4 += 3) 
                {
                    for (unsigned short i_5 = 3; i_5 < 14; i_5 += 3) 
                    {
                        for (signed char i_6 = 1; i_6 < 14; i_6 += 3) 
                        {
                            {
                                var_12 += ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_7), (((((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) | (2596531879868179998LL)))))) ? (max((((/* implicit */long long int) (_Bool)0)), (((((/* implicit */_Bool) (unsigned char)96)) ? (2596531879868180006LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)124))))))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_2 [i_2]), (arr_2 [i_2])))))));
                                arr_21 [i_5] = ((/* implicit */long long int) arr_6 [i_6] [i_6]);
                            }
                        } 
                    } 
                } 
                arr_22 [i_2] [i_2] = ((/* implicit */signed char) ((max((1776097654188275659ULL), (((/* implicit */unsigned long long int) (unsigned short)42815)))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_6 [i_2] [i_3])) : (((/* implicit */int) arr_6 [i_2] [i_2])))))));
                /* LoopSeq 3 */
                for (unsigned char i_7 = 2; i_7 < 15; i_7 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 2) 
                    {
                        /* LoopSeq 4 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                        {
                            arr_32 [i_3] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) arr_3 [i_8] [i_8] [i_8])) : (((/* implicit */int) arr_26 [i_7 - 2] [i_7 - 1] [i_9] [i_9] [i_9]))))) ? (-2596531879868179998LL) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) max((var_7), (((/* implicit */long long int) arr_3 [i_2] [i_2] [i_2])))))))));
                            var_13 = ((/* implicit */long long int) min((var_13), (((((/* implicit */_Bool) ((((/* implicit */int) arr_30 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])) / (((/* implicit */int) (unsigned short)512))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_14 [i_7 - 2] [i_7 - 2] [i_7] [i_7 - 2])) < (((/* implicit */int) var_9)))))) : ((-(2596531879868179997LL)))))));
                            arr_33 [i_9] [i_9] = arr_12 [i_8] [i_3];
                            arr_34 [i_7 - 2] [i_7 - 2] [i_7] = ((/* implicit */_Bool) var_0);
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                        {
                            arr_37 [i_2] [i_7] [i_2] = ((/* implicit */long long int) (+(((/* implicit */int) max((arr_1 [i_8] [i_7 - 2]), (((/* implicit */short) (signed char)47)))))));
                            var_14 = ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) ((((/* implicit */int) arr_16 [i_2] [i_2] [i_2] [i_2])) > (((/* implicit */int) arr_36 [i_2] [i_2] [i_7] [i_8] [i_10]))))))), (((/* implicit */int) var_2))));
                            var_15 -= arr_25 [i_7 - 1] [i_7 - 2] [i_7 - 1] [i_7 + 1];
                            var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) arr_9 [i_2] [i_3]))));
                        }
                        /* vectorizable */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                        {
                            var_17 = ((/* implicit */int) ((short) arr_16 [i_7 - 2] [i_7 - 1] [i_7 - 1] [i_7 - 2]));
                            var_18 = ((/* implicit */_Bool) ((signed char) arr_6 [i_7 + 1] [i_7 + 1]));
                        }
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                        {
                            arr_42 [i_2] [i_12] [i_12] [i_8] [i_12] = ((/* implicit */unsigned char) ((var_7) + (((((/* implicit */_Bool) -2596531879868179987LL)) ? (2596531879868179973LL) : (2596531879868179998LL)))));
                            arr_43 [i_2] [i_2] [i_2] [i_2] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_14 [i_7 - 2] [i_7 + 1] [i_7 + 1] [i_7 - 1]), (arr_14 [i_7 + 1] [i_7 - 2] [i_7 - 2] [i_7 + 1])))) ? (((/* implicit */int) min((arr_3 [i_2] [i_2] [i_2]), (arr_3 [i_2] [i_3] [i_7 - 2])))) : (min((((((/* implicit */_Bool) (unsigned char)212)) ? (((/* implicit */int) (unsigned short)10710)) : (((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) (unsigned char)212))))))));
                        }
                        var_19 = ((/* implicit */unsigned long long int) ((signed char) ((unsigned char) ((((/* implicit */int) arr_4 [i_2])) ^ (((/* implicit */int) var_1))))));
                    }
                    for (unsigned short i_13 = 0; i_13 < 16; i_13 += 2) 
                    {
                        var_20 = ((/* implicit */int) ((max((arr_41 [i_2] [i_2] [i_2] [i_2] [i_2]), (((/* implicit */unsigned long long int) var_7)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_2] [i_2] [i_2] [i_2])))));
                        var_21 = ((/* implicit */long long int) ((((_Bool) arr_15 [i_7 - 1] [i_7 - 2] [i_7])) ? (((((/* implicit */_Bool) arr_15 [i_2] [i_7 - 2] [i_7 - 2])) ? (((/* implicit */int) arr_15 [i_7 - 1] [i_7 - 1] [i_7 - 1])) : (((/* implicit */int) arr_15 [i_3] [i_7 - 1] [i_13])))) : (((/* implicit */int) arr_15 [i_7] [i_7 - 1] [i_7 - 1]))));
                        arr_46 [i_2] [i_2] [i_2] [i_3] [i_7] [i_13] = ((/* implicit */long long int) (unsigned char)159);
                        var_22 -= ((/* implicit */int) arr_13 [i_2] [i_2]);
                    }
                    var_23 = ((signed char) (short)22004);
                }
                for (unsigned char i_14 = 2; i_14 < 15; i_14 += 3) /* same iter space */
                {
                    var_24 -= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))))), (7776589820526200743ULL)));
                    var_25 = var_3;
                    /* LoopSeq 2 */
                    for (int i_15 = 0; i_15 < 16; i_15 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned char) min((((((/* implicit */int) (unsigned char)29)) / (((/* implicit */int) (unsigned char)82)))), (((/* implicit */int) var_1))));
                        arr_51 [i_14] [i_2] [i_3] [i_14] [i_15] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((arr_18 [i_2] [i_2] [i_2] [i_2] [i_2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_8 [i_2])))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_28 [i_2] [i_3] [i_14 + 1] [i_15]))))));
                    }
                    /* vectorizable */
                    for (short i_16 = 3; i_16 < 14; i_16 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_17 = 3; i_17 < 13; i_17 += 3) /* same iter space */
                        {
                            arr_56 [i_3] [i_14] [i_14] [i_17] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-47))) | (2596531879868179969LL)));
                            arr_57 [i_2] [i_3] [i_3] [i_14 - 1] [i_14] [i_14] = ((/* implicit */int) arr_14 [i_2] [i_2] [i_14] [i_17]);
                            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) arr_50 [i_2] [i_14 + 1] [i_2] [i_17])) & (((/* implicit */int) (_Bool)1))))) & (9165636463983855939LL))))));
                        }
                        for (signed char i_18 = 3; i_18 < 13; i_18 += 3) /* same iter space */
                        {
                            var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((((/* implicit */int) arr_44 [i_14] [i_14 + 1] [i_14] [i_14 + 1] [i_14 - 1])) & (((/* implicit */int) arr_60 [i_18 + 1] [i_18 - 1] [i_18] [i_18 - 2])))))));
                            arr_62 [i_2] [i_14] [i_3] [i_14] [i_14] [i_16] [i_3] = ((/* implicit */unsigned long long int) arr_0 [i_2] [i_14]);
                            arr_63 [i_14] [i_14] [i_14] [i_14] [i_14] = ((/* implicit */int) ((signed char) arr_35 [i_18 - 2] [i_14 - 1] [i_14 - 1] [i_3] [i_2] [i_2]));
                            var_29 ^= (-(((/* implicit */int) var_9)));
                            var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_50 [i_16 - 1] [i_14 + 1] [i_3] [i_2])) ? (((/* implicit */int) arr_50 [i_18 - 3] [i_16] [i_3] [i_2])) : (((/* implicit */int) arr_48 [i_14]))));
                        }
                        arr_64 [i_2] [i_14] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) -5848232123205813283LL))) << (((((/* implicit */int) var_9)) - (74)))));
                        var_31 = ((/* implicit */unsigned long long int) (!(var_8)));
                    }
                }
                for (unsigned char i_19 = 2; i_19 < 15; i_19 += 3) /* same iter space */
                {
                    arr_68 [i_19] [i_3] [i_19] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (signed char)-35)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_16 [i_19 - 2] [i_19 + 1] [i_19 - 2] [i_19 + 1]))))));
                    arr_69 [i_19] = ((/* implicit */signed char) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)99)));
                    var_32 ^= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_2]))));
                    arr_70 [i_19 - 1] [i_19] [i_19] [i_2] = ((/* implicit */signed char) 8353569414334160082ULL);
                    arr_71 [i_19] = ((/* implicit */signed char) (short)6144);
                }
                /* LoopSeq 1 */
                for (unsigned char i_20 = 2; i_20 < 15; i_20 += 1) 
                {
                    arr_74 [i_3] [i_3] [i_20] [i_3] = ((/* implicit */signed char) max((((((/* implicit */int) min((((/* implicit */unsigned char) (signed char)108)), ((unsigned char)36)))) << (((((/* implicit */int) max((((/* implicit */short) (unsigned char)205)), ((short)22334)))) - (22314))))), ((~(((/* implicit */int) (unsigned char)36))))));
                    var_33 -= ((/* implicit */unsigned short) ((((((/* implicit */int) arr_14 [i_3] [i_20 - 2] [i_20 + 1] [i_3])) + (((/* implicit */int) arr_14 [i_20] [i_20 - 2] [i_20 - 1] [i_20])))) + (((/* implicit */int) ((unsigned short) arr_14 [i_3] [i_20 - 1] [i_20 - 2] [i_20])))));
                    arr_75 [i_2] [i_2] [i_2] [i_20] = ((/* implicit */_Bool) arr_14 [i_20] [i_20] [i_20] [i_20 - 2]);
                }
            }
        } 
    } 
}
