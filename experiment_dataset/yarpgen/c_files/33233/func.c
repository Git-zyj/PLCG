/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33233
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
    var_18 = ((/* implicit */int) ((unsigned int) var_0));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) min((((18443635523944678166ULL) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 262143U)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_17)))))))), (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_0 [i_0])), (((((/* implicit */int) var_0)) >> (((((/* implicit */int) var_13)) - (34380))))))))));
        arr_3 [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-127)) * (((/* implicit */int) (short)23358))))), (((unsigned int) var_5))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2406167402U)) ? (((/* implicit */long long int) 2936739692U)) : (var_11)))) ? ((-(var_4))) : (min((1797119688990067385ULL), (18443635523944678166ULL)))))));
        var_19 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [10U]))) + (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15))) : (1888799893U)))))) : (max((var_7), (((/* implicit */unsigned long long int) arr_0 [(unsigned short)6]))))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) /* same iter space */
        {
            arr_8 [5U] [i_0] [i_0] = ((/* implicit */unsigned short) var_7);
            arr_9 [i_0] [i_1] = ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1888799911U)) ? (4294967295U) : (2U)))) & (16651748900351299055ULL))), (((((var_11) >= (((/* implicit */long long int) 8388607U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (_Bool)1)))) : ((-(17696306318013859872ULL)))))));
        }
        for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) /* same iter space */
        {
            arr_13 [i_0] [i_0] = ((/* implicit */unsigned int) 4194288);
            var_20 *= ((/* implicit */unsigned int) ((((((18446744073709551615ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65499))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17420))) : (((((/* implicit */_Bool) (signed char)-117)) ? (4010842175U) : (2406167402U))))) == (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (1797119688990067385ULL)))) ? (((((/* implicit */_Bool) arr_4 [i_0] [10ULL] [i_2])) ? (4294967295U) : (1888799893U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (short)32767)))))))));
            var_21 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_17)) >> (((var_8) - (161111218125880092ULL)))))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (signed char)-66)) : (((/* implicit */int) (unsigned short)25084)))) : (((/* implicit */int) var_5)))));
        }
    }
}
