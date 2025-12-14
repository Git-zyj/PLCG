/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203452
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
    var_19 += ((/* implicit */long long int) ((int) ((var_12) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)8221)) : (((/* implicit */int) var_1))))))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_20 = ((/* implicit */signed char) (+(((/* implicit */int) max(((short)-8222), ((short)0))))));
        arr_4 [i_0] [i_0] = ((unsigned long long int) min((((/* implicit */long long int) var_14)), (arr_0 [i_0])));
    }
    for (unsigned short i_1 = 1; i_1 < 22; i_1 += 2) 
    {
        var_21 = ((/* implicit */unsigned long long int) max((137958770294975152LL), (((/* implicit */long long int) (short)-21086))));
        var_22 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) -17179869184LL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1)))))) <= (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned char)97)) || (((/* implicit */_Bool) var_17))))))));
        arr_7 [i_1 + 1] [(unsigned char)3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((arr_2 [i_1 - 1] [i_1 + 1]) / (((((/* implicit */_Bool) var_16)) ? (var_16) : (var_13))))))));
        var_23 = ((/* implicit */int) min((((/* implicit */long long int) var_7)), (arr_6 [i_1])));
    }
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
    {
        var_24 &= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-15472))) != (-17179869178LL)));
        arr_12 [(short)8] = ((/* implicit */signed char) (-(arr_9 [i_2])));
        var_25 = ((/* implicit */long long int) max((var_25), (arr_3 [i_2])));
        /* LoopSeq 2 */
        for (signed char i_3 = 1; i_3 < 19; i_3 += 2) 
        {
            var_26 -= ((/* implicit */long long int) (unsigned short)0);
            /* LoopNest 2 */
            for (int i_4 = 3; i_4 < 20; i_4 += 4) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    {
                        var_27 = ((/* implicit */short) var_16);
                        var_28 = ((/* implicit */unsigned char) ((((long long int) (signed char)32)) & (var_6)));
                        var_29 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) var_17))) ? (((((/* implicit */_Bool) (short)-8221)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (((/* implicit */long long int) arr_19 [i_2] [i_4 - 2] [i_3] [i_3] [i_2]))));
                    }
                } 
            } 
        }
        for (long long int i_6 = 2; i_6 < 20; i_6 += 4) 
        {
            arr_23 [i_6] [i_6] = ((((/* implicit */unsigned long long int) var_6)) ^ (var_11));
            var_30 = ((/* implicit */unsigned long long int) ((((var_14) + (2147483647))) >> (((var_2) + (4530125302804577815LL)))));
        }
    }
    for (long long int i_7 = 0; i_7 < 25; i_7 += 4) 
    {
        var_31 = ((int) (+(((var_11) / (((/* implicit */unsigned long long int) var_16))))));
        /* LoopSeq 1 */
        for (unsigned char i_8 = 0; i_8 < 25; i_8 += 2) 
        {
            var_32 += ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((unsigned short) var_7))) : (((((/* implicit */int) arr_27 [i_7])) / (var_9)))))) ^ (((long long int) (+(((/* implicit */int) var_7)))))));
            var_33 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1125350151028736ULL)) ? (((/* implicit */int) (short)-19032)) : (((/* implicit */int) (short)0))))) ? (((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (((/* implicit */long long int) ((int) var_5))))))));
            arr_29 [i_7] = ((/* implicit */unsigned long long int) ((unsigned char) (+(((/* implicit */int) (short)8971)))));
        }
        arr_30 [i_7] [i_7] = var_15;
    }
    /* LoopNest 3 */
    for (int i_9 = 1; i_9 < 16; i_9 += 4) 
    {
        for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 4) 
        {
            for (long long int i_11 = 2; i_11 < 15; i_11 += 2) 
            {
                {
                    arr_42 [i_10] [i_9] [i_9] [i_9] = ((/* implicit */signed char) (unsigned short)9160);
                    var_34 = ((/* implicit */short) (~(((long long int) (!(((/* implicit */_Bool) (unsigned char)159)))))));
                    var_35 *= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)83)) : (((/* implicit */int) arr_10 [i_11 + 1]))))) ? (((/* implicit */unsigned long long int) max((var_8), (((/* implicit */long long int) var_9))))) : ((+(var_11))))), (((unsigned long long int) arr_24 [i_11]))));
                    var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_12) : (((/* implicit */long long int) 1610612736))))) ? (((/* implicit */unsigned long long int) var_15)) : (((((/* implicit */_Bool) arr_13 [i_9] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : (18445618723558522879ULL)))))) ? (((long long int) ((((/* implicit */_Bool) var_10)) ? (var_16) : (var_8)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((((/* implicit */long long int) ((/* implicit */int) arr_26 [i_9]))) & (var_2))))))))));
                    var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) (-(arr_3 [i_9 + 1]))))));
                }
            } 
        } 
    } 
}
