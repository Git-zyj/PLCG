/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213974
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
    var_11 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-16259)) > (((/* implicit */int) (unsigned short)12446)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((var_1) + (((/* implicit */long long int) ((/* implicit */int) (signed char)36))))) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))))) : (max((((/* implicit */unsigned int) var_9)), (1072791176U)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) (((-(var_3))) / (((/* implicit */long long int) ((/* implicit */int) var_5)))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            var_12 = ((/* implicit */unsigned short) (-(arr_6 [i_0])));
            arr_7 [i_0] [(unsigned char)10] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((unsigned int) 3614603669U))) | ((-9223372036854775807LL - 1LL))));
            arr_8 [i_0] [i_0] = ((/* implicit */unsigned int) var_3);
        }
        arr_9 [i_0] = ((/* implicit */signed char) 13963299501554118962ULL);
        arr_10 [i_0] = ((/* implicit */int) (+(arr_1 [i_0 + 4])));
    }
    /* LoopSeq 1 */
    for (long long int i_2 = 1; i_2 < 6; i_2 += 4) 
    {
        arr_13 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-8696)) ? (var_3) : (arr_0 [i_2])))) ? (((/* implicit */long long int) arr_1 [i_2 + 2])) : (max((arr_0 [i_2]), (((/* implicit */long long int) 3033455100U))))));
        var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((unsigned int) arr_12 [i_2 + 2] [i_2 + 3])) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_12 [i_2 + 3] [i_2 + 1])))))))));
        arr_14 [i_2] [i_2] = var_9;
    }
}
