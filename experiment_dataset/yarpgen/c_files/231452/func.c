/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231452
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
    for (long long int i_0 = 4; i_0 < 23; i_0 += 2) 
    {
        var_10 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
        arr_3 [7ULL] [i_0 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((min((arr_2 [i_0 - 1]), (((/* implicit */long long int) var_2)))), (((((/* implicit */long long int) -920224266)) + (arr_2 [i_0])))))) ? (((((_Bool) 2147483615)) ? ((~(4611686014132420608LL))) : (-4611686014132420616LL))) : ((~(((((/* implicit */_Bool) 9007199253692416ULL)) ? (-4611686014132420609LL) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))));
    }
    for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        arr_7 [i_1] &= ((/* implicit */int) ((4611686014132420608LL) - (7746275072213187649LL)));
        arr_8 [i_1] = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1610612736LL)))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26937))) : (262142ULL)))));
        var_11 = ((/* implicit */int) arr_6 [i_1] [i_1]);
        /* LoopSeq 2 */
        for (short i_2 = 4; i_2 < 10; i_2 += 2) /* same iter space */
        {
            arr_12 [i_1] [i_1] [i_1] = 9223372036854775799LL;
            var_12 = ((/* implicit */unsigned long long int) max((var_12), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_10 [i_1])) ^ (var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (+(((/* implicit */int) var_2))))))))) : (min((((/* implicit */unsigned long long int) var_1)), (arr_4 [i_2 - 4] [i_2 - 4])))))));
        }
        for (short i_3 = 4; i_3 < 10; i_3 += 2) /* same iter space */
        {
            arr_15 [i_3] = (~((~(((/* implicit */int) var_1)))));
            var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) var_1))));
        }
    }
    /* vectorizable */
    for (long long int i_4 = 2; i_4 < 14; i_4 += 2) 
    {
        var_14 += ((/* implicit */unsigned short) (-((((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1))))));
        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((unsigned long long int) arr_17 [i_4 - 1] [i_4 + 2])))));
        arr_19 [i_4 + 2] = ((/* implicit */long long int) ((var_9) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
    }
    /* LoopSeq 1 */
    for (int i_5 = 1; i_5 < 13; i_5 += 2) 
    {
        arr_23 [i_5] = (-(2037905357188436670LL));
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : ((-2147483647 - 1))))))) ? ((-(((long long int) arr_2 [i_5 + 3])))) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))));
        arr_24 [i_5] = ((((/* implicit */_Bool) (unsigned short)58587)) ? (((/* implicit */int) (unsigned short)58587)) : (((int) (!(((/* implicit */_Bool) var_4))))));
    }
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((unsigned short) (+(min((var_5), (((/* implicit */unsigned long long int) (unsigned short)26936))))))))));
}
