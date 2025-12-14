/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194551
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
    var_15 = ((/* implicit */_Bool) var_5);
    var_16 = ((/* implicit */_Bool) max((var_16), (var_9)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */signed char) (~(((unsigned int) arr_2 [i_0] [i_0]))));
                var_17 ^= ((/* implicit */signed char) var_11);
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    for (short i_3 = 3; i_3 < 15; i_3 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) -1589389489);
                            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (~(max((((/* implicit */unsigned int) ((signed char) arr_2 [(signed char)4] [(signed char)4]))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [14U]))) & (var_7))))))))));
                            var_20 = ((/* implicit */long long int) min(((_Bool)1), (var_12)));
                            arr_11 [i_3 + 3] [i_3 + 2] [i_0] [i_0] [8] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) (~(((/* implicit */int) var_1))))) >= (((((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_2])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_1] [i_3 + 3]))))))) ? (max((((/* implicit */int) arr_10 [i_0])), (max((((/* implicit */int) var_4)), (1589389489))))) : (((/* implicit */int) arr_6 [i_3] [i_2] [17U]))));
                            var_21 |= ((/* implicit */unsigned short) (~(((((/* implicit */int) var_6)) >> (((/* implicit */int) arr_10 [2]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) + (var_8)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : (((/* implicit */int) var_1)))));
}
