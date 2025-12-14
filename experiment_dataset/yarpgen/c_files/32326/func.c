/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32326
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
    var_18 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) var_4)) ? ((~(((/* implicit */int) var_16)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 15273405389257311522ULL))))))) + (2147483647))) << (((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (1977210551739485288LL))) & (((/* implicit */long long int) ((((/* implicit */int) (short)-1)) | (((/* implicit */int) var_14)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 3; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) var_6);
                            arr_10 [i_0] [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) max((((/* implicit */int) (unsigned char)65)), ((~(arr_8 [i_2 - 3] [i_2 + 1] [i_2 - 3] [i_2 + 1] [i_2 - 3])))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) var_11))));
            }
        } 
    } 
}
