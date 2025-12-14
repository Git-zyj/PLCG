/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33536
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
    var_18 = max((((signed char) var_3)), (((/* implicit */signed char) ((_Bool) min((var_6), ((signed char)-32))))));
    var_19 &= var_0;
    /* LoopSeq 3 */
    for (signed char i_0 = 4; i_0 < 12; i_0 += 3) /* same iter space */
    {
        var_20 = var_17;
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_3 [i_0] [i_1] [i_1]), (((signed char) var_12)))))) : ((-(((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) var_13)) : (10416712301197656907ULL)))))));
            var_21 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_1])) - (((/* implicit */int) arr_3 [i_0] [(signed char)11] [i_0 - 4]))))), (max((((long long int) (_Bool)1)), (((/* implicit */long long int) (!((_Bool)1))))))));
            arr_5 [5LL] [i_0] [i_0] = ((/* implicit */unsigned int) var_3);
            arr_6 [1LL] [3ULL] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) min((((arr_1 [i_0] [i_1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)248))))), (((/* implicit */unsigned int) (signed char)11)))));
        }
        for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            var_22 |= arr_2 [i_0 + 2] [i_2] [(_Bool)1];
            var_23 = ((/* implicit */signed char) 1152772126U);
        }
        for (unsigned int i_3 = 3; i_3 < 12; i_3 += 3) 
        {
            var_24 = ((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_0]))));
            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)-3))));
        }
    }
    for (signed char i_4 = 4; i_4 < 12; i_4 += 3) /* same iter space */
    {
        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_9 [i_4])) ? (((/* implicit */int) (unsigned char)74)) : (((/* implicit */int) var_0)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_13 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) -8623209490748525018LL)) ? (4007707347U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_4 - 3] [i_4] [i_4]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((signed char) 6443356766162751784LL)))))));
        var_27 = ((/* implicit */unsigned long long int) min((var_8), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_7 [i_4])))) : (min((((/* implicit */unsigned int) arr_10 [i_4] [i_4])), (var_10)))))));
    }
    for (signed char i_5 = 4; i_5 < 12; i_5 += 3) /* same iter space */
    {
        var_28 = ((/* implicit */signed char) max(((((_Bool)1) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (signed char)15)), (3423782877U)))) : (7317092041891207473LL))), (((/* implicit */long long int) (_Bool)1))));
        var_29 *= ((/* implicit */unsigned char) (~(min((2281872304U), (((/* implicit */unsigned int) (_Bool)1))))));
    }
}
