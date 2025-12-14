/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244637
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
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (((unsigned long long int) var_13))));
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) var_6))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 4; i_0 < 18; i_0 += 2) /* same iter space */
    {
        var_19 = ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) >> (((((/* implicit */int) var_11)) - (85))))))))) | (max((((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)51416)))), (((/* implicit */int) (unsigned short)65535)))));
        var_20 = ((/* implicit */unsigned short) 18446744073709551615ULL);
    }
    for (unsigned short i_1 = 4; i_1 < 18; i_1 += 2) /* same iter space */
    {
        var_21 -= ((/* implicit */unsigned long long int) arr_3 [i_1 - 2]);
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            var_22 = ((/* implicit */unsigned short) arr_6 [10ULL]);
            var_23 = ((/* implicit */int) max((var_6), (((/* implicit */unsigned short) (((((_Bool)1) || (((/* implicit */_Bool) arr_3 [i_2])))) || (((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) 18446744073709551585ULL)))))))));
        }
        var_24 = ((/* implicit */int) arr_6 [i_1 - 4]);
        var_25 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1 - 3])) ? (arr_4 [i_1 - 3]) : (arr_4 [i_1 - 2])))), (((((/* implicit */_Bool) arr_4 [i_1 - 2])) ? (var_10) : (((/* implicit */long long int) arr_4 [i_1 - 4]))))));
        var_26 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) | (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30517)))))))) ? (((((/* implicit */_Bool) min((18446744073709551612ULL), (18446744073709551605ULL)))) ? (((/* implicit */int) arr_1 [i_1])) : (((((/* implicit */_Bool) arr_1 [i_1])) ? (-1626427244) : (((/* implicit */int) var_0)))))) : (((/* implicit */int) var_5))));
    }
    var_27 = ((/* implicit */unsigned char) var_10);
}
