/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201957
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
    var_12 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (unsigned char)84)), (1330061266U)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_7)), (arr_5 [i_0] [i_1] [i_2])))) != (min((6360574911317676312ULL), (((/* implicit */unsigned long long int) var_6)))))))) / ((+(((((/* implicit */_Bool) -3567750793009707419LL)) ? (13547838394786421305ULL) : (var_10)))))));
                    arr_11 [i_2] [i_2] [i_2] = ((/* implicit */signed char) max(((-(((/* implicit */int) min((((/* implicit */unsigned short) arr_2 [i_0] [(_Bool)1] [i_2])), ((unsigned short)3031)))))), (((/* implicit */int) max((var_7), (var_7))))));
                }
            } 
        } 
    } 
}
