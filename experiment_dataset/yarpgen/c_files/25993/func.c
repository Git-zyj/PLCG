/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25993
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
    var_13 = ((signed char) ((unsigned short) var_6));
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) && (((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) 15107161742475387821ULL)))) && (((((/* implicit */_Bool) (-2147483647 - 1))) || (((/* implicit */_Bool) var_9))))))));
    var_15 |= var_9;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned short) max((var_16), (var_12)));
                var_17 |= ((/* implicit */int) min((6704102267942682370ULL), (((((/* implicit */unsigned long long int) min((arr_2 [i_0] [i_1]), (var_2)))) / (((3339582331234163795ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (int i_4 = 2; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)56294)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)80))) : (var_9))) << (((((((/* implicit */_Bool) arr_11 [i_4 + 1] [i_3] [i_3] [i_0])) ? (((/* implicit */int) arr_1 [16] [i_1])) : (((/* implicit */int) arr_0 [i_3])))) - (54432)))))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)60370))) | (arr_5 [i_2] [i_4] [i_4 - 2] [i_4 - 2]))) : (((/* implicit */long long int) ((arr_10 [i_4 - 2] [i_4 + 1] [i_4 + 1] [i_4] [i_4] [i_4]) << (((((/* implicit */int) var_1)) - (94)))))))))));
                                arr_12 [i_4] [i_1] |= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) arr_9 [i_4] [i_4])), (((((((/* implicit */int) var_11)) == (((/* implicit */int) (unsigned char)0)))) ? (((unsigned int) var_10)) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_3])))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
