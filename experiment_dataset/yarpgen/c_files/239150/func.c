/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239150
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
    var_13 = ((/* implicit */unsigned char) (-(((var_4) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)14)) * (((/* implicit */int) var_5)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) arr_3 [14ULL])), (0ULL))))))));
                    arr_6 [i_0] [i_1] [i_0] = (~((+((~(35184372088831ULL))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0 - 1] [i_1] [i_2] [i_3] [i_4]))) : (arr_0 [i_0] [i_1])))) && (((/* implicit */_Bool) ((unsigned char) (unsigned short)16427)))));
                                arr_13 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned short) max(((+(((((/* implicit */_Bool) (unsigned char)161)) ? (14960005329846984435ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49109))))))), (((/* implicit */unsigned long long int) min((var_2), (((/* implicit */unsigned char) arr_9 [i_0] [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_4])))))));
                                var_15 = ((/* implicit */signed char) arr_4 [i_0 + 1] [i_0 + 3] [(unsigned char)11] [i_3]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
