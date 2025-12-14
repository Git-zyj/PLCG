/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227444
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) max(((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (13U))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)27)) - (((/* implicit */int) (signed char)115))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            {
                arr_7 [i_1] = min((((/* implicit */long long int) (unsigned char)236)), (((long long int) arr_3 [i_0] [i_0] [i_0])));
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 23; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            var_11 -= ((/* implicit */unsigned char) arr_0 [i_0 + 1]);
                            var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) min(((unsigned char)39), (((/* implicit */unsigned char) (signed char)-85))))) : (((/* implicit */int) (unsigned char)209))));
                            arr_15 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */int) (_Bool)1)), (2147483647)));
                        }
                    } 
                } 
                var_13 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967288U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (unsigned char)39)) : (((/* implicit */int) ((signed char) (unsigned char)28))))) - (((/* implicit */int) arr_5 [i_0] [i_0] [i_1]))));
                var_14 ^= ((/* implicit */_Bool) min((((signed char) max((arr_11 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) 2806360602U))))), (((/* implicit */signed char) (_Bool)1))));
                var_15 = ((/* implicit */_Bool) max((var_15), (arr_12 [i_0] [i_0] [i_1])));
            }
        } 
    } 
}
