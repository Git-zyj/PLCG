/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232274
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
    var_20 = var_7;
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_21 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_19)) && (((/* implicit */_Bool) arr_0 [i_0]))))))));
        arr_3 [i_0] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_0 [i_0])))) ? (((/* implicit */int) ((signed char) (signed char)-1))) : (((/* implicit */int) (signed char)-1))));
    }
    for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_3 = 2; i_3 < 17; i_3 += 4) 
            {
                for (signed char i_4 = 0; i_4 < 18; i_4 += 2) 
                {
                    {
                        var_22 = ((/* implicit */long long int) var_13);
                        var_23 = ((/* implicit */signed char) ((((/* implicit */int) min((arr_13 [i_1] [i_2] [i_3 - 2] [i_4]), (arr_9 [i_1] [i_2] [i_3 - 2])))) == (max((((((/* implicit */_Bool) (signed char)46)) ? (((/* implicit */int) (signed char)-14)) : (((/* implicit */int) (signed char)112)))), (((/* implicit */int) (signed char)-120))))));
                        arr_16 [i_1] [i_2] [i_1] = ((/* implicit */long long int) (signed char)-6);
                        var_24 += ((/* implicit */signed char) ((long long int) (-(((/* implicit */int) arr_15 [i_3 + 1] [i_3 - 2] [i_3 - 1] [i_3 - 2] [i_3 + 1] [i_3 - 2])))));
                    }
                } 
            } 
            var_25 = ((/* implicit */signed char) (+(((/* implicit */int) min(((signed char)48), ((signed char)-60))))));
            var_26 = ((/* implicit */signed char) (~(((/* implicit */int) arr_8 [i_1] [i_2] [i_2]))));
            var_27 = ((/* implicit */signed char) min((((max((arr_14 [i_1] [i_1] [i_1]), (((/* implicit */long long int) var_17)))) + (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [i_1] [4LL] [i_2]))))), (min((((long long int) arr_7 [i_1] [i_1])), ((~(4248111160299244019LL)))))));
        }
        var_28 = (signed char)4;
        arr_17 [(signed char)2] = ((/* implicit */signed char) ((long long int) ((((/* implicit */int) var_15)) ^ ((-(((/* implicit */int) var_3)))))));
        arr_18 [i_1] [i_1] = ((long long int) ((((/* implicit */long long int) ((/* implicit */int) min(((signed char)-60), ((signed char)0))))) != (var_0)));
    }
    var_29 = var_10;
    var_30 = ((/* implicit */signed char) (-(((((/* implicit */long long int) ((/* implicit */int) var_13))) / (-1LL)))));
}
