/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201114
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
    for (int i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_10 = ((/* implicit */unsigned int) var_6);
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */short) ((min((((((/* implicit */int) var_4)) / (((/* implicit */int) var_6)))), (((/* implicit */int) ((_Bool) var_4))))) < (((/* implicit */int) var_6))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        var_11 = ((/* implicit */signed char) var_3);
                        var_12 -= ((/* implicit */unsigned long long int) var_5);
                        var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-3016)) | (((/* implicit */int) (unsigned short)9340))));
                    }
                    for (long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                    {
                        arr_14 [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) ((((/* implicit */int) (unsigned short)9340)) != (((/* implicit */int) (unsigned short)56170)))))));
                        arr_15 [(short)16] [i_1] [(short)16] [(short)16] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((-1107708863) + (2147483647))) >> (((2147483647) - (2147483647)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56212))) : (4129533073U)))))) ? (((((var_9) >> (((var_3) - (129689335075892097LL))))) * (((/* implicit */unsigned long long int) ((2147483623) >> (((((/* implicit */int) (unsigned short)9310)) - (9293)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                    }
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned int) var_8);
}
