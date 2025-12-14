/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33549
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
    var_18 = ((/* implicit */signed char) -18);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned short) arr_4 [i_1 + 1] [i_1 + 2] [i_0 - 1]);
                arr_7 [i_0 + 1] [i_0 + 1] = ((/* implicit */_Bool) var_3);
                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(-1614027185)))) ? (((/* implicit */long long int) arr_1 [i_1 + 1] [i_0 + 2])) : (var_14))))));
                arr_8 [i_1 - 1] = ((/* implicit */long long int) (+((-(((/* implicit */int) (short)32764))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned short i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        var_20 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) (unsigned short)49152)) ? (arr_3 [12LL]) : (arr_3 [i_2]))) : (((((/* implicit */_Bool) 2061584302080LL)) ? (arr_3 [i_2]) : (((/* implicit */int) arr_9 [i_2] [12LL]))))));
        var_21 = ((/* implicit */short) (-(((((/* implicit */_Bool) var_15)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2] [i_2])))))));
        arr_12 [i_2] = ((/* implicit */unsigned short) arr_9 [i_2] [i_2]);
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (14) : (((/* implicit */int) (_Bool)0))));
    }
    for (unsigned char i_3 = 2; i_3 < 16; i_3 += 1) 
    {
        arr_16 [i_3] = ((/* implicit */_Bool) (+(var_2)));
        var_23 = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (var_13))))))));
        arr_17 [i_3 - 1] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_12))))));
    }
    /* vectorizable */
    for (signed char i_4 = 0; i_4 < 23; i_4 += 1) 
    {
        arr_22 [i_4] &= ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)139)))))));
        var_24 = ((/* implicit */signed char) var_4);
    }
    for (short i_5 = 0; i_5 < 12; i_5 += 4) 
    {
        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_5])) ? (14) : (((/* implicit */int) arr_14 [i_5]))))) && (((/* implicit */_Bool) arr_24 [i_5]))));
        var_26 += ((/* implicit */long long int) ((((/* implicit */_Bool) 2061584302080LL)) ? (((/* implicit */int) (unsigned char)241)) : (((/* implicit */int) (unsigned short)240))));
    }
    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)17)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (2061584302078LL)));
}
