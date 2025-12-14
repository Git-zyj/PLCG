/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189644
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)0)) | (((/* implicit */int) arr_0 [i_0])))) & (((/* implicit */int) arr_0 [i_0]))))) ? (2147483647U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))) ? ((~(((/* implicit */int) var_10)))) : ((~(var_2))))))));
        var_12 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (+((-(((/* implicit */int) var_8))))))), (((((/* implicit */_Bool) 2147483646U)) ? (((/* implicit */unsigned int) -12)) : (2147483646U)))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 3) 
    {
        arr_6 [7ULL] = ((/* implicit */unsigned char) (~(((((/* implicit */unsigned int) var_7)) & (arr_4 [i_1 + 1])))));
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            var_13 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) / (arr_4 [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1 + 1] [i_2] [i_1 + 1]))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1 + 1]))) * (2147483651U)))));
            var_14 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) arr_7 [i_2])))));
        }
        arr_9 [i_1 - 1] = ((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_1 - 2])) - (((/* implicit */int) arr_7 [i_1 - 2]))));
    }
    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) 
    {
        arr_12 [(short)10] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_5))) == (((((/* implicit */_Bool) arr_8 [i_3] [(short)5] [i_3])) ? (((/* implicit */long long int) (-(((/* implicit */int) (signed char)(-127 - 1)))))) : (((((/* implicit */_Bool) (signed char)50)) ? (((/* implicit */long long int) -2147483635)) : (var_3)))))));
        arr_13 [i_3] = ((/* implicit */unsigned long long int) max((((unsigned int) (!(((/* implicit */_Bool) var_10))))), (arr_4 [i_3])));
        var_15 = ((/* implicit */unsigned char) var_9);
        var_16 += ((((((/* implicit */_Bool) arr_10 [i_3])) || (((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned long long int) var_9))))))) || (((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_10 [14])) ? (9521559606255395482ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
        arr_14 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min(((~(((/* implicit */int) arr_5 [i_3])))), (((/* implicit */int) var_5))))) ^ ((~(min((((/* implicit */unsigned long long int) (unsigned short)51679)), (arr_11 [i_3])))))));
    }
    var_17 = ((short) var_10);
}
