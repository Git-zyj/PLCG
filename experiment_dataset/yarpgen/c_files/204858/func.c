/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204858
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
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_10 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)19636)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)32767))))) ? (((((/* implicit */_Bool) 5577317700131914411LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_3 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                    var_11 = ((/* implicit */short) (+(((/* implicit */int) arr_2 [i_0]))));
                    var_12 = ((/* implicit */unsigned char) ((long long int) var_2));
                    arr_11 [i_0] [(unsigned char)5] [i_0] [i_0] = ((/* implicit */short) arr_0 [i_0 + 2] [3]);
                }
            } 
        } 
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            for (short i_4 = 2; i_4 < 10; i_4 += 3) 
            {
                for (signed char i_5 = 2; i_5 < 10; i_5 += 2) 
                {
                    {
                        var_13 = ((/* implicit */short) ((arr_5 [i_0 - 1]) ? ((+(((/* implicit */int) var_3)))) : (((/* implicit */int) var_2))));
                        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_13 [i_5] [i_4 - 1] [i_0])) : (((/* implicit */int) arr_13 [(unsigned char)7] [i_4 - 2] [7ULL]))));
                        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_0 + 1] [i_4 - 1])) ? (((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) var_8))))) : (((/* implicit */int) ((signed char) 5577317700131914411LL)))));
                        var_16 += ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_4 - 2]))) % (arr_18 [i_4 + 1] [i_3] [i_4] [i_5 - 1])));
                    }
                } 
            } 
        } 
        arr_21 [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) (signed char)-17));
    }
    /* vectorizable */
    for (signed char i_6 = 0; i_6 < 13; i_6 += 2) 
    {
        arr_26 [i_6] [(short)9] = var_9;
        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_6])) ? ((+(2097151))) : ((~(((/* implicit */int) arr_23 [i_6] [i_6])))))))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 15; i_7 += 3) 
    {
        arr_29 [i_7] = ((/* implicit */int) ((((long long int) var_6)) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)197)))));
        var_18 = ((/* implicit */signed char) ((arr_28 [i_7]) | (arr_28 [i_7])));
    }
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((long long int) min((5577317700131914411LL), (((/* implicit */long long int) var_5))))) : (((/* implicit */long long int) (~(((/* implicit */int) max((var_5), (var_5))))))))))));
}
