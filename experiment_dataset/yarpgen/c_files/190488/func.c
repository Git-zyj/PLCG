/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190488
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
    var_15 = min(((~(((long long int) -395080827)))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_12)), ((unsigned char)118)))) ? (((/* implicit */int) (unsigned short)27090)) : ((~(((/* implicit */int) var_1))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_16 = ((/* implicit */short) ((min((var_3), (((/* implicit */unsigned long long int) arr_1 [i_0])))) - (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)30991)))))));
        arr_2 [i_0] = ((/* implicit */int) (signed char)-26);
        arr_3 [i_0] = ((/* implicit */int) ((_Bool) ((var_7) ^ (((/* implicit */unsigned int) ((/* implicit */int) max((arr_0 [i_0]), ((short)-11344))))))));
        var_17 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_0]))))) : (((((/* implicit */_Bool) -110761749979572244LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)151))) : (var_8)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)11190)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned char)118))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-106)) ? (((/* implicit */int) (signed char)-106)) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)8594)))))) : (var_3)))));
    }
    for (unsigned int i_1 = 1; i_1 < 11; i_1 += 3) 
    {
        arr_6 [i_1] [i_1 + 1] = ((/* implicit */long long int) (unsigned short)30969);
        arr_7 [(signed char)0] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_10)), (var_8)))))) ? (arr_5 [i_1] [i_1]) : (((unsigned int) max(((signed char)-106), (((/* implicit */signed char) (_Bool)1)))))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 1; i_3 < 11; i_3 += 1) 
            {
                {
                    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_6))))))) < (2147483648U))))));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (long long int i_5 = 0; i_5 < 12; i_5 += 4) 
                        {
                            {
                                var_19 = (-(((((/* implicit */_Bool) arr_10 [i_1] [i_2] [i_4] [i_5])) ? (arr_10 [i_5] [i_4] [i_1 + 1] [i_5]) : (arr_10 [i_5] [i_4] [8U] [i_5]))));
                                var_20 -= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (max((((/* implicit */unsigned int) arr_14 [i_1] [i_5])), (3669313737U))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_12), ((_Bool)1)))))))) + (((((/* implicit */_Bool) (+(1399760414)))) ? (((((/* implicit */long long int) ((/* implicit */int) var_2))) | (arr_10 [i_3] [i_4] [i_3] [i_5]))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3])))))));
                                var_21 = ((/* implicit */_Bool) (-(((((_Bool) arr_4 [i_1])) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) var_4)) ? (-395080820) : (var_14)))))));
                                var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) 2147483647U))));
                            }
                        } 
                    } 
                    var_23 -= ((/* implicit */long long int) max((((/* implicit */int) (unsigned char)137)), (395080826)));
                    var_24 = ((/* implicit */long long int) min((var_24), ((-(((((/* implicit */long long int) ((/* implicit */int) var_12))) - (arr_10 [2U] [i_3 - 1] [i_3] [2U])))))));
                }
            } 
        } 
        arr_18 [11] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) var_3))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_5 [i_1 - 1] [i_1]), (((/* implicit */unsigned int) arr_16 [0U] [0U] [0U] [0U] [i_1 - 1] [i_1 - 1] [i_1])))))))) : (var_14)));
        arr_19 [i_1] |= (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1] [(unsigned char)4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [i_1] [0ULL]))) : (2147483661U)))))));
    }
    for (unsigned char i_6 = 1; i_6 < 6; i_6 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_7 = 0; i_7 < 10; i_7 += 4) 
        {
            for (short i_8 = 0; i_8 < 10; i_8 += 2) 
            {
                for (short i_9 = 0; i_9 < 10; i_9 += 4) 
                {
                    {
                        var_25 |= ((/* implicit */int) min((((/* implicit */long long int) var_13)), (((((/* implicit */_Bool) var_8)) ? (arr_13 [1] [i_6 + 1] [i_6] [i_6 - 1] [2ULL]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_7] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_6] [i_6 + 2] [6LL] [i_6] [9U] [i_6] [i_6 + 2]))) : (3669313737U))))))));
                        arr_29 [i_6] [7] [i_6 - 1] [i_6] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_4 [i_6 + 3])) : (((/* implicit */int) var_2))))) / (((((/* implicit */_Bool) arr_21 [i_6])) ? (arr_21 [i_6 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
                        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((short) max((max((((/* implicit */long long int) var_4)), (-7136683286251592331LL))), (((/* implicit */long long int) arr_14 [i_6] [i_9]))))))));
                        var_27 = ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((arr_28 [i_7] [i_8]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_9]))))) : (((var_13) * (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_7]))))));
                    }
                } 
            } 
        } 
        arr_30 [i_6] = ((/* implicit */long long int) arr_8 [10U] [i_6 + 4] [i_6 + 3]);
        var_28 ^= (-(((/* implicit */int) arr_16 [i_6] [i_6 + 2] [i_6] [i_6] [i_6 + 3] [i_6 + 2] [i_6 + 1])));
        var_29 = ((/* implicit */unsigned int) arr_11 [10U]);
        var_30 = ((/* implicit */long long int) min((var_30), (((((var_13) == (((((/* implicit */_Bool) var_8)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))) ? (max((max((((/* implicit */long long int) arr_16 [i_6] [i_6 - 1] [i_6 + 2] [i_6] [i_6] [i_6] [i_6 + 1])), (3700472025093595144LL))), (((/* implicit */long long int) ((((/* implicit */int) var_2)) << (((((/* implicit */int) arr_15 [11U] [i_6])) - (52113)))))))) : (((/* implicit */long long int) (+((~(var_14))))))))));
    }
}
