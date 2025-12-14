/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41591
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_4)))) ? ((~(((/* implicit */int) var_1)))) : (((/* implicit */int) (_Bool)0))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4510226631996376086LL)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (unsigned short)65535))))) ? (((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) arr_5 [i_0] [i_1] [i_1])))) : ((~(((/* implicit */int) arr_3 [i_0]))))))) <= (4510226631996376076LL)));
                var_21 = ((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) arr_5 [i_0] [i_1] [i_0])));
                arr_6 [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_1]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 2; i_2 < 13; i_2 += 1) 
    {
        for (int i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            {
                arr_12 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-24320)) ? ((+(((/* implicit */int) arr_11 [i_2 + 1] [i_2 - 2])))) : (max(((~(-867856244))), (((/* implicit */int) ((-9223372036854775802LL) != (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2] [i_3]))))))))));
                arr_13 [i_2] [i_3] = ((/* implicit */long long int) ((short) arr_7 [i_2 - 1]));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) var_3);
}
