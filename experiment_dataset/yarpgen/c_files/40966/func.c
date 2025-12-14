/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40966
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        {
                            arr_9 [i_2] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))) != (var_8))))) : (max((var_6), (941731386U)))))));
                            arr_10 [i_2] = (+(((((/* implicit */_Bool) 7200100542677632637ULL)) ? (min((11246643531031918978ULL), (((/* implicit */unsigned long long int) 33554431U)))) : (((/* implicit */unsigned long long int) -4623207530204880865LL)))));
                        }
                    } 
                } 
                arr_11 [i_1] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) min(((unsigned char)27), ((unsigned char)24))))));
            }
        } 
    } 
    var_18 = ((/* implicit */int) var_1);
}
