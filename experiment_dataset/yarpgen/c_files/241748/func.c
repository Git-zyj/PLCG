/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241748
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */short) (!((!(var_5)))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (unsigned short i_3 = 3; i_3 < 9; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) var_2);
                                arr_12 [(unsigned char)7] [i_1] [i_2] [(unsigned char)7] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_8)))) ? ((~(((/* implicit */int) var_3)))) : (((/* implicit */int) ((((/* implicit */int) arr_11 [i_3 - 3] [i_3 - 3] [i_3] [i_3] [i_3 - 1] [i_0])) > (((/* implicit */int) arr_11 [i_3 - 1] [i_3 - 2] [i_3 - 1] [i_1] [i_3 - 1] [i_1])))))));
                            }
                        } 
                    } 
                } 
                arr_13 [i_0] [i_0] &= ((/* implicit */unsigned char) var_13);
                arr_14 [i_0] [1LL] = ((/* implicit */short) max((((/* implicit */int) ((unsigned char) 1696954145U))), ((~((+(arr_0 [i_1])))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) var_6))));
}
