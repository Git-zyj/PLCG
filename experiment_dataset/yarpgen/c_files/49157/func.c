/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49157
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
    var_12 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) ^ (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 3351684U)) ? (var_8) : (((/* implicit */int) var_4))))), (((unsigned int) 4291615616U))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 12; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */short) ((unsigned char) max((((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) > (arr_3 [i_0] [i_1] [i_0])))), (arr_0 [i_0 + 1]))));
                    arr_7 [i_0] [(unsigned char)0] [i_0] [i_0] = ((/* implicit */short) arr_1 [i_0]);
                    var_14 ^= ((/* implicit */short) arr_6 [i_0] [i_0 + 1]);
                    var_15 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_4 [(signed char)12] [(short)2])), (min((((/* implicit */unsigned char) arr_0 [i_0])), (arr_5 [i_0] [(short)12]))))))) >= (((((/* implicit */_Bool) (unsigned char)177)) ? (arr_3 [i_1] [i_1 + 1] [(short)2]) : (arr_3 [i_0 + 1] [i_1 + 1] [(short)12])))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) var_11)))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) | (4291615612U)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) & (4291615632U))) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (4291615636U)))))));
}
