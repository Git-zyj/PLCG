/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247241
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
    var_16 |= ((/* implicit */long long int) var_3);
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)121))));
                    arr_7 [(unsigned char)15] [(unsigned char)15] [(unsigned char)15] [i_0 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 15848535641503291029ULL)) ? (((/* implicit */int) (short)3840)) : (((/* implicit */int) (unsigned char)241))));
                }
            } 
        } 
    } 
}
