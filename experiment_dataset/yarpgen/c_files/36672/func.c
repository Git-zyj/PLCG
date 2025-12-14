/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36672
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
    var_13 = ((/* implicit */int) (unsigned short)37220);
    var_14 &= ((/* implicit */signed char) (unsigned short)37206);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 3; i_2 < 15; i_2 += 1) 
                {
                    for (int i_3 = 4; i_3 < 15; i_3 += 3) 
                    {
                        {
                            var_15 |= ((/* implicit */unsigned short) ((int) ((((arr_4 [i_0] [i_2] [i_1]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : ((-(9223372036854775807LL))))));
                            var_16 = ((/* implicit */int) arr_2 [1]);
                            arr_9 [i_0] [i_0] [i_1] [i_1 - 1] [i_2 - 1] [i_3 - 4] = ((/* implicit */short) (signed char)50);
                        }
                    } 
                } 
                arr_10 [i_0] [i_0] = ((var_10) ? (min((((((/* implicit */_Bool) 7924107411710263064ULL)) ? (var_12) : (((/* implicit */int) (signed char)-91)))), (1221488717))) : (((/* implicit */int) (((!(((/* implicit */_Bool) var_11)))) && (((/* implicit */_Bool) ((unsigned short) var_10)))))));
                var_17 = ((/* implicit */int) var_3);
            }
        } 
    } 
}
