/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2642
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
    var_12 = ((((/* implicit */int) (unsigned char)198)) ^ (((/* implicit */int) (unsigned short)58411)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) min(((-((+(((/* implicit */int) var_9)))))), (((/* implicit */int) var_4)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)64000))));
                                arr_16 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) var_9)) > (((/* implicit */int) ((((/* implicit */int) (unsigned char)57)) == (((/* implicit */int) arr_14 [i_2] [i_0] [i_0])))))));
                                arr_17 [i_4] [i_0] [i_2] [i_0] [i_0] = (-((-((-(-871780967))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((~(((/* implicit */int) var_6)))), (((/* implicit */int) var_0))))) ? (max((-8759221982689468570LL), (((/* implicit */long long int) (unsigned char)198)))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned char) ((max((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))), (((((var_8) + (2147483647))) << (((var_5) - (6917696024315468410ULL))))))) / ((~(((/* implicit */int) (unsigned char)77))))));
}
