/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194767
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
    var_14 = (_Bool)1;
    var_15 = ((/* implicit */long long int) (!((!(((_Bool) var_2))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [6LL] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) -9LL)) ? (var_6) : (((/* implicit */long long int) var_2))))) ? (max((((/* implicit */unsigned int) var_8)), (965317430U))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_7 [i_2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? ((((!(((/* implicit */_Bool) 3075326519U)))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_1)))) : (arr_5 [i_0] [i_1] [i_2]))) : (((((_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2]))) : (((long long int) var_0))))));
                    arr_8 [i_0] [i_2] = ((/* implicit */long long int) arr_0 [i_0]);
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_1 [2U]))) / (((/* implicit */long long int) var_12))))) ? (7221475319853392920LL) : (((/* implicit */long long int) ((unsigned int) ((_Bool) arr_3 [i_0]))))));
                }
            } 
        } 
        var_17 = ((/* implicit */_Bool) min((((/* implicit */long long int) (!((!(var_7)))))), (-7221475319853392915LL)));
        var_18 = ((/* implicit */unsigned int) 4119436586833365068LL);
    }
}
