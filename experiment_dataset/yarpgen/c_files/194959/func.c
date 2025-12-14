/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194959
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
    var_16 = ((/* implicit */unsigned int) var_8);
    var_17 = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6)))), (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) max((max((var_0), (((/* implicit */unsigned int) 379606577)))), (((/* implicit */unsigned int) 1404110290))))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1075947549740387858LL)))))) : (var_12))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 4; i_2 < 21; i_2 += 4) 
                {
                    for (signed char i_3 = 1; i_3 < 19; i_3 += 4) 
                    {
                        {
                            var_18 *= ((/* implicit */signed char) ((unsigned char) ((arr_2 [i_2 - 3]) ^ (arr_2 [i_2 + 1]))));
                            arr_10 [i_0] [i_1] [i_2 - 2] [i_3] = ((/* implicit */unsigned char) ((int) (-(((/* implicit */int) arr_5 [i_2 - 4] [i_2 - 2] [i_2 - 2])))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_1])) >= (((/* implicit */int) var_10))))), ((~(arr_6 [i_0] [i_0] [i_0] [i_0])))))) ? (min((arr_3 [i_0]), (((/* implicit */int) arr_1 [i_1])))) : (((/* implicit */int) arr_1 [i_0])))))));
                /* LoopSeq 2 */
                for (unsigned char i_4 = 2; i_4 < 21; i_4 += 3) 
                {
                    var_20 &= ((/* implicit */signed char) (((~(((((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0] [i_0])) / (arr_2 [i_4]))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((unsigned long long int) (unsigned short)41890)) > (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_14))) % (var_7))))))))));
                    arr_13 [i_4] [i_4] [i_4] [i_4 - 1] = ((/* implicit */int) min((var_14), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_11 [i_0])))))));
                    var_21 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (arr_9 [i_4 - 2] [i_4 - 2] [i_4 + 1] [i_4 - 1]) : (((((/* implicit */_Bool) -1775782822)) ? (-1775782826) : (1775782803)))))) ? (((/* implicit */unsigned long long int) ((((-1775782822) & (1775782821))) & (((/* implicit */int) ((unsigned short) 1775782832)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (-7877530667237418122LL) : (((/* implicit */long long int) -1775782830))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)65))) : (arr_11 [i_1])))) : (((unsigned long long int) var_13))))));
                    arr_14 [i_0] [i_4] [i_4 + 1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) arr_4 [i_4 - 2]))) | (((/* implicit */int) ((((/* implicit */int) arr_5 [i_4 - 1] [i_4 + 1] [i_4 - 2])) > (((/* implicit */int) arr_5 [i_4 - 1] [i_4 - 2] [i_4 - 2])))))));
                }
                for (signed char i_5 = 3; i_5 < 21; i_5 += 4) 
                {
                    arr_18 [i_0] [i_0] [20ULL] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_11 [i_5]))) ? (((/* implicit */int) arr_4 [i_5])) : (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */int) (signed char)109)) / ((-2147483647 - 1))))))) : (max((5541416071110187816ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)1)) : (arr_9 [i_0] [i_1] [i_0] [i_1]))))))));
                    arr_19 [i_5] [i_1] = arr_16 [i_0] [i_0] [i_5];
                    /* LoopNest 2 */
                    for (long long int i_6 = 1; i_6 < 21; i_6 += 4) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 3) 
                        {
                            {
                                arr_27 [i_0] [i_1] [i_5 - 2] [i_6] [i_7] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_6] [i_6] [i_6 + 1] [i_6 - 1])) ? (((arr_17 [i_5] [i_1] [i_5] [2LL]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0] [i_1] [i_0] [i_5] [i_7]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) arr_7 [i_6] [i_6] [i_0]))))))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (-1775782830) : (((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]))))), (arr_2 [i_7]))) : (((/* implicit */unsigned long long int) ((((var_3) ^ (((/* implicit */long long int) 1775782832)))) & (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_7] [i_5] [i_5 - 2] [i_5] [i_0]))))))));
                                arr_28 [i_0] [i_1] [i_5] [i_5] [i_7] = ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned char) arr_6 [i_0] [(unsigned char)18] [i_5 - 1] [i_6 + 1])))));
                                arr_29 [i_5] = ((/* implicit */short) max(((~(-1775782805))), (min((((((/* implicit */_Bool) (unsigned short)7)) ? (((/* implicit */int) arr_0 [i_6])) : (-1775782822))), (arr_3 [i_6 + 1])))));
                                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) arr_0 [i_0]))));
                            }
                        } 
                    } 
                    var_23 -= ((/* implicit */unsigned short) ((arr_2 [i_1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (((~((-2147483647 - 1)))) == (((/* implicit */int) ((signed char) 0ULL)))))))));
                }
            }
        } 
    } 
}
