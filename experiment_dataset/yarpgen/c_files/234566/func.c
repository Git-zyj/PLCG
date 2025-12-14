/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234566
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
    var_10 = ((/* implicit */long long int) (+(((/* implicit */int) var_9))));
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((long long int) var_6)), (((/* implicit */long long int) ((int) var_2)))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : ((-(((/* implicit */int) var_9)))))) : (((/* implicit */int) var_7))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) max(((unsigned short)22134), ((unsigned short)40300))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                arr_11 [i_1] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) min((((/* implicit */unsigned char) (_Bool)0)), (arr_9 [i_0] [(unsigned char)0] [i_2] [i_0] [i_4])))), (67108863LL)))) ? (((/* implicit */long long int) (-(((/* implicit */int) (short)-3855))))) : (min(((+(7LL))), (-7LL)))));
                                var_13 -= ((/* implicit */long long int) ((min((arr_3 [i_1] [i_1 - 1] [i_1 + 1]), (((/* implicit */int) (unsigned short)56054)))) << ((((((+(((-772588589515950577LL) + (((/* implicit */long long int) ((/* implicit */int) var_4))))))) + (772588589515950595LL))) - (18LL)))));
                                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) 142904733584688812LL))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        arr_15 [i_0] [i_1 - 1] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
                        arr_16 [i_5] [i_0] [i_0] [i_0] = ((unsigned char) var_2);
                    }
                    for (long long int i_6 = 0; i_6 < 19; i_6 += 4) 
                    {
                        arr_20 [(unsigned short)17] [i_6] [i_0] [(signed char)15] [(signed char)15] = ((/* implicit */unsigned char) max((min((arr_5 [i_1] [i_0]), (arr_5 [i_2] [i_0]))), (((long long int) arr_5 [i_0] [i_0]))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_7 = 0; i_7 < 19; i_7 += 1) 
                        {
                            var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (_Bool)1)))))));
                            arr_23 [i_0] [i_1 + 1] [i_0] [i_0] [i_7] = ((/* implicit */_Bool) (~((-9223372036854775807LL - 1LL))));
                        }
                        arr_24 [i_0] [i_0] [i_2] [i_2] [i_6] = ((/* implicit */unsigned char) (~(((/* implicit */int) max((var_2), (((unsigned char) var_9)))))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 1) 
                        {
                            var_16 = ((/* implicit */short) ((long long int) (+(((/* implicit */int) arr_4 [i_1 - 2] [i_0] [i_1 + 1])))));
                            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_0] [i_6] [i_8])) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)78)) != (2147483647)))) : ((+(((/* implicit */int) var_9)))))))));
                            var_18 = ((/* implicit */unsigned char) ((_Bool) ((short) (+(((/* implicit */int) (unsigned short)9481))))));
                            var_19 = ((/* implicit */signed char) (unsigned char)126);
                            var_20 &= ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
                        }
                        for (long long int i_9 = 0; i_9 < 19; i_9 += 1) 
                        {
                            var_21 = ((/* implicit */signed char) (+(max((((/* implicit */long long int) (signed char)127)), (-1881019775087928611LL)))));
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_1 [i_1 - 1] [i_1 + 1])) ? (((/* implicit */int) arr_1 [i_1 - 1] [i_1 + 1])) : (((/* implicit */int) (unsigned short)20378))))))));
                            arr_29 [i_0] [(signed char)18] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0]))))))) ? ((+(((((/* implicit */_Bool) arr_7 [i_0] [i_1 + 1] [i_2] [i_6])) ? (arr_22 [i_0] [i_0] [i_0] [i_0] [i_9] [i_0] [i_9]) : (arr_25 [i_0] [i_0] [i_2] [i_6] [i_0]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775744LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)77)))))));
                            arr_30 [i_9] [i_6] [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_0);
                            arr_31 [i_0] [i_0] [i_2] [i_6] [i_2] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_6] [i_6] [6LL] [i_2] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_3 [i_6] [i_1] [i_2])) : (arr_6 [6LL] [i_1 - 1] [i_2] [i_2] [i_2] [(_Bool)1])))) ? ((-(9127583107999591356LL))) : ((+(2416238252679307547LL))))), (max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_2))))), ((-(-142904733584688816LL)))))));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)12788)))))));
                            arr_34 [i_0] [i_1 + 1] [i_0] [i_1 + 1] [i_0] [i_0] = arr_14 [i_1];
                            var_24 |= ((((/* implicit */int) (unsigned char)177)) == (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))));
                        }
                        for (short i_11 = 0; i_11 < 19; i_11 += 4) 
                        {
                            arr_37 [i_0] [0] [i_0] [i_2] [i_6] [i_11] [i_11] &= ((/* implicit */unsigned char) ((long long int) ((unsigned char) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (772588589515950561LL) : (var_6)))));
                            arr_38 [i_0] [i_6] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_1] [i_1 - 2] [i_1 + 1])) == (((/* implicit */int) (signed char)-120))))), (max((-37LL), (((/* implicit */long long int) (unsigned char)64))))));
                            var_25 = ((/* implicit */unsigned char) (~(((arr_36 [i_0] [i_2] [i_0]) / (arr_36 [i_1 + 1] [i_1 - 1] [i_2])))));
                            var_26 -= ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((-2951388119371097409LL) + (9223372036854775807LL))) >> (((226673198) - (226673197)))))))))));
                        }
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0))))), (((((/* implicit */_Bool) arr_8 [i_0] [i_1 + 1] [i_1 - 2] [i_6] [i_1 + 1] [i_0])) ? (-7LL) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0])))))))) && (((/* implicit */_Bool) (((+(((/* implicit */int) var_4)))) | (((/* implicit */int) var_9)))))));
                    }
                    /* vectorizable */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_28 &= ((/* implicit */long long int) ((6LL) >= (-772588589515950590LL)));
                        arr_41 [i_0] [i_0] [i_0] [i_12] [i_2] = ((/* implicit */long long int) ((unsigned short) -142904733584688826LL));
                    }
                    for (unsigned char i_13 = 3; i_13 < 17; i_13 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            arr_46 [i_0] [i_1 - 1] [i_0] [i_2] [i_0] [i_14] = ((/* implicit */int) (+(((arr_25 [i_0] [i_0] [i_0] [1LL] [1LL]) / (arr_42 [i_0] [i_0] [i_0] [(signed char)11] [i_0])))));
                            var_29 = ((/* implicit */long long int) (!(var_4)));
                            arr_47 [i_0] [11ULL] [i_2] [i_2] [i_13 - 1] [i_0] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */int) ((_Bool) var_0))) ^ (((/* implicit */int) ((short) (-9223372036854775807LL - 1LL)))))));
                        }
                        arr_48 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned short) (+(((/* implicit */int) arr_9 [i_0] [i_0] [i_13 + 1] [i_1 - 2] [1LL])))));
                        arr_49 [i_0] [i_0] [i_1] [i_0] [i_13 + 1] [i_13] = ((/* implicit */unsigned short) (((+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_3))))) < (((/* implicit */long long int) ((((/* implicit */int) var_7)) & (((((/* implicit */_Bool) arr_27 [i_0] [i_1] [i_2] [i_13] [(short)8] [i_0])) ? (((/* implicit */int) arr_14 [i_0])) : (((/* implicit */int) (signed char)63)))))))));
                        /* LoopSeq 1 */
                        for (signed char i_15 = 4; i_15 < 16; i_15 += 3) 
                        {
                            arr_53 [i_15] [i_0] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((long long int) var_9)) | (((arr_5 [i_1 - 1] [i_0]) | (var_5)))));
                            var_30 = ((/* implicit */long long int) (~(((/* implicit */int) ((signed char) ((_Bool) -772588589515950577LL))))));
                        }
                    }
                    var_31 = ((/* implicit */short) ((((/* implicit */_Bool) arr_45 [i_1 - 1] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_45 [i_1 - 1] [i_1] [i_2] [i_1 - 1] [16LL])) : (((((/* implicit */_Bool) arr_45 [i_1 - 1] [i_1] [13LL] [i_1] [i_2])) ? (((/* implicit */int) arr_45 [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1 - 1] [i_1])) : (var_1)))));
                }
            } 
        } 
        var_32 = ((/* implicit */unsigned char) ((long long int) min(((~(772588589515950561LL))), (((/* implicit */long long int) ((short) (_Bool)1))))));
        /* LoopSeq 2 */
        for (unsigned char i_16 = 3; i_16 < 15; i_16 += 1) 
        {
            arr_56 [i_0] [i_0] = ((/* implicit */unsigned char) arr_28 [i_16] [i_16]);
            var_33 = ((/* implicit */unsigned char) ((_Bool) (+(((/* implicit */int) arr_18 [i_0] [i_16 - 1] [i_16 + 1] [i_0] [i_0] [i_0])))));
        }
        for (unsigned char i_17 = 0; i_17 < 19; i_17 += 4) 
        {
            var_34 = ((/* implicit */_Bool) (-(((/* implicit */int) (short)-31238))));
            var_35 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_28 [i_0] [i_17]))));
        }
    }
}
