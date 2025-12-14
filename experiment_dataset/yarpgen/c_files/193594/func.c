/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193594
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
    var_16 = (~(-1));
    var_17 = (((!(((/* implicit */_Bool) 1301660228)))) ? (((((/* implicit */_Bool) -328624649)) ? (var_5) : (((((var_14) + (2147483647))) << (((980928984) - (980928984))))))) : (328624648));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) (-(((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) / (((arr_2 [i_0]) << (((((((/* implicit */int) (signed char)-104)) + (119))) - (15)))))))));
        /* LoopSeq 2 */
        for (int i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 23; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    {
                        arr_11 [i_0] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (signed char)-103)) ? (((-328624624) + (((/* implicit */int) (signed char)35)))) : (-980929006)))));
                        arr_12 [i_0] [i_0] = (i_0 % 2 == zero) ? (((((/* implicit */int) arr_10 [i_0] [i_1])) << (((min((var_13), (arr_6 [i_0] [i_2 - 1]))) + (1172069820))))) : (((((/* implicit */int) arr_10 [i_0] [i_1])) << (((((min((var_13), (arr_6 [i_0] [i_2 - 1]))) + (1172069820))) - (1876183307)))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_4 = 1; i_4 < 21; i_4 += 3) 
            {
                for (int i_5 = 0; i_5 < 24; i_5 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            var_18 = (~(0));
                            var_19 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) arr_16 [i_1 + 2] [i_1 + 2] [i_4 + 1] [i_5]))) - (((/* implicit */int) min((var_1), (min((arr_20 [i_0] [i_5] [i_5] [i_0] [i_4 + 3] [i_1] [i_0]), ((signed char)51))))))));
                        }
                        var_20 -= max((((/* implicit */int) arr_16 [i_1 - 1] [17] [i_1 - 1] [i_4 + 3])), ((~(((/* implicit */int) arr_16 [i_1 - 1] [i_4] [i_4] [i_4 - 1])))));
                        arr_22 [i_0] [i_1] [i_4 - 1] [i_5] [i_0] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-106))));
                        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) min((((((/* implicit */int) arr_18 [i_1])) + (((/* implicit */int) var_9)))), (((/* implicit */int) var_15)))))));
                    }
                } 
            } 
            arr_23 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) -648438547)) ? (min((1082303112), (((/* implicit */int) (signed char)-113)))) : ((+(((/* implicit */int) (signed char)-122))))));
            var_22 = (((-(min((arr_21 [i_0] [i_1 - 2] [i_1] [i_0] [i_0] [i_0]), (((/* implicit */int) arr_14 [i_0] [i_0] [i_1])))))) & ((-(arr_0 [i_1 - 1]))));
            var_23 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)0)) & (((/* implicit */int) (signed char)-16)))))))) / (((/* implicit */int) ((signed char) arr_18 [i_0])))));
        }
        for (int i_7 = 0; i_7 < 24; i_7 += 4) 
        {
            /* LoopSeq 1 */
            for (int i_8 = 0; i_8 < 24; i_8 += 4) 
            {
                arr_28 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-23)) ? (-1172739011) : (((/* implicit */int) (signed char)17)))))));
                var_24 = ((/* implicit */signed char) min((((/* implicit */int) ((var_11) > (((/* implicit */int) arr_8 [i_0] [i_7] [i_8]))))), (((int) arr_8 [i_0] [i_0] [i_0]))));
                var_25 = (+((~(arr_1 [i_0]))));
            }
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 24; i_9 += 1) 
            {
                for (int i_10 = 1; i_10 < 22; i_10 += 4) 
                {
                    for (signed char i_11 = 2; i_11 < 23; i_11 += 2) 
                    {
                        {
                            var_26 = min(((-(arr_0 [i_11 + 1]))), (arr_0 [i_11 - 2]));
                            arr_37 [i_0] [i_10] [i_0] [i_7] [i_0] = ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)-80)), (((((/* implicit */_Bool) (signed char)44)) ? (-2012998696) : (1762340783)))))) ? (131071) : (((((((/* implicit */_Bool) -1279770161)) ? (((/* implicit */int) (signed char)-18)) : (-1634640437))) / ((+(((/* implicit */int) var_1)))))));
                            var_27 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) (signed char)127))) * (((((int) var_13)) * (((((/* implicit */int) var_12)) / (var_14)))))));
                            var_28 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) max((var_9), ((signed char)15)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-1))))) : (max((((/* implicit */int) (signed char)-60)), (arr_6 [i_0] [i_11 - 1])))))));
                        }
                    } 
                } 
            } 
            var_29 = ((((((((/* implicit */_Bool) (signed char)-80)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9)))) + (-1172674229))) & (min((((((/* implicit */_Bool) (signed char)-103)) ? (((/* implicit */int) var_6)) : (var_5))), (((/* implicit */int) (signed char)-79)))));
            /* LoopSeq 4 */
            for (signed char i_12 = 0; i_12 < 24; i_12 += 3) 
            {
                var_30 = (~(((((/* implicit */int) arr_16 [i_0] [i_7] [i_12] [i_7])) / (((((/* implicit */_Bool) -618943543)) ? (((/* implicit */int) (signed char)-8)) : (((/* implicit */int) var_15)))))));
                var_31 = -2106309516;
                /* LoopNest 2 */
                for (signed char i_13 = 4; i_13 < 23; i_13 += 4) 
                {
                    for (int i_14 = 1; i_14 < 22; i_14 += 3) 
                    {
                        {
                            var_32 = ((((((/* implicit */int) (signed char)-32)) + (2147483647))) << (((((int) min((((/* implicit */int) (signed char)53)), (2147483632)))) - (53))));
                            arr_47 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((signed char) ((int) ((((/* implicit */_Bool) arr_10 [i_0] [i_13])) ? (-1572670326) : (var_14)))));
                            arr_48 [i_7] [i_12] [i_0] = ((/* implicit */int) ((signed char) ((signed char) var_12)));
                            var_33 = var_14;
                            var_34 += ((/* implicit */signed char) ((int) min((((/* implicit */int) var_15)), ((~(((/* implicit */int) arr_44 [i_0] [i_7] [i_12] [i_13] [i_0] [i_14 + 1] [i_14])))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_15 = 0; i_15 < 24; i_15 += 4) 
                {
                    for (signed char i_16 = 0; i_16 < 24; i_16 += 2) 
                    {
                        {
                            var_35 = ((/* implicit */int) (signed char)79);
                            var_36 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-81))))) : (((/* implicit */int) var_6)))) / ((-(((/* implicit */int) (signed char)-68))))));
                        }
                    } 
                } 
            }
            for (int i_17 = 0; i_17 < 24; i_17 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_18 = 0; i_18 < 24; i_18 += 4) 
                {
                    for (signed char i_19 = 1; i_19 < 23; i_19 += 4) 
                    {
                        {
                            var_37 = ((signed char) ((1104165770) << (((((/* implicit */int) (signed char)77)) - (77)))));
                            arr_63 [i_0] [i_7] = ((int) ((((/* implicit */int) ((((/* implicit */int) var_9)) > (var_5)))) / (((((/* implicit */_Bool) (signed char)-119)) ? (((/* implicit */int) (signed char)-82)) : (((/* implicit */int) var_1))))));
                        }
                    } 
                } 
                var_38 = ((/* implicit */int) min((var_38), (((/* implicit */int) var_15))));
            }
            for (signed char i_20 = 0; i_20 < 24; i_20 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (signed char i_21 = 0; i_21 < 24; i_21 += 3) 
                {
                    for (int i_22 = 0; i_22 < 24; i_22 += 3) 
                    {
                        {
                            var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) ((((/* implicit */_Bool) min((-2136932248), (2117251743)))) ? (((/* implicit */int) (signed char)126)) : (min((((((/* implicit */_Bool) 1195551078)) ? (((/* implicit */int) var_0)) : (-1898120801))), (((((/* implicit */_Bool) 594297326)) ? (1073741823) : (1898120817))))))))));
                            arr_72 [i_0] [i_7] [i_20] [i_21] [i_22] [i_7] [i_7] = ((/* implicit */int) ((signed char) ((((((/* implicit */int) ((signed char) (signed char)-11))) + (2147483647))) << (((805306368) - (805306368))))));
                            var_40 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) -1898120817)))) ? (min((((/* implicit */int) (signed char)(-127 - 1))), (((((/* implicit */_Bool) 8191)) ? (2147483647) : (-805306350))))) : (((((/* implicit */int) var_7)) << (((((/* implicit */int) (signed char)-15)) + (26)))))));
                        }
                    } 
                } 
                var_41 = ((/* implicit */signed char) min(((-(min((var_3), (((/* implicit */int) var_7)))))), (1571550467)));
            }
            for (signed char i_23 = 0; i_23 < 24; i_23 += 4) /* same iter space */
            {
                var_42 = ((int) (signed char)-82);
                arr_75 [i_0] [i_7] [i_7] [i_0] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) 608694071)) ? (arr_34 [i_0] [i_7] [i_7] [i_0]) : (arr_34 [i_0] [i_23] [i_7] [i_23])))));
                var_43 *= ((/* implicit */signed char) (((~(((((/* implicit */int) arr_14 [i_23] [i_7] [i_0])) % (-1356739263))))) > (max((max((arr_71 [i_0] [i_7] [i_0] [(signed char)3] [i_23] [i_0] [i_23]), (((/* implicit */int) arr_68 [i_7])))), ((+(((/* implicit */int) var_6))))))));
            }
        }
    }
    for (signed char i_24 = 0; i_24 < 16; i_24 += 3) 
    {
        var_44 = ((/* implicit */int) (((((~(1838623167))) / (-2147483647))) > (arr_40 [i_24] [i_24] [i_24] [i_24])));
        var_45 = ((((/* implicit */_Bool) max((min((var_8), (var_6))), (((/* implicit */signed char) (!(((/* implicit */_Bool) 6)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_39 [i_24])))))) : (arr_62 [i_24] [4] [i_24] [i_24] [i_24] [i_24] [i_24]));
    }
    for (int i_25 = 2; i_25 < 10; i_25 += 3) 
    {
        /* LoopNest 2 */
        for (int i_26 = 0; i_26 < 13; i_26 += 3) 
        {
            for (signed char i_27 = 2; i_27 < 10; i_27 += 2) 
            {
                {
                    arr_86 [i_25] [i_25] [i_25] [(signed char)7] = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-74))));
                    /* LoopNest 2 */
                    for (signed char i_28 = 0; i_28 < 13; i_28 += 4) 
                    {
                        for (int i_29 = 0; i_29 < 13; i_29 += 4) 
                        {
                            {
                                arr_93 [i_25] [i_25] [i_25] [i_25] [i_25] = ((/* implicit */int) ((((int) max((var_3), (953944590)))) == (((var_5) / (((arr_61 [i_29] [i_28] [i_27] [i_28] [i_25]) & (((/* implicit */int) (signed char)(-127 - 1)))))))));
                                var_46 = ((/* implicit */int) max((var_46), (min((((((/* implicit */_Bool) ((177431882) << (((((/* implicit */int) var_2)) - (46)))))) ? (((int) var_10)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_41 [i_26] [i_27] [i_29]))))))), ((-(((/* implicit */int) (signed char)-9))))))));
                                arr_94 [i_25] [i_26] [i_27] [i_25] [i_25] [i_29] = ((/* implicit */signed char) -1398113236);
                            }
                        } 
                    } 
                    arr_95 [i_27 + 1] [i_27] [i_26] [i_25 - 2] = (+(max((((/* implicit */int) (signed char)83)), (arr_80 [i_26]))));
                }
            } 
        } 
        var_47 = ((/* implicit */int) (!(((/* implicit */_Bool) -963874322))));
    }
}
