/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192823
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
    var_10 = max((var_9), (((/* implicit */long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) (short)32748))))) + (var_0)))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_11 += ((/* implicit */signed char) arr_1 [i_0] [i_0]);
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned int) arr_0 [(unsigned short)18])))))), (arr_0 [i_0])));
    }
    for (long long int i_1 = 0; i_1 < 20; i_1 += 4) /* same iter space */
    {
        arr_5 [(unsigned short)14] [i_1] = ((/* implicit */unsigned int) var_4);
        var_12 ^= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (-(arr_3 [i_1] [i_1])))), ((+(arr_1 [i_1] [(unsigned char)18])))));
        /* LoopSeq 3 */
        for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_3 = 0; i_3 < 20; i_3 += 1) 
            {
                arr_13 [i_1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_9 [i_3] [i_2] [(signed char)10]))));
                var_13 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)32741)) ? (((/* implicit */int) ((3875784678U) > (arr_3 [(_Bool)1] [i_1])))) : (((/* implicit */int) (short)-14089))));
                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36069))) - (arr_1 [(unsigned char)14] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3] [i_1]))) : ((~(419182617U)))));
                var_15 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((_Bool)1) ? (1861011500U) : (3875784678U))))));
            }
            arr_14 [i_1] = ((/* implicit */unsigned int) var_5);
        }
        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 4) 
        {
            var_16 = ((/* implicit */int) max((((/* implicit */unsigned int) var_3)), (((((/* implicit */_Bool) arr_16 [i_4])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_1])))))));
            var_17 *= (!(((/* implicit */_Bool) var_2)));
        }
        for (int i_5 = 0; i_5 < 20; i_5 += 3) 
        {
            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-30)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) : (2433955796U)));
            arr_22 [i_5] [i_1] [i_1] = ((/* implicit */_Bool) var_6);
        }
    }
    for (long long int i_6 = 0; i_6 < 20; i_6 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((short) max((((/* implicit */int) var_4)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)192)) : (((/* implicit */int) var_4))))))))));
        var_20 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_7 [i_6] [i_6] [i_6]))));
        var_21 = ((/* implicit */long long int) (!(((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_11 [i_6] [i_6] [18U]))))));
    }
    var_22 = ((/* implicit */short) (-(((/* implicit */int) var_3))));
}
