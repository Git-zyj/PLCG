/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20915
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
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_18)))))) ? (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1)))) : (min((((/* implicit */int) var_1)), (min((var_13), (((/* implicit */int) var_2))))))));
    var_21 += ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) ((short) var_16))) ? (((((/* implicit */_Bool) var_14)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_6))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_22 = ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
        var_23 = ((/* implicit */int) arr_1 [i_0] [i_0]);
    }
    for (long long int i_1 = 3; i_1 < 12; i_1 += 3) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)-19476))));
        var_24 *= ((/* implicit */unsigned long long int) var_2);
        arr_9 [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) var_12))));
        var_25 = (short)-21448;
    }
    for (short i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        arr_14 [i_2] [i_2] |= ((/* implicit */short) ((((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */int) arr_10 [i_2])) : (((/* implicit */int) arr_10 [i_2])))) ^ (((/* implicit */int) var_12))));
        var_26 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */int) ((unsigned short) var_17))) : (arr_12 [i_2]))) << (((min((((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_13 [i_2] [i_2])))), (((((((/* implicit */int) arr_11 [i_2] [12LL])) + (2147483647))) << (((((/* implicit */int) (unsigned short)41050)) - (41050))))))) + (43)))));
    }
    var_27 = ((/* implicit */unsigned short) ((((/* implicit */int) var_15)) >= (min((((/* implicit */int) var_6)), (((((/* implicit */int) var_15)) / (((/* implicit */int) var_19))))))));
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 15; i_3 += 2) 
    {
        for (long long int i_4 = 0; i_4 < 15; i_4 += 1) 
        {
            {
                var_28 = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) arr_18 [i_4])), (12429233927967891093ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_4])))));
                arr_22 [i_3] [i_3] [i_3] = ((/* implicit */_Bool) arr_10 [i_4]);
            }
        } 
    } 
}
