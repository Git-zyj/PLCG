/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26875
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
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_10))))) - (((/* implicit */int) (unsigned char)158)))) : (((/* implicit */int) ((((((/* implicit */int) var_5)) / (((/* implicit */int) var_6)))) == (((/* implicit */int) max(((short)-19370), ((short)25480)))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 10; i_3 += 2) 
                    {
                        for (signed char i_4 = 1; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) 2706442328U);
                                arr_12 [i_0] [i_3] [10LL] [i_3] [i_4] = ((/* implicit */_Bool) (signed char)-47);
                            }
                        } 
                    } 
                    arr_13 [i_0] [9ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-29231)) + (2147483647))) >> (((/* implicit */int) (signed char)26))))) ? (((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)44))) == (-9223372036854775806LL)))) : (((/* implicit */unsigned long long int) min((arr_10 [i_1 - 1] [i_1] [i_0]), (((/* implicit */int) var_16)))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_5 = 1; i_5 < 11; i_5 += 2) 
                    {
                        var_21 *= ((/* implicit */short) (signed char)27);
                        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_5] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)43))) : (((var_2) - (((/* implicit */long long int) ((/* implicit */int) var_15)))))));
                        var_23 = ((((8098260378128296359LL) ^ (((/* implicit */long long int) ((/* implicit */int) (short)25461))))) / (((/* implicit */long long int) ((((/* implicit */_Bool) -3696417672754553171LL)) ? (var_17) : (((/* implicit */int) (unsigned short)52755))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_6 = 3; i_6 < 9; i_6 += 4) 
                    {
                        var_24 = ((/* implicit */int) ((18446744073709551615ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)19389)))));
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2] [i_0])) ? (((/* implicit */int) (signed char)48)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2318974936U))))) : (((/* implicit */int) (signed char)46))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_7 = 0; i_7 < 16; i_7 += 4) 
    {
        for (unsigned char i_8 = 3; i_8 < 14; i_8 += 4) 
        {
            {
                var_26 += ((/* implicit */unsigned int) ((min((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)241))) ^ (-9223372036854775794LL))), (((/* implicit */long long int) ((2318974931U) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))))))) / (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) << (((arr_20 [i_7]) - (266748615U)))))), (max((arr_25 [i_7]), (((/* implicit */unsigned int) var_16)))))))));
                var_27 = ((/* implicit */short) ((((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)-40)), ((unsigned char)12)))) || (((/* implicit */_Bool) min((var_3), (arr_25 [i_7])))))) ? (((/* implicit */long long int) max(((~(((/* implicit */int) arr_23 [i_7] [i_8])))), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)61)) || (var_18))))))) : (max((min((var_2), (((/* implicit */long long int) (signed char)-39)))), (max((((/* implicit */long long int) arr_25 [i_7])), (arr_22 [i_7])))))));
                var_28 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) var_12))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((var_7), (var_10))))))) : (((/* implicit */int) var_11))));
            }
        } 
    } 
}
