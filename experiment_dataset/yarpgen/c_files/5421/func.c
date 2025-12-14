/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5421
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_6)) ? (arr_3 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))), (((/* implicit */unsigned long long int) (short)-18120))))) ? ((-(((/* implicit */int) arr_5 [i_1 - 1])))) : (max((((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_6))))), (((((/* implicit */int) var_6)) / (((/* implicit */int) var_5))))))));
                    arr_12 [(unsigned short)8] [i_0] [i_0] = ((/* implicit */int) var_7);
                    var_19 = ((/* implicit */unsigned long long int) (short)-27183);
                    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) (~(-5984478256302114678LL))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) -5984478256302114678LL);
}
