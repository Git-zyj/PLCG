/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195797
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
    var_18 = ((/* implicit */unsigned short) min((var_18), (var_12)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                {
                    var_19 += ((signed char) ((unsigned short) (-(((/* implicit */int) (signed char)-101)))));
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((int) ((((/* implicit */_Bool) arr_0 [i_2 + 2] [i_2 + 1])) ? (((/* implicit */int) arr_0 [i_2 - 1] [i_2 - 1])) : (((/* implicit */int) arr_5 [i_2 - 1] [i_2 + 1]))))))));
                    arr_8 [(_Bool)1] [i_1] [(_Bool)1] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_2 - 1] [i_2 - 1])) ? (((/* implicit */unsigned int) arr_7 [i_2] [i_2 - 1] [i_2 - 1])) : (4266273798U)))) ? ((((-(((/* implicit */int) (_Bool)0)))) | (((/* implicit */int) arr_5 [i_0] [i_2 - 1])))) : (min(((((_Bool)1) ? (((/* implicit */int) (unsigned short)60599)) : (((/* implicit */int) (signed char)-93)))), (((/* implicit */int) ((short) -1760599970))))));
                    var_21 = ((min((((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_1] [i_0])) | (arr_7 [i_0] [i_0] [i_0])))), (max((arr_3 [i_0] [i_0] [i_2]), (((/* implicit */long long int) (unsigned short)4935)))))) | (arr_3 [i_0] [i_1] [i_2]));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */long long int) ((unsigned short) ((unsigned short) ((short) var_17))));
    var_23 ^= ((/* implicit */short) (-(((/* implicit */int) var_3))));
    var_24 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)4935)) ? (1760599968) : (-1901224093))))));
}
