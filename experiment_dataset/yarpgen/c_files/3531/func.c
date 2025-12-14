/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3531
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_17 = ((/* implicit */long long int) 12563837195527004700ULL);
        /* LoopSeq 2 */
        for (unsigned char i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            var_18 = ((/* implicit */unsigned char) 5882906878182546916ULL);
            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((long long int) max((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)122)) && (((/* implicit */_Bool) 5882906878182546942ULL))))), ((+(-1806464658)))))))));
            var_20 ^= ((/* implicit */short) (~(min((5882906878182546915ULL), (((/* implicit */unsigned long long int) (unsigned char)0))))));
        }
        for (unsigned char i_2 = 4; i_2 < 22; i_2 += 2) 
        {
            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) arr_5 [i_2 - 3] [i_2 - 3]))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)21))))) : (((min((arr_7 [i_2]), (((/* implicit */unsigned long long int) (signed char)104)))) / (max((((/* implicit */unsigned long long int) (signed char)55)), (12563837195527004692ULL)))))));
            arr_9 [i_0] [(unsigned char)8] = ((/* implicit */signed char) arr_0 [i_2]);
        }
        var_22 = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) arr_1 [i_0] [2ULL])))));
    }
    for (unsigned long long int i_3 = 4; i_3 < 13; i_3 += 2) 
    {
        arr_14 [i_3] = ((/* implicit */_Bool) arr_1 [i_3] [i_3]);
        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (!((((_Bool)1) || (((/* implicit */_Bool) ((unsigned char) 12563837195527004700ULL))))))))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 4) 
    {
        arr_17 [i_4] [(_Bool)1] = ((/* implicit */short) 12563837195527004675ULL);
        var_24 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)107)) ? (((/* implicit */int) arr_13 [7LL] [i_4])) : (((/* implicit */int) (signed char)0))))) ? (max((1109049206249798945ULL), (((/* implicit */unsigned long long int) (signed char)127)))) : (((/* implicit */unsigned long long int) 131071U)))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (+(18446744073709551614ULL))))))));
    }
    var_25 = ((/* implicit */_Bool) var_6);
    var_26 += ((/* implicit */unsigned char) 18446744073709551590ULL);
}
