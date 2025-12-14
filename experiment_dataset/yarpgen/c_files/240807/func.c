/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240807
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            for (signed char i_2 = 4; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) var_7);
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) arr_3 [i_1 + 3]))));
                                var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3559562621U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_4 [(unsigned char)14] [9LL] [(unsigned char)12])), (var_2)))) && (((/* implicit */_Bool) 35184372086784LL)))))) : (arr_3 [i_0]));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) max((-2045142763), (((/* implicit */int) (signed char)88)))))));
}
