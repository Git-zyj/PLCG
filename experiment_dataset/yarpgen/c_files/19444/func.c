/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19444
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
    var_19 = ((/* implicit */unsigned int) ((((((unsigned long long int) var_2)) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)248))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_18))))) : (((/* implicit */int) (unsigned char)255))));
    var_20 = ((/* implicit */long long int) ((((int) var_1)) ^ ((~(var_13)))));
    var_21 -= max((((/* implicit */unsigned int) var_16)), (((((/* implicit */_Bool) ((-138570731203758144LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_12)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)163)) : (((/* implicit */int) var_16))))) : (max((((/* implicit */unsigned int) var_14)), (691294912U))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 21; i_1 += 2) 
        {
            {
                arr_4 [i_0 + 2] [i_1] [7LL] = ((/* implicit */unsigned int) (~((((+(((/* implicit */int) (_Bool)1)))) / ((~(((/* implicit */int) arr_0 [i_0]))))))));
                arr_5 [i_1] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((long long int) var_11))))) ? (((((/* implicit */int) arr_2 [i_1 + 2] [i_0 - 1])) | (((/* implicit */int) (short)-7367)))) : (((/* implicit */int) min((arr_1 [i_0 - 2]), (arr_1 [i_0 + 2]))))));
                var_22 = ((/* implicit */signed char) ((int) max((((((/* implicit */_Bool) (unsigned char)152)) ? (((/* implicit */unsigned long long int) var_3)) : (1844358518897794029ULL))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)129))) - (3370969749139203927ULL))))));
            }
        } 
    } 
}
