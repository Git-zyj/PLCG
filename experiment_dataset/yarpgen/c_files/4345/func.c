/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4345
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
    var_12 = ((/* implicit */unsigned char) (+((~((~(((/* implicit */int) var_4))))))));
    var_13 = ((/* implicit */long long int) var_11);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_4 [i_0] [(_Bool)1] [i_1] = ((/* implicit */unsigned char) arr_0 [i_0]);
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) arr_2 [(unsigned short)9])))))) ? (((((/* implicit */_Bool) 11436502212530198021ULL)) ? (((/* implicit */int) ((unsigned short) (_Bool)1))) : ((~(((/* implicit */int) (unsigned char)212)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1])))))));
            }
        } 
    } 
}
