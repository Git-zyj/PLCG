/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205641
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */int) (unsigned char)31)) | (((/* implicit */int) (unsigned short)15)))))));
                var_20 ^= ((/* implicit */long long int) min(((unsigned short)65521), (((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_0])) != (((/* implicit */int) var_13)))))));
                var_21 = ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))) * (((/* implicit */int) var_1))));
                arr_5 [i_0] [(_Bool)1] [(_Bool)1] = ((/* implicit */long long int) var_15);
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) var_18);
    var_23 = ((/* implicit */unsigned long long int) max((var_23), (var_12)));
}
