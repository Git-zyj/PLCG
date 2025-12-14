/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244443
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
    var_18 = min((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_10))))), (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_7))) : (((var_7) | (((/* implicit */long long int) ((/* implicit */int) (signed char)107))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)65529)) && (((/* implicit */_Bool) (unsigned char)111)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-12143))) : (max((((var_15) / (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1] [i_0 + 2]))))), (((/* implicit */unsigned int) min(((unsigned short)29), (var_9))))))));
        var_20 ^= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (signed char)120)))) ? (((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_1 [i_0 + 2] [i_0 - 2])))) : (((/* implicit */int) max((arr_0 [i_0 - 1]), (((/* implicit */unsigned char) arr_1 [i_0 + 1] [i_0 - 2])))))));
        var_21 -= ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) <= ((+(((/* implicit */int) (short)23421))))));
        var_22 = ((/* implicit */short) arr_1 [i_0] [i_0]);
    }
    for (unsigned short i_1 = 3; i_1 < 17; i_1 += 1) 
    {
        arr_4 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_10)))) || (((/* implicit */_Bool) min((arr_2 [i_1]), (((/* implicit */unsigned long long int) arr_3 [i_1 + 3] [i_1])))))));
        var_23 ^= ((/* implicit */unsigned char) (short)9697);
        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_2 [(short)0])))) > (((((/* implicit */_Bool) (signed char)113)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_5)))))))))));
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            var_25 = ((/* implicit */short) var_9);
            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) 4128768LL))));
            arr_9 [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) % (((/* implicit */int) var_11))));
            var_27 -= ((/* implicit */long long int) (+(((((((/* implicit */int) var_3)) * (((/* implicit */int) var_11)))) / (((/* implicit */int) arr_3 [i_2] [i_2]))))));
            var_28 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 2795228299412816033ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)-5788))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)98))) : (((((/* implicit */_Bool) var_11)) ? (1575186805U) : (var_15)))))));
        }
        var_29 = ((/* implicit */unsigned long long int) max((var_29), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) (unsigned short)6398))) ? (4047785825U) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_7 [i_1] [i_1]), (((/* implicit */short) var_8))))))))), ((+(arr_2 [(unsigned short)14])))))));
    }
}
