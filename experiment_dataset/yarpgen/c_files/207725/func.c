/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207725
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
    for (int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (var_19) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 2]))))))));
                    arr_8 [i_0 - 1] [i_1] = ((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_0 + 1]);
                    arr_9 [i_0 - 1] [i_0] [i_1] [i_2] = ((/* implicit */short) (+(((((/* implicit */_Bool) ((signed char) arr_5 [i_0 + 1]))) ? (arr_6 [i_0 - 1] [i_1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
                    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */unsigned long long int) 1995965357U)) < ((-(((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) -2147483638)) : (var_10))))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) var_4))));
    var_23 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_11))))), (3849995892U)));
}
