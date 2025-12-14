/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29693
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
    var_18 = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */_Bool) arr_1 [i_0]);
        /* LoopSeq 3 */
        for (signed char i_1 = 1; i_1 < 17; i_1 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                /* LoopSeq 1 */
                for (signed char i_3 = 0; i_3 < 19; i_3 += 4) 
                {
                    var_20 ^= arr_1 [i_3];
                    /* LoopSeq 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_12 [i_0] [i_0] [i_2] [i_2] [i_2] = (!(arr_3 [i_1 - 1] [i_1 + 1] [i_1 - 1]));
                        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((signed char) ((_Bool) arr_5 [(_Bool)0] [i_3]))))));
                        var_22 *= arr_0 [i_3];
                    }
                    /* vectorizable */
                    for (signed char i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        var_23 -= ((/* implicit */signed char) ((_Bool) arr_15 [(_Bool)1] [i_1 - 1] [i_1] [i_1 + 2] [i_1]));
                        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (~(((/* implicit */int) arr_10 [(signed char)0] [(signed char)0] [i_3] [i_1 + 1] [(_Bool)1] [i_0] [i_0])))))));
                    }
                    var_25 &= ((/* implicit */_Bool) (signed char)112);
                }
                var_26 = ((/* implicit */_Bool) max((var_26), ((_Bool)1)));
            }
            arr_16 [i_0] [i_0] = ((/* implicit */signed char) (_Bool)1);
            /* LoopSeq 3 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_27 = ((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) (signed char)117)))));
                var_28 |= (_Bool)1;
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_29 = ((/* implicit */signed char) arr_17 [(signed char)7] [(signed char)7]);
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_8 = 0; i_8 < 19; i_8 += 1) 
                {
                    var_30 += ((/* implicit */_Bool) arr_18 [i_1 - 1] [(signed char)4] [i_1 + 2]);
                    var_31 |= ((_Bool) (_Bool)1);
                    var_32 = arr_6 [i_0] [(_Bool)1] [i_1] [i_0] [i_1] [i_0];
                }
            }
            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
            {
                var_33 &= ((/* implicit */_Bool) (+(((/* implicit */int) (!(arr_3 [i_1 - 1] [i_9 - 1] [i_9]))))));
                var_34 = ((/* implicit */_Bool) ((signed char) arr_15 [i_0] [i_0] [i_1] [i_0] [(signed char)2]));
                var_35 = ((/* implicit */signed char) ((_Bool) ((signed char) arr_28 [i_0] [i_1 - 1] [i_1 + 2] [i_9 - 1])));
                /* LoopSeq 2 */
                for (signed char i_10 = 2; i_10 < 16; i_10 += 2) /* same iter space */
                {
                    var_36 += ((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) (signed char)12)))));
                    arr_32 [i_0] [i_0] = ((_Bool) ((_Bool) (signed char)44));
                    var_37 = ((_Bool) (_Bool)1);
                }
                for (signed char i_11 = 2; i_11 < 16; i_11 += 2) /* same iter space */
                {
                    arr_35 [i_0] [i_1 + 1] [i_9] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) (_Bool)1)))));
                    var_38 *= arr_9 [(_Bool)1] [i_1 + 1] [i_1 + 1] [i_11];
                }
                var_39 -= ((/* implicit */signed char) (+(((/* implicit */int) arr_23 [i_9 - 1] [i_9] [i_9 - 1] [i_9] [i_1 - 1] [i_1]))));
            }
            /* LoopSeq 3 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                /* LoopSeq 1 */
                for (signed char i_13 = 0; i_13 < 19; i_13 += 3) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_40 += ((_Bool) (~(((/* implicit */int) arr_5 [i_1] [(_Bool)1]))));
                        var_41 -= ((_Bool) ((signed char) (signed char)3));
                    }
                    var_42 = ((/* implicit */_Bool) arr_7 [i_1 - 1] [i_1 + 1] [i_1 - 1]);
                }
                var_43 = ((/* implicit */_Bool) min((var_43), (((_Bool) ((_Bool) arr_6 [(_Bool)1] [i_1 + 2] [(_Bool)0] [i_1] [(_Bool)1] [(_Bool)1])))));
                var_44 = ((/* implicit */signed char) max((var_44), (arr_18 [i_0] [(_Bool)1] [(_Bool)1])));
            }
            /* vectorizable */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
            {
                arr_45 [i_0] [i_1] [i_0] [i_15] = ((_Bool) arr_10 [i_1 + 2] [(_Bool)1] [i_1 + 1] [(_Bool)1] [i_1 + 2] [i_1 - 1] [(signed char)6]);
                var_45 = ((/* implicit */_Bool) min((var_45), (((_Bool) arr_10 [i_1 + 1] [i_1 + 1] [i_1 - 1] [(_Bool)1] [i_1 + 1] [i_1 + 2] [i_1 - 1]))));
            }
            /* vectorizable */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
            {
                var_46 = ((/* implicit */_Bool) max((var_46), ((_Bool)1)));
                /* LoopSeq 4 */
                for (signed char i_17 = 1; i_17 < 17; i_17 += 1) 
                {
                    var_47 = arr_25 [i_1 + 2] [i_17 - 1];
                    /* LoopSeq 1 */
                    for (signed char i_18 = 1; i_18 < 16; i_18 += 2) 
                    {
                        arr_53 [(_Bool)1] [i_17] [i_16] [i_1 - 1] [(_Bool)1] &= arr_1 [(_Bool)1];
                        arr_54 [i_0] [(_Bool)1] = ((/* implicit */signed char) ((_Bool) (_Bool)1));
                    }
                    var_48 = ((_Bool) arr_3 [i_17 + 1] [i_17 + 2] [i_17 + 2]);
                }
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    var_49 = ((/* implicit */_Bool) max((var_49), (((_Bool) (signed char)127))));
                    var_50 ^= ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                    var_51 = ((/* implicit */_Bool) max((var_51), (((/* implicit */_Bool) (-(((/* implicit */int) arr_24 [i_0] [i_0] [i_1] [i_1 + 1])))))));
                    var_52 = arr_47 [i_0] [i_1 + 2] [i_16] [i_1 - 1];
                }
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        arr_61 [i_1] [i_1] [i_1] [i_20] [i_1] [i_0] = arr_57 [i_1 - 1] [i_0] [i_0] [i_1] [i_1 - 1] [i_1 - 1];
                        var_53 = ((/* implicit */_Bool) max((var_53), (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))));
                        var_54 = ((_Bool) (_Bool)1);
                    }
                    /* LoopSeq 4 */
                    for (signed char i_22 = 3; i_22 < 17; i_22 += 4) 
                    {
                        var_55 = ((/* implicit */_Bool) min((var_55), (arr_20 [i_1 - 1] [i_22 - 3] [i_22 - 1] [i_22 + 2])));
                        arr_64 [i_0] [i_1] [(_Bool)1] [i_0] [i_20] [i_22] = (!(arr_21 [i_1 + 1] [i_22 + 1] [i_22]));
                        var_56 -= arr_5 [i_1 - 1] [(_Bool)1];
                        var_57 = ((/* implicit */signed char) min((var_57), (((/* implicit */signed char) ((_Bool) arr_19 [i_1 - 1] [i_1 - 1] [i_22 - 3])))));
                    }
                    for (signed char i_23 = 0; i_23 < 19; i_23 += 4) 
                    {
                        arr_68 [(signed char)0] [(signed char)0] [(_Bool)1] [(signed char)0] [i_0] [i_23] = ((/* implicit */signed char) (+(((/* implicit */int) arr_1 [i_0]))));
                        var_58 -= ((/* implicit */_Bool) (signed char)9);
                        arr_69 [(_Bool)1] [i_23] [i_16] [i_20] [i_23] [i_0] [(_Bool)1] = ((/* implicit */_Bool) (signed char)-81);
                    }
                    for (signed char i_24 = 1; i_24 < 17; i_24 += 3) 
                    {
                        var_59 ^= ((/* implicit */_Bool) ((signed char) (_Bool)1));
                        arr_72 [i_0] [(_Bool)1] [i_0] = ((signed char) arr_27 [i_0] [(_Bool)1] [i_0]);
                    }
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                    {
                        var_60 = ((_Bool) (_Bool)1);
                        arr_76 [i_25] [i_0] [i_16] [i_16] [i_0] [i_0] = arr_39 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 2];
                        var_61 = ((/* implicit */_Bool) arr_18 [(signed char)16] [i_0] [i_0]);
                        var_62 = ((/* implicit */_Bool) max((var_62), (((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_16] [i_1] [i_20] [(_Bool)1] [i_20]))));
                    }
                    arr_77 [(_Bool)1] [i_0] [i_16] = (!(arr_43 [i_1 + 2] [i_1 + 1] [i_1 - 1]));
                    var_63 -= ((/* implicit */_Bool) arr_42 [(_Bool)1] [i_16] [i_16] [i_1] [i_1 + 2] [i_0]);
                    arr_78 [i_20] [i_0] [i_0] [(_Bool)1] = arr_75 [i_0] [i_0] [i_0] [i_0];
                }
                for (signed char i_26 = 1; i_26 < 18; i_26 += 2) 
                {
                    var_64 = ((/* implicit */_Bool) max((var_64), ((_Bool)0)));
                    var_65 ^= (_Bool)1;
                    var_66 = ((/* implicit */_Bool) max((var_66), (arr_14 [i_1] [(_Bool)1] [i_1 - 1] [i_1] [(_Bool)1])));
                }
                arr_81 [i_0] = ((/* implicit */_Bool) ((signed char) arr_47 [i_0] [(signed char)9] [(signed char)9] [i_16]));
            }
        }
        for (signed char i_27 = 1; i_27 < 17; i_27 += 1) /* same iter space */
        {
            var_67 &= ((/* implicit */_Bool) (-((+(((/* implicit */int) arr_1 [(signed char)14]))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
            {
                var_68 ^= ((_Bool) (_Bool)1);
                /* LoopSeq 2 */
                for (_Bool i_29 = 1; i_29 < 1; i_29 += 1) 
                {
                    var_69 &= ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
                    var_70 = ((/* implicit */_Bool) min((var_70), (((/* implicit */_Bool) (+(((/* implicit */int) arr_73 [i_0] [i_27 - 1] [i_27] [i_29 - 1])))))));
                }
                for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                {
                    var_71 = ((/* implicit */_Bool) min((var_71), (arr_33 [i_27] [i_27] [i_27] [(signed char)4])));
                    arr_96 [i_0] [i_27] [i_28] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))));
                    var_72 = ((/* implicit */_Bool) min((var_72), (((/* implicit */_Bool) (+(((/* implicit */int) arr_36 [i_27] [i_28])))))));
                    arr_97 [i_0] [i_0] [i_28] [i_30] = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-25))));
                }
            }
            arr_98 [i_0] [i_0] [i_27] = ((/* implicit */_Bool) arr_57 [i_0] [i_0] [i_27 - 1] [i_27] [i_27] [i_27 - 1]);
        }
        for (signed char i_31 = 1; i_31 < 17; i_31 += 1) /* same iter space */
        {
            var_73 -= ((_Bool) arr_17 [i_31 + 1] [i_31]);
            var_74 = ((_Bool) ((_Bool) arr_83 [(signed char)7] [i_31 - 1] [i_0]));
            arr_102 [(_Bool)1] [i_0] [i_31] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_31 [i_0] [i_0] [i_31] [i_31] [i_31 + 2] [i_0]))));
        }
    }
    var_75 *= ((/* implicit */signed char) var_13);
}
