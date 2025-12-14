/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198643
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
    /* LoopSeq 4 */
    for (long long int i_0 = 2; i_0 < 16; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */unsigned long long int) max((var_10), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_5 [i_0] [i_1] [(_Bool)1] [i_0]), (((/* implicit */short) var_9))))) ? ((+(((/* implicit */int) (signed char)-9)))) : (((/* implicit */int) var_8))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0 - 2] [2U] [i_0]))) : (min(((~(var_6))), (((/* implicit */long long int) ((((/* implicit */_Bool) 8145848720326906506LL)) ? (1602473051U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27771)))))))))))));
                    var_11 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_6)) : (var_4))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))));
                    var_12 ^= (unsigned char)1;
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_13 [(signed char)12] [i_1] [i_1] |= ((/* implicit */unsigned short) var_5);
                                arr_14 [(unsigned short)4] [(unsigned short)4] &= ((signed char) ((((/* implicit */int) (unsigned short)40755)) >> (((((/* implicit */int) (short)11387)) - (11373)))));
                                arr_15 [i_0] [i_1] [i_2] = ((/* implicit */short) -7870173682601213470LL);
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_5 = 1; i_5 < 16; i_5 += 1) 
        {
            for (short i_6 = 0; i_6 < 18; i_6 += 4) 
            {
                {
                    var_13 = ((/* implicit */int) max((((arr_6 [i_0]) ? (((((/* implicit */_Bool) arr_0 [(_Bool)1] [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0]))) : (229578619449504589ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_17 [i_0] [i_5] [2])))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3627375092U)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))), (var_4)))));
                    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) var_7))));
                    var_15 = ((/* implicit */_Bool) arr_9 [i_0 - 2] [i_5] [i_5 + 2] [i_5]);
                }
            } 
        } 
        arr_21 [i_0] = ((/* implicit */long long int) (signed char)-28);
        arr_22 [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */short) (unsigned char)214)), (min((arr_5 [i_0] [i_0 + 1] [i_0] [i_0 - 2]), (((/* implicit */short) (!(((/* implicit */_Bool) var_5)))))))));
    }
    for (long long int i_7 = 2; i_7 < 16; i_7 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)21)) >= (((/* implicit */int) var_9)))) ? (((/* implicit */int) arr_10 [i_7] [i_7] [i_7 - 2] [i_7] [i_7 + 1] [i_7] [i_7])) : (((/* implicit */int) var_1))))) & (max((((/* implicit */unsigned long long int) ((long long int) var_1))), ((~(5353342309625296529ULL))))))))));
        arr_25 [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_19 [10ULL] [i_7] [i_7] [i_7]))))) ? (((((/* implicit */_Bool) (signed char)34)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(signed char)2]))) : (arr_8 [i_7 - 2] [i_7] [i_7 - 2] [i_7] [i_7] [i_7]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [8LL] [8LL])))));
    }
    for (unsigned int i_8 = 1; i_8 < 12; i_8 += 1) 
    {
        var_17 = max(((!(((/* implicit */_Bool) arr_16 [(unsigned char)6] [i_8 + 1])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [10U] [i_8 + 4]))) < (5353342309625296502ULL))));
        arr_28 [(signed char)7] = (-(var_6));
        arr_29 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_16 [(signed char)8] [i_8 + 1])), (var_4)))) ? (((((/* implicit */_Bool) arr_16 [(signed char)2] [i_8 + 4])) ? (((/* implicit */int) (unsigned short)51972)) : (((/* implicit */int) arr_16 [(unsigned char)4] [i_8 + 3])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_16 [(signed char)6] [i_8 + 3])) && (((/* implicit */_Bool) arr_16 [(unsigned char)8] [i_8 - 1])))))));
        var_18 |= ((/* implicit */unsigned char) ((unsigned short) -754060276));
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_10 = 0; i_10 < 13; i_10 += 1) 
        {
            for (short i_11 = 4; i_11 < 12; i_11 += 1) 
            {
                {
                    arr_37 [i_11] [i_11] [9LL] [i_11] = ((/* implicit */unsigned char) var_5);
                    var_19 = ((/* implicit */long long int) max((var_19), ((((~(arr_17 [(unsigned short)16] [i_10] [i_11 + 1]))) << (min((((/* implicit */unsigned long long int) (unsigned short)0)), ((~(13093401764084255103ULL)))))))));
                    var_20 = ((/* implicit */signed char) max((((/* implicit */unsigned short) min((arr_19 [i_11] [i_10] [9ULL] [i_9]), (arr_19 [i_11] [i_10] [i_11] [i_9])))), (min((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_2))))), (max(((unsigned short)18), (((/* implicit */unsigned short) var_8))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_12 = 1; i_12 < 11; i_12 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned char) (signed char)71);
                        var_22 = ((var_6) - (((((/* implicit */_Bool) 8936998341469327993LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-8444959989620692417LL))));
                        /* LoopSeq 2 */
                        for (unsigned short i_13 = 0; i_13 < 13; i_13 += 1) 
                        {
                            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) var_5))));
                            var_24 -= arr_33 [i_12 + 1] [i_11 - 2] [i_11 - 2];
                            arr_45 [(unsigned short)12] [i_10] [i_11] [i_11] [i_12 + 1] [i_10] &= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_1 [(signed char)0]))));
                            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)0)))))))));
                        }
                        for (signed char i_14 = 0; i_14 < 13; i_14 += 1) 
                        {
                            arr_48 [i_9] [i_11] [i_9] [(signed char)2] [i_9] = ((/* implicit */short) ((long long int) (unsigned short)0));
                            var_26 ^= ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_44 [(signed char)10] [i_10] [i_11 - 1])) > (-4521677900070014213LL)));
                        }
                    }
                    for (long long int i_15 = 1; i_15 < 12; i_15 += 1) 
                    {
                        arr_52 [i_11] [i_10] [i_11] = ((/* implicit */long long int) arr_7 [i_10]);
                        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_4)))) ? (var_2) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)127)) ? (arr_17 [6] [6] [i_15 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)52661))))))))) ? (arr_8 [i_9] [i_9] [i_10] [i_9] [i_11] [i_15]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_26 [i_11 - 3]))))))))));
                    }
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (~(arr_39 [i_11 - 2] [(unsigned short)12] [i_11])))), (((((/* implicit */_Bool) arr_33 [i_9] [i_9] [i_11 - 1])) ? (arr_54 [i_11] [i_11] [i_11 + 1] [i_11 - 1]) : (arr_54 [i_11] [i_11 - 3] [(_Bool)1] [i_11 - 2])))));
                        var_29 = ((/* implicit */signed char) -1989250007606231713LL);
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 13; i_17 += 4) 
        {
            for (unsigned long long int i_18 = 0; i_18 < 13; i_18 += 1) 
            {
                {
                    var_30 = ((/* implicit */unsigned long long int) arr_42 [i_17] [i_17] [i_17] [i_17] [i_17]);
                    var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)13)) ? (((/* implicit */int) (unsigned short)37513)) : (((/* implicit */int) (signed char)-1)))))));
                    var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) ((((/* implicit */_Bool) 13093401764084255096ULL)) ? (13093401764084255068ULL) : (((/* implicit */unsigned long long int) 3079355473U)))))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned short i_19 = 1; i_19 < 15; i_19 += 1) 
    {
        for (short i_20 = 0; i_20 < 18; i_20 += 1) 
        {
            {
                var_33 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)32))));
                var_34 = ((/* implicit */_Bool) arr_0 [i_19] [i_19]);
                arr_67 [i_19] = ((/* implicit */unsigned short) (-(((((/* implicit */int) (unsigned short)28953)) >> (((((/* implicit */int) (short)20737)) - (20716)))))));
            }
        } 
    } 
    var_35 = ((/* implicit */unsigned short) max((((int) (short)-14764)), (((/* implicit */int) var_5))));
    var_36 = ((/* implicit */unsigned int) var_5);
}
