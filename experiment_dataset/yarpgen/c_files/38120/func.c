/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38120
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
    var_11 = ((/* implicit */unsigned int) -3);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)61))))) ? ((+((-(((/* implicit */int) var_1)))))) : (((/* implicit */int) var_7))));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 16; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 14; i_3 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */long long int) arr_10 [i_3 + 3]);
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_3] [11U] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (unsigned char)7)) ? (0ULL) : (((/* implicit */unsigned long long int) var_3))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) -9223372036854775805LL)) ? ((-(var_2))) : (((/* implicit */unsigned long long int) -8704499898543132016LL))))));
    var_14 = ((/* implicit */unsigned int) (signed char)101);
}
