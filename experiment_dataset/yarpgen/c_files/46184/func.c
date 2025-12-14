/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46184
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 13; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */int) ((unsigned char) ((_Bool) arr_1 [7U])))) >> (((((((((/* implicit */_Bool) (signed char)93)) && (((/* implicit */_Bool) arr_2 [i_0] [(signed char)10])))) ? (((unsigned long long int) var_3)) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_3)) * (var_14)))))) - (18446744072121555928ULL))))))));
                    arr_7 [i_0] [i_0] [i_1] |= ((/* implicit */short) (+(((((/* implicit */int) arr_5 [i_2 + 3] [i_2 + 4] [i_2 + 3])) - ((-(((/* implicit */int) (unsigned char)62))))))));
                    var_20 = ((/* implicit */signed char) (!((_Bool)1)));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((long long int) min((((/* implicit */long long int) (unsigned char)205)), (4537832222946884117LL)))) - (((/* implicit */long long int) ((/* implicit */int) var_15))))))));
}
