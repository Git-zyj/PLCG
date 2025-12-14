/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37823
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
    var_12 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */short) var_3)), ((short)32767)))) - (((int) 805306368U))))) < (4611650834055299072ULL)));
    var_13 = ((/* implicit */unsigned long long int) min((var_6), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_8)), (var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_10)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 24; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((3489660927U) * (((/* implicit */unsigned int) ((/* implicit */int) (short)0))))) % ((~(0U)))))) ? (((int) arr_0 [i_0] [i_1])) : (((/* implicit */int) var_8))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) (signed char)3)) ? (max((arr_11 [i_4]), (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) ((int) 67108864U))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)140)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)17952))))))))));
                                arr_13 [i_0] [i_4] [i_2] [i_2] [i_4] [i_2] [(_Bool)1] = ((/* implicit */_Bool) (-(((int) 4227858431U))));
                                var_16 = ((/* implicit */long long int) (short)-29403);
                                var_17 = ((/* implicit */_Bool) 17870283321406128128ULL);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
