/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208524
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
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4248269866U)) ? (((/* implicit */int) (unsigned short)16384)) : (((/* implicit */int) arr_0 [i_0 + 3] [i_0 + 2]))))) ? (((/* implicit */int) arr_1 [i_0])) : (((arr_1 [i_0]) ? (((/* implicit */int) arr_0 [i_0 + 3] [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 3]))))));
        var_21 = ((/* implicit */short) ((signed char) max((((/* implicit */int) min(((unsigned char)151), (((/* implicit */unsigned char) arr_1 [i_0]))))), (((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) arr_0 [i_0] [i_0])))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 17; i_3 += 2) 
            {
                for (signed char i_4 = 0; i_4 < 17; i_4 += 2) 
                {
                    {
                        var_22 = arr_6 [i_3] [i_2] [i_1];
                        var_23 ^= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_8 [(unsigned short)2])) ? (((/* implicit */int) arr_1 [i_1])) : (arr_4 [i_2] [i_2])))))) != (((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_4]))))) ? (((arr_12 [i_1] [15U] [i_1] [i_1]) * (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)32757)))))))));
                        var_24 = ((/* implicit */signed char) (-9223372036854775807LL - 1LL));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) (_Bool)1))));
        var_26 *= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [7LL] [i_1] [i_1])) ? ((((~(((/* implicit */int) arr_0 [i_1] [i_1])))) + (((/* implicit */int) arr_0 [(short)12] [9U])))) : (((/* implicit */int) ((signed char) (+(((/* implicit */int) arr_1 [i_1]))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 2) /* same iter space */
    {
        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) (+((+(var_2))))))));
        var_28 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_5] [i_5] [i_5] [i_5]))) * (1988678868087529877ULL)))) ? (((/* implicit */int) arr_13 [i_5])) : (((/* implicit */int) var_7))));
    }
    var_29 |= ((/* implicit */unsigned int) (unsigned char)104);
    /* LoopNest 2 */
    for (long long int i_6 = 0; i_6 < 15; i_6 += 3) 
    {
        for (int i_7 = 0; i_7 < 15; i_7 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_8 = 2; i_8 < 14; i_8 += 3) 
                {
                    var_30 = ((/* implicit */int) ((((_Bool) arr_2 [i_6])) ? (((((/* implicit */_Bool) var_17)) ? (arr_5 [i_8 + 1] [i_7] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [6ULL]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_13 [i_6])) > (((/* implicit */int) (signed char)42))))))));
                    var_31 = ((((/* implicit */long long int) ((/* implicit */int) arr_0 [(_Bool)1] [i_8 - 2]))) / ((+(var_14))));
                }
                var_32 = ((/* implicit */unsigned int) arr_21 [i_6] [i_6] [i_6] [i_6]);
            }
        } 
    } 
}
