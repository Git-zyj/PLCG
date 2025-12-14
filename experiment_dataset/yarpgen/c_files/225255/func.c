/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225255
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
    var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_0))))) ? (9223372036854775806LL) : (((/* implicit */long long int) var_8)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((((/* implicit */int) var_2)) | (((/* implicit */int) var_3)))) : (((((/* implicit */int) var_10)) << (((var_4) - (2427383174060537573ULL)))))))))))));
    var_12 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -7690571649137992939LL)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_8 [i_2] [i_1] [(unsigned char)8] [i_0] = arr_2 [18U] [i_2 - 2];
                    arr_9 [i_1] [i_2] |= ((/* implicit */unsigned char) ((unsigned long long int) ((arr_6 [i_0] [14ULL]) ? (arr_5 [i_2] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))));
                    arr_10 [i_1] = ((/* implicit */int) ((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))) == (arr_3 [i_0] [i_0]))));
                    var_13 = ((/* implicit */unsigned int) var_8);
                }
            } 
        } 
        arr_11 [i_0] = ((/* implicit */_Bool) ((unsigned long long int) ((var_1) ? (var_4) : (arr_1 [i_0]))));
    }
    var_14 = ((/* implicit */unsigned int) max((var_14), (var_7)));
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-1653)) ? (var_9) : (((/* implicit */long long int) var_8))));
}
