/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30060
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
    /* LoopSeq 4 */
    for (int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((signed char) var_2));
        /* LoopSeq 4 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            var_14 ^= ((/* implicit */unsigned short) 4294967295U);
            var_15 = ((/* implicit */unsigned int) arr_4 [i_0 + 1]);
            var_16 = var_6;
            var_17 |= arr_5 [i_0] [(unsigned char)15];
        }
        for (long long int i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            var_18 = ((/* implicit */signed char) ((max((max((0U), (((/* implicit */unsigned int) var_8)))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_11))))))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 1])))));
            var_19 = ((/* implicit */unsigned char) var_10);
        }
        for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) 
        {
            var_20 -= var_5;
            var_21 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((((var_6) + (9223372036854775807LL))) >> (((4294967293U) - (4294967293U))))) <= (((/* implicit */long long int) 4294967295U))))), ((~(-8219007491519656291LL)))));
            var_22 = ((/* implicit */unsigned char) arr_6 [i_0] [i_0]);
        }
        for (short i_4 = 0; i_4 < 18; i_4 += 3) 
        {
            arr_13 [i_4] [i_0] = ((/* implicit */unsigned long long int) arr_7 [i_4]);
            arr_14 [i_0] [(_Bool)1] [16LL] = ((/* implicit */signed char) var_4);
        }
        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((max((arr_4 [i_0 + 1]), (((/* implicit */unsigned long long int) arr_12 [i_0])))) - (((/* implicit */unsigned long long int) 0U)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (signed char)-77)))))))));
    }
    for (unsigned short i_5 = 1; i_5 < 17; i_5 += 3) 
    {
        var_24 += ((/* implicit */int) var_9);
        var_25 = ((/* implicit */int) (-(0U)));
    }
    for (unsigned short i_6 = 0; i_6 < 10; i_6 += 4) 
    {
        var_26 = ((((/* implicit */unsigned long long int) var_0)) <= (((unsigned long long int) (unsigned short)32242)));
        arr_19 [0U] = ((/* implicit */unsigned short) (~(max((443604415), (((/* implicit */int) var_11))))));
        var_27 = ((/* implicit */unsigned short) 802978266639880128LL);
    }
    for (unsigned int i_7 = 1; i_7 < 23; i_7 += 3) 
    {
        var_28 -= ((/* implicit */unsigned short) (+(((arr_21 [i_7 + 1] [i_7 + 2]) >> (((1776613998) - (1776613995)))))));
        var_29 = ((/* implicit */int) (signed char)48);
    }
    var_30 *= ((/* implicit */unsigned long long int) var_6);
}
