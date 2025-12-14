/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212021
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
    var_11 -= ((/* implicit */unsigned long long int) var_5);
    var_12 = ((/* implicit */signed char) min((min((170326122447601502ULL), (((/* implicit */unsigned long long int) 1363323160U)))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)89)) : (((/* implicit */int) var_2)))) + (((/* implicit */int) (unsigned char)167)))))));
    var_13 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (signed char)89)), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_8)), (8056865077436051316ULL)))) ? (min((((/* implicit */long long int) var_5)), (var_4))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)89)) ? (min((((/* implicit */long long int) (signed char)-80)), (arr_1 [i_0]))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_0]))))))))));
        arr_2 [i_0] [(unsigned char)9] = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)32754))) >= (arr_1 [i_0])))) == (((/* implicit */int) ((signed char) arr_1 [(_Bool)1])))))), (((int) arr_1 [i_0]))));
        var_15 *= ((/* implicit */signed char) ((((((/* implicit */int) arr_0 [i_0])) > (((/* implicit */int) (signed char)89)))) ? (((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0])))) : (((/* implicit */int) ((_Bool) 10739424670078646656ULL)))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        var_16 ^= ((/* implicit */int) ((((/* implicit */int) arr_3 [i_1 + 1] [(_Bool)1])) < (((/* implicit */int) (signed char)-80))));
        arr_6 [i_1] &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) + (((/* implicit */int) (signed char)-38))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_1]))) / (10739424670078646656ULL))) : (((/* implicit */unsigned long long int) arr_1 [i_1]))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_9 [i_2])))))));
        arr_11 [i_2] [i_2] = ((/* implicit */_Bool) ((arr_8 [i_2] [i_2]) | (((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_10 [i_2])))) : (((arr_8 [i_2] [i_2]) % (((/* implicit */long long int) var_5))))))));
    }
}
