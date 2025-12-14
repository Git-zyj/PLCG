/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40500
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            {
                arr_4 [i_0] [10U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(max((((/* implicit */long long int) arr_1 [i_0] [2])), (arr_3 [5LL] [i_1] [i_1])))))) ? (((arr_2 [(unsigned char)0] [i_1] [(unsigned char)0]) ? (((var_2) ^ (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) min((var_19), (arr_2 [i_0] [i_1] [(unsigned char)5]))))) - (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) arr_0 [(unsigned short)12])) : (arr_3 [i_0] [i_1] [i_1]))))))));
                arr_5 [12LL] [i_1 + 1] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_12))));
                var_20 = ((/* implicit */long long int) (~((+((+(((/* implicit */int) arr_2 [i_0] [i_0] [12LL]))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) var_4);
    var_22 = ((/* implicit */short) var_2);
}
