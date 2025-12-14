/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240984
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
    var_18 = ((/* implicit */short) var_7);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_19 += var_16;
                arr_4 [i_0] [16] [i_1] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) (signed char)-5)) ? (((/* implicit */unsigned long long int) -18LL)) : (arr_3 [i_1] [i_0]))));
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_3 [i_0] [i_0])))) ? (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)23048))))), (((((/* implicit */_Bool) arr_3 [i_0] [(signed char)12])) ? (7906951360188764742ULL) : (((/* implicit */unsigned long long int) 1032712988)))))) : ((+((+(arr_3 [i_0] [i_0])))))));
            }
        } 
    } 
}
