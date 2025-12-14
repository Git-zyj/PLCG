/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19633
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
    var_12 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_4), (((/* implicit */short) var_1))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) (-2147483647 - 1))) != (var_2))) ? (((/* implicit */long long int) ((((/* implicit */int) var_4)) << (((var_0) - (1738288398U)))))) : (((((/* implicit */_Bool) 2130706432U)) ? (((/* implicit */long long int) var_11)) : (var_2)))))) : (min(((+(var_3))), (var_5)))));
    var_13 &= ((/* implicit */unsigned char) (~(((/* implicit */int) var_10))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) -1173396489)))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [12U] [i_0])), (arr_3 [i_1]))))));
                    var_15 = (!((!(((/* implicit */_Bool) 3470133002U)))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1738872153U))), (((/* implicit */unsigned int) (~(arr_5 [i_1] [i_1] [i_2] [i_3]))))));
                                var_17 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_8 [i_4] [i_3] [i_2] [i_1])))) > (min((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) / (5180130586520469870ULL)))))));
                                var_18 = ((/* implicit */int) ((-2991499197255337640LL) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)12)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
