/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238984
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_16 *= ((/* implicit */unsigned int) var_6);
                arr_6 [(signed char)13] [i_0] = ((/* implicit */unsigned short) ((_Bool) arr_1 [i_0]));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-33)) | (((/* implicit */int) var_3))));
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)20)) ? (((long long int) (!(((/* implicit */_Bool) var_11))))) : (((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) var_10)) > (((/* implicit */int) (unsigned char)255))))))));
}
