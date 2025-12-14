/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220578
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
    var_15 = ((/* implicit */unsigned int) (-(min((((/* implicit */int) min(((_Bool)0), ((_Bool)1)))), (((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1))))))));
    var_16 = ((/* implicit */signed char) var_2);
    var_17 = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) min((var_14), (((/* implicit */unsigned long long int) var_5))))) ? (((/* implicit */int) max((var_3), (var_4)))) : (((/* implicit */int) var_4)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        {
                            arr_14 [i_0] [i_1] [i_2] [i_0] [(unsigned char)0] = ((/* implicit */unsigned short) ((219873369) != (((/* implicit */int) (_Bool)0))));
                            var_18 = ((((/* implicit */_Bool) (~((-(((/* implicit */int) (_Bool)1))))))) ? ((~(min((((/* implicit */unsigned long long int) (_Bool)1)), (var_10))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)0))))));
                            var_19 -= ((/* implicit */_Bool) ((((arr_8 [i_0] [i_0] [i_3] [i_3]) + (2147483647))) << (((((((/* implicit */_Bool) min((var_7), (((/* implicit */int) (short)9640))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)37))))) : (((unsigned long long int) arr_3 [i_0])))) - (37ULL)))));
                            var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min(((unsigned char)37), (((/* implicit */unsigned char) (_Bool)0)))))));
                        }
                    } 
                } 
                arr_15 [i_0] [i_1] [i_0] = ((/* implicit */signed char) min((((/* implicit */long long int) var_12)), (min((max((((/* implicit */long long int) (_Bool)1)), (-8782267083852042599LL))), (((/* implicit */long long int) var_4))))));
            }
        } 
    } 
}
