/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203330
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_8 [(short)14] [(short)14] [i_2] = min((((unsigned char) arr_5 [i_2] [i_2])), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_2 [i_1]))))));
                    var_18 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) max((max((var_5), (var_5))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_14))))))))) + (((((/* implicit */_Bool) min((((/* implicit */long long int) var_13)), (2190505604822103238LL)))) ? (-1719207247251571675LL) : (arr_7 [i_0] [i_1])))));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) 1719207247251571675LL)))))) ^ (((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((/* implicit */int) var_0))))));
                    arr_10 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((short) var_9))) == (((/* implicit */int) var_16))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) 1719207247251571663LL);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_3 = 1; i_3 < 22; i_3 += 2) 
    {
        var_20 &= ((((/* implicit */_Bool) arr_11 [i_3 + 1])) ? (1719207247251571674LL) : (((/* implicit */long long int) ((/* implicit */int) var_12))));
        var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)64))))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) -3400429204664494293LL)) ? (var_17) : (arr_11 [i_3 - 1]))));
        var_22 = ((/* implicit */long long int) (short)16224);
    }
}
