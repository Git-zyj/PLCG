/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38216
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
    var_11 = ((/* implicit */signed char) (unsigned char)15);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 12; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        {
                            arr_11 [i_0] [i_2] [i_2 - 1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) | (((/* implicit */int) (unsigned short)42150))))) ? (min((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (signed char)5)))), (((/* implicit */int) (signed char)23)))) : (var_10)));
                            var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [i_3])) : (((((((/* implicit */int) (signed char)-79)) + (2147483647))) >> (((/* implicit */int) ((_Bool) var_7)))))));
                        }
                    } 
                } 
                var_13 = ((/* implicit */_Bool) (unsigned short)28284);
                var_14 = min((((/* implicit */long long int) arr_0 [i_0])), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) arr_4 [i_0] [i_0] [8])) : (var_7))));
                arr_12 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) var_4)) & (((((/* implicit */int) (_Bool)0)) - (2135390874)))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) (unsigned char)0);
}
