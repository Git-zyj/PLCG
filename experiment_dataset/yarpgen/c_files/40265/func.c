/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40265
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
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_3 [i_0] [i_2]), (arr_3 [i_0] [i_1])))) || (((/* implicit */_Bool) max((arr_3 [i_0] [i_1]), (arr_3 [i_0] [i_1]))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) min((min((((/* implicit */int) min((var_9), (((/* implicit */short) arr_4 [i_0] [i_2] [i_1]))))), (((((/* implicit */int) arr_10 [i_3] [i_3] [i_4] [i_4] [i_1] [(short)12])) + (((/* implicit */int) arr_3 [(_Bool)1] [(_Bool)1])))))), (((/* implicit */int) var_2)))))));
                            arr_14 [i_0] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_7 [i_0]), (((/* implicit */short) max(((_Bool)1), (arr_10 [i_4] [i_0] [i_0] [i_0] [(short)9] [i_0]))))))) ? (min(((+(((/* implicit */int) arr_3 [i_4] [i_1])))), (((((/* implicit */int) arr_6 [i_1])) - (((/* implicit */int) arr_4 [i_0] [i_3] [i_0])))))) : (((((/* implicit */int) arr_0 [i_0] [i_1])) + (((/* implicit */int) arr_6 [i_3]))))));
                        }
                        for (unsigned char i_5 = 0; i_5 < 13; i_5 += 1) 
                        {
                            arr_18 [i_0] [i_0] [i_2] [i_3] [i_5] = (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_16 [i_0] [i_1] [i_2] [i_1] [i_5])) : (((/* implicit */int) arr_5 [i_2] [(unsigned short)6] [i_0])))), (((/* implicit */int) arr_0 [i_2] [i_3]))))));
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65533)) ? (((/* implicit */int) (short)32762)) : (((/* implicit */int) (short)-24603))))) ? (((/* implicit */int) (((+(((/* implicit */int) var_0)))) < (((/* implicit */int) min((var_10), (((/* implicit */short) arr_4 [i_0] [i_0] [i_0])))))))) : (((((/* implicit */_Bool) min((var_7), (arr_2 [i_2] [i_2])))) ? (((/* implicit */int) arr_16 [i_0] [i_1] [i_2] [i_3] [i_5])) : (((((/* implicit */_Bool) arr_5 [i_1] [(unsigned char)2] [i_0])) ? (((/* implicit */int) (unsigned char)198)) : (((/* implicit */int) arr_13 [(short)7] [(short)4] [i_2] [(short)8] [(short)4]))))))));
                            var_20 = ((/* implicit */unsigned short) min((min((arr_17 [i_5] [i_3] [i_2] [i_1] [i_0]), (arr_17 [i_5] [i_1] [i_2] [i_1] [i_0]))), (((((((/* implicit */int) var_16)) + (((/* implicit */int) arr_7 [i_0])))) != (((((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_3] [i_0])) ? (((/* implicit */int) arr_13 [i_0] [(short)11] [i_2] [i_3] [i_5])) : (((/* implicit */int) arr_0 [i_5] [i_3]))))))));
                        }
                        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((arr_0 [i_0] [(short)12]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)65533))))) ? (((((/* implicit */int) (short)32175)) + (((/* implicit */int) (_Bool)1)))) : (((var_4) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)(-127 - 1))))))) == (((((/* implicit */_Bool) ((arr_17 [i_0] [(signed char)7] [(short)6] [(short)6] [i_3]) ? (((/* implicit */int) (signed char)-76)) : (((/* implicit */int) (unsigned char)108))))) ? (((arr_6 [i_3]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_12 [i_1] [i_2] [i_1] [i_0])), (var_12)))))))))));
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [(short)8] [i_2] [(_Bool)1] [i_0])) ? (((/* implicit */int) arr_16 [i_0] [i_1] [i_2] [i_1] [i_3])) : (((/* implicit */int) arr_16 [i_0] [i_0] [i_1] [i_1] [i_0]))))) ? (((/* implicit */int) arr_16 [i_0] [i_1] [(unsigned short)4] [i_2] [i_3])) : (((/* implicit */int) max((arr_16 [i_0] [i_1] [(unsigned short)6] [i_2] [i_3]), (((/* implicit */unsigned char) arr_13 [i_0] [i_0] [i_2] [i_2] [i_0])))))));
                        var_23 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_7 [i_0])) ? (((((/* implicit */int) arr_15 [i_3])) * (((/* implicit */int) var_6)))) : (((arr_15 [i_1]) ? (((/* implicit */int) arr_12 [i_3] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_12 [i_0] [i_1] [i_0] [i_3])))))) & (((((/* implicit */_Bool) (unsigned short)65529)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (_Bool)1))))));
                    }
                    for (signed char i_6 = 0; i_6 < 13; i_6 += 3) 
                    {
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-9295)) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)248)), ((short)32767)))) : (((/* implicit */int) max(((short)-1), (((/* implicit */short) (signed char)(-127 - 1))))))))) || (((/* implicit */_Bool) ((((((((/* implicit */int) var_9)) + (2147483647))) << (((((/* implicit */int) arr_1 [i_2])) - (9))))) % (((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_6] [(unsigned char)0])))))));
                        arr_22 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */short) min((((/* implicit */signed char) arr_6 [i_2])), (arr_4 [i_0] [i_1] [i_0])))), (min((arr_2 [i_2] [i_6]), (((/* implicit */short) (signed char)-41))))))) ? (((((/* implicit */_Bool) arr_16 [i_0] [i_2] [i_2] [i_1] [i_0])) ? (((/* implicit */int) max(((unsigned short)1023), (((/* implicit */unsigned short) (_Bool)1))))) : (((/* implicit */int) arr_4 [i_1] [i_2] [i_0])))) : (min((((((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_0])) ^ (((/* implicit */int) arr_2 [i_2] [i_0])))), (((/* implicit */int) min((arr_7 [i_0]), (arr_12 [i_0] [i_1] [i_2] [i_6]))))))));
                        arr_23 [i_0] [i_0] [i_0] [i_6] = ((/* implicit */unsigned char) min((((((/* implicit */int) min((var_14), (var_7)))) / (((((/* implicit */_Bool) (short)3072)) ? (((/* implicit */int) (unsigned char)186)) : (((/* implicit */int) (short)3072)))))), (min(((+(((/* implicit */int) (signed char)119)))), (((/* implicit */int) min((((/* implicit */signed char) arr_0 [i_0] [i_2])), (arr_1 [i_0]))))))));
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_8 = 0; i_8 < 13; i_8 += 3) 
                        {
                            var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */int) (unsigned char)79)) : (((/* implicit */int) arr_16 [i_1] [i_1] [i_2] [(signed char)12] [i_8]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_25 [i_0] [i_0] [i_2] [i_7] [i_8])) < (((/* implicit */int) arr_15 [i_2]))))) : (((((/* implicit */_Bool) arr_26 [i_1])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_6)))))), (((/* implicit */int) ((((/* implicit */int) arr_24 [i_0] [i_1] [i_2] [i_7] [(_Bool)1])) != (((/* implicit */int) max((arr_3 [(_Bool)1] [i_8]), (((/* implicit */unsigned short) arr_12 [i_0] [(short)12] [i_2] [i_2])))))))))))));
                            arr_29 [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) min((arr_11 [(_Bool)1] [i_1] [(_Bool)1] [i_7] [i_7] [i_7] [i_8]), (arr_11 [i_0] [i_0] [i_1] [i_2] [i_7] [i_7] [i_8])))) & (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5))))))))));
                        }
                        for (signed char i_9 = 0; i_9 < 13; i_9 += 1) 
                        {
                            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)-23250)) : (((/* implicit */int) (short)32763))))) ? (((/* implicit */int) min((arr_28 [i_0] [i_1] [i_1] [i_0] [i_9]), (arr_28 [i_0] [(_Bool)1] [(unsigned char)6] [i_0] [i_9])))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)160)) != (((/* implicit */int) (unsigned char)29))))) < (((/* implicit */int) arr_21 [i_2])))))));
                            var_27 = ((/* implicit */short) arr_3 [i_2] [i_1]);
                        }
                        arr_33 [i_7] [i_0] [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */int) (((+(((/* implicit */int) (unsigned char)226)))) != (((((/* implicit */int) var_14)) * (((/* implicit */int) (short)(-32767 - 1)))))))), (((((/* implicit */_Bool) min(((short)-3072), (((/* implicit */short) (unsigned char)219))))) ? (((arr_31 [i_7] [i_2] [i_2] [i_0] [i_0]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_16 [i_0] [i_2] [(unsigned char)11] [(short)2] [i_0])))) : ((((_Bool)1) ? (((/* implicit */int) (short)32748)) : (((/* implicit */int) (short)-2009))))))));
                        arr_34 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)23234)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_28 [i_0] [i_1] [i_2] [i_0] [i_7]))))) ? (((/* implicit */int) arr_20 [i_0])) : (((/* implicit */int) arr_31 [i_0] [(short)2] [(short)8] [i_7] [i_7]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_2])) ? (((/* implicit */int) arr_11 [i_0] [(unsigned short)0] [(unsigned char)12] [(unsigned char)3] [i_2] [i_7] [i_7])) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) arr_32 [i_0] [i_0] [i_1] [i_2] [i_7] [i_7] [i_7])) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (short)31711))))))) : ((((+(((/* implicit */int) var_12)))) - (((/* implicit */int) min((arr_8 [i_1] [i_0]), (arr_24 [i_0] [(_Bool)0] [(_Bool)0] [i_2] [i_7]))))))));
                        var_28 = ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (signed char)61)) : (((/* implicit */int) (short)7001))));
                        var_29 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [(signed char)5] [(signed char)5] [i_0] [i_2] [i_2] [(_Bool)1]))))) ? (((((/* implicit */int) arr_26 [i_0])) >> (((/* implicit */int) arr_21 [i_1])))) : (((var_4) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_13 [i_0] [(short)0] [i_1] [i_2] [i_7])))))) != (((/* implicit */int) (short)32767))));
                    }
                    for (short i_10 = 0; i_10 < 13; i_10 += 3) 
                    {
                        arr_37 [i_10] [i_0] [i_2] [(unsigned short)7] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((arr_6 [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [i_2])))) + (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_30 [i_0] [i_0] [i_1] [i_0] [i_10])) : (((/* implicit */int) arr_27 [i_0] [i_0] [i_2] [i_2] [(unsigned char)12]))))))) ? (((((/* implicit */int) min((arr_8 [i_1] [i_0]), (((/* implicit */short) arr_36 [i_0] [(signed char)2] [i_2] [i_10]))))) - (((((/* implicit */int) arr_4 [i_0] [i_1] [i_0])) + (((/* implicit */int) var_3)))))) : (((((/* implicit */_Bool) min(((short)1590), (((/* implicit */short) arr_32 [i_0] [i_0] [i_0] [i_2] [i_2] [i_2] [i_10]))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_30 [i_2] [i_10] [i_2] [i_1] [(short)6])), (arr_16 [i_0] [i_1] [i_2] [i_10] [i_10])))) : (((((/* implicit */_Bool) (short)-1677)) ? (((/* implicit */int) arr_4 [i_0] [(unsigned char)10] [i_0])) : (((/* implicit */int) var_9))))))));
                        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_27 [i_0] [i_0] [i_0] [(short)8] [i_10]))))) ? (((((/* implicit */_Bool) arr_4 [i_1] [i_2] [i_0])) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) (short)32767)))) : (((arr_36 [(signed char)3] [(short)11] [i_1] [i_0]) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (short)(-32767 - 1)))))))) ? (min((((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (unsigned short)57718)) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) max((((/* implicit */short) arr_32 [i_0] [i_0] [(short)5] [i_2] [i_2] [i_2] [i_10])), (arr_24 [(short)1] [i_1] [i_2] [i_2] [i_10])))))) : (((arr_19 [i_0] [(short)3] [i_0] [i_10]) ? (((/* implicit */int) arr_19 [(unsigned char)3] [i_2] [(unsigned char)3] [i_0])) : (((/* implicit */int) arr_19 [(short)10] [i_1] [i_2] [i_10]))))));
                        arr_38 [i_0] [i_0] [i_10] = ((/* implicit */_Bool) min(((~((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32752)))))), ((-((+(((/* implicit */int) arr_19 [i_0] [i_1] [i_2] [i_10]))))))));
                    }
                    var_31 = ((/* implicit */unsigned char) (~(((/* implicit */int) min((arr_28 [i_0] [i_1] [(_Bool)1] [i_0] [i_2]), (((/* implicit */unsigned char) arr_5 [i_0] [i_1] [i_0])))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_11 = 0; i_11 < 20; i_11 += 1) 
    {
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            {
                arr_43 [i_11] [i_11] = ((/* implicit */unsigned short) min((((/* implicit */int) arr_40 [(signed char)0] [i_12])), (min((((/* implicit */int) arr_40 [i_11] [i_12])), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned char)54)) : (((/* implicit */int) arr_39 [i_12]))))))));
                arr_44 [i_12] [i_11] [i_11] = ((/* implicit */short) ((((/* implicit */int) min((var_8), (arr_40 [(short)6] [i_12])))) != (((/* implicit */int) var_3))));
                /* LoopNest 3 */
                for (signed char i_13 = 0; i_13 < 20; i_13 += 2) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        for (unsigned char i_15 = 0; i_15 < 20; i_15 += 2) 
                        {
                            {
                                var_32 ^= ((/* implicit */unsigned char) (((((~(((/* implicit */int) arr_45 [i_11] [i_13] [i_13])))) + (2147483647))) << (((((((/* implicit */_Bool) arr_49 [(unsigned short)2] [i_13] [i_12])) ? (((/* implicit */int) arr_45 [i_11] [i_12] [i_14])) : (((/* implicit */int) arr_49 [i_11] [i_13] [(_Bool)1])))) - (2158)))));
                                var_33 = ((/* implicit */short) (unsigned char)215);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
