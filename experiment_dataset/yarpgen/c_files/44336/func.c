/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44336
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) var_0)) : (var_12))) : (((((/* implicit */unsigned int) (-2147483647 - 1))) / (var_2))))) : (((((((/* implicit */_Bool) var_10)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 3705947709U))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            var_16 ^= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)223))) / (arr_1 [i_0 - 1])));
            var_17 = ((/* implicit */unsigned char) ((arr_5 [i_0 - 1] [i_0 + 1] [i_0 - 1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)23)))));
            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_13)) : (arr_2 [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_2 [i_0] [(_Bool)1])) ? (((/* implicit */unsigned long long int) var_0)) : (var_6))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_12) : (arr_1 [i_0]))))));
            arr_6 [i_0] [i_1] [i_1] = ((/* implicit */int) ((arr_3 [i_0 + 1] [i_1] [10]) ^ (((/* implicit */long long int) ((arr_2 [i_1] [i_0]) / (((/* implicit */int) arr_0 [i_1])))))));
            arr_7 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)33)) & (((/* implicit */int) (unsigned char)242))))) ? (((/* implicit */int) var_13)) : (((((/* implicit */int) (signed char)(-127 - 1))) & (((/* implicit */int) var_11))))));
        }
        var_19 ^= ((/* implicit */long long int) ((((var_8) ? (((/* implicit */unsigned long long int) arr_2 [i_0] [1U])) : (arr_5 [i_0] [i_0] [i_0]))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)227)) ? (arr_1 [i_0 - 1]) : (((/* implicit */unsigned int) arr_2 [i_0] [i_0])))))));
    }
    for (int i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        var_20 = ((/* implicit */unsigned long long int) ((_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2]))))))));
        arr_10 [i_2] = ((/* implicit */long long int) ((min((arr_8 [i_2]), (((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (unsigned char)232)) : (((/* implicit */int) arr_9 [i_2]))))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)29)))));
    }
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        var_21 = ((/* implicit */unsigned long long int) (!(arr_12 [15LL])));
        var_22 |= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned short)0)))) & (((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_3])) / (((/* implicit */int) arr_13 [i_3 - 1]))))) ? ((+(0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_3 - 1])))))));
        arr_14 [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_9 [i_3 - 1])), ((~(((/* implicit */int) var_3)))))))));
    }
    for (signed char i_4 = 1; i_4 < 21; i_4 += 2) 
    {
        arr_18 [i_4] = ((/* implicit */int) min((((/* implicit */long long int) min((arr_8 [i_4 + 2]), (arr_8 [i_4 + 1])))), (((((/* implicit */long long int) arr_8 [i_4 - 1])) | (6266031827675022948LL)))));
        arr_19 [i_4] [i_4] = ((/* implicit */unsigned long long int) (unsigned short)28672);
        var_23 = ((/* implicit */unsigned short) max((var_23), (var_5)));
        var_24 = ((/* implicit */int) (_Bool)1);
    }
    var_25 ^= ((/* implicit */unsigned long long int) (_Bool)1);
}
