/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27005
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
    var_10 &= ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned short) ((int) var_2))))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 8; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_4 [i_0 - 3] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)7))) | (2147467264ULL)))));
                var_11 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) ((unsigned char) var_1)))) ? ((+(((unsigned int) arr_2 [i_0] [i_1 + 1] [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_7))))));
                arr_5 [(signed char)2] [(_Bool)1] = ((/* implicit */unsigned short) (+(((/* implicit */int) min((arr_3 [i_0 - 3]), (arr_3 [i_0 - 3]))))));
                var_12 = ((/* implicit */_Bool) max((4241859838254778842ULL), (((/* implicit */unsigned long long int) (short)6784))));
                arr_6 [i_0] &= ((/* implicit */unsigned int) ((long long int) ((int) (_Bool)1)));
            }
        } 
    } 
    var_13 ^= ((/* implicit */short) ((min((max((288229826395897856ULL), (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) var_0)))) | (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4)))))));
}
