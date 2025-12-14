/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221116
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
    var_19 ^= ((/* implicit */signed char) max((max((max((((/* implicit */long long int) var_5)), (9045502953836730383LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)119)) || (((/* implicit */_Bool) (signed char)120))))))), (4095LL)));
    var_20 = ((/* implicit */signed char) (-(min((((((/* implicit */long long int) ((/* implicit */int) var_13))) & (var_2))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)119)) ? (((/* implicit */int) (signed char)-120)) : (((/* implicit */int) (signed char)-120)))))))));
    var_21 ^= ((/* implicit */signed char) max((((((/* implicit */_Bool) max(((signed char)-1), (((/* implicit */signed char) var_10))))) ? (((int) var_1)) : (((((/* implicit */_Bool) (signed char)119)) ? (((/* implicit */int) (signed char)-120)) : (((/* implicit */int) (signed char)119)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (signed char)-119))))) ? (((((/* implicit */int) (signed char)119)) >> (((((/* implicit */int) (signed char)-1)) + (29))))) : (max((((/* implicit */int) (signed char)-120)), (-76650052)))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */int) ((long long int) max(((signed char)-8), (min(((signed char)119), ((signed char)-120))))));
        var_22 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)119)) ? (((/* implicit */int) (signed char)0)) : (arr_1 [(_Bool)1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) (signed char)-120)), (arr_1 [(_Bool)1]))))))) : (((/* implicit */int) ((signed char) (-2147483647 - 1))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_23 ^= ((arr_6 [i_1] [i_1]) ? (((/* implicit */int) arr_6 [i_1] [(signed char)8])) : (((/* implicit */int) (_Bool)0)));
        var_24 ^= ((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_1] [i_1])) / (((/* implicit */int) arr_6 [i_1] [i_1]))));
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            var_25 ^= ((/* implicit */signed char) ((arr_5 [i_1]) && (((/* implicit */_Bool) (signed char)-8))));
            var_26 = ((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_1] [i_2])) / (((/* implicit */int) arr_8 [i_1] [1LL]))));
        }
    }
    /* vectorizable */
    for (signed char i_3 = 1; i_3 < 14; i_3 += 4) 
    {
        arr_13 [(signed char)3] = ((/* implicit */long long int) (signed char)127);
        arr_14 [i_3] = ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-82))))) ? ((((_Bool)0) ? (((/* implicit */int) (signed char)-8)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */int) (signed char)-1)) >= (((/* implicit */int) (signed char)-120))))));
        arr_15 [i_3] = ((/* implicit */_Bool) (-(((/* implicit */int) (!((_Bool)1))))));
    }
}
