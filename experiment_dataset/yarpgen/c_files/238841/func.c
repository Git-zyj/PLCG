/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238841
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
    var_20 = ((/* implicit */short) var_8);
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) & (((/* implicit */int) ((((/* implicit */int) ((var_15) < (3385272220144816201LL)))) >= (((/* implicit */int) (_Bool)1)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) -411079843750547157LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_15))) : (((/* implicit */long long int) ((((/* implicit */int) var_6)) >> (((3385272220144816201LL) - (3385272220144816172LL))))))));
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-16662)) - ((((_Bool)1) ? (((/* implicit */int) (unsigned char)135)) : (((/* implicit */int) var_8))))));
    }
    for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_4 [i_1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_9))))) % (-399738047)))) : (((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_1] [i_1])) >> (((((/* implicit */int) var_3)) - (236)))))) ^ (min((arr_5 [i_1]), (((/* implicit */unsigned long long int) arr_4 [i_1]))))))));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) (-(3385272220144816201LL))))))), (min((((/* implicit */int) ((var_7) >= (((/* implicit */long long int) ((/* implicit */int) var_19)))))), ((-(1173246231)))))));
        /* LoopNest 2 */
        for (short i_2 = 3; i_2 < 8; i_2 += 4) 
        {
            for (signed char i_3 = 2; i_3 < 9; i_3 += 2) 
            {
                {
                    arr_11 [i_1] [i_2] [i_3] = 11466081944238373102ULL;
                    arr_12 [(short)9] [i_2] [i_2] = ((/* implicit */unsigned int) var_7);
                    arr_13 [i_2 - 3] = var_4;
                    arr_14 [i_1] [i_1] [i_3] = ((/* implicit */long long int) min((((/* implicit */int) (short)-16662)), (2125640323)));
                }
            } 
        } 
    }
}
