/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225026
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
    var_10 = min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned short) var_3)))))), (max((((/* implicit */unsigned int) (~(((/* implicit */int) var_9))))), ((+(2095104U))))));
    var_11 = ((/* implicit */unsigned short) var_8);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_4 [(_Bool)1] [(_Bool)1] [(_Bool)1]), (arr_4 [i_0] [i_1] [i_2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))) ? (min((arr_5 [i_0] [(unsigned short)4] [i_1] [i_2]), (var_7))) : (((((/* implicit */_Bool) arr_3 [i_0] [16ULL] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(unsigned short)18]))) : (4220142609U)))))));
                    var_13 = ((/* implicit */int) (unsigned short)19850);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))), (var_2))))));
    var_15 = ((/* implicit */short) (-(var_7)));
}
