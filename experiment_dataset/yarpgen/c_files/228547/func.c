/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228547
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
    var_20 = ((/* implicit */signed char) var_3);
    var_21 = var_18;
    var_22 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) (unsigned char)210)))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) /* same iter space */
    {
        arr_2 [18U] [(unsigned short)18] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((unsigned char) var_10))), (((((/* implicit */_Bool) var_18)) ? (18446744073709551615ULL) : ((+(1ULL)))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (var_6)))) ? (((/* implicit */int) ((arr_3 [i_0] [(unsigned char)16]) != (((/* implicit */unsigned long long int) var_13))))) : ((~(((/* implicit */int) arr_1 [i_0])))))));
            arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((((/* implicit */int) min((arr_1 [i_1]), (((/* implicit */short) (unsigned char)255))))), ((((_Bool)1) ? (var_13) : (((/* implicit */int) (short)3))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) % (((((/* implicit */_Bool) arr_1 [i_0])) ? (18446744073709551590ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
            arr_7 [i_0] = 1538407855U;
        }
        for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) > (((int) max((((/* implicit */short) (unsigned char)27)), ((short)3))))));
            var_25 = ((/* implicit */unsigned short) (+(((/* implicit */int) max((((/* implicit */short) (unsigned char)85)), (arr_1 [i_0]))))));
            var_26 = ((/* implicit */short) (!((_Bool)1)));
        }
        var_27 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)0))));
    }
    for (short i_3 = 0; i_3 < 24; i_3 += 4) /* same iter space */
    {
        arr_15 [i_3] = ((/* implicit */signed char) var_1);
        var_28 |= ((/* implicit */short) ((((/* implicit */_Bool) max((max((var_14), (((/* implicit */unsigned long long int) arr_10 [4ULL] [i_3] [0])))), (((/* implicit */unsigned long long int) ((var_7) ? (-9123193547484894969LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : ((-(((/* implicit */int) arr_8 [i_3] [i_3]))))));
    }
    for (short i_4 = 0; i_4 < 24; i_4 += 4) /* same iter space */
    {
        arr_19 [i_4] [(unsigned char)7] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_5 [i_4] [i_4])), (((((/* implicit */_Bool) arr_8 [i_4] [(short)11])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_16 [i_4]))))) : (((arr_3 [i_4] [17]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4] [6])))))))));
        arr_20 [i_4] = 4194240;
    }
    var_29 |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)79))))) : ((((~(((/* implicit */int) (unsigned char)119)))) | (((((/* implicit */int) (signed char)-64)) - (((/* implicit */int) (signed char)-126))))))));
}
