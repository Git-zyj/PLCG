/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19364
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
    for (unsigned long long int i_0 = 4; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 4; i_1 < 15; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned char) var_12);
                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((unsigned short) ((unsigned char) (_Bool)0))))));
                arr_4 [i_1] = ((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 - 1]);
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((_Bool) ((long long int) (~(var_2)))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) var_17);
    var_23 = ((/* implicit */signed char) (~(-6796529845393114796LL)));
    var_24 = ((/* implicit */unsigned long long int) ((unsigned short) var_10));
    /* LoopNest 3 */
    for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        for (unsigned short i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) 
            {
                {
                    var_25 = ((/* implicit */unsigned char) 1940118871);
                    /* LoopNest 2 */
                    for (long long int i_5 = 1; i_5 < 19; i_5 += 2) 
                    {
                        for (short i_6 = 2; i_6 < 18; i_6 += 2) 
                        {
                            {
                                arr_18 [i_2] [i_2] [i_2] [i_5] [i_5] = -1940118872;
                                var_26 = -1940118871;
                            }
                        } 
                    } 
                    arr_19 [i_2] [i_2] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_7 [i_4] [6LL])) & (((/* implicit */int) (unsigned char)185)))) - (((/* implicit */int) (short)-18221))))) ? ((-(((/* implicit */int) (short)18222)))) : (max((1940118871), ((-2147483647 - 1))))));
                }
            } 
        } 
    } 
}
