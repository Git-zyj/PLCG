/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219525
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_17 += ((/* implicit */unsigned char) (signed char)93);
        var_18 ^= ((((long long int) (signed char)-7)) ^ (((/* implicit */long long int) arr_2 [i_0] [i_0])));
        var_19 = ((/* implicit */int) ((((min(((_Bool)1), (var_1))) ? (((((/* implicit */_Bool) 109054064U)) ? (((/* implicit */unsigned int) 1512008906)) : (3609897354U))) : (((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)1)), (arr_2 [(unsigned char)9] [i_0])))))) - (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0])) ^ (((/* implicit */int) arr_1 [i_0])))))));
    }
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        var_20 = ((/* implicit */signed char) var_12);
        arr_6 [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_3 [i_1] [i_1])) >= (67108863))) ? (((/* implicit */int) (((~(((/* implicit */int) arr_5 [(_Bool)0])))) > (((/* implicit */int) arr_5 [(signed char)2]))))) : (min((((((/* implicit */_Bool) (signed char)-17)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_3 [i_1] [i_1])))), (((((/* implicit */int) var_9)) ^ (((/* implicit */int) arr_4 [i_1] [(signed char)4]))))))));
    }
    for (signed char i_2 = 1; i_2 < 7; i_2 += 2) 
    {
        arr_10 [i_2] &= ((/* implicit */unsigned char) (_Bool)0);
        arr_11 [(signed char)4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_0 [i_2 + 3]) ? (((/* implicit */int) arr_0 [i_2 + 3])) : (((/* implicit */int) arr_0 [i_2 + 3]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) (~(arr_8 [8])))))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)117))))) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)-57))) ^ (4467570830351532032LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
    }
    var_21 &= ((/* implicit */signed char) var_0);
    var_22 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_9))));
}
