/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223513
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -256720365)) ? (((/* implicit */int) (_Bool)1)) : (2147483647)));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_8 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) (short)-21116);
                    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)58485)) < (((/* implicit */int) (!(((/* implicit */_Bool) 1U)))))));
                    arr_9 [(_Bool)1] [i_0] [i_0] = ((/* implicit */_Bool) (short)(-32767 - 1));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (int i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            arr_13 [i_0] [12U] [12U] = ((_Bool) (_Bool)1);
            arr_14 [i_0] [i_3] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) 134217728U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))));
            arr_15 [i_0] [i_0] = ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (signed char)-64)));
            var_15 = ((/* implicit */unsigned char) (_Bool)1);
        }
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_16 = ((/* implicit */unsigned short) max((var_16), (min((((/* implicit */unsigned short) max(((signed char)23), (((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned short)54650)))))))), (((unsigned short) (((_Bool)1) ? (-4536467217754027586LL) : (-640318683278017169LL))))))));
        var_17 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -57035023461882664LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6))))) ? ((((-9223372036854775807LL - 1LL)) / (-640318683278017200LL))) : (((((/* implicit */long long int) ((/* implicit */int) (short)7675))) / (640318683278017199LL)))));
        var_18 |= ((/* implicit */_Bool) min((2826937883U), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)238))))));
    }
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((((_Bool) (signed char)55)) ? ((-(3373531312013079631LL))) : (((/* implicit */long long int) ((((/* implicit */int) var_5)) + (((/* implicit */int) (signed char)-2))))))) / (((/* implicit */long long int) ((var_10) + (var_7)))))))));
    /* LoopNest 2 */
    for (long long int i_5 = 1; i_5 < 15; i_5 += 3) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned int) (signed char)34);
                var_21 = ((((/* implicit */int) (signed char)-2)) ^ (((/* implicit */int) (_Bool)1)));
            }
        } 
    } 
}
