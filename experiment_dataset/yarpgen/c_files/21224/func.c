/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21224
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
    var_16 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)0)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)61642)) ? (((/* implicit */int) (unsigned short)11103)) : (((/* implicit */int) (unsigned short)6979))))) ? (((/* implicit */long long int) var_3)) : (655686383793544019LL)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_17 &= ((/* implicit */unsigned short) ((arr_5 [i_0] [i_1]) > (arr_5 [i_0] [i_0])));
                    var_18 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_0 [i_0])))) ? (((/* implicit */long long int) 2147483647)) : (max((((/* implicit */long long int) ((unsigned int) arr_6 [i_0] [i_1] [i_2]))), (max((var_1), (((/* implicit */long long int) arr_0 [i_0]))))))));
                }
            } 
        } 
    } 
}
