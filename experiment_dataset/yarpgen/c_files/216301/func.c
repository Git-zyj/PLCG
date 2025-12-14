/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216301
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
    var_13 = ((/* implicit */unsigned int) var_8);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 8; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */long long int) ((-8691500551446239635LL) != (((/* implicit */long long int) 2068576514))));
                    var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 8691500551446239625LL)) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-99)) || (((/* implicit */_Bool) (short)-14508))))) : (-2068576505))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
    {
        for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            {
                arr_11 [i_3] [i_4] = ((/* implicit */unsigned short) (-(max((((/* implicit */long long int) (~(arr_8 [i_3])))), (var_2)))));
                var_16 = ((/* implicit */long long int) (~((-(arr_8 [i_3])))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) var_11);
}
