/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44756
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
    var_19 = ((/* implicit */short) var_0);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_20 ^= ((/* implicit */unsigned int) (short)22619);
        var_21 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((signed char) 2375364701U))), ((-9223372036854775807LL - 1LL))));
        arr_3 [i_0] |= ((/* implicit */signed char) (+(1919602626U)));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        var_22 -= ((/* implicit */unsigned int) (unsigned char)63);
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 15; i_2 += 4) /* same iter space */
        {
            arr_8 [i_1 + 1] [(_Bool)1] [i_2] = ((/* implicit */_Bool) arr_7 [10ULL] [i_1]);
            arr_9 [i_1] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) 1919602606U))) + (((/* implicit */int) min((var_18), (var_2))))))) ? (arr_1 [(unsigned char)6] [i_2]) : (arr_2 [i_1])));
        }
        for (int i_3 = 0; i_3 < 15; i_3 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (int i_4 = 0; i_4 < 15; i_4 += 4) 
            {
                var_23 = ((unsigned long long int) 4294967271U);
                arr_15 [i_3] [i_4] [i_3] [i_1 + 1] = ((/* implicit */long long int) var_1);
                var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((-504890154) + (arr_1 [0ULL] [i_3])))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-1))))) : (max((((/* implicit */unsigned int) (_Bool)1)), (4294967284U)))))) ? (((/* implicit */unsigned long long int) ((long long int) ((unsigned char) 4294967284U)))) : (17487246049445160540ULL));
            }
            var_25 = ((/* implicit */short) min((((/* implicit */unsigned long long int) arr_12 [i_1] [i_1] [i_3] [i_3])), (((((/* implicit */_Bool) ((-4086107418043399995LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (min((var_15), (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) arr_1 [i_1] [i_1]))))));
            arr_16 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((unsigned long long int) 9007199254740991ULL))) ? (min((4294967287U), (((/* implicit */unsigned int) arr_2 [i_1])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)3)) ? (((/* implicit */int) (short)-23642)) : (((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned int) (signed char)-23))));
            var_26 = ((/* implicit */_Bool) (+(((/* implicit */int) max(((short)23642), (((/* implicit */short) arr_10 [i_1] [i_1 + 1] [i_1 + 1])))))));
            arr_17 [(unsigned short)12] [(unsigned short)12] [i_3] = ((/* implicit */_Bool) (+(max((((/* implicit */unsigned int) ((int) arr_2 [i_1]))), (var_7)))));
        }
        var_27 &= ((/* implicit */short) ((((/* implicit */_Bool) max((var_14), (((/* implicit */int) var_13))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1])) ? (arr_13 [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1]) : (arr_13 [i_1 + 1] [i_1 + 1] [2] [i_1 + 1])))) : (((long long int) arr_13 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]))));
    }
    var_28 = ((/* implicit */short) max((((/* implicit */int) var_8)), (max((((/* implicit */int) ((_Bool) (unsigned char)1))), (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_4))))))));
}
