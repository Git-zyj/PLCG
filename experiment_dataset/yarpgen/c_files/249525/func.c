/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249525
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_0]);
                    /* LoopSeq 3 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        var_18 |= ((/* implicit */unsigned long long int) ((_Bool) arr_4 [i_0]));
                        var_19 = ((/* implicit */long long int) var_13);
                    }
                    for (unsigned int i_4 = 2; i_4 < 19; i_4 += 3) 
                    {
                        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_2] [i_4 - 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (signed char)118)), ((short)-18191))))) : (((long long int) 2147483647)))))));
                        var_21 = arr_3 [i_0];
                    }
                    for (unsigned char i_5 = 1; i_5 < 16; i_5 += 4) 
                    {
                        var_22 *= ((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) (signed char)109)) << (((((/* implicit */int) (unsigned short)65535)) - (65522))))));
                        var_23 = ((/* implicit */short) (signed char)55);
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_6 = 2; i_6 < 14; i_6 += 1) 
    {
        /* LoopNest 3 */
        for (short i_7 = 0; i_7 < 16; i_7 += 4) 
        {
            for (unsigned long long int i_8 = 3; i_8 < 14; i_8 += 4) 
            {
                for (signed char i_9 = 0; i_9 < 16; i_9 += 4) 
                {
                    {
                        arr_24 [i_9] [i_9] [i_6] [i_6] [1U] = ((((/* implicit */_Bool) (~(min((((/* implicit */int) (unsigned short)29904)), (arr_12 [(short)10] [i_7] [i_6] [i_9])))))) ? (arr_17 [9LL] [i_8 + 1]) : (((/* implicit */long long int) arr_8 [i_6] [i_6 + 1] [i_6 + 2] [i_6 + 1] [i_6])));
                        arr_25 [i_6] [i_7] [(unsigned char)12] [i_6] = ((/* implicit */unsigned short) var_4);
                        var_24 = ((/* implicit */unsigned short) (((+(((/* implicit */int) (unsigned short)35631)))) >= (((/* implicit */int) arr_5 [i_6]))));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) min((min((((/* implicit */int) arr_0 [i_6])), (arr_23 [i_6 - 1] [9U] [i_6]))), (((/* implicit */int) arr_3 [i_6]))))) : ((+((~(var_0)))))));
    }
    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_1)), (((((/* implicit */unsigned int) ((/* implicit */int) var_14))) & (var_9)))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */long long int) ((int) var_8))) : (var_0))) : (var_5)));
    var_27 = ((/* implicit */short) max((((((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_14)))) || (((/* implicit */_Bool) ((unsigned long long int) (unsigned short)29905))))), ((!(((/* implicit */_Bool) (-(((/* implicit */int) var_12)))))))));
    var_28 += ((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)-81)), ((unsigned short)29890)));
}
