/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228941
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */short) arr_0 [i_0]);
                arr_5 [i_0] [i_0] = var_0;
                var_16 -= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) * (((2147483648U) & (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-16478))) : (2254702970U)))))));
                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) var_11))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 14; i_2 += 3) 
    {
        for (signed char i_3 = 4; i_3 < 10; i_3 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_4 = 1; i_4 < 12; i_4 += 2) 
                {
                    for (long long int i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned char)167)) ? (var_8) : (((/* implicit */int) var_1)))), (((/* implicit */int) var_2))));
                            var_19 = var_0;
                            var_20 = ((/* implicit */signed char) (+((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)(-127 - 1))), (arr_2 [i_2]))))) : (17698745365242466158ULL)))));
                        }
                    } 
                } 
                arr_15 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) (-(((/* implicit */int) (short)4094))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) var_8);
}
