/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51238
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? ((+((~(((/* implicit */int) (unsigned char)27)))))) : (((/* implicit */int) var_10))));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) - (((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21756))) : (3ULL))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    arr_9 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) (-((+(((/* implicit */int) var_6))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_2)))))) - (((((/* implicit */_Bool) var_3)) ? (arr_11 [i_2] [i_2] [i_1] [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))))));
                        /* LoopSeq 3 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                        {
                            var_13 *= ((/* implicit */unsigned long long int) (~(arr_16 [i_0] [i_1] [i_0] [i_3] [i_4] [i_3])));
                            arr_18 [i_2] [i_3] [i_2] [i_2] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_1] [i_3 - 1])) ? (arr_11 [i_1] [(signed char)7] [i_2] [i_3] [i_3 + 2]) : (arr_11 [i_0] [i_0] [i_2] [i_4] [i_3 + 1])));
                            arr_19 [i_4] [i_1] [i_2] [i_2] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) var_0))));
                            var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(unsigned char)5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_8 [i_2] [(unsigned short)19] [i_2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_4)));
                            arr_20 [(unsigned short)20] [i_1] [i_2] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)239)) && (((/* implicit */_Bool) 3524615180U))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            var_15 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)234))) : (arr_11 [i_3 + 2] [i_3] [i_1] [i_3 + 2] [i_0])));
                            var_16 = ((/* implicit */unsigned short) var_3);
                            var_17 = ((/* implicit */signed char) arr_10 [i_0] [i_0] [i_0] [i_2]);
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((signed char) arr_23 [i_0] [i_2] [4U] [i_1] [i_3 - 1])))));
                            var_19 = ((/* implicit */unsigned long long int) arr_23 [i_0] [i_1] [i_2] [i_2] [i_6]);
                            var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)1)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_2] [i_2] [i_0] [i_6])))))) ? (arr_16 [i_0] [i_0] [i_2] [i_3 + 2] [i_6] [i_3 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-112))));
                        }
                        arr_26 [i_2] = ((/* implicit */unsigned long long int) var_7);
                        arr_27 [i_0] [i_0] [i_2] [(short)7] [(unsigned char)7] = ((/* implicit */unsigned char) (unsigned short)425);
                    }
                    for (unsigned long long int i_7 = 1; i_7 < 18; i_7 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned long long int i_8 = 1; i_8 < 17; i_8 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (-(((/* implicit */int) var_10)))))));
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (17408837548927397935ULL)))) ? (((((/* implicit */_Bool) (unsigned char)118)) ? (14090713150843760965ULL) : (((/* implicit */unsigned long long int) var_9)))) : (var_4)));
                            arr_33 [i_2] [i_7 + 3] [i_0] [i_1] [i_2] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_8])))))));
                            arr_34 [i_2] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) arr_30 [i_0] [i_2] [i_0]);
                        }
                        for (short i_9 = 0; i_9 < 21; i_9 += 2) 
                        {
                            var_23 = (+(((/* implicit */int) (!(((/* implicit */_Bool) var_0))))));
                            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) arr_35 [i_0] [i_1] [i_1] [i_7] [i_9]))));
                            var_25 += ((/* implicit */unsigned char) (+((~(((/* implicit */int) arr_13 [3LL] [3LL] [i_7] [i_7]))))));
                            arr_38 [i_0] [i_2] [i_0] [7U] [i_0] = ((((((/* implicit */_Bool) (unsigned char)242)) || (var_8))) ? (((/* implicit */int) (short)-32767)) : (((/* implicit */int) arr_30 [i_2] [i_2] [i_9])));
                            var_26 += ((/* implicit */unsigned short) ((unsigned long long int) (signed char)-18));
                        }
                        for (unsigned char i_10 = 0; i_10 < 21; i_10 += 1) 
                        {
                            arr_41 [i_2] [i_2] [i_2] = (~(((var_4) >> (((var_5) - (16433570225016462520ULL))))));
                            arr_42 [i_7] [i_7] [i_2] [i_7 + 1] [i_7] [i_7 - 1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_7] [11U] [i_7] [11U] [i_7 - 1]))) * (var_4)))));
                        }
                        for (long long int i_11 = 0; i_11 < 21; i_11 += 1) 
                        {
                            arr_47 [i_2] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_25 [i_0] [i_2] [i_2] [i_7 + 3] [i_11]))));
                            arr_48 [i_11] [i_2] [(signed char)11] [i_2] [(unsigned char)6] = ((/* implicit */unsigned int) var_4);
                            var_27 += ((/* implicit */unsigned char) arr_39 [i_1] [i_1] [i_11] [i_1] [i_1]);
                            var_28 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_2)))))));
                            var_29 = ((/* implicit */long long int) ((((/* implicit */int) var_10)) - (((/* implicit */int) arr_45 [i_7 - 1] [i_7] [i_7 + 3] [i_2] [i_7 + 3] [i_7 - 1] [i_7 + 3]))));
                        }
                        var_30 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_0] [i_2] [i_7 + 1] [i_1])) ? (((/* implicit */int) arr_22 [i_0] [i_1] [i_7 - 1] [i_0])) : (((/* implicit */int) arr_22 [i_1] [(_Bool)1] [i_7 + 1] [i_7 + 1]))));
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((15144206854095358455ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18984)))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_22 [i_0] [16LL] [16LL] [(unsigned short)10]))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_7]))) + ((-9223372036854775807LL - 1LL))))));
                        var_32 = ((/* implicit */unsigned short) 0ULL);
                    }
                    for (unsigned char i_12 = 3; i_12 < 20; i_12 += 3) 
                    {
                        arr_52 [i_2] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) (+(arr_24 [i_0] [i_12 - 3] [i_12 - 3] [i_12] [i_12 - 3] [i_2])));
                        var_33 = ((/* implicit */unsigned char) (!((_Bool)1)));
                        var_34 += ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_0] [i_2] [i_1] [i_0] [i_12 - 3]))) >= ((-(17098029750439514825ULL)))));
                        arr_53 [i_12] [i_12 - 2] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)122)) ? ((-9223372036854775807LL - 1LL)) : (var_9)));
                    }
                    arr_54 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (unsigned char)229))))));
                    arr_55 [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_50 [i_0] [15ULL] [i_0])))))));
                }
                var_35 += ((/* implicit */short) arr_10 [i_0] [i_1] [i_0] [i_1]);
                /* LoopSeq 2 */
                for (unsigned int i_13 = 1; i_13 < 19; i_13 += 3) 
                {
                    var_36 = ((/* implicit */_Bool) var_7);
                    /* LoopSeq 1 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        arr_61 [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)161)) ? (2048U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5075)))));
                        var_37 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) 1348714323270036791ULL))))) + ((~(((/* implicit */int) (unsigned short)65518))))));
                        var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) min((((/* implicit */int) (unsigned char)251)), (((((/* implicit */_Bool) (unsigned char)248)) ? ((-(((/* implicit */int) arr_14 [i_0] [i_1] [i_13])))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_57 [i_1] [(_Bool)1]))) > (9223372036854775803LL)))))))))));
                    }
                }
                /* vectorizable */
                for (unsigned long long int i_15 = 3; i_15 < 20; i_15 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_16 = 0; i_16 < 21; i_16 += 1) 
                    {
                        arr_67 [i_16] [i_16] [(unsigned short)14] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) var_3))));
                        /* LoopSeq 2 */
                        for (unsigned char i_17 = 1; i_17 < 20; i_17 += 2) 
                        {
                            var_39 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_65 [i_1] [i_15] [i_16] [i_17 + 1]))))))));
                            arr_71 [i_0] [i_0] [i_0] [i_0] [i_16] [i_0] [i_17] = ((/* implicit */unsigned short) (unsigned char)10);
                            var_40 += ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) != (4499692787379274982ULL))) ? (((((/* implicit */_Bool) 2214613662536829743ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (3632458597163994951ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                            var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(9561573148566853820ULL)))) ? ((-(((/* implicit */int) var_0)))) : (((/* implicit */int) var_3))));
                        }
                        for (unsigned int i_18 = 0; i_18 < 21; i_18 += 3) 
                        {
                            var_42 *= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_4 [i_15 - 2] [i_15] [i_15 - 2]))));
                            arr_74 [(unsigned short)9] [i_1] [i_1] [i_16] [i_18] = ((((/* implicit */_Bool) (~(3632458597163994957ULL)))) ? (-8601443098290116818LL) : (5212931824129426858LL));
                            var_43 = ((/* implicit */signed char) (((-(-553418961))) - (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)20)) : (((/* implicit */int) arr_17 [i_0] [i_1] [i_15] [i_15] [i_18] [i_18] [11ULL]))))));
                            var_44 = ((/* implicit */short) (~(((((/* implicit */_Bool) (unsigned char)27)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)39))) : (17ULL)))));
                        }
                        var_45 = ((/* implicit */unsigned short) max((var_45), (((/* implicit */unsigned short) (unsigned char)216))));
                        arr_75 [i_0] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775804LL)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [(short)9] [i_15] [i_1] [(short)9] [i_0])))))) ? (arr_72 [i_15 - 1] [i_15 - 2]) : ((~(((/* implicit */int) arr_7 [i_1])))));
                    }
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        arr_78 [(_Bool)1] [i_1] [9ULL] [13ULL] = var_6;
                        var_46 = ((/* implicit */short) (unsigned char)128);
                    }
                    for (unsigned short i_20 = 0; i_20 < 21; i_20 += 3) 
                    {
                        arr_82 [i_0] [i_0] [i_0] [i_0] [(unsigned short)3] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_22 [i_0] [i_0] [i_15] [3LL])) & (((/* implicit */int) ((var_5) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                        var_47 = ((/* implicit */short) var_8);
                    }
                    /* LoopNest 2 */
                    for (short i_21 = 1; i_21 < 20; i_21 += 4) 
                    {
                        for (unsigned int i_22 = 3; i_22 < 18; i_22 += 1) 
                        {
                            {
                                arr_90 [i_0] [i_0] [i_0] [i_0] [i_21] [i_22 - 3] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)49))) / (arr_36 [i_1])));
                                var_48 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)65535))));
                                arr_91 [i_0] [i_0] [i_1] [i_15] [i_0] [i_22] = ((/* implicit */long long int) var_7);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_49 = ((/* implicit */signed char) ((((/* implicit */int) var_6)) << (((((/* implicit */_Bool) ((((/* implicit */int) var_3)) | (((/* implicit */int) var_8))))) ? (min((((/* implicit */unsigned long long int) var_0)), (13ULL))) : (var_5)))));
    var_50 = ((/* implicit */long long int) min((var_50), (((/* implicit */long long int) ((max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-20757)) : (((/* implicit */int) (signed char)(-127 - 1))))), ((-(((/* implicit */int) (short)-4613)))))) >> (((var_4) - (15526997309172890917ULL))))))));
}
