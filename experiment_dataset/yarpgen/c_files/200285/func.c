/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200285
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned short) var_10);
        var_20 = ((/* implicit */unsigned long long int) ((2353121118094308730LL) >> (((2353121118094308716LL) - (2353121118094308704LL)))));
        var_21 = ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
        var_22 = ((/* implicit */long long int) 18446744073709551613ULL);
    }
    for (unsigned long long int i_1 = 3; i_1 < 10; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            for (short i_3 = 0; i_3 < 13; i_3 += 3) 
            {
                {
                    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7))) : (-2353121118094308716LL)))) ? ((-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) : (arr_1 [i_1 + 3] [i_1 + 3]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65522)))));
                    var_24 = ((/* implicit */_Bool) (unsigned short)65501);
                    var_25 = arr_10 [i_1] [i_2] [i_2] [i_1 + 1];
                    var_26 = ((((/* implicit */_Bool) ((long long int) arr_2 [i_1 - 3]))) ? ((~(((((/* implicit */_Bool) arr_5 [12U] [i_2])) ? (arr_4 [i_1]) : (((/* implicit */unsigned long long int) -2353121118094308724LL)))))) : (((/* implicit */unsigned long long int) 2353121118094308733LL)));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_4 = 2; i_4 < 11; i_4 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 2; i_5 < 12; i_5 += 4) 
                        {
                            var_27 = ((/* implicit */long long int) ((short) var_11));
                            var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) 18446744073709551605ULL))));
                            var_29 = arr_1 [i_2] [i_2];
                        }
                        var_30 = -2353121118094308735LL;
                        var_31 = ((/* implicit */int) var_16);
                        var_32 = ((/* implicit */_Bool) 2353121118094308724LL);
                        var_33 *= ((/* implicit */_Bool) 318336813U);
                    }
                }
            } 
        } 
        var_34 = ((/* implicit */unsigned int) var_10);
        var_35 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_12 [4LL] [i_1]))));
    }
    var_36 = ((/* implicit */unsigned short) var_3);
    var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (short)-12000))) - (-9223372036854775803LL))))));
}
