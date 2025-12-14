/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233105
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
    var_12 &= ((/* implicit */unsigned short) var_2);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */_Bool) max((arr_0 [i_1]), (((/* implicit */short) (signed char)68))))) && (((/* implicit */_Bool) var_10))))), (((((/* implicit */_Bool) 2145981983U)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))))))));
                    arr_10 [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_1 [i_1]), (arr_4 [i_0] [i_2])))) ? (((/* implicit */int) max((arr_4 [i_0] [i_2]), (arr_1 [i_0])))) : ((~(((/* implicit */int) arr_4 [i_2] [i_1]))))));
                    var_14 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0]))) != (((var_5) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [(unsigned char)9] [i_2]))) : (arr_7 [i_2]))))) ? (((/* implicit */long long int) min(((~(((/* implicit */int) (signed char)-63)))), (((/* implicit */int) arr_8 [(short)20] [i_1] [i_1] [(_Bool)0]))))) : (((long long int) ((((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_1] [i_0])) || (var_5))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((unsigned long long int) var_8)))));
}
