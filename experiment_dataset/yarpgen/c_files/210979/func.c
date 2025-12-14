/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210979
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
    var_20 &= ((/* implicit */long long int) var_19);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)126)) != (arr_4 [i_0 + 1] [i_0]))) ? (((/* implicit */int) ((unsigned char) (unsigned char)110))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 274877906943LL)), (var_3)))) ? (arr_4 [i_0] [i_0 + 1]) : (arr_4 [i_0] [i_0])))));
                var_22 = ((/* implicit */long long int) (_Bool)1);
            }
        } 
    } 
    var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((((/* implicit */_Bool) ((((449013474905458682ULL) > (var_9))) ? ((+(((/* implicit */int) (unsigned short)41762)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (var_15))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((min((var_7), (((/* implicit */long long int) var_11)))) == (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (-1220851988215981581LL))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)237)) << (((274877906939LL) - (274877906932LL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (((var_14) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_19))))))))));
}
