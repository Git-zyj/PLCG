/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207268
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
    var_19 = ((/* implicit */unsigned char) var_13);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned char) ((max((((/* implicit */int) (unsigned char)16)), (0))) <= (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)3)) & (((/* implicit */int) (_Bool)1))))) <= ((~(arr_0 [i_0]))))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 13; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */long long int) ((signed char) (((-9223372036854775807LL - 1LL)) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14797))))));
                    var_22 = ((/* implicit */long long int) ((short) ((unsigned long long int) (unsigned char)253)));
                }
            } 
        } 
        var_23 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_2 [10LL] [(unsigned short)12] [10LL])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1))) : (var_7))) + (((/* implicit */long long int) ((/* implicit */int) ((signed char) -9223372036854775785LL))))))) / (min((((/* implicit */unsigned long long int) (_Bool)1)), (var_1)))));
        var_24 = ((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) ((int) (unsigned char)3))))));
    }
    var_25 -= var_17;
}
