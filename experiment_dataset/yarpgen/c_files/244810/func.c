/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244810
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
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_1] [i_0])) ? (((/* implicit */long long int) (((_Bool)1) ? (var_9) : (((/* implicit */unsigned int) var_8))))) : (((((/* implicit */_Bool) arr_2 [i_0] [(short)3] [i_1])) ? (var_12) : (var_13)))))) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (arr_5 [i_0 + 1] [i_0 + 1] [i_0])));
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 16; i_3 += 2) 
                    {
                        for (signed char i_4 = 4; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_14)) ? (arr_11 [i_0] [i_1] [i_2] [i_4] [i_4]) : (var_13)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-27227)) ? (((/* implicit */int) (short)18982)) : (((/* implicit */int) (short)-18958))))) : (max((((/* implicit */long long int) ((((/* implicit */int) (short)-1644)) / (((/* implicit */int) (short)-18983))))), (((((/* implicit */_Bool) var_5)) ? (arr_0 [i_0 - 1]) : (((/* implicit */long long int) var_10))))))));
                                var_21 = ((/* implicit */unsigned short) ((int) max((1818427280U), (((/* implicit */unsigned int) (unsigned char)0)))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((short) var_9)))))) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) ((min((9223372036854775807LL), (((/* implicit */long long int) var_7)))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) (short)18982)) ? (3) : (((/* implicit */int) var_18)))))))))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_14 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
                    var_23 = ((/* implicit */_Bool) var_4);
                }
                /* vectorizable */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) (+(((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */long long int) 4294967295U)) : (9223372036854775807LL))))))));
                    var_25 ^= ((((-9223372036854775807LL) == (((/* implicit */long long int) -551406909)))) ? (((/* implicit */long long int) arr_5 [i_0] [i_1] [i_0])) : (var_1));
                    arr_17 [i_0 - 1] [i_6] [i_0] = ((((var_6) == (((/* implicit */unsigned long long int) var_3)))) ? (((((/* implicit */_Bool) (short)-5593)) ? (-1240133064261122833LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-8624))))) : (((/* implicit */long long int) ((unsigned int) var_11))));
                }
            }
        } 
    } 
    var_26 = ((/* implicit */long long int) var_18);
    var_27 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)15892)) ? (2827188496U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)18979)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-65)) ? (((/* implicit */int) (short)1023)) : (0)))) : ((((+(18446744073709551605ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-65)))))));
}
