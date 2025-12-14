/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230189
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
    for (unsigned short i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [2] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)239)) && (arr_6 [i_0] [i_0 - 3] [i_1] [i_0])))), (min((var_15), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0 + 1] [i_0 - 1]))))));
                    arr_11 [(_Bool)1] [i_1] [(_Bool)1] [i_0] = ((/* implicit */unsigned char) max(((signed char)127), (((/* implicit */signed char) (_Bool)1))));
                    arr_12 [i_0] [i_0] [i_1] [i_2] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_1])) ^ (arr_9 [i_0 - 1] [i_0 - 1])))) && (((/* implicit */_Bool) ((int) ((((/* implicit */int) (signed char)-123)) & (((/* implicit */int) arr_3 [i_0]))))))));
                    arr_13 [(_Bool)1] [i_0] [(_Bool)1] [i_2] = ((/* implicit */unsigned int) arr_4 [(short)11] [(short)16] [i_2]);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) (-(var_2)));
    var_20 = ((/* implicit */_Bool) max((((/* implicit */int) (_Bool)0)), (var_8)));
}
