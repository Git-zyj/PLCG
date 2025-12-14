/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28863
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 9; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0)) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (min((2442432625U), (((/* implicit */unsigned int) (unsigned char)176)))) : (((unsigned int) arr_1 [i_0])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) -570718592))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((((/* implicit */_Bool) 1006632960)) ? (((/* implicit */int) (unsigned char)24)) : (var_2))))))));
                var_21 ^= ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((int) var_0))) : (min((((/* implicit */unsigned long long int) (signed char)87)), (var_0))))));
                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_2 [i_0] [i_1]) << (((((/* implicit */int) (unsigned short)12852)) - (12850)))))) ? (((((/* implicit */_Bool) (unsigned short)41174)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (arr_3 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)132)) <= (((/* implicit */int) (unsigned char)255))))))))) ? (max((((unsigned int) arr_2 [i_0] [i_1])), (max((1692829534U), (2665262350U))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1])))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) max(((unsigned char)176), ((unsigned char)181)))) : (var_1)))));
    var_24 = (-(((((/* implicit */_Bool) ((int) var_9))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)79))) : (var_5))) : (((/* implicit */long long int) min((3499371148U), (1203103254U)))))));
    var_25 = (+(((/* implicit */int) (short)-26328)));
}
