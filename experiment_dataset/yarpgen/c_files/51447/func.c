/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51447
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
    var_14 ^= ((/* implicit */short) var_4);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 2; i_1 < 7; i_1 += 2) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                arr_11 [i_0] [i_1] [i_2] [i_1 + 1] = ((/* implicit */_Bool) (+(((((/* implicit */int) (unsigned short)33223)) >> (((/* implicit */int) (_Bool)1))))));
                arr_12 [i_0] [i_1 + 1] [i_2] = ((/* implicit */long long int) arr_6 [i_1 - 2] [i_1 + 1] [i_1 + 3]);
                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)33223))) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) arr_8 [i_2])))) : (((((/* implicit */_Bool) (unsigned short)32313)) ? (((/* implicit */int) (signed char)39)) : (((/* implicit */int) (unsigned short)33223))))));
                arr_13 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_1 + 1])) ? (arr_9 [i_2] [i_2] [i_2] [i_1 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1 - 2])))));
                var_16 = ((/* implicit */long long int) (signed char)-40);
            }
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_4 = 1; i_4 < 9; i_4 += 2) 
                {
                    var_17 = ((/* implicit */unsigned int) min((var_17), (arr_5 [i_3] [i_4 - 1])));
                    var_18 += (+(arr_2 [i_4 - 1]));
                }
                for (unsigned short i_5 = 0; i_5 < 10; i_5 += 3) 
                {
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_3] [i_1 + 1] [i_1 + 3] [i_1 + 3])))));
                    arr_22 [i_3] = ((/* implicit */unsigned long long int) (unsigned short)32287);
                    var_20 ^= ((/* implicit */unsigned long long int) (-(arr_5 [i_3] [i_3])));
                }
                /* LoopSeq 2 */
                for (short i_6 = 0; i_6 < 10; i_6 += 1) 
                {
                    var_21 = ((/* implicit */int) ((signed char) arr_20 [i_1 - 2] [i_1 - 1] [i_3] [i_1 - 2]));
                    arr_26 [i_3] [i_1] [i_3] [i_6] [i_6] = ((/* implicit */unsigned int) (unsigned char)255);
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) arr_3 [i_0]))));
                    var_23 = ((/* implicit */unsigned int) arr_28 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0]);
                }
                var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2801986356523518429ULL)) ? (((/* implicit */int) (unsigned short)32313)) : (((/* implicit */int) (short)-4649))))) ? (arr_10 [i_0] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_1])))));
                /* LoopSeq 3 */
                for (unsigned short i_8 = 0; i_8 < 10; i_8 += 3) 
                {
                    var_25 = ((/* implicit */signed char) arr_18 [i_3] [i_1] [i_8]);
                    arr_32 [i_8] [i_3] [i_3] = ((/* implicit */int) var_4);
                    /* LoopSeq 2 */
                    for (short i_9 = 1; i_9 < 9; i_9 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_13))));
                        arr_36 [i_0] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */short) arr_34 [i_9 + 1] [i_9] [i_9] [i_9 - 1] [i_9 - 1]);
                        var_27 = ((/* implicit */_Bool) (short)4668);
                        arr_37 [(unsigned short)3] [i_8] [i_3] = ((/* implicit */short) arr_1 [(unsigned char)9] [i_9]);
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned long long int) arr_29 [i_0] [i_1 + 2] [i_1 + 2] [i_3] [(unsigned char)7] [i_0]);
                        var_29 = ((/* implicit */unsigned short) arr_41 [i_3] [i_1 + 3] [i_3] [i_1 + 3] [i_0]);
                        var_30 = (unsigned short)33222;
                    }
                }
                for (unsigned short i_11 = 1; i_11 < 6; i_11 += 2) 
                {
                    var_31 ^= ((/* implicit */long long int) var_3);
                    var_32 = ((/* implicit */unsigned long long int) ((long long int) arr_28 [i_0] [i_1] [i_1 + 1] [i_3] [i_1 + 1] [i_11 + 4]));
                    /* LoopSeq 2 */
                    for (short i_12 = 3; i_12 < 9; i_12 += 4) 
                    {
                        var_33 = ((/* implicit */signed char) ((2640280470U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33231)))));
                        var_34 = (short)9788;
                        var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) var_6))));
                        arr_48 [(signed char)4] [i_3] [i_11] [i_3] [i_3] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)32322)) ? (((((/* implicit */int) arr_33 [i_3] [i_1] [i_3] [i_11 + 3] [(short)2])) | (((/* implicit */int) (signed char)127)))) : (((/* implicit */int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) var_10)))))));
                    }
                    for (unsigned short i_13 = 0; i_13 < 10; i_13 += 3) 
                    {
                        var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) (signed char)112))) ? (((/* implicit */int) arr_23 [i_0] [0U] [i_3] [i_11] [i_11] [i_13])) : (((/* implicit */int) ((unsigned char) arr_19 [i_0] [i_3] [i_11 - 1])))));
                        arr_52 [i_3] [i_1] [i_3] = ((/* implicit */unsigned short) (~(var_6)));
                        var_37 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_34 [i_0] [i_1 + 1] [i_3] [i_0] [i_13]))) ? (((/* implicit */unsigned long long int) ((int) var_6))) : (var_6)));
                    }
                    var_38 -= ((/* implicit */short) (+(((/* implicit */int) var_5))));
                    arr_53 [i_3] [i_3] [i_1] [i_3] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-103))));
                }
                for (signed char i_14 = 0; i_14 < 10; i_14 += 3) 
                {
                    var_39 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)210)) ? (((/* implicit */int) arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [6])) : (((/* implicit */int) arr_35 [i_0] [i_1 - 1] [i_1 - 2] [i_1 - 1] [i_0]))));
                    var_40 -= ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)33204)) == (((/* implicit */int) (unsigned short)33216))));
                    var_41 = ((/* implicit */unsigned char) (_Bool)1);
                    var_42 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_3] [i_14] [i_14] [i_3] [i_1] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (140737488355327ULL)))) ? (13082959469551585902ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_7))))));
                }
            }
            for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 4) 
            {
                arr_60 [i_15] = ((/* implicit */short) arr_23 [2] [i_15] [i_15] [i_15] [i_15] [i_15]);
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_16 = 0; i_16 < 10; i_16 += 1) 
                {
                    var_43 = ((/* implicit */int) max((var_43), (((/* implicit */int) 13082959469551585902ULL))));
                    arr_63 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_0);
                }
                var_44 = ((/* implicit */long long int) max((var_44), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) arr_39 [i_0] [i_1] [i_15] [i_1] [i_0] [i_1] [i_0])))))));
                /* LoopNest 2 */
                for (unsigned char i_17 = 1; i_17 < 9; i_17 += 3) 
                {
                    for (long long int i_18 = 2; i_18 < 7; i_18 += 2) 
                    {
                        {
                            arr_69 [i_0] [i_1] [i_15] [i_17] [i_18] [i_17] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (short)-8192)) ? (13082959469551585902ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_18 + 3] [i_17 + 1] [i_1 - 1])))))));
                            arr_70 [i_17] [i_15] [i_1] [i_17] = ((/* implicit */short) arr_47 [i_0] [i_0] [i_1 - 1] [i_15] [i_0] [i_17] [i_18]);
                            var_45 ^= ((/* implicit */short) ((unsigned int) max((max((arr_9 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_55 [i_0] [i_1] [i_0])))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)10)))))));
                        }
                    } 
                } 
            }
        }
        arr_71 [i_0] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_56 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33237))) : (arr_56 [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) arr_31 [i_0] [9U] [9U] [1LL]))));
        var_46 = ((/* implicit */unsigned long long int) max((var_46), (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)9778))) <= (var_6))) ? (((/* implicit */int) max((arr_7 [i_0]), (arr_7 [i_0])))) : (((/* implicit */int) min((((((/* implicit */_Bool) (short)9778)) && (((/* implicit */_Bool) 16169667352553268489ULL)))), ((!(((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0]))))))))))));
    }
    var_47 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((8614042398626274682LL), (((/* implicit */long long int) (short)-9789))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)176)) >= (((/* implicit */int) var_10))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-9788))) != (9223372036854775807LL))))))) ? (((long long int) min((((/* implicit */long long int) var_1)), (var_0)))) : (9223372036854775807LL)));
}
