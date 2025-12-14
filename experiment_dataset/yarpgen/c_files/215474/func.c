/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215474
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */int) (_Bool)1)) << (((840619607U) - (840619594U)))))))) + (((((/* implicit */_Bool) min((((/* implicit */long long int) 840619617U)), (-1LL)))) ? ((-(3454347680U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)15560)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_20 += ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) < (var_15)));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((arr_1 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (var_15)));
        arr_4 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_0]))));
        arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0])) < (((/* implicit */int) arr_1 [i_0]))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 2; i_1 < 10; i_1 += 4) 
    {
        var_21 = ((/* implicit */unsigned long long int) ((_Bool) 3454347661U));
        /* LoopSeq 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_22 = ((/* implicit */unsigned short) ((((-2665836830921567932LL) * (((/* implicit */long long int) ((/* implicit */int) (signed char)1))))) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))));
            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 2])))))));
            arr_10 [i_1] [i_2] = ((/* implicit */unsigned int) ((short) 1737409951253939104ULL));
            arr_11 [i_2] = ((/* implicit */short) ((signed char) (-(arr_9 [i_1 + 1]))));
        }
        for (short i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_4 = 2; i_4 < 8; i_4 += 2) 
            {
                for (unsigned long long int i_5 = 3; i_5 < 9; i_5 += 3) 
                {
                    for (int i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        {
                            arr_23 [i_5] [i_5] [i_5 + 2] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_1] [i_3] [i_6])) ? (8191) : (((/* implicit */int) var_16))))) ? (((((/* implicit */_Bool) arr_21 [i_6] [i_4] [i_4] [i_3] [i_1])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_4] [i_3] [i_4 + 3] [i_5] [i_4] [i_4]))))) : (840619634U)));
                            var_24 += ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_4 - 2]))) / (-2665836830921567932LL)));
                        }
                    } 
                } 
            } 
            var_25 += ((/* implicit */signed char) ((((/* implicit */_Bool) (+(3454347671U)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
            arr_24 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_16 [i_1])) - (((/* implicit */int) arr_18 [i_1 - 1] [i_3] [i_1 - 1] [i_1 - 2] [i_1]))));
            /* LoopSeq 2 */
            for (unsigned int i_7 = 0; i_7 < 11; i_7 += 1) 
            {
                arr_27 [i_3] [i_7] = ((/* implicit */signed char) (+((-9223372036854775807LL - 1LL))));
                arr_28 [i_7] [i_3] [i_7] = ((/* implicit */unsigned char) arr_6 [i_1 - 2]);
                var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-15561)) - (((/* implicit */int) arr_26 [i_1 - 1] [i_1] [i_1 - 1] [i_1]))));
            }
            for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 1) 
            {
                var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((((var_4) <= (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) ? (((/* implicit */int) ((signed char) (unsigned short)44912))) : (((/* implicit */int) ((short) var_4))))))));
                var_28 = ((/* implicit */signed char) ((arr_14 [i_1 - 1] [i_1] [i_1 - 1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (_Bool)1))))));
                arr_32 [i_8] [i_8] [i_3] [i_1] &= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_16)) > (((/* implicit */int) (short)7))))) <= ((+(((/* implicit */int) var_11))))));
            }
        }
        for (unsigned char i_9 = 1; i_9 < 9; i_9 += 1) 
        {
            var_29 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)77))));
            arr_36 [i_1 - 1] [i_9 - 1] [i_9 - 1] = ((/* implicit */signed char) (-(((/* implicit */int) arr_8 [i_1] [i_1 - 2]))));
            var_30 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) var_4)))));
        }
    }
    var_31 = ((/* implicit */signed char) (_Bool)1);
}
