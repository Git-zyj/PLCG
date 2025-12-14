/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204914
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
    var_19 = ((/* implicit */_Bool) var_17);
    var_20 = ((/* implicit */unsigned long long int) var_9);
    var_21 = ((/* implicit */int) var_15);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_22 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0]))))), (((((/* implicit */_Bool) arr_0 [i_0] [i_2])) ? (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-121))) : (var_12))) : (((/* implicit */unsigned int) (~(arr_4 [(_Bool)1]))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_2] [i_0] = ((/* implicit */short) arr_1 [i_0]);
                        var_23 += ((/* implicit */unsigned long long int) (~(arr_4 [i_2])));
                        arr_12 [i_0] [i_1] [i_0] [i_2] [i_0] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12097))) | (((((/* implicit */_Bool) (signed char)34)) ? (137438951424ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-125))))))) != (((/* implicit */unsigned long long int) arr_3 [i_0]))));
                        var_24 *= ((/* implicit */_Bool) arr_3 [(short)2]);
                    }
                    /* vectorizable */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_4 - 1])) ? (arr_7 [i_4 - 1]) : (arr_7 [i_4 - 1])));
                        arr_17 [i_0] [7ULL] [i_1] [i_0] [i_0] [i_4] = ((/* implicit */_Bool) arr_14 [i_4] [i_0] [i_4 - 1] [i_4] [i_4] [i_4]);
                    }
                    /* LoopSeq 2 */
                    for (short i_5 = 0; i_5 < 10; i_5 += 2) 
                    {
                        arr_22 [i_0] [i_0] [i_0] [(short)5] [i_0] [i_0] = arr_20 [(short)5];
                        var_26 = ((/* implicit */_Bool) arr_0 [i_2] [i_5]);
                    }
                    /* vectorizable */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_27 = ((/* implicit */signed char) (~(((/* implicit */int) arr_24 [(_Bool)1] [i_0] [i_1] [i_1] [i_1] [8]))));
                        var_28 = ((/* implicit */unsigned long long int) arr_25 [(_Bool)1] [(_Bool)1] [i_1] [i_6] [i_2]);
                        arr_27 [i_0] [(_Bool)1] [i_0] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) 567915074))));
                        arr_28 [i_0] [i_1] [(unsigned char)5] [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-80)) ? (2124931882U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)33)))));
                    }
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-17932))))) ? ((((!(((/* implicit */_Bool) 18446744073709551615ULL)))) ? (((/* implicit */int) var_5)) : (var_2))) : (((/* implicit */int) var_16))));
}
