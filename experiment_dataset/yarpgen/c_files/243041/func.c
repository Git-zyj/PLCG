/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243041
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        var_10 = ((/* implicit */_Bool) (~((((!(var_9))) ? (var_8) : (((/* implicit */long long int) (((_Bool)1) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) -3)))))))));
        arr_3 [i_0] = ((/* implicit */int) var_3);
        var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) arr_1 [i_0]))));
    }
    for (unsigned short i_1 = 1; i_1 < 15; i_1 += 3) 
    {
        var_12 -= ((/* implicit */signed char) arr_1 [i_1 + 3]);
        arr_6 [i_1] [i_1] |= arr_2 [i_1];
    }
    /* LoopSeq 3 */
    for (short i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        arr_10 [i_2] = ((/* implicit */short) arr_9 [i_2]);
        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (max((((((/* implicit */long long int) arr_4 [(short)17])) / (arr_7 [i_2]))), (((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_2]))))))) : (min((arr_8 [i_2] [i_2]), (((/* implicit */long long int) (signed char)127))))));
    }
    for (signed char i_3 = 0; i_3 < 17; i_3 += 1) 
    {
        arr_15 [i_3] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (0U)));
        var_14 = ((/* implicit */unsigned int) (((+(((var_9) ? (-6951363125649859918LL) : (7865074401472261950LL))))) > (((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */int) arr_1 [i_3]))))) % (((long long int) -1195787799))))));
    }
    for (short i_4 = 2; i_4 < 14; i_4 += 3) 
    {
        var_15 ^= ((/* implicit */unsigned long long int) arr_14 [i_4 - 1]);
        var_16 = ((/* implicit */long long int) min(((unsigned short)3), (((/* implicit */unsigned short) (short)0))));
        /* LoopSeq 1 */
        for (unsigned short i_5 = 0; i_5 < 16; i_5 += 3) 
        {
            arr_20 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_1 [i_4]))));
            /* LoopSeq 1 */
            for (short i_6 = 0; i_6 < 16; i_6 += 3) 
            {
                var_17 |= ((/* implicit */long long int) var_3);
                var_18 = ((/* implicit */int) max((var_18), (((((/* implicit */int) (_Bool)0)) << (((((8589930496LL) << (((((/* implicit */int) min(((signed char)-14), (((/* implicit */signed char) (_Bool)1))))) + (26))))) - (35184355311601LL)))))));
            }
            arr_24 [i_4] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) arr_22 [i_4 + 2])) * (((((/* implicit */_Bool) arr_18 [i_4 - 2] [i_4] [i_4 + 1])) ? (((/* implicit */int) arr_22 [i_4 - 2])) : (((/* implicit */int) (_Bool)1))))));
        }
    }
}
