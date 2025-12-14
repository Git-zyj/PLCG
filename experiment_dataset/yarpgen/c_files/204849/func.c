/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204849
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
    var_10 = ((/* implicit */_Bool) max((var_10), (((/* implicit */_Bool) (signed char)112))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */unsigned int) max((((((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_6 [i_0] [i_0] [i_2]))) * (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)21)) << (((-3575595067408383325LL) + (3575595067408383338LL)))))))), (((/* implicit */long long int) ((unsigned char) ((short) var_7))))));
                    var_12 &= (~(var_4));
                    arr_8 [(_Bool)1] [(short)4] [i_2] [i_1] = ((/* implicit */short) var_5);
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((unsigned char) (signed char)-97)))));
    var_14 &= ((/* implicit */short) (+(((((((/* implicit */long long int) var_4)) & (var_5))) + ((-(3575595067408383333LL)))))));
}
