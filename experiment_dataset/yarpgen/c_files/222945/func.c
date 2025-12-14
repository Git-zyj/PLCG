/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222945
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            {
                var_10 &= ((/* implicit */short) max((max((var_2), (((/* implicit */long long int) (signed char)-2)))), (max((var_4), (((/* implicit */long long int) (unsigned short)0))))));
                var_11 = ((/* implicit */unsigned int) var_8);
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 14; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_4 = 1; i_4 < 11; i_4 += 2) 
                {
                    for (int i_5 = 1; i_5 < 13; i_5 += 3) 
                    {
                        {
                            var_12 &= ((/* implicit */unsigned short) max((((/* implicit */signed char) (_Bool)1)), (min((var_3), (var_3)))));
                            var_13 = ((/* implicit */unsigned short) min(((~(((/* implicit */int) (unsigned short)0)))), (((/* implicit */int) min(((unsigned short)0), (var_8))))));
                        }
                    } 
                } 
                var_14 = (+(var_9));
            }
        } 
    } 
}
