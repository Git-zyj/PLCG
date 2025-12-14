/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227107
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            for (int i_2 = 3; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_9 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)11791)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0]))))), (((/* implicit */unsigned long long int) (unsigned short)32558))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((/* implicit */int) (!(arr_4 [i_0] [i_2 + 1] [i_1 + 1]))))));
                    arr_10 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (((+(arr_6 [i_0] [i_0] [i_0] [i_0]))) == (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) + (arr_2 [i_0] [i_0] [i_2]))))))) + (((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_0]))) : (var_8))) != (((/* implicit */unsigned int) ((((/* implicit */int) var_17)) + (((/* implicit */int) var_10))))))))));
                    arr_11 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) min(((_Bool)1), ((!(((/* implicit */_Bool) (unsigned char)221)))))))));
    var_20 = ((/* implicit */int) var_5);
    var_21 = ((/* implicit */unsigned int) var_15);
}
