/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238568
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
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            {
                arr_5 [i_0] [(unsigned short)15] = ((/* implicit */unsigned int) ((unsigned short) (unsigned short)52329));
                arr_6 [i_0] = ((/* implicit */unsigned char) arr_2 [i_1] [i_1] [i_1]);
                arr_7 [2ULL] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)30)) ? (((/* implicit */int) (unsigned short)40298)) : (((/* implicit */int) (_Bool)1))));
                var_11 = ((/* implicit */signed char) max((18446744073709551609ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_1])) / (((/* implicit */int) (_Bool)1)))))));
                var_12 ^= ((/* implicit */short) (_Bool)1);
            }
        } 
    } 
    var_13 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2442796652956000036LL)) ? (1411516156) : (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (unsigned char)34)))))))));
}
