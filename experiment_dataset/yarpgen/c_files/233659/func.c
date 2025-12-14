/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233659
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    {
                        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (+(min((((/* implicit */int) var_11)), (arr_7 [i_2] [i_1] [i_0])))))), (min((max((((/* implicit */long long int) arr_7 [i_1] [0] [i_3])), (arr_1 [i_1] [i_1]))), (((/* implicit */long long int) (~(arr_7 [i_0] [i_1] [i_2])))))))))));
                        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) var_4))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_1] [i_2] [i_3] [i_2]))))) ^ (((((/* implicit */_Bool) arr_2 [i_3] [i_2] [i_1])) ? (((/* implicit */int) arr_6 [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_6 [i_1] [i_2] [i_3]))))))) : (((((/* implicit */_Bool) ((long long int) var_16))) ? (max((arr_3 [i_1] [i_1]), (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (var_16))))))))))));
                        var_19 |= ((/* implicit */unsigned char) (~(((/* implicit */int) var_5))));
                        var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned char) arr_5 [i_1] [i_2])))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) arr_5 [i_0] [i_0 + 1]))));
    }
    var_22 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_14)), (var_8)));
    var_23 &= ((/* implicit */_Bool) (+(var_4)));
}
