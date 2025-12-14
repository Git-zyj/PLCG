/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225684
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
    var_17 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3200773773719131306ULL)) ? (((/* implicit */int) (unsigned short)25892)) : (((/* implicit */int) var_15))))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_14))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (((((_Bool) var_0)) ? (var_0) : (((/* implicit */long long int) (+(((/* implicit */int) var_11)))))))));
                    arr_8 [i_1] = ((unsigned short) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) (unsigned short)681)) ? (((/* implicit */int) arr_5 [i_2] [i_1] [i_0])) : (((/* implicit */int) var_12)))) : (((/* implicit */int) ((_Bool) var_11)))));
                }
            } 
        } 
    } 
}
