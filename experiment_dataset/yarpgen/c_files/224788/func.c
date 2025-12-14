/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224788
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
    var_12 = ((/* implicit */short) (-(var_10)));
    var_13 = ((/* implicit */unsigned char) min((var_8), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)45892)) ? (var_6) : (var_4))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_14 += ((/* implicit */short) min((((/* implicit */int) ((arr_5 [i_0 + 1] [i_0] [i_0 - 1] [i_0 - 1]) && (((/* implicit */_Bool) var_5))))), (((((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_7 [i_0 + 1] [(_Bool)1])))) / (arr_1 [i_2])))));
                    arr_8 [i_2] [i_1] [i_2] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [(short)14] [i_2] [i_2]))))) ? ((~(((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) arr_2 [i_0] [i_2])) : (((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1])))))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) -1219746786)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_2]))) : (var_4)))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))));
}
