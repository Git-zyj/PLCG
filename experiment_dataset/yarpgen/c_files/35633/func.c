/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35633
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
    var_14 = ((/* implicit */int) var_12);
    var_15 &= ((/* implicit */int) (signed char)99);
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */int) var_12);
        /* LoopSeq 4 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            var_16 = var_9;
            arr_8 [(signed char)19] [i_1] = ((/* implicit */int) min((var_1), (((/* implicit */signed char) (!(((/* implicit */_Bool) (-(arr_7 [i_0 - 1] [i_0 + 1] [i_0 - 1])))))))));
        }
        for (int i_2 = 1; i_2 < 21; i_2 += 1) 
        {
            var_17 ^= ((/* implicit */signed char) (~(((/* implicit */int) var_12))));
            var_18 ^= ((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_2] [0]))))) << (((536870784) - (536870758))));
        }
        for (int i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            var_19 += ((/* implicit */signed char) (!(((/* implicit */_Bool) max((arr_10 [(signed char)2] [i_3] [8]), (var_13))))));
            arr_14 [i_0] = ((/* implicit */signed char) max((arr_2 [i_3]), (((/* implicit */int) var_0))));
            var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) -796116290))));
        }
        for (int i_4 = 0; i_4 < 25; i_4 += 1) 
        {
            /* LoopSeq 3 */
            for (int i_5 = 0; i_5 < 25; i_5 += 2) 
            {
                var_21 &= var_13;
                arr_19 [i_4] [i_0] = (+(((/* implicit */int) arr_4 [i_0] [i_4])));
                arr_20 [i_0] [i_4] [i_5] = max((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_5] [i_0]))))), ((+(((/* implicit */int) var_3)))));
                var_22 = -536870785;
                var_23 = ((/* implicit */signed char) (-(536870784)));
            }
            for (signed char i_6 = 0; i_6 < 25; i_6 += 4) 
            {
                arr_23 [i_4] = var_7;
                arr_24 [i_6] [i_4] [i_4] [(signed char)8] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(var_8))))));
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 22; i_7 += 4) 
                {
                    for (signed char i_8 = 3; i_8 < 23; i_8 += 1) 
                    {
                        {
                            var_24 *= ((/* implicit */signed char) (-((~(((((/* implicit */int) arr_17 [i_0] [i_0] [i_0 + 1])) | (((/* implicit */int) var_6))))))));
                            arr_31 [3] [i_4] [11] [3] [i_4] = min((arr_13 [i_4] [i_4]), ((-(var_8))));
                            var_25 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) (-((~(var_11))))))));
                            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) (!(((/* implicit */_Bool) max((var_3), (((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)96)))))))))))));
                        }
                    } 
                } 
            }
            for (signed char i_9 = 2; i_9 < 24; i_9 += 3) 
            {
                var_27 |= (~(((/* implicit */int) (signed char)120)));
                arr_34 [i_0 + 1] [8] [12] &= ((/* implicit */signed char) (+(max((arr_28 [i_0] [i_0 + 1] [i_0] [i_0] [6]), (arr_28 [i_0] [i_0] [i_4] [i_9] [i_9 + 1])))));
                var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) max((((min((1367508801), (arr_7 [i_0 + 1] [i_0] [i_0]))) / (((/* implicit */int) (signed char)15)))), ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_0 - 1] [i_4] [i_9 - 2] [i_9]))))))))))));
                /* LoopSeq 4 */
                for (signed char i_10 = 2; i_10 < 22; i_10 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_11 = 1; i_11 < 24; i_11 += 2) 
                    {
                        var_29 = ((/* implicit */signed char) 536870788);
                        var_30 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(max((9), (((/* implicit */int) var_3)))))))));
                        arr_40 [i_0] [i_4] [i_9] [i_10 - 1] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(-1))))));
                    }
                    var_31 = -1278444795;
                    arr_41 [i_4] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) + (270625905)));
                }
                for (signed char i_12 = 0; i_12 < 25; i_12 += 2) /* same iter space */
                {
                    arr_45 [i_4] [i_4] [i_9] [i_4] = ((/* implicit */signed char) arr_10 [i_0] [i_0] [i_4]);
                    var_32 = (+(((/* implicit */int) var_5)));
                    arr_46 [i_0] [i_0] [i_9] [i_9 - 1] [i_4] [i_12] = ((/* implicit */signed char) (-((~(var_10)))));
                }
                for (signed char i_13 = 0; i_13 < 25; i_13 += 2) /* same iter space */
                {
                    var_33 |= min((((((((/* implicit */int) var_1)) + (2147483647))) >> (((((/* implicit */int) var_1)) + (141))))), (((/* implicit */int) var_7)));
                    arr_51 [i_0 + 1] [i_4] [i_0] [i_0] = (~((~(((/* implicit */int) min((arr_32 [i_0] [i_0] [i_9] [i_0]), (var_3)))))));
                }
                /* vectorizable */
                for (signed char i_14 = 0; i_14 < 25; i_14 += 2) /* same iter space */
                {
                    arr_56 [i_0] [i_0] [i_0] [i_0] [i_4] [i_0] = (+(((/* implicit */int) (!(((/* implicit */_Bool) 0))))));
                    /* LoopSeq 1 */
                    for (signed char i_15 = 2; i_15 < 24; i_15 += 4) 
                    {
                        arr_59 [10] [i_4] [i_9] [i_14] [i_4] = arr_30 [i_0] [i_4] [i_0] [i_14] [i_14] [i_9] [i_9];
                        var_34 = ((/* implicit */int) var_5);
                        arr_60 [17] [i_4] [(signed char)5] [i_15] = ((/* implicit */signed char) (~(var_2)));
                        var_35 = ((/* implicit */int) ((((/* implicit */int) arr_50 [i_0] [i_4])) > (var_11)));
                        var_36 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) arr_47 [i_0] [(signed char)22] [i_9 - 1] [i_14])) != (((/* implicit */int) arr_18 [i_0 - 1] [i_0] [i_0 - 1] [i_0])))))));
                    }
                }
                var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) var_13))));
            }
            arr_61 [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_0))));
            arr_62 [20] &= ((/* implicit */signed char) -1367508794);
            arr_63 [i_4] [i_4] = min((1920), (904175289));
        }
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_16 = 0; i_16 < 25; i_16 += 1) 
        {
            var_38 = ((/* implicit */signed char) (-(((/* implicit */int) arr_4 [i_0 - 1] [i_0]))));
            var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) (~((+(((/* implicit */int) arr_37 [i_0] [i_0] [i_0 + 1] [i_16])))))))));
        }
        for (int i_17 = 0; i_17 < 25; i_17 += 4) 
        {
            var_40 = (~(min((3), (arr_35 [i_0 + 1] [i_17]))));
            arr_72 [i_0] = arr_22 [i_17] [i_17] [i_17];
            var_41 += ((/* implicit */int) ((9) != (((/* implicit */int) var_12))));
        }
        /* vectorizable */
        for (int i_18 = 3; i_18 < 23; i_18 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_19 = 2; i_19 < 23; i_19 += 4) 
            {
                for (int i_20 = 0; i_20 < 25; i_20 += 3) 
                {
                    {
                        arr_81 [i_0 + 1] [i_18] [i_0] [i_0 - 1] = var_5;
                        var_42 = (~(((/* implicit */int) var_12)));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (signed char i_21 = 2; i_21 < 24; i_21 += 2) 
            {
                var_43 = ((/* implicit */signed char) max((var_43), (((/* implicit */signed char) ((9) ^ ((~(var_4))))))));
                /* LoopNest 2 */
                for (signed char i_22 = 3; i_22 < 23; i_22 += 3) 
                {
                    for (int i_23 = 2; i_23 < 22; i_23 += 2) 
                    {
                        {
                            arr_89 [i_18] = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-20))));
                            var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_48 [i_0] [i_18] [i_0])))) || (((/* implicit */_Bool) (+((-2147483647 - 1)))))));
                            arr_90 [i_18] [(signed char)24] [(signed char)24] [i_22] [i_23] = ((((arr_42 [i_0 - 1]) | (((/* implicit */int) (signed char)5)))) - (var_10));
                            var_45 ^= ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-126))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_24 = 2; i_24 < 24; i_24 += 1) 
                {
                    for (signed char i_25 = 2; i_25 < 23; i_25 += 2) 
                    {
                        {
                            var_46 = ((/* implicit */signed char) ((((/* implicit */int) var_6)) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_43 [i_0] [i_18] [i_21 - 1] [i_24 - 2] [i_18] [i_25])))))));
                            var_47 = ((/* implicit */signed char) var_13);
                            arr_97 [i_0] [i_0] [i_21] [i_18] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_2))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_26 = 3; i_26 < 23; i_26 += 2) 
                {
                    for (signed char i_27 = 0; i_27 < 25; i_27 += 4) 
                    {
                        {
                            var_48 = arr_37 [i_18 - 3] [3] [3] [i_0];
                            arr_102 [i_27] [i_18] [i_27] [i_18 - 1] [i_18] &= 1524613984;
                            var_49 = ((/* implicit */int) min((var_49), ((+((~(((/* implicit */int) var_6))))))));
                            var_50 |= ((/* implicit */signed char) (+(arr_48 [i_27] [i_21] [i_18 - 1])));
                        }
                    } 
                } 
                var_51 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_26 [i_21 - 1] [i_21 - 1] [i_21] [12]))));
            }
            for (signed char i_28 = 0; i_28 < 25; i_28 += 4) 
            {
                arr_107 [i_28] [i_18] [i_0] = ((/* implicit */signed char) (+(arr_106 [i_18 + 1] [12] [24])));
                var_52 = ((((/* implicit */int) arr_5 [i_18] [i_18 + 2] [i_18])) * (((/* implicit */int) var_5)));
                arr_108 [i_18] = ((/* implicit */signed char) (~(((/* implicit */int) arr_36 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 - 1]))));
            }
        }
        var_53 &= max((max((arr_15 [i_0 + 1] [i_0 + 1]), (((/* implicit */int) var_0)))), ((-(((/* implicit */int) var_12)))));
        /* LoopNest 3 */
        for (signed char i_29 = 0; i_29 < 25; i_29 += 4) 
        {
            for (int i_30 = 2; i_30 < 23; i_30 += 4) 
            {
                for (signed char i_31 = 2; i_31 < 24; i_31 += 2) 
                {
                    {
                        arr_117 [i_0 - 1] [i_0 - 1] [i_0 - 1] [3] = ((/* implicit */signed char) (((~(arr_105 [i_0 + 1] [(signed char)22] [i_29]))) & ((~(((/* implicit */int) var_6))))));
                        arr_118 [21] [8] [21] = ((/* implicit */signed char) (~(((/* implicit */int) var_0))));
                    }
                } 
            } 
        } 
    }
}
