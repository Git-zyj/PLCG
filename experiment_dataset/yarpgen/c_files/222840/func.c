/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222840
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) ((long long int) var_13))) ? (((long long int) -542646106)) : (((/* implicit */long long int) -542646103)))) : (((/* implicit */long long int) 524287))));
                        var_19 = ((/* implicit */long long int) var_18);
                        var_20 = var_18;
                    }
                } 
            } 
        } 
        arr_12 [i_0] [i_0] = ((/* implicit */long long int) var_18);
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((long long int) ((signed char) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (var_3) : (((/* implicit */unsigned int) -2098994091)))))))));
    }
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 19; i_4 += 2) 
    {
        var_22 = ((unsigned char) (((_Bool)1) ? (((/* implicit */long long int) 542646102)) : (var_8)));
        arr_16 [i_4] = ((/* implicit */_Bool) var_16);
        var_23 += ((/* implicit */_Bool) var_6);
        var_24 += ((/* implicit */unsigned long long int) -1);
    }
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 13; i_5 += 4) 
    {
        var_25 = ((/* implicit */unsigned int) ((long long int) 9223372036854775807LL));
        var_26 = ((int) ((((/* implicit */_Bool) var_13)) ? (-66476493) : (542646118)));
        var_27 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-5133))) : (((unsigned int) -542646115))));
        arr_20 [i_5] = ((/* implicit */unsigned short) var_0);
        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) var_16))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)4)))))));
    }
    /* LoopNest 2 */
    for (signed char i_6 = 3; i_6 < 24; i_6 += 2) 
    {
        for (long long int i_7 = 0; i_7 < 25; i_7 += 2) 
        {
            {
                var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) 8573157376LL))) ? (((/* implicit */int) ((unsigned char) ((unsigned int) var_3)))) : (((/* implicit */int) ((short) (-9223372036854775807LL - 1LL))))));
                var_30 ^= ((/* implicit */unsigned short) var_5);
                var_31 = ((/* implicit */int) ((long long int) var_14));
            }
        } 
    } 
    var_32 = ((/* implicit */short) (signed char)-1);
}
