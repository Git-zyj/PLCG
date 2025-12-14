/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23018
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
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] &= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned long long int) var_5))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) (short)16383)) ? (((/* implicit */long long int) var_0)) : (arr_4 [i_1]))))), (((/* implicit */long long int) arr_0 [i_1]))));
                arr_6 [18U] [17U] |= ((/* implicit */unsigned int) ((((/* implicit */long long int) var_1)) < (((long long int) ((((/* implicit */_Bool) (unsigned short)5352)) ? ((-2147483647 - 1)) : (((/* implicit */int) var_2)))))));
                var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 9050422042170329395LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((((274877906943ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)3))))) / (((/* implicit */unsigned long long int) var_0))))));
            }
        } 
    } 
    var_17 -= ((/* implicit */int) (+(9050422042170329395LL)));
    /* LoopSeq 3 */
    for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        var_18 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2])) ? (arr_0 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
        var_19 = var_11;
        var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) min((((/* implicit */short) (signed char)1)), ((short)-10039))))));
        var_21 *= ((/* implicit */short) max((((((arr_9 [i_2]) + (9223372036854775807LL))) << (((/* implicit */int) arr_8 [i_2])))), (((/* implicit */long long int) 2159653337U))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 1) 
    {
        arr_12 [i_3] [i_3] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_3])) ? (((/* implicit */int) ((arr_10 [i_3] [i_3]) == (((/* implicit */unsigned long long int) 4291659603U))))) : (((/* implicit */int) var_13))))), (((((((/* implicit */_Bool) -1341774913)) ? (arr_10 [i_3] [i_3]) : (((/* implicit */unsigned long long int) 5687583890531455209LL)))) / (arr_11 [i_3])))));
        arr_13 [i_3] = ((/* implicit */short) arr_10 [2LL] [i_3]);
    }
    for (unsigned int i_4 = 0; i_4 < 18; i_4 += 2) 
    {
        var_22 = ((/* implicit */_Bool) (+(arr_0 [i_4])));
        arr_18 [i_4] = ((/* implicit */long long int) ((unsigned short) max((((/* implicit */unsigned int) 1341774912)), (3775281535U))));
        arr_19 [i_4] [i_4] = ((/* implicit */unsigned int) ((((long long int) (unsigned short)7)) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10041))) != (min((((/* implicit */unsigned long long int) var_9)), (18446744073709551615ULL)))))))));
        arr_20 [i_4] = ((short) ((((/* implicit */_Bool) arr_11 [i_4])) ? (arr_11 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
    }
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))));
}
