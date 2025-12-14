/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26209
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = (~(((/* implicit */int) ((((var_18) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
        var_19 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (~(((/* implicit */int) (short)(-32767 - 1)))))) ? (var_15) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-21340)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_5)))))), (((/* implicit */unsigned long long int) var_7))));
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (((-(((/* implicit */int) var_4)))) + (((/* implicit */int) ((unsigned short) arr_1 [i_0])))))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_2))) : (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_17))) < (1099511627775LL))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-69)), (arr_2 [i_0])))))))));
    }
    for (short i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        var_20 = ((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_7 [i_1])) / (((/* implicit */int) arr_7 [i_1])))), (((/* implicit */int) max(((_Bool)1), (var_8))))));
        arr_8 [i_1] = ((/* implicit */signed char) ((_Bool) ((int) arr_7 [i_1])));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) (-(((/* implicit */int) (short)-32745)))))) ? (((/* implicit */int) var_12)) : (((((/* implicit */int) arr_6 [i_1] [i_2])) * (((/* implicit */int) var_17))))));
            var_22 = ((/* implicit */unsigned char) ((long long int) (!(((/* implicit */_Bool) arr_11 [i_1])))));
        }
    }
    var_23 = ((/* implicit */int) (short)-32764);
}
