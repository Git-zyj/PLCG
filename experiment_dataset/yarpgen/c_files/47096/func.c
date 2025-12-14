/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47096
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
    var_14 = ((/* implicit */unsigned int) var_13);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 15; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 -= ((/* implicit */unsigned short) (((_Bool)1) || (((/* implicit */_Bool) (unsigned short)0))));
                                var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) var_13))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned long long int) 1942978803U);
                    var_18 = ((/* implicit */long long int) (-(min((min((((/* implicit */int) (_Bool)1)), (var_2))), (((/* implicit */int) (_Bool)1))))));
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) arr_8 [i_2] [i_0] [i_2] [i_0] [i_0] [i_0]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) & (((/* implicit */int) var_13))))) : (min((((/* implicit */unsigned long long int) max((-718651741), (((/* implicit */int) (_Bool)1))))), (var_6)))));
                }
            } 
        } 
    } 
    var_20 -= ((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) -718651730))))))));
}
