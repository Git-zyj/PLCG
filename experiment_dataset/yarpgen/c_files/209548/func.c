/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209548
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
    var_11 = ((/* implicit */int) max((var_11), (((((/* implicit */_Bool) var_8)) ? (var_10) : (((((((/* implicit */_Bool) (short)4903)) ? (((/* implicit */int) (unsigned short)56706)) : (((/* implicit */int) (unsigned char)108)))) | (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) < (var_7))))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) max((((long long int) arr_0 [i_0])), (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0] [i_0])) / (((/* implicit */int) arr_1 [i_0] [i_0])))))));
        var_12 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-43))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (-1152921504606846976LL)))))) ? (((unsigned long long int) max((((/* implicit */long long int) arr_1 [i_0] [i_0])), (-1152921504606846969LL)))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */int) var_6)))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (short)17864)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))));
    }
    /* LoopNest 2 */
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        for (unsigned char i_2 = 1; i_2 < 21; i_2 += 2) 
        {
            {
                var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)32)) ? (((/* implicit */int) (unsigned short)39076)) : ((+((~(((/* implicit */int) (_Bool)0)))))))))));
                /* LoopNest 3 */
                for (unsigned int i_3 = 0; i_3 < 23; i_3 += 4) 
                {
                    for (short i_4 = 0; i_4 < 23; i_4 += 3) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 23; i_5 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_16 [i_2] [i_2 + 1] [i_2] [i_2 + 1] [i_2]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_3])) ? (var_1) : (((/* implicit */int) arr_5 [i_1]))))))))));
                                var_15 = ((/* implicit */unsigned int) min((var_15), (min((((arr_10 [i_1] [i_2 + 2] [i_1] [i_4]) % (arr_10 [i_5] [i_2 + 1] [i_2] [i_4]))), (max((((/* implicit */unsigned int) var_5)), (arr_10 [i_5] [i_2 + 2] [i_3] [i_3])))))));
                                arr_17 [i_5] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((min((-1152921504606846969LL), (((/* implicit */long long int) (unsigned short)55946)))) + (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-17864)) ? (((/* implicit */int) (_Bool)0)) : (655268783))))))) ? (((((/* implicit */long long int) ((/* implicit */int) (short)23))) + (1152921504606846952LL))) : (((((/* implicit */_Bool) ((int) (short)31889))) ? (((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39090))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)26446)) ? (((/* implicit */int) (signed char)74)) : (((/* implicit */int) (unsigned char)255)))))))));
                            }
                        } 
                    } 
                } 
                var_16 *= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_12 [(unsigned char)4] [i_2] [i_2 + 1] [(unsigned char)4])) : (((/* implicit */int) arr_12 [16LL] [i_2] [i_2 + 1] [16LL]))))));
                var_17 = (-(((/* implicit */int) (_Bool)1)));
            }
        } 
    } 
}
