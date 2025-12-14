/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220290
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
    var_11 = ((/* implicit */unsigned short) ((var_2) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (short)9)))))) ? (var_3) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) 5967379289157057839LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)-86)))) - (((/* implicit */int) ((((/* implicit */unsigned long long int) var_3)) <= (0ULL)))))))));
    var_12 = ((/* implicit */_Bool) min((min((((/* implicit */int) var_4)), ((-(((/* implicit */int) var_7)))))), (((/* implicit */int) (_Bool)1))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(min((((/* implicit */unsigned int) arr_4 [i_0] [i_0] [(signed char)5])), (2570310904U)))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_2 [i_1])), (arr_5 [i_1] [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_3 [i_1] [i_1] [i_1]))))) : (max((arr_5 [i_1] [i_1] [i_1]), (arr_5 [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_2 [i_0])))))));
                var_14 &= ((/* implicit */short) (~(((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])) ? ((~(((/* implicit */int) (unsigned char)31)))) : (((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
}
