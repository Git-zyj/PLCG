/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2121
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
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) * (var_6)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    {
                        var_12 = ((/* implicit */short) ((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_2 [i_0])))) ? (((/* implicit */int) (!(var_8)))) : (((/* implicit */int) ((unsigned short) var_5)))));
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_1 - 2] [i_3] [i_3])) ? (((/* implicit */int) arr_6 [i_1 + 2])) : (((/* implicit */int) arr_6 [i_1 - 1]))));
                    }
                } 
            } 
        } 
        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) -1699754822)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_4 [i_0])));
    }
    var_14 = ((/* implicit */unsigned long long int) min((((((((/* implicit */int) var_3)) & (((/* implicit */int) (short)-2988)))) | (((/* implicit */int) min((((/* implicit */short) var_8)), (var_4)))))), (((/* implicit */int) var_5))));
}
