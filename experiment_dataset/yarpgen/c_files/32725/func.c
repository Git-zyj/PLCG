/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32725
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
    var_18 |= ((/* implicit */long long int) (_Bool)0);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            var_19 = ((/* implicit */unsigned long long int) arr_4 [i_0] [i_0 - 1] [i_0]);
            var_20 = ((/* implicit */unsigned char) ((long long int) ((unsigned char) arr_5 [i_0 + 1] [i_0 + 1])));
        }
        arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) 1944565193U);
        var_21 &= ((/* implicit */unsigned int) var_8);
    }
    for (unsigned char i_2 = 1; i_2 < 14; i_2 += 1) /* same iter space */
    {
        var_22 += ((/* implicit */long long int) arr_10 [i_2]);
        var_23 &= 1980914870U;
        /* LoopSeq 3 */
        for (unsigned short i_3 = 2; i_3 < 12; i_3 += 4) 
        {
            arr_15 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) ((unsigned int) (unsigned short)7496)))) ? ((-(((/* implicit */int) var_16)))) : (min(((~(((/* implicit */int) (signed char)-121)))), (((/* implicit */int) max((((/* implicit */short) var_14)), (var_16))))))));
            var_24 = ((/* implicit */unsigned char) arr_8 [i_2 + 1]);
        }
        for (long long int i_4 = 2; i_4 < 12; i_4 += 4) 
        {
            arr_19 [i_4] &= ((/* implicit */int) arr_2 [i_4]);
            /* LoopNest 3 */
            for (unsigned int i_5 = 1; i_5 < 13; i_5 += 1) 
            {
                for (signed char i_6 = 3; i_6 < 14; i_6 += 4) 
                {
                    for (unsigned int i_7 = 2; i_7 < 13; i_7 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (~(arr_22 [i_7] [i_5] [i_4] [i_2]))))));
                            var_26 ^= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (~(min((((/* implicit */long long int) var_7)), (arr_9 [i_4] [i_5])))))), (var_15)));
                        }
                    } 
                } 
            } 
            arr_26 [i_4] [i_4] = ((/* implicit */_Bool) (+((~(var_5)))));
        }
        for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 4) 
        {
            arr_29 [i_2] [i_8] [(_Bool)1] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)13)), (5LL)));
            arr_30 [i_8] [i_8] [i_8] = ((/* implicit */unsigned short) (((_Bool)0) ? (max((-8149473218595722292LL), (((/* implicit */long long int) (unsigned short)12519)))) : (((/* implicit */long long int) ((arr_4 [i_2] [i_2 - 1] [i_2 - 1]) / (arr_4 [i_2 + 1] [i_2] [i_2 + 1]))))));
            var_27 = ((/* implicit */signed char) ((unsigned int) arr_0 [i_2]));
            arr_31 [i_2] = ((/* implicit */unsigned int) arr_16 [i_2] [i_8] [i_8]);
        }
        arr_32 [i_2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
        var_28 = ((/* implicit */_Bool) arr_20 [i_2 - 1] [i_2]);
    }
}
