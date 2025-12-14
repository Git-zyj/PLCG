/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214896
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
    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) var_4))));
    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (+(((/* implicit */int) (!((!(((/* implicit */_Bool) var_13))))))))))));
    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) var_0))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_9 [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_1 - 1])) >= (((/* implicit */int) (short)32766)))))) : (17329237049958964734ULL)));
                    arr_10 [i_0] [i_1] [i_1] [i_0] = (!(((/* implicit */_Bool) ((arr_2 [i_0]) + (((/* implicit */unsigned long long int) (+(arr_6 [i_0] [i_2]))))))));
                    arr_11 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) max((1117507023750586877ULL), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1 - 1]))))) ? (((arr_5 [i_0] [i_1 - 1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)108))))) : (arr_5 [i_0] [i_1 + 1])));
                }
            } 
        } 
    } 
}
