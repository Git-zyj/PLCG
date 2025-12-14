/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225535
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_11 = ((/* implicit */int) arr_1 [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            for (unsigned short i_2 = 3; i_2 < 17; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */short) (+(((long long int) (short)-22562))));
                    var_13 = ((/* implicit */short) (!(((/* implicit */_Bool) ((signed char) ((signed char) arr_6 [i_0] [i_1] [i_2]))))));
                }
            } 
        } 
        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((signed char) (-(((((/* implicit */int) var_3)) >> (((var_1) - (7219098885545700260LL)))))))))));
    }
    for (int i_3 = 1; i_3 < 20; i_3 += 2) 
    {
        arr_9 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) var_4))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) 9223372036854775799LL)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (short)15)))) >> (((((/* implicit */int) arr_7 [i_3] [i_3])) - (77))))))));
        var_15 ^= ((/* implicit */unsigned char) ((((((((/* implicit */int) arr_8 [i_3])) < (((/* implicit */int) arr_8 [i_3])))) && (((/* implicit */_Bool) ((long long int) arr_8 [i_3]))))) ? (max((((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */int) arr_7 [i_3] [i_3])) : (var_2))), (((((/* implicit */int) arr_7 [i_3] [i_3])) + (((/* implicit */int) arr_8 [i_3])))))) : (var_2)));
    }
    var_16 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */long long int) ((((/* implicit */int) var_3)) & (((/* implicit */int) var_9))))))), (((((/* implicit */_Bool) (~(var_0)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (var_0) : (var_0)))) : (min((var_1), (((/* implicit */long long int) var_0))))))));
}
