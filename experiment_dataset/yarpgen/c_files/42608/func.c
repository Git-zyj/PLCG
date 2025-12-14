/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42608
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
    var_14 = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))));
    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))), (((((/* implicit */_Bool) var_8)) ? ((+(((/* implicit */int) var_0)))) : (((/* implicit */int) var_11)))))))));
    var_16 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) 8748479338362521676ULL)) ? (((/* implicit */unsigned long long int) 1807340550)) : (7512693022059314931ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) ? ((~(((/* implicit */int) (_Bool)0)))) : ((~(((/* implicit */int) var_6))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [(short)6] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (short)-20360))));
                arr_5 [i_0] [(_Bool)1] = ((/* implicit */_Bool) (+(8748479338362521676ULL)));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (unsigned int i_3 = 1; i_3 < 9; i_3 += 4) 
                    {
                        {
                            var_17 -= ((/* implicit */unsigned long long int) max(((+(arr_8 [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */long long int) (signed char)127))));
                            arr_12 [i_0] [(short)5] [i_2] [i_2] [i_3] = ((/* implicit */_Bool) (+((~(min((1807340569), (((/* implicit */int) (short)-32642))))))));
                            arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) (short)-15492)) > (((/* implicit */int) arr_3 [i_2]))))) < (((((/* implicit */_Bool) 8665163241973020498ULL)) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned short)29400)) : (-1807340531))) : (((/* implicit */int) (unsigned short)65535))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) (+(((/* implicit */int) var_4))));
}
