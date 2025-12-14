/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235541
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
    var_19 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((var_0) - (((/* implicit */int) var_1))))), (min((((/* implicit */long long int) (+(((/* implicit */int) var_6))))), (min((var_12), (((/* implicit */long long int) var_13))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1] [(short)12] = ((/* implicit */_Bool) min(((~(((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))), (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_1 [i_0 + 2])))))));
                var_20 += ((/* implicit */unsigned long long int) ((4482777994804953054LL) / (min((arr_2 [i_1 + 2] [i_0 + 2]), (arr_2 [i_1 - 1] [i_0 + 2])))));
                arr_7 [i_1] [i_1] = ((/* implicit */short) (-(arr_1 [i_1])));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) min((min((((/* implicit */long long int) (short)13328)), (-4482777994804953055LL))), (((/* implicit */long long int) (~(((/* implicit */int) arr_10 [i_1])))))));
                                arr_19 [i_1] [i_2] [i_3] = ((/* implicit */long long int) min((((((/* implicit */long long int) ((/* implicit */int) min((arr_12 [i_0 - 1] [12LL] [i_2] [i_1] [i_4]), (((/* implicit */unsigned char) var_17)))))) < (var_12))), (var_17)));
                                var_22 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_1]))))) ? (arr_4 [i_0 + 2] [i_0]) : (-4482777994804953054LL))) >> (((((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1]))) * (arr_15 [i_0] [i_1] [i_1] [i_3] [i_4]))) / (arr_0 [i_0 - 1])))));
                                arr_20 [i_0] [i_0] [i_2] [10LL] |= ((/* implicit */long long int) (-(min((((/* implicit */unsigned int) (unsigned short)9745)), (arr_18 [i_1 - 2] [i_1 - 1] [i_1 + 2] [i_1 + 3] [i_1 - 1] [i_1 - 2])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */int) (unsigned short)9745);
}
