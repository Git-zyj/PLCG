/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212696
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
    var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))));
    var_20 = ((/* implicit */_Bool) var_10);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) (((_Bool)1) ? (arr_4 [i_0]) : (((/* implicit */int) arr_1 [i_0])))))) % (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1)))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 2; i_2 < 22; i_2 += 1) 
                {
                    for (unsigned int i_3 = 1; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_1] [i_1] [i_0] [i_4] [i_1] = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [(signed char)16] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((unsigned int) (unsigned short)54400)) : (arr_7 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2]))), (max((((/* implicit */unsigned int) (unsigned char)182)), (163207852U)))));
                                var_22 = ((/* implicit */_Bool) max((3887434095U), (163207859U)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
