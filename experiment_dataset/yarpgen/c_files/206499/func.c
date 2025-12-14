/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206499
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
    var_13 = ((/* implicit */unsigned long long int) var_2);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [i_0])) * (((/* implicit */int) arr_5 [i_0] [i_1]))))) ? (((/* implicit */int) arr_4 [(unsigned short)10] [i_0])) : (((/* implicit */int) min((arr_4 [i_0] [i_1]), (((/* implicit */signed char) arr_3 [i_0] [i_1]))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        {
                            var_15 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0])) ? (var_6) : (((/* implicit */long long int) arr_8 [i_0] [i_1] [i_1]))))) ? (((/* implicit */int) ((arr_9 [i_3]) > (arr_9 [i_3])))) : (((/* implicit */int) arr_0 [i_3])));
                            var_16 = ((/* implicit */int) arr_0 [i_1]);
                        }
                    } 
                } 
            }
        } 
    } 
}
