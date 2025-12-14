/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235067
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
    var_16 *= ((/* implicit */unsigned int) ((_Bool) ((signed char) ((short) (signed char)1))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_17 -= ((/* implicit */unsigned int) ((signed char) (unsigned short)1729));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 12; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_18 += ((/* implicit */unsigned int) ((unsigned char) 1653779371U));
                                var_19 += ((/* implicit */signed char) ((_Bool) ((unsigned int) ((unsigned char) (unsigned short)49379))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    for (int i_5 = 0; i_5 < 12; i_5 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 1) 
        {
            for (short i_7 = 3; i_7 < 10; i_7 += 3) 
            {
                {
                    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((unsigned char) 2047U)))));
                    arr_16 [i_5] [i_5] [i_7] [i_5] |= ((/* implicit */unsigned long long int) ((_Bool) ((_Bool) (short)28518)));
                    arr_17 [i_5] |= ((/* implicit */_Bool) ((unsigned long long int) ((unsigned char) (short)32767)));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_8 = 0; i_8 < 12; i_8 += 1) 
        {
            for (short i_9 = 1; i_9 < 10; i_9 += 1) 
            {
                {
                    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((signed char) ((unsigned int) ((long long int) 1653779371U)))))));
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((_Bool) ((int) (signed char)122))))));
                    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((signed char) ((signed char) ((unsigned int) (unsigned short)0)))))));
                }
            } 
        } 
    }
    for (int i_10 = 0; i_10 < 12; i_10 += 2) /* same iter space */
    {
        var_24 &= ((/* implicit */int) ((_Bool) ((_Bool) ((unsigned int) (short)28518))));
        var_25 -= ((unsigned int) ((unsigned int) ((unsigned int) arr_10 [i_10])));
        var_26 ^= ((/* implicit */unsigned long long int) ((unsigned int) 9223372036854775807LL));
        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((unsigned int) ((short) 2047U))))));
        var_28 &= ((/* implicit */signed char) ((int) (short)5261));
    }
    var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((unsigned int) (short)1262)))));
    /* LoopNest 2 */
    for (unsigned short i_11 = 0; i_11 < 18; i_11 += 2) 
    {
        for (unsigned int i_12 = 0; i_12 < 18; i_12 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_13 = 0; i_13 < 18; i_13 += 2) 
                {
                    var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((int) ((int) var_2))))));
                    var_31 -= ((unsigned int) ((unsigned long long int) var_8));
                    var_32 *= ((unsigned short) ((unsigned int) 31457280ULL));
                }
                var_33 *= ((/* implicit */int) ((_Bool) ((signed char) (unsigned short)65535)));
            }
        } 
    } 
}
