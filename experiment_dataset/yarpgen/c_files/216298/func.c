/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216298
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
    var_10 ^= ((/* implicit */long long int) ((signed char) (short)(-32767 - 1)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)(-32767 - 1))), (arr_1 [i_0])))) ? ((~(arr_4 [i_0]))) : (min((((((/* implicit */_Bool) var_5)) ? (arr_1 [i_1]) : (arr_1 [i_0]))), (((/* implicit */unsigned int) var_4))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 3; i_2 < 13; i_2 += 3) 
                {
                    var_12 = ((/* implicit */_Bool) (short)(-32767 - 1));
                    var_13 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_6 [i_0] [i_1] [(signed char)15])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)(-127 - 1))))) <= (((/* implicit */int) (unsigned short)14015))));
                    arr_8 [i_0] [i_0] [(signed char)7] [i_2] = ((/* implicit */unsigned int) (signed char)(-127 - 1));
                }
            }
        } 
    } 
    var_14 = ((/* implicit */int) var_9);
}
