/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50428
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
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            {
                var_10 |= ((/* implicit */_Bool) 70368744177660ULL);
                var_11 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) (_Bool)0)))) | (((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned char)41)))) ^ (3008764609U)))));
                arr_6 [i_0] [i_1] [i_0] = (short)(-32767 - 1);
                arr_7 [i_1] = ((/* implicit */unsigned long long int) (signed char)-26);
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) ((unsigned long long int) 4294967295U)))) || (((/* implicit */_Bool) 3095006109U))));
    var_13 &= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) & (((((5009475720824049867ULL) ^ (((/* implicit */unsigned long long int) 4588424436425332996LL)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned char)63))))))));
    var_14 = ((/* implicit */int) ((_Bool) 70368744177658ULL));
}
