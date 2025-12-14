/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241416
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_19 = ((((/* implicit */long long int) (((_Bool)1) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1))))) + (max((((long long int) (_Bool)1)), (((/* implicit */long long int) ((((/* implicit */_Bool) 5206400186965301845LL)) ? (((/* implicit */int) (unsigned short)28228)) : (((/* implicit */int) (_Bool)1))))))));
            var_20 = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
            arr_5 [i_1] [6LL] [i_1] = ((/* implicit */long long int) ((signed char) 1880895594));
        }
        for (unsigned char i_2 = 2; i_2 < 15; i_2 += 3) 
        {
            arr_9 [i_0] &= ((/* implicit */long long int) (-((-(((/* implicit */int) arr_7 [i_0]))))));
            var_21 = ((/* implicit */unsigned char) (~(max((((/* implicit */long long int) arr_4 [i_0] [i_2])), (((var_1) ? (5816773349638853720LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)28232)) ? (max((-9223372036854775798LL), (((/* implicit */long long int) -1068938456)))) : (((/* implicit */long long int) -1880895603))))) ? (max((((/* implicit */long long int) min(((unsigned short)0), (((/* implicit */unsigned short) arr_6 [i_0] [i_0] [9]))))), (((var_4) ? (-9223372036854775798LL) : (((/* implicit */long long int) ((/* implicit */int) var_18))))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0] [i_0]))))) ? (((/* implicit */long long int) var_9)) : (((var_5) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
            /* LoopSeq 3 */
            for (short i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_2 + 1] [i_2 - 1] [i_2 + 1])) + (((/* implicit */int) arr_6 [i_2 + 1] [i_2 - 1] [i_2]))))) ? (((/* implicit */long long int) (((+(923305750))) + ((-(var_9)))))) : (((((/* implicit */_Bool) min((arr_8 [i_0] [i_2]), (var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) max(((_Bool)1), ((_Bool)0))))) : (((((/* implicit */_Bool) 5987385560225748025ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (9213489253424675406LL)))))));
                var_24 = ((/* implicit */int) ((long long int) (~(((/* implicit */int) arr_3 [i_0] [i_0] [i_2 + 1])))));
                var_25 -= ((/* implicit */long long int) ((_Bool) (~(((/* implicit */int) var_18)))));
                arr_13 [i_2] [i_2 - 2] [(unsigned char)15] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (((var_14) / (((/* implicit */long long int) ((/* implicit */int) arr_2 [6LL] [i_0] [i_0]))))))))));
            }
            for (unsigned short i_4 = 1; i_4 < 12; i_4 += 2) 
            {
                var_26 = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2 + 1] [i_4 + 4]))) ^ (9223372036854775807LL)))) ? ((~(arr_11 [i_2 + 1] [i_0] [i_0] [(_Bool)1]))) : ((-(arr_11 [i_2 - 2] [i_0] [i_0] [i_0]))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_5 = 0; i_5 < 16; i_5 += 4) 
                {
                    var_27 *= ((/* implicit */long long int) (((+(var_2))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_0]))))))));
                    arr_20 [i_0] [i_5] |= ((/* implicit */_Bool) (~(((/* implicit */int) (short)-12806))));
                }
                /* LoopSeq 2 */
                for (long long int i_6 = 0; i_6 < 16; i_6 += 2) 
                {
                    arr_24 [i_0] [i_0] [i_2 - 2] [i_4] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_23 [i_2] [i_2] [(unsigned short)11] [i_6] [i_6] [i_2 - 2])) || ((_Bool)1))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_6] [i_2] [i_4] [i_2] [8LL] [(unsigned short)4])) ? (1606797268060844453LL) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : (((/* implicit */int) (!((_Bool)1)))))))));
                    var_28 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_14 [i_0] [i_2 - 1] [i_6]) ? (((/* implicit */int) arr_23 [i_0] [i_2] [i_0] [i_4 + 3] [i_4] [i_6])) : (var_9)))) ? (max((var_8), (arr_16 [i_0]))) : (max((-4317796470095005229LL), (((/* implicit */long long int) arr_18 [i_0] [i_0] [i_2] [i_0]))))))) ? (((5336137782725790179LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)22))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)22)))));
                }
                for (int i_7 = 4; i_7 < 14; i_7 += 3) 
                {
                    arr_27 [i_7] [i_2] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */int) (short)18738)) >= (-2080735926)));
                    /* LoopSeq 2 */
                    for (unsigned short i_8 = 0; i_8 < 16; i_8 += 4) 
                    {
                        var_29 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)153)) - (((/* implicit */int) (unsigned short)28240))));
                        var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_26 [(_Bool)1] [i_2 + 1] [i_4 + 4] [i_7 - 4] [i_7]) & (((/* implicit */long long int) ((((/* implicit */_Bool) 348840246)) ? (((/* implicit */int) (signed char)53)) : (((/* implicit */int) (short)26681)))))))) ? ((((!(((/* implicit */_Bool) (unsigned short)49356)))) ? (-8658837225025491122LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)37307))))) : ((~((~(8116717571192569414LL)))))));
                        arr_30 [i_2] [(_Bool)1] [i_2 - 2] [i_2 - 2] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_6 [i_4 + 2] [i_4 + 3] [i_2 + 1])) : (((/* implicit */int) arr_6 [i_4 + 2] [i_4 + 3] [i_2 + 1]))))) ? (((/* implicit */int) max((arr_6 [i_4 + 2] [i_4 + 3] [i_2 + 1]), (arr_6 [i_4 + 2] [i_4 + 3] [i_2 + 1])))) : (((((/* implicit */int) arr_6 [i_4 + 2] [i_4 + 3] [i_2 + 1])) + (((/* implicit */int) arr_6 [i_4 + 2] [i_4 + 3] [i_2 + 1]))))));
                        var_31 -= ((/* implicit */signed char) ((unsigned char) min((((/* implicit */long long int) var_12)), (arr_22 [i_2 + 1] [i_2 + 1] [i_0] [i_0] [i_2 + 1]))));
                        var_32 = ((/* implicit */_Bool) min((((/* implicit */long long int) min((arr_2 [i_2 + 1] [i_4 + 1] [i_4 + 3]), (arr_2 [i_2 - 2] [i_2] [i_4 + 3])))), (((((/* implicit */_Bool) 9223372036854775807LL)) ? (8116717571192569414LL) : (-8109044837271635402LL)))));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_33 = ((/* implicit */long long int) max((var_33), (min((((((/* implicit */_Bool) (((_Bool)1) ? (arr_32 [i_0] [i_7 - 1]) : (((/* implicit */int) arr_28 [i_0] [i_2] [i_4 + 4] [i_7] [i_9]))))) ? (min((((/* implicit */long long int) (unsigned short)37303)), (-2864043787633898834LL))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (var_6))))))), (((/* implicit */long long int) max(((unsigned short)28232), (((/* implicit */unsigned short) arr_4 [i_2] [i_2])))))))));
                        var_34 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) ((_Bool) arr_15 [i_0] [i_0] [i_0]))) / ((-(((/* implicit */int) (short)32767))))))), (((var_4) ? (arr_25 [i_2 - 2] [i_2 - 1] [i_4 + 4] [i_7 - 2] [i_2 - 1]) : (((/* implicit */long long int) var_9))))));
                    }
                }
            }
            for (short i_10 = 0; i_10 < 16; i_10 += 3) 
            {
                var_35 = ((/* implicit */short) (((-((~(-24429114))))) | ((((((-2147483647 - 1)) / (((/* implicit */int) var_10)))) / ((-(((/* implicit */int) (unsigned short)42679))))))));
                var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) (((!((!(((/* implicit */_Bool) arr_21 [i_0] [i_10] [i_2 - 2] [i_0] [i_0])))))) ? (min((((/* implicit */unsigned long long int) (unsigned char)236)), (((((/* implicit */_Bool) 1540091143)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)145))) : (10321329254824980728ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((!(((/* implicit */_Bool) var_8)))), (((((/* implicit */_Bool) (short)-9258)) && (((/* implicit */_Bool) 8116717571192569433LL)))))))))))));
                var_37 = (((+(arr_26 [i_2 - 1] [i_2] [i_2 + 1] [i_2 + 1] [(unsigned char)0]))) | (max((((/* implicit */long long int) arr_4 [i_2 - 1] [i_2])), (arr_26 [i_2 - 1] [i_2] [i_2 + 1] [i_10] [i_10]))));
            }
        }
        for (long long int i_11 = 0; i_11 < 16; i_11 += 3) 
        {
            var_38 = ((/* implicit */unsigned char) var_15);
            /* LoopSeq 2 */
            for (unsigned char i_12 = 0; i_12 < 16; i_12 += 2) 
            {
                arr_39 [i_0] [i_11] = ((/* implicit */_Bool) (+(((((arr_29 [13LL] [i_11] [i_11] [i_11] [i_11]) + (2147483647))) >> (((var_2) - (3814767146944434528ULL)))))));
                var_39 = ((/* implicit */long long int) ((_Bool) arr_22 [i_0] [i_11] [i_12] [i_11] [i_11]));
                var_40 = ((/* implicit */unsigned short) max(((short)32767), ((short)32759)));
                var_41 ^= ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_14 [i_0] [i_0] [i_12])), (arr_25 [i_0] [i_0] [(_Bool)0] [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_12])) : (((/* implicit */int) arr_14 [i_0] [i_11] [i_12])))) != (((/* implicit */int) (!((_Bool)1)))))))) : (max((-8658837225025491122LL), (9223372036854775805LL))));
            }
            for (long long int i_13 = 0; i_13 < 16; i_13 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_14 = 0; i_14 < 16; i_14 += 4) 
                {
                    arr_47 [i_0] [10LL] [i_13] [i_13] = ((/* implicit */int) (-(max((((/* implicit */long long int) -1540091144)), ((-9223372036854775807LL - 1LL))))));
                    arr_48 [i_0] [i_0] [i_11] [(signed char)1] [i_14] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_14] [i_11] [i_11] [i_0] [i_0]))) & ((~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_11] [i_13] [i_14]))) : (6372989871995524901ULL)))))));
                }
                var_42 = ((/* implicit */_Bool) (signed char)-119);
            }
            arr_49 [i_0] [i_11] = ((/* implicit */unsigned short) (((!(arr_36 [i_0] [i_11]))) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) -367212334582259184LL))))))) : (((((/* implicit */int) (unsigned char)3)) ^ ((~(((/* implicit */int) var_4))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_15 = 1; i_15 < 14; i_15 += 3) 
            {
                arr_54 [(_Bool)1] [i_15] [9LL] [i_0] = ((/* implicit */short) ((((/* implicit */long long int) var_9)) - (arr_22 [i_15 - 1] [6LL] [i_0] [14ULL] [i_15 + 1])));
                arr_55 [i_11] [i_11] [i_11] = ((/* implicit */unsigned long long int) (((+(var_13))) << (((((((/* implicit */_Bool) var_11)) ? (var_16) : (((/* implicit */int) var_0)))) - (1335845376)))));
            }
        }
        var_43 = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((-(-3660723515995258930LL))), ((((_Bool)1) ? (-35678034909767750LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)124))))) ? (((/* implicit */unsigned long long int) ((long long int) (_Bool)1))) : (((((/* implicit */_Bool) (unsigned short)40441)) ? (((/* implicit */unsigned long long int) -8658837225025491122LL)) : (arr_21 [i_0] [2] [i_0] [i_0] [i_0]))))) : (((min((((/* implicit */unsigned long long int) (_Bool)1)), (8633494203548655050ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
        /* LoopSeq 1 */
        for (int i_16 = 2; i_16 < 15; i_16 += 3) 
        {
            arr_58 [i_0] [i_16] [i_16] = ((/* implicit */_Bool) min(((((~(arr_12 [(_Bool)1] [i_16 - 1] [(short)11] [i_16 - 1]))) & (((/* implicit */unsigned long long int) ((-8658837225025491122LL) & (((/* implicit */long long int) ((/* implicit */int) var_12)))))))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (signed char)30)) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_18))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [i_16])) : (((/* implicit */int) (signed char)127))))))))));
            var_44 = ((/* implicit */int) ((((/* implicit */_Bool) max((-367212334582259168LL), (((/* implicit */long long int) (unsigned char)32))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((var_8), (((/* implicit */long long int) arr_18 [i_16] [i_16] [i_16] [(signed char)12]))))) || (arr_15 [i_16 - 1] [i_16 - 1] [i_16 - 2]))))) : (((((/* implicit */_Bool) max((8658837225025491134LL), (((/* implicit */long long int) (signed char)-119))))) ? (var_3) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (unsigned char)24)))))))));
        }
        arr_59 [i_0] [i_0] = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_2 [9ULL] [i_0] [i_0])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))));
    }
    var_45 -= ((/* implicit */unsigned short) ((((var_5) + (9223372036854775807LL))) >> (((((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) var_18)), (var_17))))) - ((+(var_15))))) + (5498337807830341849LL)))));
    var_46 = ((/* implicit */signed char) var_15);
    var_47 = ((/* implicit */long long int) (+(((((/* implicit */int) max((((/* implicit */unsigned char) var_0)), ((unsigned char)59)))) / (var_16)))));
    /* LoopSeq 3 */
    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
    {
        arr_63 [i_17] = ((/* implicit */short) (+((+(((((/* implicit */_Bool) arr_60 [i_17])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12))))))));
        var_48 = ((/* implicit */_Bool) (~(((arr_61 [i_17]) & (arr_61 [i_17])))));
        var_49 = (~(9223372036854775805LL));
        var_50 = ((/* implicit */unsigned char) max((var_50), (((/* implicit */unsigned char) (+(((((((arr_61 [i_17]) - (((/* implicit */long long int) ((/* implicit */int) var_4))))) + (9223372036854775807LL))) << (((((min((arr_61 [i_17]), (arr_61 [i_17]))) + (1099743803102522084LL))) - (63LL))))))))));
    }
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
    {
        arr_66 [i_18] = ((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) arr_65 [i_18] [i_18])))));
        var_51 &= ((/* implicit */signed char) max((((((/* implicit */_Bool) -35678034909767750LL)) ? (((/* implicit */int) (signed char)-54)) : (((/* implicit */int) (signed char)8)))), (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))));
    }
    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
    {
        arr_69 [i_19] = ((_Bool) -7810802127939010428LL);
        arr_70 [i_19] [i_19] = ((/* implicit */signed char) ((max((var_3), (((/* implicit */unsigned long long int) (unsigned char)64)))) & (((/* implicit */unsigned long long int) (+(arr_60 [i_19]))))));
    }
}
