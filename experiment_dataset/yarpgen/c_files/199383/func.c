/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199383
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
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 12U)) ? (((/* implicit */int) (_Bool)1)) : (-342055456)));
                var_18 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(arr_1 [i_1]))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_2])) ? (((((/* implicit */_Bool) arr_6 [i_2])) ? (arr_6 [i_2]) : (arr_6 [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_6 [i_2]) < (((/* implicit */unsigned int) arr_5 [i_2] [i_2]))))))));
        arr_9 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_2] [i_2])) && (((arr_5 [i_2] [i_2]) == (((/* implicit */int) arr_7 [i_2] [i_2]))))))) << (((((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)24837))) : (242026009U))) - (24830U)))));
        var_20 = ((/* implicit */int) ((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-731))))) >= (min((arr_6 [i_2]), (arr_6 [i_2])))));
    }
}
