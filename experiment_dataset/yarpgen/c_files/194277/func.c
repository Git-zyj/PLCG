/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194277
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((unsigned char) var_12))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))) ? (((/* implicit */int) ((((var_16) << (((((/* implicit */int) var_9)) - (13))))) == (((((/* implicit */int) var_11)) / (var_15)))))) : (min((((/* implicit */int) var_10)), (((((/* implicit */int) var_13)) / (((/* implicit */int) var_17))))))));
    var_19 = ((/* implicit */signed char) var_4);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            for (signed char i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */signed char) ((short) ((((((/* implicit */_Bool) -1795972970)) ? (-1318381153) : (((/* implicit */int) (short)-16384)))) > (((/* implicit */int) ((((/* implicit */int) (short)18318)) != (((/* implicit */int) (short)13037))))))));
                    var_21 = ((/* implicit */short) var_3);
                    arr_8 [i_0] [i_0] = max(((~(((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) var_12)) : (var_8))))), (((/* implicit */int) ((short) 244787475))));
                    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((((((/* implicit */int) arr_1 [i_1 - 1] [i_2 - 1])) + (2147483647))) >> (((((/* implicit */int) arr_7 [i_1 + 1] [i_0])) - (11404))))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_2)) | (((/* implicit */int) arr_1 [i_0] [(short)3]))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned char) min((var_5), (((/* implicit */short) var_2))));
    var_24 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)-122)))) ^ (((/* implicit */int) var_1)))) / (((((/* implicit */_Bool) max((((/* implicit */short) var_9)), (var_10)))) ? (((/* implicit */int) var_14)) : ((-(((/* implicit */int) (signed char)101))))))));
}
