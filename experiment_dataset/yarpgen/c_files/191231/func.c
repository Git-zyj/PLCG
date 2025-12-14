/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191231
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
    var_12 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) min(((unsigned short)24155), (((/* implicit */unsigned short) var_0))))))));
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) + (((/* implicit */int) max((((/* implicit */short) ((((/* implicit */int) var_8)) > (((/* implicit */int) var_0))))), (var_4))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_7 [i_0 - 1] [i_1]);
                    arr_9 [14] = ((/* implicit */signed char) ((arr_4 [i_0 + 1] [i_0 + 1]) == (arr_4 [i_0] [i_0 + 1])));
                    arr_10 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) 1865858974U);
                    arr_11 [i_0] [i_1] [i_2] = ((/* implicit */int) 0ULL);
                }
            } 
        } 
        arr_12 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) (unsigned short)41383)) : (((/* implicit */int) arr_7 [i_0 - 1] [i_0 + 1]))));
        arr_13 [i_0 + 1] = ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_0])) ^ (((/* implicit */int) (unsigned char)117))));
    }
    for (unsigned char i_3 = 3; i_3 < 19; i_3 += 3) 
    {
        arr_17 [(signed char)4] [18ULL] = ((/* implicit */unsigned char) (-((-(((/* implicit */int) (_Bool)1))))));
        arr_18 [i_3] = ((/* implicit */unsigned long long int) (-(((((/* implicit */unsigned int) arr_14 [i_3 + 1])) + (2429108321U)))));
    }
    for (unsigned int i_4 = 4; i_4 < 18; i_4 += 3) 
    {
        arr_21 [i_4] = ((/* implicit */long long int) min((((/* implicit */int) var_6)), ((+(min((((/* implicit */int) var_0)), (var_1)))))));
        arr_22 [i_4 - 2] [i_4] &= ((/* implicit */short) var_9);
        arr_23 [12] = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_16 [i_4] [i_4 - 4]))))), (((unsigned int) arr_15 [i_4] [i_4])))))));
    }
    var_14 = ((/* implicit */unsigned char) (((-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0)))))) >= (var_10)));
    var_15 = ((/* implicit */signed char) var_1);
}
