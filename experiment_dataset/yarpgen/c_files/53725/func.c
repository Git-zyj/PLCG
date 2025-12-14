/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53725
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                {
                    var_20 ^= ((/* implicit */signed char) (+((+(max((var_15), (((/* implicit */unsigned int) var_8))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) (unsigned char)14))) ? (((6265980684146285365LL) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_2] [i_2 - 1] [i_2 + 1])) >= (((/* implicit */int) var_6))))))));
                                arr_12 [i_1] [i_2] [i_1] [i_4] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((arr_0 [i_1] [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))))) ? ((~(var_16))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_4])) < (((/* implicit */int) var_19))))))))), (((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)24705)), (var_8)))) ? (-9122336363386246771LL) : (max((-139104143443946790LL), (((/* implicit */long long int) (unsigned char)252))))))));
                                arr_13 [i_0] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned char) var_0);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) (unsigned char)237)))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((signed char) var_17)))));
}
