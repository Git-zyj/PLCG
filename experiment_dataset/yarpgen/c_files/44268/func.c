/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44268
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
    var_15 = (+((-(var_5))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned char i_1 = 4; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 1; i_2 < 19; i_2 += 2) 
                {
                    var_16 = ((/* implicit */signed char) arr_1 [i_0]);
                    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (+(-7891780492393385551LL))))));
                    arr_6 [i_1] &= ((/* implicit */unsigned char) arr_4 [(unsigned short)8] [i_2] [i_0] [i_0]);
                    /* LoopSeq 3 */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */_Bool) var_10);
                        var_19 = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) (_Bool)1)), (arr_0 [i_1] [i_3])));
                        var_20 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)58)) ? (((/* implicit */int) (signed char)84)) : (((/* implicit */int) (unsigned char)114))));
                    }
                    /* vectorizable */
                    for (signed char i_4 = 0; i_4 < 20; i_4 += 1) 
                    {
                        arr_11 [i_0] [(short)12] [i_0 + 1] [i_1 - 3] [i_0] [i_0] = ((/* implicit */short) var_2);
                        arr_12 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 9ULL))));
                        /* LoopSeq 3 */
                        for (unsigned short i_5 = 1; i_5 < 18; i_5 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((long long int) (unsigned short)45505)))));
                            arr_16 [i_0 + 1] [i_0] [i_2 + 1] [i_2] [i_0 + 1] [i_5 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)161)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)160))) : (1590622040U)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)225)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)76))) : (1396948799735321113LL))))));
                        }
                        for (long long int i_6 = 0; i_6 < 20; i_6 += 4) 
                        {
                            var_22 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)235))) / (((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_1]))) + (563393545U)))));
                            arr_19 [i_0] [i_0] [i_2] [i_6] = (!(((/* implicit */_Bool) 3407951199U)));
                        }
                        for (short i_7 = 1; i_7 < 18; i_7 += 1) 
                        {
                            arr_24 [i_7] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0 + 1] [(unsigned short)5] [6LL] [i_7 + 2])) ? (arr_3 [i_4] [(unsigned char)17] [3U]) : (arr_3 [(signed char)10] [11U] [11U])));
                            var_23 = ((/* implicit */short) (~(((((/* implicit */int) (unsigned short)20054)) ^ (((/* implicit */int) (_Bool)1))))));
                            arr_25 [i_2] [i_0] [(unsigned char)6] = ((/* implicit */unsigned char) (~(1766645248U)));
                        }
                    }
                    for (unsigned char i_8 = 0; i_8 < 20; i_8 += 3) 
                    {
                        arr_29 [i_0] [i_1] [i_2 - 1] [i_2] [i_8] [i_8] &= max(((unsigned short)33491), (var_2));
                        arr_30 [i_0] [i_0] [17LL] [(unsigned short)2] [(short)0] [i_8] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) arr_17 [i_1 - 2])) > (((/* implicit */int) (unsigned char)226)))))));
                        arr_31 [16ULL] [i_8] [i_0] [14ULL] [14ULL] = ((/* implicit */short) (((((-(((/* implicit */int) arr_0 [i_1] [i_1 + 2])))) > (((/* implicit */int) max((arr_1 [i_0]), (arr_28 [i_1 - 3] [i_0])))))) ? (((/* implicit */int) arr_22 [i_2 - 1] [i_1 - 2] [i_1] [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) (_Bool)1))));
                    }
                }
                /* vectorizable */
                for (long long int i_9 = 2; i_9 < 19; i_9 += 1) 
                {
                    var_24 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_34 [i_0 + 1] [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)213))));
                    arr_35 [i_1] [i_1] &= (-(((/* implicit */int) var_3)));
                    /* LoopSeq 1 */
                    for (unsigned short i_10 = 0; i_10 < 20; i_10 += 2) 
                    {
                        arr_39 [(short)12] [(short)12] [i_1 + 3] [i_0] [i_10] = ((/* implicit */unsigned int) (_Bool)1);
                        /* LoopSeq 1 */
                        for (unsigned int i_11 = 1; i_11 < 19; i_11 += 1) 
                        {
                            var_25 += ((/* implicit */short) ((((/* implicit */_Bool) 26U)) ? (((/* implicit */int) (short)22242)) : (((/* implicit */int) (short)-28779))));
                            arr_43 [i_0] [18LL] [(signed char)5] [i_0] [(unsigned char)4] = ((/* implicit */unsigned char) (-(3289158848U)));
                            arr_44 [i_0] [i_10] [9U] = ((/* implicit */signed char) (~(((/* implicit */int) ((var_13) <= (var_10))))));
                            var_26 = ((/* implicit */signed char) (~(var_0)));
                            arr_45 [(unsigned short)13] [i_10] [i_0] [i_1 - 1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)76))) != (var_10)));
                        }
                    }
                    var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) (+(((/* implicit */int) var_12)))))));
                    var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) arr_1 [i_1]))));
                }
                /* LoopNest 2 */
                for (unsigned char i_12 = 0; i_12 < 20; i_12 += 2) 
                {
                    for (long long int i_13 = 0; i_13 < 20; i_13 += 2) 
                    {
                        {
                            arr_54 [i_0] [i_0] = ((/* implicit */signed char) ((var_9) << (((min((((/* implicit */int) (unsigned char)53)), ((~(((/* implicit */int) (signed char)-76)))))) - (42)))));
                            var_29 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 0U)) ? (887016109U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29641))))) * (((/* implicit */unsigned int) (+(((/* implicit */int) arr_40 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_1 + 3] [i_1 - 2] [i_1 + 1])))))));
                            var_30 = ((/* implicit */unsigned int) var_7);
                            var_31 = ((/* implicit */unsigned int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-8)));
                            arr_55 [i_0] [i_0] [i_0] [(unsigned char)12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0ULL)) ? (var_5) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)65)))))));
                        }
                    } 
                } 
                var_32 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)31))));
            }
        } 
    } 
    var_33 = (+(min((2728308083637021812ULL), (((/* implicit */unsigned long long int) (short)11554)))));
}
