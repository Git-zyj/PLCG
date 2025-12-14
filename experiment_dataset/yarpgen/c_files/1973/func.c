/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1973
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
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((var_11) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    var_13 += ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) 3288908502U)) : (-3916016730413179228LL)));
                    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [(_Bool)1] [i_1] [(_Bool)1])) ? (var_0) : (((/* implicit */unsigned long long int) arr_5 [i_2] [i_0] [i_0])))))));
                }
                arr_7 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(arr_1 [i_1])))) + (((((/* implicit */_Bool) (-(-1888732756603051858LL)))) ? (((((/* implicit */_Bool) (signed char)20)) ? (var_0) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_0])))) : (((/* implicit */unsigned long long int) ((var_5) | (((/* implicit */long long int) var_6)))))))));
                arr_8 [i_1] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_3 [i_0] [i_1] [i_0]) & (arr_3 [i_0] [i_0] [(unsigned short)2])))) || (((/* implicit */_Bool) ((var_1) | (((/* implicit */unsigned long long int) arr_3 [i_0] [(short)12] [i_0])))))));
            }
        } 
    } 
}
