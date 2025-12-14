/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48879
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */signed char) ((((((/* implicit */int) ((signed char) ((signed char) (signed char)(-127 - 1))))) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-79)) || (((/* implicit */_Bool) var_7))))) - (1)))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (signed char i_3 = 1; i_3 < 11; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((((/* implicit */int) (signed char)-70)) / (((/* implicit */int) (signed char)(-127 - 1))))) <= (((/* implicit */int) ((((/* implicit */int) (signed char)91)) >= (((/* implicit */int) (signed char)127))))))))));
                                var_15 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) ((signed char) -1LL))) > (((/* implicit */int) ((signed char) (signed char)69)))))) / (((/* implicit */int) (signed char)127))));
                                var_16 -= ((signed char) ((((((arr_6 [5LL]) + (9223372036854775807LL))) << (((((/* implicit */int) (signed char)79)) - (79))))) | (((long long int) (signed char)127))));
                                var_17 = (signed char)127;
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */signed char) (((-9223372036854775807LL - 1LL)) / (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))));
            }
        } 
    } 
    var_19 = ((signed char) (signed char)98);
}
