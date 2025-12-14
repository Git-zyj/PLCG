/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45970
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
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2)))))) ? (var_10) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_8), (((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (var_1))))) : (((((/* implicit */_Bool) var_6)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))))));
    var_15 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_12) : (var_12)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_3)))) : ((+(2402783381U))))), (((/* implicit */unsigned int) (+(-933063943))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) var_2);
                    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0])))))) ? (((unsigned long long int) (signed char)(-127 - 1))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_1)), (var_12))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 4; i_3 < 24; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 4; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_18 |= ((/* implicit */unsigned short) (+((-(max((var_11), (var_11)))))));
                                arr_13 [11] [i_0] [i_2] [13LL] [i_4] = ((((/* implicit */_Bool) min((1892183915U), (((/* implicit */unsigned int) (short)32756))))) ? (arr_3 [i_3 - 2] [i_0] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((var_11) != (((/* implicit */long long int) ((/* implicit */int) var_1))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((unsigned int) ((((/* implicit */_Bool) max((var_12), (2402783381U)))) ? (((unsigned long long int) 3560503517U)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_9)) : (var_11))))));
    var_20 -= ((/* implicit */int) var_1);
}
