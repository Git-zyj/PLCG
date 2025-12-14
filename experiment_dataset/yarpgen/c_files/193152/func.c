/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193152
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
    var_15 = ((/* implicit */long long int) var_12);
    var_16 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) var_1)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (signed char i_3 = 2; i_3 < 15; i_3 += 1) 
                    {
                        {
                            arr_13 [i_0] [i_0] [i_0] [i_3 + 1] = ((/* implicit */signed char) ((unsigned char) max((((/* implicit */int) arr_10 [i_0] [i_0] [i_3 + 1])), ((~(((/* implicit */int) (unsigned short)0)))))));
                            arr_14 [i_1] [i_1] [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65528))) + (402653184U)))))) ? (((var_1) - (((/* implicit */unsigned long long int) max((arr_4 [i_0] [i_0]), (((/* implicit */int) var_5))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                        }
                    } 
                } 
                arr_15 [(short)4] [i_1 + 1] = ((/* implicit */int) var_4);
            }
        } 
    } 
}
