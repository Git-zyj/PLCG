/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207097
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
    var_20 &= ((/* implicit */signed char) var_19);
    var_21 = ((/* implicit */unsigned char) var_4);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (5400481751693933286LL) : (((/* implicit */long long int) var_13))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) var_2);
        arr_5 [11U] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(-2229466313737066794LL))))));
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_12)) : (5400481751693933289LL)));
    }
    for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_2 = 4; i_2 < 17; i_2 += 2) 
        {
            var_24 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1238260097)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((((/* implicit */_Bool) 1909807914U)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) 544317887U)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_11))))));
            var_25 = ((((/* implicit */_Bool) var_16)) ? (2385159381U) : (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 544317881U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)37561))))))));
            /* LoopSeq 1 */
            for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                var_26 *= ((/* implicit */_Bool) var_4);
                arr_13 [i_2] [i_1] [i_2 - 3] [(unsigned char)16] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (1760358171U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (var_16) : (((/* implicit */unsigned long long int) 417048666U)))) > (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))))))))));
            }
            var_27 |= ((/* implicit */unsigned short) (signed char)5);
        }
        /* vectorizable */
        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            var_28 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_18)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
            var_29 ^= ((/* implicit */_Bool) var_5);
        }
        for (signed char i_5 = 0; i_5 < 20; i_5 += 4) 
        {
            var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) ((var_14) << (((var_4) - (685417259U))))))));
            var_31 = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (-9LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (var_16) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)0)))))));
        }
        var_32 -= ((/* implicit */_Bool) var_16);
        arr_20 [i_1] = ((/* implicit */_Bool) var_18);
    }
}
