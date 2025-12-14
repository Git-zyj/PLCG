/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214874
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    var_10 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */int) min((var_11), ((((~(var_0))) / (((/* implicit */int) arr_0 [i_1] [i_1]))))));
                                var_12 += ((/* implicit */_Bool) var_9);
                                var_13 -= ((/* implicit */long long int) ((signed char) (-(((/* implicit */int) arr_11 [i_2])))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) arr_8 [i_0]))))))));
                }
                arr_13 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) (signed char)26))) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_5 [i_1] [i_0] [i_0]))))));
                var_15 ^= ((/* implicit */signed char) var_4);
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) ((unsigned char) 12399287431295596046ULL));
}
