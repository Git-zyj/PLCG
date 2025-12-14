/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48233
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
    var_12 = var_7;
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 21; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */signed char) (((-(((/* implicit */int) (signed char)61)))) * (((/* implicit */int) ((((/* implicit */int) (signed char)63)) <= (((/* implicit */int) (signed char)124)))))));
        arr_4 [i_0] = var_4;
        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-28))))))) : (((/* implicit */int) min((arr_0 [i_0]), (var_0))))));
        var_14 = min(((signed char)(-127 - 1)), ((signed char)102));
        arr_5 [i_0] [i_0] = ((signed char) (signed char)-65);
    }
    /* vectorizable */
    for (signed char i_1 = 3; i_1 < 21; i_1 += 2) /* same iter space */
    {
        arr_9 [i_1] = ((signed char) (signed char)-14);
        /* LoopNest 2 */
        for (signed char i_2 = 3; i_2 < 23; i_2 += 3) 
        {
            for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_4 = 0; i_4 < 25; i_4 += 4) 
                    {
                        arr_19 [i_1] [i_1] [i_1] = (signed char)(-127 - 1);
                        var_15 = ((/* implicit */signed char) (((~(((/* implicit */int) (signed char)-36)))) & (((/* implicit */int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) (signed char)48)))))));
                        arr_20 [i_1] [i_1] [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) arr_13 [i_2 - 1] [i_3] [i_3])) > (((/* implicit */int) arr_18 [i_1] [i_4] [i_1] [i_4] [i_4] [i_4]))));
                        arr_21 [i_1] [i_1] [i_1] [i_1 + 1] = ((/* implicit */signed char) (~(((/* implicit */int) arr_10 [i_1 + 2] [i_2 - 3] [i_2 - 1]))));
                        /* LoopSeq 3 */
                        for (signed char i_5 = 0; i_5 < 25; i_5 += 3) 
                        {
                            arr_24 [i_3] [i_1] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1]))))) >= (((/* implicit */int) (signed char)-108))));
                            arr_25 [i_1] [i_2] [i_2] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) arr_0 [i_1]))) & (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)119))))));
                        }
                        for (signed char i_6 = 1; i_6 < 24; i_6 += 4) 
                        {
                            arr_29 [i_1] [i_6] [i_3] [i_4] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)116)) << (((((/* implicit */int) (signed char)41)) - (37)))));
                            arr_30 [i_6] [i_4] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)92)) & ((~(((/* implicit */int) arr_15 [i_2 - 1] [i_4] [i_6]))))));
                            arr_31 [(signed char)19] [i_1] [i_2] [i_3] [(signed char)1] [i_4] [i_6] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-35)) * (((/* implicit */int) (signed char)10))));
                            arr_32 [i_6 - 1] [i_4] [i_1] [i_1] [i_2] [i_1] = arr_11 [i_1];
                        }
                        for (signed char i_7 = 0; i_7 < 25; i_7 += 4) 
                        {
                            arr_35 [i_1 - 1] [i_2 - 1] [i_1] [i_4] [i_7] = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) (signed char)-11))) >= (((/* implicit */int) (signed char)-3))));
                            arr_36 [i_1] [i_1] = ((signed char) (signed char)-107);
                        }
                    }
                    for (signed char i_8 = 0; i_8 < 25; i_8 += 4) 
                    {
                        arr_40 [i_1] [i_2] = (signed char)117;
                        arr_41 [(signed char)3] [i_1] [i_1] [i_1] = ((signed char) ((((/* implicit */int) (signed char)-81)) == (((/* implicit */int) arr_38 [i_1] [i_3] [i_1]))));
                        arr_42 [i_1] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) arr_18 [i_1] [i_2] [i_2] [i_2 + 1] [i_2 - 3] [i_2 - 2]))));
                        var_16 = ((/* implicit */signed char) (~(((/* implicit */int) var_0))));
                    }
                    for (signed char i_9 = 0; i_9 < 25; i_9 += 3) 
                    {
                        arr_45 [i_1] [i_1] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)64))))) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((((/* implicit */_Bool) arr_11 [i_1])) ? (((/* implicit */int) (signed char)-87)) : (((/* implicit */int) (signed char)4))))));
                        var_17 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (signed char)-112)) ? (((/* implicit */int) (signed char)28)) : (((/* implicit */int) (signed char)-104))))));
                    }
                    /* LoopSeq 2 */
                    for (signed char i_10 = 0; i_10 < 25; i_10 += 1) 
                    {
                        arr_49 [i_1] = (signed char)35;
                        var_18 = ((/* implicit */signed char) ((((/* implicit */int) arr_39 [i_1 - 3] [i_2] [i_3] [i_10])) % (((/* implicit */int) var_3))));
                        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_37 [i_1 + 3] [i_1 + 4] [i_1 - 1])) ? (((/* implicit */int) arr_33 [i_1 + 3])) : (((/* implicit */int) (signed char)-1))));
                    }
                    for (signed char i_11 = 0; i_11 < 25; i_11 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (signed char i_12 = 0; i_12 < 25; i_12 += 1) /* same iter space */
                        {
                            arr_56 [i_1] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)3))));
                            var_20 = var_3;
                        }
                        for (signed char i_13 = 0; i_13 < 25; i_13 += 1) /* same iter space */
                        {
                            var_21 = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)-107)) + (2147483647))) << (((((/* implicit */int) (signed char)121)) - (121)))));
                            var_22 = arr_16 [i_1] [i_2] [i_1];
                        }
                        for (signed char i_14 = 0; i_14 < 25; i_14 += 3) 
                        {
                            arr_62 [i_1] [i_14] = ((/* implicit */signed char) ((((/* implicit */int) arr_53 [i_1 - 2] [i_2 + 1] [(signed char)6] [i_2 - 3])) * (((/* implicit */int) arr_50 [i_1] [i_2] [i_3]))));
                            var_23 = arr_28 [i_1] [i_1 - 1] [i_1] [i_3] [i_11] [i_1];
                        }
                        /* LoopSeq 4 */
                        for (signed char i_15 = 0; i_15 < 25; i_15 += 2) 
                        {
                            arr_67 [i_1] [i_2] [i_3] [i_3] [i_15] = var_8;
                            arr_68 [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) var_5)) % (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-40))))));
                            arr_69 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)39))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */int) ((signed char) (signed char)-115)))));
                        }
                        for (signed char i_16 = 0; i_16 < 25; i_16 += 3) 
                        {
                            var_24 = var_3;
                            arr_72 [i_1] [i_2] [i_1] [i_11] [i_16] = var_11;
                            arr_73 [i_1] [i_2 + 2] [i_1] = (signed char)-1;
                            arr_74 [i_1] [i_16] [i_3] [i_11] [i_16] = arr_46 [i_1] [i_2] [i_3] [i_2];
                        }
                        for (signed char i_17 = 4; i_17 < 23; i_17 += 3) 
                        {
                            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_70 [i_1 - 3] [i_1 - 3] [i_1] [i_1] [i_1 - 3] [i_1])) : (((/* implicit */int) (signed char)-1))))) ? (((((/* implicit */_Bool) (signed char)-36)) ? (((/* implicit */int) arr_27 [i_3])) : (((/* implicit */int) arr_47 [i_1] [i_1] [i_3] [i_3] [(signed char)8] [i_3])))) : (((/* implicit */int) var_5))));
                            arr_77 [i_1] [i_1] [i_2 + 1] [i_1] [i_11] [i_17 - 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_76 [i_1 + 4] [i_2 - 2] [i_17 - 1])) ? (((/* implicit */int) arr_76 [i_1 - 3] [i_2 - 3] [i_17 - 3])) : (((/* implicit */int) arr_76 [i_1 - 3] [i_2 + 2] [i_17 - 1]))));
                            arr_78 [i_1] [i_1 + 1] [i_2] [i_3] [i_1] [i_17 + 1] [i_17] = ((/* implicit */signed char) (((-(((/* implicit */int) (signed char)-103)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)5)))))));
                        }
                        for (signed char i_18 = 0; i_18 < 25; i_18 += 1) 
                        {
                            arr_81 [i_1] = ((signed char) arr_12 [i_1] [i_1] [i_1]);
                            var_26 = (signed char)-116;
                            arr_82 [i_1] [i_2] [i_1] [i_11] [i_1] = (signed char)106;
                        }
                        var_27 = ((/* implicit */signed char) ((((/* implicit */int) var_3)) <= (((/* implicit */int) ((signed char) (signed char)36)))));
                        arr_83 [i_1] [i_3] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)33)) ? (((/* implicit */int) arr_65 [i_1] [i_11] [i_3] [i_3] [i_2] [i_1] [i_1])) : (((/* implicit */int) (signed char)2))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */int) (signed char)17)) + (((/* implicit */int) var_7))))));
                    }
                }
            } 
        } 
        arr_84 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)10)) ? (((/* implicit */int) arr_38 [i_1] [i_1 - 2] [i_1])) : (((/* implicit */int) arr_61 [i_1] [i_1 + 4] [i_1] [i_1] [i_1 - 3]))))) ? (((/* implicit */int) arr_44 [i_1 - 1] [i_1] [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
    }
}
