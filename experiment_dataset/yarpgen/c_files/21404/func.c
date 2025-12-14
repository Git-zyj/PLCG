/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21404
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
    var_16 = ((long long int) ((((/* implicit */_Bool) ((6195791603198133366LL) << (((((-1LL) + (49LL))) - (48LL)))))) ? (-9023372888848940604LL) : (-9223372036854775793LL)));
    var_17 |= ((((((min((9223372036854775793LL), (-9223372036854775804LL))) + (9223372036854775807LL))) << (((var_6) - (1991715556467391493LL))))) & (var_9));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_18 = ((/* implicit */long long int) (~(((/* implicit */int) ((min((9223372036854775793LL), (arr_2 [i_0]))) >= (-9223372036854775804LL))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 1351394064551518511LL))));
            var_19 = ((/* implicit */long long int) ((-162641875173265260LL) != (-1LL)));
            arr_6 [i_0] = -1351394064551518512LL;
        }
        for (long long int i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_3 = 1; i_3 < 7; i_3 += 4) 
            {
                var_20 = ((max((arr_7 [i_3 - 1] [i_3 - 1]), (9223372036854775804LL))) + ((-(9223372036854775792LL))));
                arr_11 [i_0] [i_2] [i_0] = -1351394064551518485LL;
            }
            var_21 &= min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_9 [i_0]))))), (max((max((9223372036854775804LL), (var_14))), (((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (arr_1 [i_0]) : (-9223372036854775805LL))))));
            var_22 = ((/* implicit */long long int) max((var_22), (((max((9223372036854775793LL), (7794486199748825426LL))) ^ (max((-1LL), (arr_1 [i_0])))))));
        }
    }
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 23; i_4 += 4) 
    {
        var_23 += ((((/* implicit */_Bool) ((long long int) -3627636023392955961LL))) ? (((((-9223372036854775793LL) + (9223372036854775807LL))) >> (((arr_14 [i_4]) - (6740554097543062248LL))))) : (((var_8) - (arr_13 [21LL]))));
        /* LoopSeq 2 */
        for (long long int i_5 = 0; i_5 < 23; i_5 += 3) 
        {
            /* LoopSeq 3 */
            for (long long int i_6 = 0; i_6 < 23; i_6 += 2) 
            {
                arr_22 [i_6] [i_5] [i_4] &= ((((/* implicit */_Bool) arr_15 [i_4])) ? (6550959078440006729LL) : (-9223372036854775804LL));
                var_24 = ((long long int) (~((-9223372036854775807LL - 1LL))));
                arr_23 [i_4] [10LL] [i_6] [20LL] &= arr_12 [i_6];
                /* LoopSeq 3 */
                for (long long int i_7 = 0; i_7 < 23; i_7 += 4) 
                {
                    var_25 = ((/* implicit */long long int) min((var_25), (9223372036854775805LL)));
                    var_26 = ((((/* implicit */_Bool) -9223372036854775805LL)) ? (9223372036854775807LL) : (9223372036854775795LL));
                    arr_26 [i_5] [i_7] = ((long long int) var_3);
                    var_27 ^= ((/* implicit */long long int) ((-3LL) != (-9223372036854775796LL)));
                    arr_27 [i_6] [i_5] [i_4] = ((((/* implicit */_Bool) arr_19 [i_7] [i_6] [22LL] [22LL])) ? (-9223372036854775804LL) : (2LL));
                }
                for (long long int i_8 = 0; i_8 < 23; i_8 += 3) /* same iter space */
                {
                    var_28 = ((((/* implicit */_Bool) arr_28 [i_4] [i_4] [i_4])) ? (var_15) : (5LL));
                    var_29 = ((/* implicit */long long int) max((var_29), ((-(1073728310958938198LL)))));
                    var_30 -= -1LL;
                    arr_31 [i_8] [i_5] [i_8] = (~(((long long int) 7LL)));
                    var_31 = (+(((((/* implicit */_Bool) var_5)) ? (408267121768224726LL) : (-2284950285028524414LL))));
                }
                for (long long int i_9 = 0; i_9 < 23; i_9 += 3) /* same iter space */
                {
                    var_32 = ((15LL) << (((var_10) + (2917799644290135468LL))));
                    var_33 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_9] [i_6] [i_4] [i_4])) ? (6186074721609527982LL) : (-13LL)))) ? (((var_5) % (arr_25 [i_5]))) : ((~(4159390665630066280LL))));
                    var_34 = ((((/* implicit */_Bool) -9223372036854775803LL)) ? (-7858099745357438715LL) : (var_7));
                    var_35 -= 2LL;
                }
            }
            for (long long int i_10 = 0; i_10 < 23; i_10 += 3) /* same iter space */
            {
                var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_10] [i_5] [i_4])) || (((/* implicit */_Bool) arr_12 [i_4]))))))))));
                /* LoopSeq 3 */
                for (long long int i_11 = 0; i_11 < 23; i_11 += 4) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_12 = 2; i_12 < 22; i_12 += 4) 
                    {
                        arr_43 [i_12] [i_5] [i_5] [i_11] [i_5] [i_5] [i_4] = ((var_0) ^ (var_10));
                        var_37 |= ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))) | (((((/* implicit */_Bool) arr_39 [i_12] [i_4] [i_10] [i_4] [i_4])) ? (7285941319718572233LL) : (0LL))));
                        arr_44 [i_4] [i_5] [i_10] [i_11] [i_4] = ((var_1) & (arr_25 [i_12 - 1]));
                    }
                    /* LoopSeq 1 */
                    for (long long int i_13 = 0; i_13 < 23; i_13 += 4) 
                    {
                        var_38 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1414312419959409985LL)) ? (var_3) : (-9223372036854775803LL)))) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (-9223372036854775794LL) : (3LL))) : (arr_39 [i_13] [i_11] [i_10] [i_5] [i_4]));
                        arr_47 [i_4] [i_5] [i_5] [i_11] [i_11] = ((long long int) 288230376151707648LL);
                        var_39 = (-(((((/* implicit */_Bool) -9223372036854775804LL)) ? (-7948488198851393882LL) : (17451448556060672LL))));
                        var_40 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 13LL)) ? (0LL) : (17451448556060672LL)))) ? (6135310412576520653LL) : (((long long int) -3LL)));
                    }
                }
                for (long long int i_14 = 1; i_14 < 21; i_14 += 4) /* same iter space */
                {
                    var_41 = ((/* implicit */long long int) max((var_41), ((+(((var_14) & (0LL)))))));
                    var_42 = ((9223372036854775807LL) / (arr_24 [i_14 + 2] [i_14 + 1] [i_14 + 2] [i_14 + 2]));
                }
                for (long long int i_15 = 1; i_15 < 21; i_15 += 4) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (long long int i_16 = 0; i_16 < 23; i_16 += 3) 
                    {
                        var_43 = -21LL;
                        arr_56 [i_4] [i_4] [i_10] [i_15] [i_16] [i_15 - 1] [i_4] = (((~(arr_15 [i_10]))) | (0LL));
                    }
                    for (long long int i_17 = 0; i_17 < 23; i_17 += 1) 
                    {
                        arr_60 [i_17] [i_17] = ((/* implicit */long long int) ((arr_48 [i_17] [i_17] [i_17] [i_15 + 1] [i_17]) == (0LL)));
                        arr_61 [i_4] [i_5] [4LL] [i_15] [i_17] = ((((/* implicit */_Bool) -9223372036854775807LL)) ? (arr_34 [i_17] [i_17] [i_15 - 1] [i_15] [i_15 + 2]) : (3LL));
                        arr_62 [i_4] [i_17] [i_5] = ((((((/* implicit */_Bool) var_7)) ? (5LL) : (-8507609181946761269LL))) & (((var_11) >> (((var_14) + (5394611275870363254LL))))));
                        arr_63 [0LL] [i_17] [i_17] [i_17] = (~(-8507609181946761269LL));
                    }
                    for (long long int i_18 = 2; i_18 < 21; i_18 += 3) 
                    {
                        var_44 = ((((((/* implicit */_Bool) 0LL)) && (((/* implicit */_Bool) 8507609181946761273LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_34 [2LL] [i_15] [i_5] [i_5] [i_4])))))) : (1LL));
                        var_45 = (+(arr_25 [i_4]));
                        var_46 = 24LL;
                        var_47 = ((/* implicit */long long int) min((var_47), (((((/* implicit */_Bool) -2994905092425156583LL)) ? (6135310412576520644LL) : (-1813618113481688947LL)))));
                    }
                    arr_66 [i_4] [i_5] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_50 [i_15] [i_10] [i_5])) || (((/* implicit */_Bool) -6135310412576520630LL))));
                    /* LoopSeq 4 */
                    for (long long int i_19 = 1; i_19 < 22; i_19 += 4) 
                    {
                        var_48 = -7069010433823780730LL;
                        arr_70 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = (+(8507609181946761284LL));
                        var_49 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7LL)) ? (-5919748396528992535LL) : (2349948976924321804LL)))) ? (arr_17 [i_19 - 1] [i_19 + 1] [i_15 + 1]) : (((((/* implicit */_Bool) 8LL)) ? (-6135310412576520631LL) : (8507609181946761269LL))));
                    }
                    for (long long int i_20 = 0; i_20 < 23; i_20 += 4) 
                    {
                        arr_73 [i_20] [i_15] [i_4] [i_5] [i_4] = ((((/* implicit */_Bool) (~(var_6)))) ? (arr_69 [i_5] [i_5] [15LL] [i_15 + 1] [i_5] [15LL] [i_10]) : (arr_37 [i_10] [i_5] [i_10]));
                        var_50 = -8507609181946761293LL;
                        var_51 = ((/* implicit */long long int) min((var_51), (((/* implicit */long long int) (!(((/* implicit */_Bool) (~(-8507609181946761271LL)))))))));
                    }
                    for (long long int i_21 = 3; i_21 < 20; i_21 += 3) /* same iter space */
                    {
                        var_52 = arr_71 [i_15 + 1] [i_21 - 3] [i_21] [i_21 - 3] [i_21 - 3] [i_21 + 3];
                        var_53 = ((long long int) arr_16 [i_4] [i_10] [i_4]);
                        var_54 = ((/* implicit */long long int) ((2238156844714277321LL) >= (((long long int) 0LL))));
                    }
                    for (long long int i_22 = 3; i_22 < 20; i_22 += 3) /* same iter space */
                    {
                        var_55 -= ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_72 [i_22 - 2] [i_22] [i_22 + 3] [i_15] [i_15 - 1]))));
                        arr_79 [i_4] [i_4] [i_4] [i_4] &= ((long long int) (((-9223372036854775807LL - 1LL)) * (0LL)));
                    }
                }
                arr_80 [i_4] [14LL] [14LL] [i_4] &= ((((/* implicit */_Bool) -2349948976924321804LL)) ? (0LL) : (0LL));
            }
            for (long long int i_23 = 0; i_23 < 23; i_23 += 3) /* same iter space */
            {
                var_56 = ((arr_67 [i_4] [i_4] [i_5] [i_23] [16LL]) / (arr_67 [i_4] [i_5] [i_5] [i_5] [i_5]));
                var_57 = -219626869851334551LL;
            }
            /* LoopNest 2 */
            for (long long int i_24 = 4; i_24 < 21; i_24 += 1) 
            {
                for (long long int i_25 = 1; i_25 < 22; i_25 += 4) 
                {
                    {
                        var_58 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_55 [i_5] [i_24] [i_24] [i_24 + 1] [i_24 - 3] [i_25 - 1])) && (((/* implicit */_Bool) -501006981535516583LL))));
                        var_59 ^= ((long long int) 949203173517020905LL);
                    }
                } 
            } 
        }
        for (long long int i_26 = 0; i_26 < 23; i_26 += 3) 
        {
            var_60 = (((~(var_15))) | (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
            var_61 = (~(1601214040607099570LL));
            var_62 &= (~(((long long int) var_6)));
        }
        var_63 = 4823816195213835475LL;
        var_64 = ((/* implicit */long long int) max((var_64), (arr_32 [i_4] [i_4] [i_4] [i_4] [i_4])));
    }
    for (long long int i_27 = 2; i_27 < 18; i_27 += 4) 
    {
        var_65 = arr_57 [i_27] [i_27] [i_27] [i_27] [i_27];
        var_66 = ((/* implicit */long long int) max((var_66), (((((/* implicit */_Bool) -4266967801624690446LL)) ? (7214857258505409593LL) : (251658240LL)))));
    }
    var_67 = ((((/* implicit */_Bool) ((long long int) ((long long int) var_10)))) ? (var_1) : (((var_15) + (var_0))));
    var_68 = var_11;
}
