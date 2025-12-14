/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41199
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
    for (int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((max((((/* implicit */int) var_10)), ((-2147483647 - 1)))), (((arr_1 [i_0]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_2 [i_0 - 1] [10]))))))) ? (((/* implicit */long long int) (-2147483647 - 1))) : (min((min((-952575097000989626LL), (((/* implicit */long long int) arr_2 [i_0] [i_0])))), (((/* implicit */long long int) ((_Bool) arr_0 [i_0])))))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 4; i_1 < 14; i_1 += 4) 
        {
            var_19 = ((/* implicit */long long int) min((8822213021815959685ULL), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-32755)) - (arr_3 [i_1]))) - (((/* implicit */int) (_Bool)1)))))));
            arr_6 [i_0] [i_0] = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) 2147483647)) ? (9624531051893591921ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))));
            var_20 = ((/* implicit */_Bool) (short)8128);
        }
        for (unsigned char i_2 = 2; i_2 < 14; i_2 += 1) 
        {
            var_21 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (((+(var_8))) / (9223372036854775807LL)))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (!(((/* implicit */_Bool) min((var_0), (((/* implicit */long long int) (short)32754))))))))));
            var_22 = ((/* implicit */unsigned long long int) var_5);
        }
        for (long long int i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(9223372036854775807LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_17))))) : (arr_3 [i_3])))) ? (min((((/* implicit */unsigned long long int) ((-7631532803446302467LL) % (9223372036854775807LL)))), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [(unsigned char)5] [i_0]))) : (var_11))))) : (((/* implicit */unsigned long long int) ((arr_3 [i_3]) % (arr_3 [i_3])))))))));
            arr_13 [i_0] = ((/* implicit */unsigned char) arr_3 [i_0]);
        }
        arr_14 [(_Bool)1] |= min((((/* implicit */long long int) (((+((-9223372036854775807LL - 1LL)))) > (((long long int) var_12))))), ((-9223372036854775807LL - 1LL)));
        var_24 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [9] [i_0 + 1] [i_0]))) : (var_0)))) ? (arr_5 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)127))))), (((/* implicit */long long int) ((arr_5 [i_0]) > (-9223372036854775807LL))))));
    }
    var_25 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) (unsigned char)31)))) ? (((/* implicit */long long int) ((int) min((((/* implicit */unsigned long long int) var_13)), (var_11))))) : (((((/* implicit */long long int) ((((/* implicit */int) var_1)) - (((/* implicit */int) var_14))))) - ((-9223372036854775807LL - 1LL))))));
}
