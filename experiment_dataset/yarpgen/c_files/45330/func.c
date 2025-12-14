/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45330
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        var_20 &= ((/* implicit */int) var_18);
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_3))))) || (((var_1) > (((/* implicit */unsigned long long int) arr_1 [11]))))))), (((unsigned char) max((((/* implicit */unsigned long long int) var_11)), (var_2)))))))));
        arr_2 [i_0] = ((/* implicit */_Bool) arr_1 [(signed char)7]);
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (2837864196364614701ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 1]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (var_9) : (var_19))))));
            arr_6 [i_0] [(unsigned char)13] [(unsigned char)13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_13) : (((/* implicit */long long int) arr_1 [i_1]))))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) var_11)), (arr_1 [i_1])))) : ((-(((((/* implicit */_Bool) 13441164402543158639ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) : (arr_3 [i_1])))))));
            arr_7 [i_0] [i_0] = ((/* implicit */signed char) min((((long long int) ((((/* implicit */_Bool) var_7)) ? (1695104794) : (((/* implicit */int) var_16))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) arr_1 [i_0])) : (-9223372036854775807LL))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_0 [i_1])), (2477249804U))))))));
        }
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)98))) ^ (1400716996098122763LL)))) ? (((((((/* implicit */int) arr_0 [i_0])) + (2147483647))) << (((var_10) - (599135888))))) : (((/* implicit */int) arr_4 [i_0 + 2] [i_0 + 2]))))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [(_Bool)1]))));
    }
    for (signed char i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        var_23 = ((/* implicit */int) ((((arr_9 [i_2]) > (arr_9 [i_2]))) ? ((+(arr_9 [i_2]))) : (((/* implicit */unsigned long long int) arr_8 [i_2]))));
        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_8 [i_2]))) ? (-3693506044647356969LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-40))) : (var_13))))))))));
    }
    var_25 = ((/* implicit */int) max((1400716996098122763LL), (((/* implicit */long long int) 534864025))));
    var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 2044437060U)))) ? (((/* implicit */int) (unsigned char)14)) : (((/* implicit */int) (signed char)-21))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((((((/* implicit */_Bool) var_19)) ? (((/* implicit */long long int) var_7)) : (var_19))) - (((/* implicit */long long int) (-(var_6)))))))))));
    var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_0) ? (min((15558914760173778562ULL), (var_2))) : (((/* implicit */unsigned long long int) var_14))))) ? (((var_2) << (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) == (var_1)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((var_1), (((/* implicit */unsigned long long int) var_13)))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8)))))))))));
}
