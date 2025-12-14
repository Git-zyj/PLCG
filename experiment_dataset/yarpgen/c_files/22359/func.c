/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22359
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
    var_12 = ((/* implicit */short) var_7);
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) (+(max((var_7), (((/* implicit */unsigned long long int) (short)-5567)))))))));
                                arr_12 [(unsigned char)20] [i_1 + 1] [i_2] [i_3] [i_4] |= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) min((((/* implicit */long long int) var_1)), (-4072692426351932532LL)))) ? ((+(((/* implicit */int) var_11)))) : (((/* implicit */int) var_6))))));
                            }
                        } 
                    } 
                    arr_13 [i_0 + 1] [i_1] [i_1 + 2] = ((/* implicit */_Bool) ((unsigned short) arr_1 [i_0]));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        arr_17 [i_1] [i_0] [i_1] [i_1] [6ULL] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned char) (unsigned short)1093)))));
                        arr_18 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_5 [0] [i_1 + 2] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61349))) : (((((/* implicit */_Bool) (~(arr_4 [i_0])))) ? (var_3) : (((/* implicit */unsigned long long int) (+(235150275))))))));
                        var_14 = (~(((arr_11 [i_2] [i_1 - 1] [i_2] [i_5] [i_5] [i_1] [i_0 - 1]) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (4072692426351932532LL))));
                        var_15 = var_11;
                    }
                    for (unsigned char i_6 = 0; i_6 < 21; i_6 += 1) 
                    {
                        arr_22 [i_6] [i_6] [i_2] [i_1 + 2] [i_6] [i_0] = ((/* implicit */short) max((((unsigned char) arr_9 [i_0 - 1])), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_10)) * (((/* implicit */int) var_6))))))))));
                        arr_23 [i_0] [i_0] [i_6] [i_0] [1LL] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) var_11)) * ((+(((/* implicit */int) arr_16 [5LL] [i_1] [(short)9] [i_2] [i_6])))))));
                        arr_24 [(short)11] [i_6] = min((((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) 4072692426351932531LL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) (signed char)4)))), (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 6777942884123959349LL))))) < (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))));
                        arr_25 [i_6] = ((/* implicit */signed char) min((((/* implicit */int) max((arr_20 [i_0 + 1] [i_0 - 1] [i_0 + 1]), (var_5)))), (((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */int) var_5)) : (var_1)))));
                        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [(unsigned char)15] [i_1] [i_1] [(unsigned char)15] [i_6] [i_6] [16ULL])) << (((((/* implicit */int) var_8)) - (4007)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_0] [i_1 + 3] [i_2] [i_6])) && (((/* implicit */_Bool) var_0))))) : (((/* implicit */int) var_5))))) ? ((+(((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)28)))))) : (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5)))) : (((((/* implicit */int) var_5)) & (((/* implicit */int) (unsigned char)22))))))));
                    }
                    var_17 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_7))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)-14640)) == (((/* implicit */int) var_5)))))))))));
                    var_18 -= ((/* implicit */short) 3U);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_7 = 0; i_7 < 17; i_7 += 2) 
    {
        for (unsigned char i_8 = 0; i_8 < 17; i_8 += 3) 
        {
            {
                arr_31 [i_8] [i_8] [7U] = ((/* implicit */unsigned long long int) min((max((((/* implicit */int) (signed char)-113)), ((+(((/* implicit */int) var_10)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 235150275)) ? (((/* implicit */unsigned long long int) 4072692426351932531LL)) : (var_7)))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)34867)) < (((/* implicit */int) (signed char)4))))) : (((/* implicit */int) var_8))))));
                var_19 = ((/* implicit */long long int) (+((+(((/* implicit */int) var_6))))));
            }
        } 
    } 
    var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(max((var_7), (((/* implicit */unsigned long long int) var_0))))))) ? (((((/* implicit */unsigned long long int) (~(1845909345U)))) & (max((((/* implicit */unsigned long long int) var_1)), (var_3))))) : (((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -4072692426351932532LL)))))) : (1152851135862669312ULL)))));
}
