/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202063
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
    var_17 = ((/* implicit */signed char) max((var_2), (((/* implicit */long long int) var_6))));
    var_18 = ((/* implicit */signed char) (+(((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */int) var_7)) < (((/* implicit */int) var_3))))), ((signed char)121))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_19 = ((/* implicit */signed char) (~(((long long int) (signed char)-61))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (signed char i_2 = 2; i_2 < 18; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */signed char) var_15);
                    arr_6 [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)97))))) * ((+(((/* implicit */int) (signed char)-23))))))) >= (((((/* implicit */_Bool) ((long long int) arr_2 [i_1] [i_0]))) ? (var_14) : ((~(var_2)))))));
                    var_21 = ((((((/* implicit */_Bool) ((0LL) << (((arr_1 [i_0]) + (2428905530709833855LL)))))) ? (max((((/* implicit */long long int) var_3)), (var_15))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))))))) << ((((~(arr_1 [i_2 + 1]))) - (2428905530709833852LL))));
                    var_22 = ((0LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)-113))));
                }
            } 
        } 
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)106))))) ? (((/* implicit */int) var_3)) : ((-(((/* implicit */int) ((signed char) var_6)))))));
    }
    for (long long int i_3 = 1; i_3 < 23; i_3 += 3) 
    {
        var_24 = ((/* implicit */signed char) max((((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_12)))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_8 [i_3]) <= (arr_8 [i_3]))))) : ((~(arr_8 [i_3]))))), (max((8588395284995929985LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) 6426298298027285970LL)))))))));
        arr_9 [i_3] [i_3] = ((max((arr_7 [i_3] [i_3]), (arr_8 [i_3]))) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [(signed char)6])) && (((/* implicit */_Bool) (signed char)0)))))));
        var_25 |= arr_7 [0LL] [0LL];
        var_26 = var_4;
        /* LoopSeq 2 */
        for (signed char i_4 = 0; i_4 < 25; i_4 += 4) 
        {
            var_27 = ((/* implicit */signed char) (+(((/* implicit */int) var_7))));
            var_28 = ((long long int) (~(arr_11 [i_3] [i_3 + 1])));
        }
        for (long long int i_5 = 0; i_5 < 25; i_5 += 1) 
        {
            arr_16 [i_3] = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)112))));
            arr_17 [i_3] = ((/* implicit */long long int) var_11);
        }
    }
}
