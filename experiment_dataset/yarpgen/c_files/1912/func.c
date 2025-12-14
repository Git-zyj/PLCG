/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1912
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
    var_13 = ((/* implicit */_Bool) var_6);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) var_2))));
        arr_2 [i_0] = ((/* implicit */_Bool) var_11);
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            var_15 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_0]))));
            arr_6 [i_0] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((_Bool) var_10))), (var_9)));
        }
        for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            var_16 = 9223372036854775785LL;
            /* LoopSeq 1 */
            for (long long int i_3 = 0; i_3 < 14; i_3 += 1) 
            {
                arr_12 [i_0] [i_2] [i_3] [i_0] = ((/* implicit */long long int) var_7);
                var_17 = ((/* implicit */_Bool) 9223372036854775805LL);
                var_18 = ((/* implicit */signed char) (-(min((((((/* implicit */_Bool) var_0)) ? (var_9) : (var_3))), (((((/* implicit */_Bool) arr_3 [i_2])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))))));
            }
            var_19 = max((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) >= (arr_1 [i_2])))) >= (((/* implicit */int) (signed char)97))))), (9223372036854775805LL));
        }
        for (long long int i_4 = 0; i_4 < 14; i_4 += 2) 
        {
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (long long int i_6 = 0; i_6 < 14; i_6 += 2) 
                {
                    {
                        var_20 = arr_18 [i_5] [i_6];
                        var_21 = (!(((/* implicit */_Bool) ((long long int) ((var_4) > (var_3))))));
                        var_22 = ((/* implicit */_Bool) 9223372036854775805LL);
                        var_23 = 4LL;
                        arr_20 [i_0] [i_0] [i_4] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((_Bool) ((signed char) min((((/* implicit */long long int) var_6)), (var_4)))));
                    }
                } 
            } 
            var_24 = max((min((((signed char) var_8)), (min((var_5), (var_7))))), (((signed char) ((((/* implicit */int) var_1)) != (((/* implicit */int) var_5))))));
        }
        var_25 = max((((/* implicit */long long int) ((-4LL) < (((((/* implicit */long long int) ((/* implicit */int) var_8))) + (9LL)))))), (min((((/* implicit */long long int) arr_10 [i_0] [i_0] [i_0] [i_0])), (9223372036854775807LL))));
    }
    for (signed char i_7 = 0; i_7 < 13; i_7 += 2) 
    {
        var_26 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) < (((((((/* implicit */int) var_1)) > (((/* implicit */int) var_7)))) ? (min((((/* implicit */long long int) var_12)), (arr_13 [i_7]))) : (var_9)))));
        var_27 = ((max((((/* implicit */long long int) (_Bool)1)), (-9223372036854775805LL))) ^ (((/* implicit */long long int) ((/* implicit */int) var_7))));
        var_28 = ((/* implicit */_Bool) ((long long int) max((((/* implicit */long long int) var_5)), (-1LL))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_29 = ((/* implicit */_Bool) var_0);
            var_30 = ((/* implicit */_Bool) ((signed char) arr_10 [i_7] [i_7] [i_7] [i_7]));
            var_31 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_11))));
            /* LoopNest 3 */
            for (long long int i_9 = 1; i_9 < 10; i_9 += 2) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (long long int i_11 = 1; i_11 < 12; i_11 += 4) 
                    {
                        {
                            var_32 = ((/* implicit */_Bool) -1LL);
                            arr_32 [i_11] [i_10] [i_8] [i_8] [i_7] = 3LL;
                        }
                    } 
                } 
            } 
        }
        for (long long int i_12 = 1; i_12 < 12; i_12 += 1) 
        {
            var_33 = var_5;
            arr_35 [i_7] [i_7] = ((max((((long long int) -10LL)), (var_0))) ^ (((/* implicit */long long int) ((/* implicit */int) ((max((arr_18 [i_7] [i_12 - 1]), (var_10))) < (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_12)))))))));
            /* LoopSeq 3 */
            for (long long int i_13 = 0; i_13 < 13; i_13 += 2) 
            {
                var_34 = ((/* implicit */signed char) var_0);
                var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((min((((/* implicit */signed char) var_2)), (var_6))), (max((arr_10 [i_7] [i_7] [i_7] [i_7]), (((/* implicit */signed char) var_2))))))) ? (11LL) : (((/* implicit */long long int) ((/* implicit */int) ((max((8096268365065492341LL), (((/* implicit */long long int) arr_21 [i_12])))) >= (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_13] [i_13]))) : (var_9)))))))));
                /* LoopNest 2 */
                for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                {
                    for (long long int i_15 = 2; i_15 < 12; i_15 += 2) 
                    {
                        {
                            var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-5))) : (((long long int) ((long long int) var_8)))));
                            var_37 = ((((((/* implicit */_Bool) arr_1 [i_14 + 1])) && (((/* implicit */_Bool) ((arr_4 [i_15 - 2] [i_7]) ? (-3LL) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))))) && (((/* implicit */_Bool) -24LL)));
                            arr_46 [i_14] = var_9;
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
                {
                    for (signed char i_17 = 1; i_17 < 11; i_17 += 2) 
                    {
                        {
                            var_38 = ((/* implicit */signed char) max((var_2), (((((/* implicit */_Bool) ((long long int) (_Bool)1))) || (((/* implicit */_Bool) var_4))))));
                            var_39 *= ((/* implicit */_Bool) max((((/* implicit */signed char) ((((/* implicit */int) ((signed char) var_5))) == (((/* implicit */int) max(((signed char)120), (((/* implicit */signed char) var_1)))))))), (((signed char) (((_Bool)1) ? (arr_19 [i_7] [i_7] [i_12 - 1] [i_13] [i_13] [i_13]) : (42LL))))));
                            var_40 = ((/* implicit */long long int) var_2);
                        }
                    } 
                } 
            }
            for (long long int i_18 = 0; i_18 < 13; i_18 += 1) 
            {
                /* LoopSeq 2 */
                for (long long int i_19 = 0; i_19 < 13; i_19 += 2) 
                {
                    var_41 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_53 [i_12 - 1] [i_19] [i_19] [i_18] [i_12 - 1] [i_7])))))));
                    /* LoopSeq 1 */
                    for (long long int i_20 = 0; i_20 < 13; i_20 += 1) 
                    {
                        arr_61 [i_20] [i_12] [i_18] [i_12] [i_12] = min((((/* implicit */long long int) max((((_Bool) 17LL)), (((13LL) < (var_0)))))), (var_9));
                        var_42 = max((9223372036854775807LL), (-5LL));
                        var_43 = ((/* implicit */_Bool) max((((/* implicit */long long int) var_8)), (((16LL) << (((((long long int) -24LL)) + (39LL)))))));
                    }
                    var_44 ^= ((((/* implicit */_Bool) ((var_1) ? (max((7173008856995557095LL), (5LL))) : (-17LL)))) ? (max((var_9), (((((/* implicit */_Bool) var_4)) ? (27LL) : (arr_23 [i_7] [i_12]))))) : (((long long int) ((((/* implicit */int) (signed char)5)) >> (((((/* implicit */int) var_5)) + (146)))))));
                }
                /* vectorizable */
                for (long long int i_21 = 0; i_21 < 13; i_21 += 4) 
                {
                    var_45 = ((/* implicit */long long int) (signed char)-5);
                    var_46 = ((/* implicit */_Bool) var_6);
                    var_47 = ((/* implicit */signed char) 0LL);
                    /* LoopSeq 4 */
                    for (signed char i_22 = 1; i_22 < 10; i_22 += 4) 
                    {
                        var_48 = ((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) -10LL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : ((((_Bool)1) ? (arr_51 [i_18]) : (((/* implicit */long long int) ((/* implicit */int) var_1))))));
                        var_49 |= ((/* implicit */long long int) arr_0 [i_7]);
                        var_50 = ((/* implicit */signed char) 12LL);
                        var_51 = ((((/* implicit */_Bool) ((long long int) var_6))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((long long int) var_7)));
                    }
                    for (long long int i_23 = 0; i_23 < 13; i_23 += 2) 
                    {
                        var_52 = ((/* implicit */_Bool) var_8);
                        var_53 = ((/* implicit */signed char) var_1);
                    }
                    for (long long int i_24 = 2; i_24 < 12; i_24 += 2) 
                    {
                        var_54 = ((/* implicit */long long int) var_7);
                        var_55 = ((/* implicit */signed char) (_Bool)1);
                        var_56 = ((/* implicit */_Bool) min((var_56), (((/* implicit */_Bool) ((long long int) var_9)))));
                    }
                    for (long long int i_25 = 0; i_25 < 13; i_25 += 2) 
                    {
                        arr_77 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18] [i_18] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1))));
                        arr_78 [i_7] [i_12] [i_18] [i_18] [i_21] [i_25] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) -13LL)) ? (7174736843536848648LL) : (9223372036854775807LL)))));
                        var_57 = ((/* implicit */signed char) ((var_4) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        var_58 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (var_9))));
                    }
                }
                /* LoopNest 2 */
                for (long long int i_26 = 3; i_26 < 9; i_26 += 4) 
                {
                    for (long long int i_27 = 1; i_27 < 11; i_27 += 1) 
                    {
                        {
                            var_59 = ((/* implicit */long long int) ((((/* implicit */int) arr_75 [i_26 + 2] [i_26] [i_18] [i_18] [i_18])) ^ (((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) var_8))))) == (((var_1) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (-9223372036854775806LL))))))));
                            var_60 = ((/* implicit */signed char) max((min((arr_19 [i_26 + 2] [i_12 - 1] [i_27] [i_26] [i_7] [i_7]), (var_10))), (arr_19 [i_26 + 3] [i_27] [i_18] [i_27] [i_18] [i_27])));
                            var_61 = min((7174736843536848621LL), ((-(-1061946714472447650LL))));
                            arr_85 [i_27] [i_7] [i_7] [i_7] [i_7] [i_7] |= ((/* implicit */_Bool) var_8);
                        }
                    } 
                } 
            }
            for (long long int i_28 = 1; i_28 < 10; i_28 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_29 = 0; i_29 < 13; i_29 += 1) 
                {
                    for (signed char i_30 = 0; i_30 < 13; i_30 += 1) 
                    {
                        {
                            var_62 = ((/* implicit */_Bool) var_8);
                            var_63 = ((/* implicit */_Bool) arr_25 [i_7] [i_7] [i_7]);
                            var_64 = ((/* implicit */_Bool) min((var_64), (((/* implicit */_Bool) ((var_2) ? (((((/* implicit */long long int) (+(((/* implicit */int) (signed char)30))))) ^ (min((((/* implicit */long long int) var_12)), ((-9223372036854775807LL - 1LL)))))) : (var_11))))));
                        }
                    } 
                } 
                var_65 |= ((/* implicit */long long int) max(((_Bool)1), (var_2)));
            }
        }
        /* vectorizable */
        for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_32 = 2; i_32 < 9; i_32 += 2) 
            {
                /* LoopSeq 2 */
                for (long long int i_33 = 0; i_33 < 13; i_33 += 1) 
                {
                    var_66 = ((/* implicit */long long int) ((signed char) ((var_9) < (((/* implicit */long long int) ((/* implicit */int) var_12))))));
                    var_67 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (var_10)))) >> (((((/* implicit */int) (signed char)-124)) + (129)))));
                    var_68 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) 5702294983147210930LL)) ? (var_4) : (var_9))));
                }
                for (long long int i_34 = 0; i_34 < 13; i_34 += 4) 
                {
                    var_69 = ((/* implicit */long long int) var_2);
                    var_70 = ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */long long int) ((/* implicit */int) var_1))) ^ (arr_107 [i_7] [i_7] [i_7] [i_7] [i_7]))) : (((/* implicit */long long int) ((/* implicit */int) var_5))));
                    var_71 = ((/* implicit */_Bool) var_10);
                }
                var_72 = ((((long long int) arr_18 [i_31] [i_32])) < (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_79 [i_32] [i_31] [i_31] [i_7])))));
                var_73 = ((/* implicit */long long int) min((var_73), (((/* implicit */long long int) (_Bool)0))));
            }
            var_74 = ((/* implicit */long long int) ((_Bool) var_5));
        }
    }
}
