/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230787
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
    var_10 = ((/* implicit */unsigned int) var_5);
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) var_6))));
                            var_12 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) (+(((/* implicit */int) var_2)))))) - (max(((+(((/* implicit */int) var_1)))), (((int) var_9))))));
                        }
                    } 
                } 
                var_13 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_7)), (var_9)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) 4294967295U)), (-332008573718682978LL)))) : (((((/* implicit */_Bool) var_3)) ? (var_6) : (var_0)))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) ((unsigned int) (+(var_0))));
}
