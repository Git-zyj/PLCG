/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236907
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
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        var_11 |= ((long long int) (unsigned char)188);
        arr_4 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)68))));
        var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) ((((/* implicit */_Bool) 15088900464823209415ULL)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
        /* LoopNest 3 */
        for (long long int i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                for (int i_3 = 3; i_3 < 13; i_3 += 4) 
                {
                    {
                        var_13 ^= ((/* implicit */unsigned int) ((long long int) var_10));
                        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-125)) : (((/* implicit */int) (signed char)-11))));
                        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) var_8))) ? (((((/* implicit */_Bool) (unsigned char)68)) ? (var_7) : (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (short i_4 = 1; i_4 < 13; i_4 += 1) 
        {
            arr_15 [i_0] = ((signed char) (signed char)-11);
            arr_16 [10LL] [(unsigned short)4] [i_0] = ((/* implicit */int) (signed char)6);
            var_16 = ((/* implicit */long long int) (signed char)-8);
            arr_17 [(_Bool)1] [(_Bool)1] [i_0] = ((/* implicit */unsigned long long int) (unsigned char)255);
        }
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 4) 
    {
        var_17 *= ((/* implicit */signed char) ((((/* implicit */_Bool) 3146756879057424673ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (15299987194652126943ULL)));
        var_18 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_4) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)3))) : (var_10)))) ? (3146756879057424673ULL) : (((/* implicit */unsigned long long int) 665287203))));
    }
    /* vectorizable */
    for (signed char i_6 = 0; i_6 < 15; i_6 += 2) 
    {
        arr_22 [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((long long int) var_4))));
        arr_23 [5LL] [i_6] = ((/* implicit */unsigned char) var_3);
        /* LoopSeq 1 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_19 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */int) var_4))));
            arr_27 [i_6] [i_6] [i_6] = ((/* implicit */short) (signed char)11);
            arr_28 [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) 3357843608886342206ULL)) ? (var_9) : (((/* implicit */unsigned long long int) var_5))));
        }
        arr_29 [(short)11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15088900464823209410ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_7)));
    }
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((((/* implicit */_Bool) (signed char)-8)) || (((/* implicit */_Bool) var_1))))))))))));
    var_21 = ((/* implicit */unsigned long long int) min((((long long int) (-(((/* implicit */int) (signed char)-50))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_5)))))));
}
