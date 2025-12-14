/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193225
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
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (long long int i_4 = 3; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_12 |= ((/* implicit */unsigned long long int) (+(((arr_11 [i_4 + 2] [i_4 - 1] [i_1 + 1] [i_0 + 1]) - (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (var_0)))))))));
                                var_13 ^= ((/* implicit */short) arr_5 [i_0] [i_0] [i_3]);
                            }
                        } 
                    } 
                } 
                arr_12 [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) (signed char)-9)) ? (3918602441U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-9))))))), (var_0)));
                arr_13 [i_0] [i_1] = ((/* implicit */unsigned int) (signed char)77);
                /* LoopSeq 1 */
                for (short i_5 = 2; i_5 < 11; i_5 += 3) 
                {
                    /* LoopSeq 2 */
                    for (short i_6 = 0; i_6 < 13; i_6 += 3) 
                    {
                        var_14 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_5 + 2] [i_5 + 1])) % (((/* implicit */int) arr_4 [i_5 + 2] [i_5 + 2]))))) ? (((/* implicit */int) var_10)) : (arr_6 [i_0] [i_0] [i_0] [i_6])));
                        var_15 = ((_Bool) ((signed char) arr_3 [i_0 - 2] [i_1 + 2] [i_1 - 3]));
                        arr_18 [i_0] [i_1] [i_5] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_3 [i_0 - 2] [i_1 - 2] [i_5 + 1])))) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0])) : ((-((~(arr_6 [i_6] [i_5] [i_0] [i_0])))))));
                    }
                    for (short i_7 = 4; i_7 < 11; i_7 += 2) 
                    {
                        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) arr_8 [i_0] [i_0 - 1] [i_0 - 1] [i_0]))) ? (((((/* implicit */int) arr_16 [i_0] [i_0] [i_0 - 2] [i_0] [i_0])) - (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0])))) : (min((((/* implicit */int) arr_8 [i_0] [i_0] [i_5] [i_5])), ((-(var_6))))))))));
                        arr_22 [i_7] [i_7] [i_0] [i_7] [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) arr_10 [i_0 - 2] [i_1 - 2] [i_0 - 2] [i_7 - 2]))) ? ((-(((/* implicit */int) arr_8 [i_0 - 1] [i_1 - 1] [i_5] [i_7 - 4])))) : ((~(((/* implicit */int) arr_8 [i_0 - 1] [i_1 + 2] [i_1] [i_7 - 3]))))));
                        arr_23 [i_0] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_20 [i_7 - 2] [i_7 + 1] [i_7 - 1] [i_7 - 1] [i_7])))) ? (((((/* implicit */_Bool) arr_20 [i_7 + 1] [i_7 - 1] [i_7 - 2] [i_7 - 2] [i_7])) ? (((/* implicit */int) arr_19 [i_7 + 1] [i_7 - 2] [i_7 - 2] [i_7 + 1])) : (((/* implicit */int) arr_20 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7])))) : (((/* implicit */int) min((arr_20 [i_7 + 2] [i_7 + 2] [i_7 - 1] [i_7] [i_7]), (arr_20 [i_7 + 1] [i_7 - 4] [i_7 - 2] [i_7] [i_7 - 2]))))));
                    }
                    arr_24 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */_Bool) arr_6 [i_5] [i_1] [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 13; i_8 += 1) 
                    {
                        for (short i_9 = 3; i_9 < 12; i_9 += 4) 
                        {
                            {
                                var_17 -= ((/* implicit */unsigned short) var_4);
                                arr_31 [i_5] [i_1] [i_5] [i_8] [i_5] [i_5] = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) arr_9 [i_0 + 1] [i_1 - 2] [i_9 - 2])))), (((((/* implicit */_Bool) ((long long int) arr_30 [i_0] [i_1] [i_5] [i_5] [i_1]))) ? ((-(((/* implicit */int) arr_19 [i_8] [i_8] [i_8] [i_8])))) : (((/* implicit */int) ((7484887514057110725LL) != (((/* implicit */long long int) ((/* implicit */int) var_11))))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_18 *= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */short) var_5)), (((short) var_10))))) ? (max(((+(((/* implicit */int) var_10)))), (((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) max((246361436U), (((/* implicit */unsigned int) var_5))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-3831)) : (((/* implicit */int) var_4)))) : (min((((/* implicit */int) var_11)), (1187777606)))))));
}
