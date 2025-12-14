/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240727
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
    var_18 = ((/* implicit */unsigned int) var_12);
    var_19 ^= ((long long int) max((-200220554890893894LL), (max((var_1), (var_7)))));
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_1 [i_0]) ? (((/* implicit */int) arr_1 [(_Bool)1])) : (var_9)))) ? (((((/* implicit */_Bool) 2742248558U)) ? (((/* implicit */int) var_13)) : (var_5))) : (((((/* implicit */int) var_0)) ^ (((/* implicit */int) (signed char)127)))))))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            var_21 += ((((((/* implicit */_Bool) max((((/* implicit */int) (signed char)105)), (arr_4 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_9)))) : (((((/* implicit */_Bool) -8774502822925321586LL)) ? (arr_0 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [5LL]))))))) ^ ((~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (arr_0 [i_0]))))));
            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [(signed char)1])) ? (arr_4 [(signed char)6]) : (arr_4 [i_0])))) : ((-(-8774502822925321574LL)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_17)), (-4236312827508884356LL)))) ? (((arr_1 [4U]) ? (((/* implicit */int) (signed char)-120)) : (((/* implicit */int) arr_1 [i_1])))) : (((((/* implicit */_Bool) 5536099895539742327LL)) ? (arr_4 [(signed char)9]) : (arr_4 [i_0])))))) : (((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((((/* implicit */_Bool) arr_4 [i_1 + 1])) ? (((/* implicit */unsigned int) arr_4 [i_0])) : (4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0 - 1] [i_0 - 1])))))));
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 9; i_2 += 2) 
        {
            arr_7 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) || (((/* implicit */_Bool) arr_0 [i_0 + 1]))));
            var_23 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-105)) ? (((((/* implicit */_Bool) 8188LL)) ? (var_9) : (((/* implicit */int) arr_1 [i_0])))) : ((~(((/* implicit */int) var_13))))));
        }
        var_24 ^= (+(((((((/* implicit */long long int) ((/* implicit */int) var_3))) | (3217016318201054094LL))) - (((arr_3 [i_0] [i_0]) - (((/* implicit */long long int) var_5)))))));
        var_25 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((long long int) var_16))) ? (max((8774502822925321586LL), (((/* implicit */long long int) 4238281373U)))) : (max((arr_0 [i_0]), (((/* implicit */long long int) arr_1 [i_0])))))), (((((/* implicit */_Bool) max(((signed char)127), (((/* implicit */signed char) (_Bool)1))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)105)), (56685911U)))) : ((-(var_1)))))));
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 8; i_3 += 3) 
    {
        arr_10 [i_3] = ((/* implicit */int) ((var_16) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        var_26 ^= ((/* implicit */int) (((!(((/* implicit */_Bool) arr_6 [7LL] [i_3] [7LL])))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_3 + 1] [i_3 - 2] [i_3 - 2]))))))));
        arr_11 [i_3] = ((/* implicit */unsigned int) arr_9 [i_3] [i_3]);
    }
}
