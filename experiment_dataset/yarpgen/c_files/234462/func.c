/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234462
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
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) max((((((((/* implicit */int) var_0)) + (2147483647))) << (((((/* implicit */int) max((var_11), (var_5)))) - (16))))), (((((/* implicit */int) var_7)) & (((/* implicit */int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) var_10))))))))))));
    var_14 = var_12;
    var_15 = var_1;
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            var_16 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))) ^ (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)-67)) : (((/* implicit */int) var_12))))));
            arr_4 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) var_10)) | (((/* implicit */int) ((signed char) var_12)))));
        }
        arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) var_11)) > (((/* implicit */int) var_0))));
    }
    for (signed char i_2 = 3; i_2 < 20; i_2 += 1) 
    {
        arr_8 [i_2] = ((/* implicit */signed char) max((((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9)))) << (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8)))) - (30))))), (((/* implicit */int) var_3))));
        /* LoopSeq 1 */
        for (signed char i_3 = 1; i_3 < 20; i_3 += 1) 
        {
            arr_12 [i_2 - 2] = ((signed char) (~((-(((/* implicit */int) var_9))))));
            arr_13 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-67)) ? (((((/* implicit */_Bool) (signed char)-70)) ? (((/* implicit */int) min(((signed char)79), ((signed char)73)))) : (((((/* implicit */int) (signed char)-53)) / (((/* implicit */int) (signed char)-93)))))) : (((/* implicit */int) ((((/* implicit */int) (signed char)34)) == (((/* implicit */int) (signed char)20)))))));
            arr_14 [i_3] [i_3] = ((/* implicit */signed char) max((max((((/* implicit */int) max((var_3), (var_12)))), ((+(((/* implicit */int) var_3)))))), ((-(((/* implicit */int) max((var_4), (var_9))))))));
            var_17 = ((signed char) max((((signed char) (signed char)-70)), (max((var_3), (var_6)))));
        }
        var_18 -= ((/* implicit */signed char) (~(((((/* implicit */_Bool) (signed char)-59)) ? (((/* implicit */int) (signed char)-85)) : (((/* implicit */int) (signed char)80))))));
    }
}
