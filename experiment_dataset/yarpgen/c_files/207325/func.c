/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207325
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
    var_20 = ((/* implicit */short) ((((/* implicit */int) var_6)) - (((/* implicit */int) ((signed char) min((((/* implicit */long long int) (_Bool)0)), (-1LL)))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned int) ((min((arr_0 [i_0 + 2]), (var_3))) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 + 1])))))));
        var_22 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_1 [i_0 + 1])))) ? (((/* implicit */int) var_12)) : ((~(arr_0 [i_0 + 1])))));
    }
    for (long long int i_1 = 4; i_1 < 21; i_1 += 4) 
    {
        var_23 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1])) || (((/* implicit */_Bool) var_8))))))));
        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1])) || (((/* implicit */_Bool) (unsigned char)254))));
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            arr_8 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1])) - (((/* implicit */int) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_1 + 1] [i_1 + 1]))) ^ (var_9)))))));
            var_25 = ((/* implicit */int) max(((((!(((/* implicit */_Bool) (unsigned char)151)))) ? (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_5 [i_2] [i_2] [(unsigned short)17])))) : ((~(0ULL))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_2 [i_2])) ? (arr_3 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-95)))))))))));
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (((long long int) ((arr_9 [i_1]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_1] [i_1])))))) : (((/* implicit */long long int) ((/* implicit */int) max((((unsigned char) var_0)), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_2 [i_3]))))))))))))));
                var_27 = ((/* implicit */unsigned int) arr_10 [i_1] [i_2] [i_2]);
            }
            var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) arr_4 [i_1 - 3]))));
        }
        for (long long int i_4 = 0; i_4 < 22; i_4 += 3) 
        {
            arr_13 [i_4] [i_4] = ((/* implicit */unsigned long long int) arr_6 [i_1] [6LL] [i_4]);
            var_29 = ((/* implicit */unsigned long long int) max((arr_5 [i_1] [i_1] [i_4]), (((/* implicit */unsigned short) ((var_9) >= (arr_12 [9ULL] [(_Bool)1] [12]))))));
        }
        var_30 = ((/* implicit */short) 18446744073709551615ULL);
    }
    var_31 = var_0;
    var_32 = ((/* implicit */int) var_7);
}
