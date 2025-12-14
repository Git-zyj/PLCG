/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248729
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) (~((((_Bool)0) ? (max((((/* implicit */unsigned long long int) (_Bool)1)), (5451370940710115683ULL))) : (((/* implicit */unsigned long long int) ((((arr_3 [i_0]) + (9223372036854775807LL))) << (((/* implicit */int) arr_4 [i_0] [i_0] [i_2]))))))))))));
                    var_12 ^= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_2])) ? (-2016553327) : (((/* implicit */int) (short)-27627))))), (((((/* implicit */_Bool) var_7)) ? (5451370940710115683ULL) : (arr_5 [i_2] [0LL] [i_0] [i_0])))));
                    arr_7 [i_2] [i_1] [i_2] = ((/* implicit */_Bool) min((5451370940710115683ULL), (((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1)))));
                }
            } 
        } 
        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) min((((/* implicit */short) (signed char)(-127 - 1))), ((short)27627))))));
    }
    var_14 ^= ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_6)) ? (1754412014U) : (((/* implicit */unsigned int) var_6)))), (3588827315U)))) : (max((((/* implicit */unsigned long long int) 3588827317U)), (((((/* implicit */_Bool) var_4)) ? (15414900384419481778ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
}
