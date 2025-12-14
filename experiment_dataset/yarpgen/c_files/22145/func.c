/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22145
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
    var_16 = ((/* implicit */unsigned char) (-(min((max((var_1), (var_8))), (((/* implicit */unsigned int) var_4))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) var_0);
        arr_4 [i_0] = ((/* implicit */short) arr_1 [(_Bool)1]);
    }
    for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                {
                    arr_14 [i_3] [i_2] [(signed char)0] &= ((/* implicit */short) ((((/* implicit */_Bool) (-(max((var_8), (((/* implicit */unsigned int) arr_0 [i_3]))))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_1])), (max((((/* implicit */unsigned short) (signed char)-98)), ((unsigned short)43530)))))) : (((/* implicit */int) ((arr_10 [i_1]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1] [i_3] [(unsigned short)4]))))))));
                    arr_15 [i_2] [(unsigned char)8] [i_3] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) -49107960)) ? (((/* implicit */int) (_Bool)1)) : (-49107970))));
                    arr_16 [i_2] [i_2] = ((/* implicit */long long int) (short)653);
                }
            } 
        } 
        arr_17 [i_1] = ((/* implicit */int) (-(arr_10 [i_1])));
    }
    var_17 = ((/* implicit */unsigned int) var_13);
}
