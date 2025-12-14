/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218884
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
    var_10 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 855158771)), (285227499877968850ULL)))) ? (var_0) : ((~(var_0))))), (((/* implicit */unsigned int) (+((~(((/* implicit */int) var_8)))))))));
    var_11 = ((/* implicit */unsigned short) var_3);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            var_12 = ((/* implicit */unsigned char) (~((-(((/* implicit */int) var_1))))));
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((arr_6 [i_1] [i_0] [i_0]) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */long long int) 855158771)) : (arr_0 [i_0]))))));
            arr_8 [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-113)) : (((/* implicit */int) var_7))))));
            arr_9 [i_0] [i_1] [i_0] = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (signed char)113)) : (((/* implicit */int) var_6)))));
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
            {
                arr_14 [i_0] = ((var_1) ? ((-(((/* implicit */int) var_3)))) : ((~(((/* implicit */int) (signed char)-113)))));
                arr_15 [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) (~((-(((/* implicit */int) var_9))))));
                arr_16 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_9);
                arr_17 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_0) | (var_4)))) || (((/* implicit */_Bool) (-(855158771))))));
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
            {
                var_13 = ((/* implicit */unsigned int) var_6);
                var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) (~((~(((/* implicit */int) var_8)))))))));
                arr_21 [i_0] [i_1] [i_3] = ((/* implicit */unsigned char) (-((+(var_5)))));
            }
        }
        /* LoopNest 2 */
        for (unsigned short i_4 = 2; i_4 < 12; i_4 += 2) 
        {
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                {
                    arr_28 [i_5] [i_0] [i_0] [3ULL] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)84))));
                    arr_29 [i_0] [i_4] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) + (arr_6 [i_0] [i_0] [i_5 - 1])));
                    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((var_5) / (var_0))) <= ((-(var_0))))))));
                    arr_30 [i_0] [i_4] [i_5] [i_5 - 1] |= ((/* implicit */unsigned char) (~(2505212050508660659ULL)));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_6 = 0; i_6 < 15; i_6 += 4) 
        {
            for (unsigned short i_7 = 1; i_7 < 12; i_7 += 2) 
            {
                {
                    var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)19010))));
                    arr_36 [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-21))));
                    arr_37 [i_0] [i_6] [i_0] [i_0] = ((arr_33 [i_7 + 3] [i_7 + 1] [i_7 + 3]) - (((/* implicit */int) var_1)));
                }
            } 
        } 
    }
    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) (signed char)38))))))) - ((-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6)))))))))));
}
