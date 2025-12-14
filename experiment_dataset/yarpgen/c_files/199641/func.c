/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199641
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 16; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) arr_6 [i_0]))));
                                var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) (signed char)-87))));
                                var_13 = ((/* implicit */signed char) ((unsigned char) ((arr_4 [i_1 - 2] [i_4] [i_4 + 1]) <= (((/* implicit */long long int) (~(arr_8 [i_4] [i_1 + 1] [i_1 + 1] [i_0])))))));
                            }
                        } 
                    } 
                    var_14 += ((/* implicit */long long int) arr_5 [i_2] [(short)11] [i_1] [i_0]);
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)87)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)0))) : (8796093021696LL)));
                    var_16 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_0 [i_1 + 2] [i_1 + 1])) ? (arr_0 [i_1 - 1] [i_1 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */long long int) max((var_17), (((((/* implicit */_Bool) min((((/* implicit */long long int) ((unsigned int) var_8))), (((long long int) var_6))))) ? (var_3) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)49152)) ? (558209636) : (((/* implicit */int) (unsigned short)65534)))))))));
}
