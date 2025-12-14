/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196270
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
    var_15 = ((/* implicit */int) ((long long int) (short)32749));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32735))) * (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (max((((/* implicit */unsigned long long int) var_3)), (13655966048621882914ULL)))))));
        var_16 = ((/* implicit */long long int) ((((arr_2 [i_0]) > (max((((/* implicit */unsigned long long int) 6900655438182937080LL)), (var_7))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20582))) - (arr_2 [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) : (var_9))) : (((((((arr_1 [i_0] [i_0]) + (2147483647))) >> (((/* implicit */int) var_13)))) >> (((((arr_2 [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))) - (18446744073709551613ULL)))))));
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) (+(arr_1 [i_0] [i_0]))))) > (((/* implicit */int) max(((short)32754), ((short)20582))))));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 21; i_1 += 2) 
    {
        arr_9 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_5 [i_1 - 2])) : (((/* implicit */int) arr_5 [i_1 - 1]))));
        var_17 = ((/* implicit */int) arr_5 [i_1]);
        arr_10 [i_1] [i_1] = ((/* implicit */short) ((int) (~(((/* implicit */int) (short)-32735)))));
        var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_7 [i_1] [i_1 - 2]))));
    }
}
