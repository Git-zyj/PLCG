/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52661
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
    var_17 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_16)) != ((+(((/* implicit */int) var_12)))))) ? (((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_1))) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_1)))))))) : (((/* implicit */long long int) min((((((/* implicit */_Bool) var_13)) ? (var_6) : (var_6))), (((/* implicit */int) min((var_15), (((/* implicit */unsigned char) var_5))))))))));
    var_18 = ((/* implicit */unsigned int) min((var_5), (((0ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
    var_19 |= ((/* implicit */unsigned long long int) (~((-(((var_10) >> (((var_9) - (9720103048393873385ULL)))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 3; i_3 < 21; i_3 += 3) 
                    {
                        arr_12 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */int) var_0))))) ? (((((-1) + (2147483647))) << (((1571270690) - (1571270690))))) : (((/* implicit */int) var_5))));
                        var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) var_6)) : (var_9)))));
                    }
                    arr_13 [i_2] [(unsigned short)15] [i_0 - 4] [i_0] = ((/* implicit */long long int) ((var_5) ? (((/* implicit */unsigned long long int) (~(1098437885952LL)))) : (((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned int) var_11))))) ? (((((/* implicit */_Bool) (unsigned char)240)) ? (var_9) : (6655209759861976912ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (var_1) : (var_13))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        for (long long int i_5 = 0; i_5 < 24; i_5 += 3) 
                        {
                            {
                                arr_20 [i_4] [i_4] = ((/* implicit */unsigned short) (~(6655209759861976910ULL)));
                                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (-(4294967278U)))) ? (max((var_13), (var_13))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_10))))))));
                                var_22 |= ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4))))) ? ((-(((/* implicit */int) var_15)))) : (min((var_10), (((/* implicit */int) var_5))))))) / (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_15))))) : (((var_4) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))));
                                arr_21 [i_4] [10] [i_4] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_9)) ? (var_10) : (var_10)))))) ? (((/* implicit */int) var_11)) : ((+(1571270676)))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ? (((var_7) % (var_7))) : (((var_2) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0))))) ? (max((((/* implicit */unsigned int) var_0)), (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))));
                }
            } 
        } 
    } 
}
