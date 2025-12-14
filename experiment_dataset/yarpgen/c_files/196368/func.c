/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196368
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
    var_20 += ((/* implicit */long long int) (!((!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))))));
    var_21 = ((/* implicit */unsigned char) var_19);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_22 = ((/* implicit */long long int) (unsigned short)10353);
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (18446744073709551599ULL) : (var_19)))))))));
            /* LoopSeq 1 */
            for (long long int i_2 = 1; i_2 < 23; i_2 += 3) 
            {
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                    {
                        {
                            arr_14 [i_0] [(unsigned char)20] [(unsigned char)20] [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) (~(arr_9 [i_2] [i_2] [i_2 - 1] [i_2])));
                            arr_15 [i_4] [i_2] [i_0] [23] [i_2] [i_2] [i_0] = ((/* implicit */int) (short)22965);
                        }
                    } 
                } 
                var_24 = ((/* implicit */int) var_6);
            }
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 1; i_5 < 20; i_5 += 3) 
            {
                for (short i_6 = 0; i_6 < 24; i_6 += 4) 
                {
                    {
                        arr_23 [i_0] [i_1] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-34)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)40))) : (2663262982469826468ULL)));
                        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (unsigned short)65535))));
                    }
                } 
            } 
        }
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        arr_26 [i_7] [1ULL] = ((/* implicit */long long int) (+(((/* implicit */int) ((arr_6 [2ULL] [i_7] [2ULL]) != (17865174569374327440ULL))))));
        var_26 = ((/* implicit */unsigned int) arr_5 [12] [i_7] [i_7] [i_7]);
    }
    var_27 -= ((/* implicit */unsigned short) ((var_15) ? (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (var_11) : (((/* implicit */int) var_16))))), (((2769099977U) / (((/* implicit */unsigned int) ((/* implicit */int) var_18))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
}
