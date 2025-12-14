/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43049
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
    var_10 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((signed char) (short)-7981))) && (((/* implicit */_Bool) ((((((/* implicit */int) var_6)) + (2147483647))) >> (((/* implicit */int) var_5))))))) ? ((-(((/* implicit */int) (signed char)-35)))) : (((/* implicit */int) ((((/* implicit */int) min((((/* implicit */signed char) var_4)), (var_8)))) >= (((((/* implicit */int) var_7)) >> (((/* implicit */int) var_4)))))))));
    var_11 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-78))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3)))) <= (((/* implicit */int) var_4))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_12 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) - (((/* implicit */int) arr_3 [i_0 + 2] [i_0 - 1] [i_0 - 1]))))) ? (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 2])) : (((/* implicit */int) arr_3 [i_0 + 2] [i_0 - 2] [i_0 + 1])))) : (((((/* implicit */_Bool) (signed char)86)) ? (((/* implicit */int) arr_1 [i_0 + 2])) : (((/* implicit */int) arr_3 [i_0 - 2] [i_0] [i_0 - 1]))))));
                var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) (+(((((/* implicit */_Bool) (short)-6975)) ? ((-(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (signed char)-108)))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_2 = 3; i_2 < 16; i_2 += 4) 
    {
        var_14 = ((/* implicit */signed char) ((short) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (signed char)-86)))));
        var_15 = ((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-75)) ? (((/* implicit */int) (short)10970)) : (((/* implicit */int) var_6)))) >= (((/* implicit */int) var_8))))) ^ (((/* implicit */int) (short)-15147))));
        arr_9 [i_2 - 1] [i_2] = ((/* implicit */_Bool) arr_8 [i_2 + 1]);
        /* LoopSeq 1 */
        for (signed char i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            var_16 = ((/* implicit */signed char) min((var_16), ((signed char)24)));
            arr_12 [i_3] = ((/* implicit */signed char) (-(((/* implicit */int) ((short) arr_7 [i_2 - 2])))));
        }
    }
    var_17 = ((/* implicit */signed char) ((((/* implicit */int) var_3)) + (((/* implicit */int) ((_Bool) max((((/* implicit */short) (signed char)-24)), (var_3)))))));
}
