/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39363
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
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((420026724) >= (((/* implicit */int) (short)10122)))))));
    var_21 &= ((/* implicit */signed char) var_14);
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_10 [(signed char)8] [i_1] |= ((/* implicit */int) 3342034279U);
                    arr_11 [i_0] [i_0] = ((/* implicit */signed char) var_14);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_3 = 2; i_3 < 11; i_3 += 3) 
    {
        for (signed char i_4 = 0; i_4 < 13; i_4 += 3) 
        {
            {
                var_22 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) arr_13 [i_4])) ? (((/* implicit */int) arr_13 [i_4])) : (((/* implicit */int) arr_13 [i_3 + 2])))) + (2147483647))) << (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_19))) - (11ULL)))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 13; i_5 += 1) 
                {
                    for (int i_6 = 0; i_6 < 13; i_6 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (long long int i_7 = 0; i_7 < 13; i_7 += 2) 
                            {
                                var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((arr_7 [(_Bool)1] [i_3 + 2] [i_3 + 2] [i_3]) + (9223372036854775807LL))) >> (((arr_7 [(_Bool)0] [i_7] [i_3 + 2] [i_3]) + (29666342236409156LL))))))));
                                var_24 = ((/* implicit */short) ((((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) >> (((var_12) + (1515771033))))) << (((((/* implicit */int) arr_5 [i_3] [2ULL])) - (8536)))));
                                arr_26 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned int) ((((-372340) + (2147483647))) << (((/* implicit */int) var_2)))))));
                                arr_27 [i_3] [i_3] [i_3] [i_3] [i_7] = ((/* implicit */short) ((((/* implicit */int) (short)496)) << (((/* implicit */int) (signed char)16))));
                            }
                            arr_28 [i_3] [i_4] [(short)1] [i_3] [i_3] = ((/* implicit */int) var_18);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_8 = 0; i_8 < 16; i_8 += 1) 
    {
        for (int i_9 = 0; i_9 < 16; i_9 += 2) 
        {
            {
                var_25 *= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)31664)) >= (((/* implicit */int) arr_3 [i_9] [i_9])))))) >= (var_8)))) >= (((((((((/* implicit */int) (signed char)-4)) + (2147483647))) << (((524287) - (524287))))) >> (((((((/* implicit */_Bool) (signed char)-9)) ? (((/* implicit */long long int) -1913814879)) : (var_14))) + (1913814904LL)))))));
                arr_33 [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((11459237571838395577ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_8] [i_9])))))) ? (((/* implicit */int) ((((((/* implicit */int) (unsigned char)241)) >> (((/* implicit */int) arr_6 [i_8] [12])))) == (((/* implicit */int) arr_5 [(signed char)5] [i_9]))))) : (((((((/* implicit */int) arr_3 [i_8] [11LL])) == (((/* implicit */int) arr_6 [12LL] [12LL])))) ? (((var_1) << (((var_8) - (3575993680U))))) : (((((/* implicit */int) var_18)) >> (((/* implicit */int) var_6))))))));
            }
        } 
    } 
}
