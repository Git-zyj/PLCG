/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237386
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
    var_17 = (short)-2145;
    var_18 = var_13;
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)7549)) : (((/* implicit */int) (short)(-32767 - 1)))))) ? ((-(((/* implicit */int) var_11)))) : (((((/* implicit */_Bool) (short)32099)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12))))))))))));
    var_20 = var_11;
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                for (short i_3 = 3; i_3 < 15; i_3 += 3) 
                {
                    {
                        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) (short)-22249)) ? (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) arr_8 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2] [i_2 + 1] [i_0])) : (((/* implicit */int) arr_8 [i_2 + 1] [i_2] [(short)0] [i_2] [i_2 + 1] [i_1])))) : (((/* implicit */int) ((((/* implicit */int) (short)0)) != (((/* implicit */int) arr_5 [i_0] [i_1]))))))))));
                        arr_10 [i_0] [i_2] [i_1] [i_2] [i_3] = ((short) ((((/* implicit */_Bool) arr_3 [i_1])) ? ((+(((/* implicit */int) (short)-25765)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_3] [i_2] [i_1] [i_0])))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (short i_4 = 3; i_4 < 15; i_4 += 2) 
        {
            for (short i_5 = 0; i_5 < 17; i_5 += 1) 
            {
                {
                    var_22 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-2145)) ? (((/* implicit */int) (short)-18632)) : (((/* implicit */int) (short)-30235))))) ? (((/* implicit */int) (short)-17064)) : (((/* implicit */int) (short)2110))));
                    var_23 -= (short)-30235;
                }
            } 
        } 
    }
    for (short i_6 = 1; i_6 < 14; i_6 += 4) 
    {
        /* LoopNest 3 */
        for (short i_7 = 0; i_7 < 15; i_7 += 4) 
        {
            for (short i_8 = 2; i_8 < 14; i_8 += 3) 
            {
                for (short i_9 = 1; i_9 < 14; i_9 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_10 = 0; i_10 < 15; i_10 += 3) 
                        {
                            var_24 = var_11;
                            var_25 -= arr_27 [i_7] [(short)0] [i_8] [i_9] [(short)2];
                            arr_32 [i_6] [i_6] [(short)6] [(short)6] [i_6] [i_10] = ((/* implicit */short) (-((((~(((/* implicit */int) var_0)))) & (((((/* implicit */int) (short)0)) & (((/* implicit */int) var_10))))))));
                            var_26 -= ((/* implicit */short) (((-(((/* implicit */int) arr_13 [i_6] [i_7])))) > (((((/* implicit */_Bool) ((short) var_1))) ? (((/* implicit */int) min((arr_3 [(short)1]), ((short)-32)))) : (((/* implicit */int) ((((/* implicit */int) var_11)) == (((/* implicit */int) arr_18 [i_7])))))))));
                        }
                        for (short i_11 = 0; i_11 < 15; i_11 += 2) 
                        {
                            var_27 = arr_24 [i_6] [(short)8] [i_9 - 1] [(short)8];
                            arr_35 [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) (short)2100)) || (((/* implicit */_Bool) (short)30247))));
                            var_28 = max((((/* implicit */short) (!(((/* implicit */_Bool) arr_31 [i_6] [i_7] [i_7] [(short)14] [i_11]))))), (arr_15 [i_6]));
                            var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_6 - 1])) ? (((/* implicit */int) arr_14 [i_6 - 1] [i_8 - 2] [i_9 + 1])) : (((/* implicit */int) arr_1 [(short)5] [i_7]))))))))));
                        }
                        /* LoopSeq 1 */
                        for (short i_12 = 0; i_12 < 15; i_12 += 3) 
                        {
                            var_30 = ((/* implicit */short) max((var_30), ((short)30247)));
                            var_31 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-2152)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) arr_8 [(short)16] [i_7] [i_6] [(short)4] [(short)10] [i_7]))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_8 [i_6] [i_7] [i_7] [i_9] [(short)8] [i_7]))));
                            arr_40 [i_7] [(short)10] [(short)2] [(short)12] &= ((short) (~(((/* implicit */int) ((((/* implicit */int) (short)-30247)) == (((/* implicit */int) arr_28 [i_6 + 1] [i_6] [i_6] [i_6] [i_6 - 1])))))));
                            var_32 = ((/* implicit */short) max((((/* implicit */int) (short)-2101)), (((((/* implicit */_Bool) (short)-3702)) ? (((/* implicit */int) min(((short)-3137), ((short)9176)))) : (((/* implicit */int) (short)-28247))))));
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (short i_13 = 0; i_13 < 15; i_13 += 1) 
        {
            var_33 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)2223)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (short)10)))) & (((/* implicit */int) arr_39 [(short)10]))))) ? (((((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_16)))) | (((/* implicit */int) max((var_15), ((short)4203)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-30228)))))));
            var_34 = ((/* implicit */short) ((((/* implicit */_Bool) (short)30246)) ? ((+(((/* implicit */int) ((short) (short)12199))))) : (((/* implicit */int) (short)-1))));
            var_35 = ((/* implicit */short) ((((/* implicit */_Bool) (short)20103)) ? (((/* implicit */int) (short)30274)) : (((/* implicit */int) (short)6357))));
            var_36 = ((/* implicit */short) ((((/* implicit */_Bool) min(((short)127), ((short)(-32767 - 1))))) ? (((((/* implicit */_Bool) (short)13026)) ? (((/* implicit */int) (short)-30275)) : (((/* implicit */int) (short)27227)))) : (((/* implicit */int) arr_29 [i_6 + 1] [i_6 - 1] [i_6 + 1] [(short)14]))));
        }
        for (short i_14 = 4; i_14 < 14; i_14 += 3) 
        {
            var_37 = ((/* implicit */short) max((var_37), (var_10)));
            /* LoopSeq 2 */
            for (short i_15 = 0; i_15 < 15; i_15 += 4) 
            {
                /* LoopSeq 2 */
                for (short i_16 = 4; i_16 < 13; i_16 += 2) 
                {
                    var_38 += ((/* implicit */short) ((((((/* implicit */_Bool) arr_15 [i_6])) ? (((((/* implicit */_Bool) arr_46 [(short)7] [(short)7] [(short)7])) ? (((/* implicit */int) (short)1644)) : (((/* implicit */int) var_16)))) : (((((/* implicit */int) arr_39 [i_16])) % (((/* implicit */int) arr_14 [i_14] [i_15] [i_16])))))) <= (((/* implicit */int) (short)-27520))));
                    arr_50 [i_15] &= ((/* implicit */short) (~(((/* implicit */int) ((short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-27748))))))));
                }
                for (short i_17 = 0; i_17 < 15; i_17 += 3) 
                {
                    /* LoopSeq 3 */
                    for (short i_18 = 1; i_18 < 14; i_18 += 4) 
                    {
                        var_39 = ((/* implicit */short) max((var_39), (arr_9 [i_6 + 1] [i_14 - 4] [i_14 - 3] [i_18 + 1])));
                        var_40 = ((/* implicit */short) (((+(((/* implicit */int) arr_6 [i_6 + 1] [(short)16] [i_15] [i_14 - 2])))) <= (((((/* implicit */_Bool) var_1)) ? ((+(((/* implicit */int) var_14)))) : (((/* implicit */int) arr_0 [i_14 + 1] [i_18 - 1]))))));
                        var_41 ^= ((/* implicit */short) ((((((/* implicit */int) var_2)) + ((-(((/* implicit */int) arr_5 [i_14] [i_17])))))) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_43 [i_15] [(short)12])))))));
                        arr_55 [i_6 + 1] [i_14] [(short)7] [i_6] [i_18 - 1] = ((short) arr_48 [i_6 + 1] [(short)0] [i_18 + 1] [(short)3]);
                        var_42 = ((/* implicit */short) ((((/* implicit */int) (short)-3057)) <= (((/* implicit */int) arr_42 [i_18] [i_14]))));
                    }
                    for (short i_19 = 3; i_19 < 12; i_19 += 2) 
                    {
                        var_43 -= var_1;
                        arr_59 [i_14 + 1] [i_6] [(short)9] [i_19] [(short)9] = min((((/* implicit */short) ((((/* implicit */int) arr_56 [i_19] [i_19] [(short)4] [i_19] [i_19])) < (((/* implicit */int) arr_8 [i_6] [i_14 - 2] [(short)16] [i_17] [i_19 + 3] [i_6]))))), (arr_18 [i_6]));
                    }
                    for (short i_20 = 0; i_20 < 15; i_20 += 4) 
                    {
                        var_44 = ((/* implicit */short) max((var_44), (((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (short)-27521)) : (((/* implicit */int) arr_43 [i_20] [i_14]))))))) ? (((((/* implicit */_Bool) arr_45 [i_6 - 1] [i_14 + 1])) ? (((/* implicit */int) arr_20 [i_6 + 1] [(short)9] [i_17])) : (((/* implicit */int) arr_45 [i_6 + 1] [i_14 - 2])))) : (((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) var_8))))), (max((arr_48 [i_6] [i_14] [i_6] [i_20]), (arr_58 [i_20] [i_20] [(short)5] [(short)7] [(short)5] [(short)7] [(short)5])))))))))));
                        var_45 = ((/* implicit */short) max((var_45), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_15] [(short)10] [i_17] [i_15] [i_6] [i_15])) ? (((/* implicit */int) (short)-22555)) : (((/* implicit */int) var_15))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-32763)) : (((/* implicit */int) arr_46 [i_6] [i_17] [i_6])))) : ((-(((/* implicit */int) (short)-16506))))))) ? (((/* implicit */int) ((short) arr_24 [(short)3] [i_14] [i_14] [i_14]))) : (((/* implicit */int) var_10)))))));
                        var_46 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)-19833)) + (((/* implicit */int) (short)30274)))))));
                    }
                    /* LoopSeq 3 */
                    for (short i_21 = 2; i_21 < 14; i_21 += 3) /* same iter space */
                    {
                        var_47 = ((/* implicit */short) ((min((((((/* implicit */_Bool) arr_23 [i_6] [(short)8] [i_6])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4)))), (((/* implicit */int) arr_36 [i_6] [i_6] [i_14])))) <= (((((/* implicit */_Bool) var_10)) ? ((~(((/* implicit */int) arr_24 [i_6] [(short)7] [i_15] [i_21])))) : ((-(((/* implicit */int) arr_41 [i_14 - 1] [i_14 - 1] [(short)1]))))))));
                        var_48 = ((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)-28940)) : (((/* implicit */int) (short)-17069))));
                    }
                    for (short i_22 = 2; i_22 < 14; i_22 += 3) /* same iter space */
                    {
                        var_49 = ((/* implicit */short) min((var_49), ((short)1792)));
                        var_50 = arr_61 [i_6] [i_14 + 1] [i_15] [i_17] [(short)6];
                    }
                    for (short i_23 = 2; i_23 < 14; i_23 += 3) /* same iter space */
                    {
                        arr_70 [i_6] [i_14 - 4] [(short)10] [i_6] [i_6 + 1] [i_15] = min((((/* implicit */short) (!(((/* implicit */_Bool) min((var_11), (var_5))))))), (min((var_6), (arr_29 [i_14] [(short)9] [(short)0] [i_14 + 1]))));
                        var_51 ^= ((/* implicit */short) (+(((/* implicit */int) ((short) arr_57 [i_23] [i_14] [i_23 - 1] [i_17] [i_14] [i_14] [i_6])))));
                        var_52 -= ((/* implicit */short) (~(((/* implicit */int) (short)30246))));
                    }
                    var_53 -= ((/* implicit */short) (!(((/* implicit */_Bool) (short)392))));
                }
                arr_71 [i_15] [i_6] [i_6] [i_6] = var_5;
                arr_72 [i_6] [i_6] [i_6] = var_15;
            }
            for (short i_24 = 1; i_24 < 14; i_24 += 3) 
            {
                arr_76 [i_6] = (short)-30266;
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_25 = 1; i_25 < 13; i_25 += 4) 
                {
                    var_54 -= arr_31 [i_6] [i_6] [i_24] [(short)6] [i_24];
                    arr_79 [i_6] [i_14] [i_24 + 1] [i_14] [i_25] = (short)545;
                    arr_80 [i_6] [i_14] [i_24 + 1] [(short)7] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [(short)0] [(short)0] [i_25]))))) + ((~(((/* implicit */int) arr_69 [i_6 + 1] [i_14 - 3] [i_14 - 3]))))));
                    var_55 -= (short)-12074;
                    arr_81 [i_6] [i_14] [i_24] [i_6] = ((short) var_1);
                }
            }
        }
        var_56 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_6] [i_6] [i_6 - 1] [i_6 - 1])) ? (((/* implicit */int) ((short) (short)-18930))) : (((((/* implicit */_Bool) arr_78 [(short)14])) ? (((/* implicit */int) (short)30274)) : (((/* implicit */int) arr_7 [(short)8] [(short)8]))))))) ? (((/* implicit */int) arr_66 [i_6] [(short)14] [(short)4] [i_6] [i_6])) : (((/* implicit */int) (short)0))));
    }
}
