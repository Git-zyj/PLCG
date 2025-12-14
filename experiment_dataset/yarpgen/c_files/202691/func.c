/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202691
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
    var_20 &= ((/* implicit */int) var_1);
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */signed char) (-(min((arr_2 [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)(-127 - 1))) - (((/* implicit */int) (unsigned short)57713)))))))));
                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) min((((((/* implicit */_Bool) arr_5 [i_0 + 1])) || (((/* implicit */_Bool) arr_5 [i_0 - 1])))), (((((/* implicit */_Bool) arr_2 [i_0 - 2])) && (((/* implicit */_Bool) arr_2 [i_0 + 1])))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 15; i_2 += 3) 
    {
        for (unsigned short i_3 = 1; i_3 < 14; i_3 += 1) 
        {
            for (long long int i_4 = 2; i_4 < 14; i_4 += 2) 
            {
                {
                    var_23 = ((/* implicit */int) min((var_19), (((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_15))))))))));
                    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_10 [i_4 - 1] [i_4] [i_3])))) ? ((-(((/* implicit */int) arr_6 [i_2])))) : ((-(((/* implicit */int) arr_11 [i_3 + 1]))))));
                    arr_12 [i_3] [i_3] = min((((/* implicit */unsigned short) var_7)), (max(((unsigned short)62353), (((/* implicit */unsigned short) arr_11 [i_4 - 1])))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) min((var_13), (((/* implicit */unsigned long long int) 2147483643))))) ? ((~(((/* implicit */int) var_3)))) : ((~(((/* implicit */int) var_3)))))), (((/* implicit */int) max((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_8))))))))));
}
