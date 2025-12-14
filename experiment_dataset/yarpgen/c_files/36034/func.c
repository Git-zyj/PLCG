/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36034
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
    var_18 ^= ((/* implicit */unsigned char) max((max((((/* implicit */int) var_14)), ((+(((/* implicit */int) var_8)))))), (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)124)), ((unsigned char)120))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) arr_0 [i_0]))))) ? (max((((/* implicit */long long int) max((((/* implicit */int) var_10)), (-991835865)))), (max((((/* implicit */long long int) (signed char)124)), (arr_5 [i_1]))))) : (((/* implicit */long long int) ((887960403U) % (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)152), (((/* implicit */unsigned char) var_14)))))))))));
                arr_6 [i_0 - 1] [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)76)))))));
            }
        } 
    } 
}
