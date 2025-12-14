/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191022
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
    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)13)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) var_2))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */short) ((4968178735957387695LL) == (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))));
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            arr_13 [i_0] [i_0] [i_1] [i_0] [i_0] = min((min((var_0), (var_8))), ((+(((((/* implicit */_Bool) arr_4 [i_0] [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : ((-9223372036854775807LL - 1LL)))))));
                            var_15 = ((/* implicit */long long int) (-((-((+(var_10)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_4 = 2; i_4 < 16; i_4 += 3) 
                {
                    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        {
                            arr_20 [i_0] = ((/* implicit */short) (-(((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -4968178735957387696LL)))))) + (arr_19 [i_0 - 2] [i_4 - 2] [i_4])))));
                            var_16 = (short)32611;
                        }
                    } 
                } 
            }
        } 
    } 
}
