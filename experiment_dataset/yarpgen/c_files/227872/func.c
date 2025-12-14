/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227872
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
    var_15 = ((/* implicit */long long int) var_2);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            for (short i_2 = 4; i_2 < 18; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) min((max((((35184372088831LL) >> (((var_10) + (9212268945406309795LL))))), (((/* implicit */long long int) min((-1039224623), ((-2147483647 - 1))))))), (((/* implicit */long long int) min((var_9), (arr_3 [i_0] [i_2] [i_2 + 2]))))));
                    arr_7 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_14))) ? (max((arr_4 [i_1 + 1] [i_1 + 1] [i_2 - 1]), (arr_4 [i_1 - 1] [i_1] [i_2 - 1]))) : ((-(arr_4 [i_1 - 1] [19ULL] [i_2 + 1])))));
                    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) 1245533586))) ? ((~(-467397831))) : (((/* implicit */int) ((((/* implicit */_Bool) 467397837)) || (((/* implicit */_Bool) 5597806221473264203ULL)))))));
                }
            } 
        } 
    } 
}
