/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232665
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
    var_15 = ((/* implicit */unsigned int) (((-2147483647 - 1)) % (((/* implicit */int) (((-(var_8))) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)125))))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = (+(((/* implicit */int) var_10)));
                arr_6 [i_1] [i_1] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_2 [i_0 + 2])))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) 1356292235U)) || (((/* implicit */_Bool) 1237764691U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 3951750853U))))) : (max((arr_0 [i_0]), (((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1] [i_0])))))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned int i_2 = 2; i_2 < 19; i_2 += 1) 
    {
        arr_10 [i_2] = ((/* implicit */int) (((+(3U))) * (((((/* implicit */_Bool) arr_9 [i_2 + 1])) ? (((/* implicit */unsigned int) 1391416026)) : (var_11)))));
        var_16 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 1523926966U)))) ? (((((/* implicit */_Bool) arr_9 [i_2 - 2])) ? (((/* implicit */int) (signed char)119)) : (arr_9 [i_2 - 1]))) : (((/* implicit */int) ((arr_9 [i_2 + 1]) != (arr_9 [i_2 - 2]))))));
    }
    for (signed char i_3 = 0; i_3 < 11; i_3 += 3) 
    {
        var_17 = ((/* implicit */unsigned int) max((var_17), (((((/* implicit */unsigned int) min((arr_7 [i_3]), (arr_4 [2U])))) % ((((!(((/* implicit */_Bool) 707304633)))) ? (((/* implicit */unsigned int) (-(460339786)))) : (max((((/* implicit */unsigned int) (signed char)-3)), (var_9)))))))));
        var_18 = ((/* implicit */unsigned int) max((var_18), (min((max((((/* implicit */unsigned int) var_3)), (((arr_12 [i_3] [i_3]) >> (((3514605698U) - (3514605696U))))))), (((/* implicit */unsigned int) (~(arr_2 [i_3]))))))));
    }
    for (unsigned int i_4 = 0; i_4 < 16; i_4 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_5 = 0; i_5 < 16; i_5 += 2) 
        {
            for (int i_6 = 0; i_6 < 16; i_6 += 3) 
            {
                for (unsigned int i_7 = 0; i_7 < 16; i_7 += 2) 
                {
                    {
                        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (((-2147483647 - 1)) * (((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_4] [i_4])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (2147483647) : (((/* implicit */int) (signed char)10)))))))))))));
                        var_20 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2044679374U)) || (((/* implicit */_Bool) 11U))))), (((((/* implicit */_Bool) arr_13 [i_5])) ? (arr_13 [i_4]) : (arr_13 [i_4])))));
                    }
                } 
            } 
        } 
        arr_23 [i_4] = ((/* implicit */unsigned int) var_1);
        /* LoopNest 2 */
        for (signed char i_8 = 0; i_8 < 16; i_8 += 4) 
        {
            for (signed char i_9 = 0; i_9 < 16; i_9 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_10 = 0; i_10 < 16; i_10 += 2) 
                    {
                        var_21 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) var_1)) : (919070310U)));
                        var_22 += ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (+((+(-458066557)))))) > ((~(((((/* implicit */_Bool) 657932198U)) ? (2564810081U) : (16383U)))))));
                    }
                    for (int i_11 = 0; i_11 < 16; i_11 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (int i_12 = 0; i_12 < 16; i_12 += 2) 
                        {
                            var_23 = (~((-(((/* implicit */int) arr_32 [(signed char)2] [i_4])))));
                            var_24 += ((/* implicit */unsigned int) (+((~(1431539338)))));
                            var_25 *= ((/* implicit */signed char) ((((/* implicit */int) ((min((((/* implicit */int) arr_24 [i_8] [i_12])), (987657799))) <= ((+(((/* implicit */int) arr_26 [6] [9] [6] [10]))))))) % (((/* implicit */int) var_6))));
                            arr_37 [i_4] [i_9] [i_4] [i_11] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) 4207040473U)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)31)))));
                        }
                        arr_38 [i_4] [i_8] [i_8] [4] = ((int) (+(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-76))) / (var_7)))));
                    }
                    for (signed char i_13 = 0; i_13 < 16; i_13 += 3) 
                    {
                        var_26 = ((/* implicit */signed char) min(((-(((((/* implicit */_Bool) 1841067682)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_4] [i_8] [i_4] [14]))) : (2682847996U))))), (((/* implicit */unsigned int) ((((550556363U) != (887317768U))) ? (((/* implicit */int) arr_15 [i_8] [i_8])) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)96))))))))));
                        arr_41 [i_4] [3] [i_4] [i_9] [3] [9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) -1)) && (((/* implicit */_Bool) (signed char)-87)))) ? (min((var_5), (((/* implicit */int) (signed char)(-127 - 1))))) : ((+(-1)))))) ? (((1167334648U) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2463816559U)) ? ((-2147483647 - 1)) : (((/* implicit */int) (signed char)-1))))))) : (((/* implicit */unsigned int) (-(arr_2 [i_4]))))));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_14 = 1; i_14 < 12; i_14 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (int i_15 = 0; i_15 < 16; i_15 += 2) 
                        {
                            var_27 = ((/* implicit */int) ((unsigned int) (signed char)37));
                            var_28 *= (signed char)31;
                        }
                        for (signed char i_16 = 0; i_16 < 16; i_16 += 4) 
                        {
                            var_29 = ((/* implicit */int) ((((/* implicit */_Bool) (-(474565817)))) ? (((((/* implicit */_Bool) arr_27 [i_4] [8] [i_9] [i_14])) ? (arr_21 [i_16] [14] [i_9] [14] [i_4]) : (2320449980U))) : (((/* implicit */unsigned int) (+(-1840996345))))));
                            var_30 += ((/* implicit */unsigned int) (signed char)-36);
                        }
                        arr_50 [i_4] [i_4] [i_4] = ((/* implicit */signed char) arr_8 [i_14] [i_8]);
                        arr_51 [i_4] [i_8] [(signed char)5] [i_9] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)110)) ? ((~(4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
                        arr_52 [i_4] [i_4] [i_9] [i_9] [i_14 - 1] = ((/* implicit */signed char) -1903198648);
                        var_31 = ((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_14 + 4] [i_14 + 1] [14U])) != (((/* implicit */int) (signed char)-70))));
                    }
                    for (unsigned int i_17 = 3; i_17 < 14; i_17 += 4) 
                    {
                        var_32 = ((/* implicit */unsigned int) min((((arr_35 [(signed char)12] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]) / (arr_35 [i_4] [i_8] [i_8] [i_9] [i_9] [i_17 - 1] [i_17]))), ((-(1273042837)))));
                        var_33 *= min((((/* implicit */unsigned int) (signed char)-26)), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-113))) - (((((/* implicit */unsigned int) 1346306002)) % (16383U))))));
                        var_34 = max((((signed char) var_0)), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)11)) : (((/* implicit */int) arr_15 [i_4] [i_17])))))))));
                    }
                    var_35 *= ((/* implicit */unsigned int) (signed char)-1);
                    arr_55 [i_4] [i_4] [i_4] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) -883594021)), (1715310201U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) : (((/* implicit */int) (signed char)-1)))));
                }
            } 
        } 
    }
}
