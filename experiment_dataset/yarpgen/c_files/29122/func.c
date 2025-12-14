/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29122
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */long long int) min((var_20), (min((((((min((((/* implicit */long long int) var_4)), (arr_9 [10LL] [(_Bool)1]))) + (9223372036854775807LL))) << (((((((long long int) var_10)) + (8344151391332315353LL))) - (39LL))))), (3713031664504367397LL)))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (long long int i_4 = 1; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) min((var_21), ((!(((/* implicit */_Bool) var_13))))));
                                var_22 = ((/* implicit */long long int) min((var_22), (max((((/* implicit */long long int) ((_Bool) 4503599627370494LL))), (((max((var_12), (var_15))) % (var_8)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 25; i_5 += 4) 
        {
            for (long long int i_6 = 1; i_6 < 24; i_6 += 4) 
            {
                {
                    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) min((-727396901410706679LL), (545809416702345053LL))))));
                    var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_17))) ^ (arr_12 [i_0] [i_6] [i_6])))) ? (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_5])) ? (arr_12 [i_6 - 1] [i_5] [23LL]) : (arr_8 [i_0] [i_0] [i_0] [i_6 + 1]))) : ((~(arr_12 [i_0] [i_5] [i_0]))))))));
                    /* LoopSeq 4 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            arr_26 [14LL] [i_5] [14LL] [i_7] [i_8] [i_0] = var_12;
                            var_25 = ((/* implicit */long long int) (+(((/* implicit */int) (!(arr_14 [i_8 - 1] [i_0] [i_0] [i_5]))))));
                        }
                        for (long long int i_9 = 2; i_9 < 24; i_9 += 1) 
                        {
                            var_26 = ((/* implicit */long long int) min((var_26), (((((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) >> (((/* implicit */int) (_Bool)1))))) & (((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) arr_4 [i_5] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (var_9))) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_6 + 1] [i_6] [i_5] [i_7])))))))));
                            arr_30 [i_0] = max((max((arr_12 [i_0] [i_0] [i_6 - 1]), (arr_12 [i_0] [i_0] [i_6 + 1]))), (max((9223372036854775807LL), (545809416702345053LL))));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) (_Bool)1))));
                            var_28 = ((((/* implicit */long long int) ((/* implicit */int) ((((long long int) (_Bool)1)) < (arr_1 [i_6 - 1]))))) / (((long long int) max((var_15), (var_1)))));
                            var_29 = ((/* implicit */long long int) max((var_29), (((long long int) ((((var_3) >> (((arr_4 [i_0] [i_5]) + (7053974442048678623LL))))) >> (((/* implicit */int) var_16)))))));
                            var_30 = ((/* implicit */long long int) min((var_30), (var_13)));
                        }
                        /* vectorizable */
                        for (long long int i_11 = 0; i_11 < 25; i_11 += 1) 
                        {
                            var_31 = arr_34 [i_0] [i_7] [i_5] [i_0];
                            arr_36 [i_0] [i_5] [i_6] [(_Bool)1] [20LL] [i_0] = ((/* implicit */long long int) (_Bool)1);
                        }
                        arr_37 [i_0] [i_0] = ((/* implicit */_Bool) arr_32 [i_7] [i_5] [i_6] [i_0] [i_6 + 1]);
                        var_32 = ((/* implicit */long long int) max((var_32), (var_0)));
                    }
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                    {
                        arr_40 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((_Bool) var_10));
                        arr_41 [i_0] = 9223372036854775807LL;
                        var_33 = ((/* implicit */long long int) min((var_33), (var_10)));
                        arr_42 [i_0] = var_11;
                    }
                    /* vectorizable */
                    for (long long int i_13 = 1; i_13 < 24; i_13 += 4) 
                    {
                        arr_45 [i_0] [i_5] [i_6] [i_5] = arr_14 [i_6 + 1] [3LL] [i_0] [i_13];
                        var_34 = 3221849451407192593LL;
                        var_35 = ((arr_24 [i_13 - 1] [i_0] [i_6] [i_0] [i_6 - 1]) & (arr_24 [i_13 + 1] [i_5] [i_5] [i_5] [i_6 - 1]));
                        var_36 = ((/* implicit */long long int) max((var_36), (((var_2) & (((long long int) var_2))))));
                    }
                    for (long long int i_14 = 0; i_14 < 25; i_14 += 4) 
                    {
                        arr_48 [i_0] [i_14] [i_0] [i_14] = var_19;
                        var_37 = ((/* implicit */long long int) min((var_37), (var_7)));
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
    {
        var_38 = ((/* implicit */_Bool) min((var_38), (((/* implicit */_Bool) arr_46 [i_15] [i_15] [i_15] [i_15]))));
        var_39 = ((/* implicit */long long int) max((var_39), (var_11)));
        /* LoopSeq 1 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            var_40 = ((((/* implicit */_Bool) var_7)) ? (-8760379699704886650LL) : (var_0));
            /* LoopNest 2 */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                for (long long int i_18 = 1; i_18 < 23; i_18 += 4) 
                {
                    {
                        arr_61 [7LL] [i_18] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [i_15] [i_15] [i_18 - 1] [i_16] [i_15])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_17))));
                        var_41 = ((/* implicit */long long int) min((var_41), ((+(((((/* implicit */_Bool) -2120532752120783052LL)) ? (var_14) : (arr_16 [i_16] [i_16])))))));
                        var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) ((arr_29 [i_16] [i_16] [i_18 - 1] [i_18 - 1] [i_18]) == (((/* implicit */long long int) ((/* implicit */int) var_4))))))));
                        var_43 = ((/* implicit */long long int) max((var_43), (var_13)));
                    }
                } 
            } 
        }
        var_44 = ((long long int) arr_31 [i_15] [(_Bool)1] [i_15] [0LL] [(_Bool)1]);
    }
    for (long long int i_19 = 0; i_19 < 18; i_19 += 1) 
    {
        arr_65 [10LL] [10LL] = max((var_19), (var_12));
        var_45 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_21 [i_19] [(_Bool)1] [i_19])))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_20 = 0; i_20 < 24; i_20 += 4) 
    {
        var_46 = ((var_5) & ((~(arr_29 [(_Bool)1] [(_Bool)1] [20LL] [(_Bool)1] [i_20]))));
        var_47 = ((long long int) arr_8 [i_20] [i_20] [i_20] [i_20]);
    }
    /* vectorizable */
    for (long long int i_21 = 0; i_21 < 18; i_21 += 4) 
    {
        var_48 = 3102844295075428520LL;
        arr_70 [i_21] = var_16;
    }
    /* LoopNest 3 */
    for (long long int i_22 = 0; i_22 < 13; i_22 += 1) 
    {
        for (long long int i_23 = 3; i_23 < 12; i_23 += 4) 
        {
            for (_Bool i_24 = 0; i_24 < 0; i_24 += 1) 
            {
                {
                    var_49 = ((/* implicit */long long int) min((var_49), ((~(3102844295075428518LL)))));
                    /* LoopNest 2 */
                    for (long long int i_25 = 3; i_25 < 10; i_25 += 4) 
                    {
                        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                        {
                            {
                                arr_84 [i_22] [i_23] [i_23] [i_24] [i_24] [i_23] [i_26] = var_10;
                                arr_85 [i_22] [i_23 + 1] [i_24] [i_24] [i_26] [i_22] [i_23] = var_14;
                                var_50 = ((/* implicit */long long int) max((var_50), (max((2199301397019020704LL), (((/* implicit */long long int) (_Bool)1))))));
                                var_51 = ((/* implicit */long long int) max((var_51), (((/* implicit */long long int) var_16))));
                            }
                        } 
                    } 
                    arr_86 [i_22] [i_22] [i_23] [i_22] = (+(((long long int) var_4)));
                    var_52 = ((/* implicit */long long int) min((var_52), (var_5)));
                    arr_87 [(_Bool)1] [i_24] [i_24 + 1] [i_23] = ((/* implicit */long long int) ((((((arr_64 [i_24 + 1] [i_23 + 1]) + (9223372036854775807LL))) >> (((-1LL) + (55LL))))) >= (((/* implicit */long long int) (~(((/* implicit */int) var_17)))))));
                }
            } 
        } 
    } 
    var_53 = ((/* implicit */long long int) min((var_53), (min((((/* implicit */long long int) (+((+(((/* implicit */int) (_Bool)1))))))), (max((var_11), (max((3102844295075428507LL), (-9217292577650199823LL)))))))));
}
