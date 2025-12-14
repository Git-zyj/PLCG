/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27616
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) 4294967295U);
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned int) 4994620805438737313LL));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        arr_9 [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned int) (unsigned short)65534));
        arr_10 [i_1] = ((/* implicit */_Bool) 3U);
        arr_11 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_17)))) ^ (arr_7 [i_1])));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        arr_14 [i_2] [i_2] = ((/* implicit */long long int) ((unsigned short) -4994620805438737322LL));
        /* LoopSeq 3 */
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            arr_18 [i_3] [i_3] = arr_12 [i_3];
            arr_19 [i_3] [i_3] = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)49320))));
            var_18 ^= ((/* implicit */_Bool) arr_15 [i_2] [i_3 + 1] [i_3 + 1]);
            arr_20 [i_2] [i_3] [i_3] = arr_13 [i_3];
        }
        for (long long int i_4 = 2; i_4 < 16; i_4 += 1) 
        {
            var_19 = ((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) arr_16 [i_4])) : (((/* implicit */int) arr_16 [i_4]))));
            var_20 = ((/* implicit */unsigned int) var_10);
            /* LoopSeq 1 */
            for (unsigned short i_5 = 0; i_5 < 18; i_5 += 4) 
            {
                arr_26 [i_4] [i_4] = ((/* implicit */long long int) ((unsigned int) ((var_8) >> (((4096426070U) - (4096426027U))))));
                arr_27 [i_2] [i_4] [i_5] = ((/* implicit */long long int) var_5);
                arr_28 [i_4] = ((/* implicit */_Bool) ((unsigned short) arr_23 [i_4 + 1] [i_4 + 1]));
                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) arr_24 [i_5]))));
            }
        }
        for (unsigned short i_6 = 0; i_6 < 18; i_6 += 3) 
        {
            arr_31 [i_6] [i_6] [i_2] = ((/* implicit */_Bool) var_12);
            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) var_16))));
            arr_32 [i_2] [i_2] [i_2] = ((/* implicit */long long int) (~(((/* implicit */int) arr_22 [i_2] [i_6] [i_6]))));
        }
        var_23 = ((/* implicit */unsigned short) ((arr_17 [i_2] [i_2] [i_2]) < ((~(arr_24 [i_2])))));
    }
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
    {
        var_24 = ((/* implicit */long long int) min((var_24), (((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) (unsigned short)8192)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_34 [i_7]))))) ? (((((/* implicit */_Bool) arr_33 [i_7 - 1])) ? (((var_12) ^ (((/* implicit */long long int) ((/* implicit */int) var_11))))) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (((((/* implicit */long long int) arr_34 [i_7 - 1])) % (var_6)))))));
        var_25 = ((/* implicit */long long int) min((var_25), (max((((((long long int) var_2)) - (((/* implicit */long long int) ((/* implicit */int) var_17))))), (((/* implicit */long long int) ((arr_34 [i_7 - 1]) % (arr_34 [i_7 - 1]))))))));
    }
}
