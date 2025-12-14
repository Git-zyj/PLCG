/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248651
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
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((long long int) (signed char)-64)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)-83)), (arr_4 [i_1])))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)118)) ? (((/* implicit */int) (signed char)-64)) : (((/* implicit */int) (signed char)61))))) : (arr_4 [i_2]))) : (max((((/* implicit */unsigned long long int) var_7)), (min((((/* implicit */unsigned long long int) var_2)), (3252771545785568786ULL)))))));
                    arr_9 [i_0] [i_1] = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7828693423607725091LL)) ? (((/* implicit */int) arr_0 [i_1] [i_2])) : (((/* implicit */int) (unsigned char)240))))), ((~(arr_3 [i_0] [i_1]))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) (short)32759))))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) var_12);
}
