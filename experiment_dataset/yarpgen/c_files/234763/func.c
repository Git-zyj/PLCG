/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234763
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
    var_13 = ((/* implicit */unsigned int) min((((var_5) | ((~(4290772992LL))))), (((/* implicit */long long int) min((((int) 4064732576U)), (((((/* implicit */int) (_Bool)1)) >> (((3291137818U) - (3291137809U))))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) var_12);
                    /* LoopSeq 2 */
                    for (int i_3 = 1; i_3 < 13; i_3 += 2) 
                    {
                        var_14 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((var_11) ? (((((/* implicit */_Bool) -9223372036854775797LL)) ? (9223372036854775797LL) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_0])) ? (9223372036854775803LL) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))))), ((~(arr_0 [i_0])))));
                        arr_14 [i_0] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) (~(max((((((/* implicit */int) (_Bool)1)) % (var_4))), (((((/* implicit */int) (signed char)121)) ^ (((/* implicit */int) var_10))))))));
                        arr_15 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */int) var_6)) - (((/* implicit */int) var_11))));
                        arr_16 [i_0] = ((/* implicit */long long int) 230234706U);
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 2) 
                    {
                        arr_19 [i_0] [i_0] [i_2] [i_0] = ((short) ((unsigned long long int) arr_3 [i_1]));
                        /* LoopSeq 1 */
                        for (int i_5 = 4; i_5 < 13; i_5 += 2) 
                        {
                            arr_22 [i_0] [i_4] [i_2] [i_0] [i_0] = ((/* implicit */long long int) (_Bool)1);
                            arr_23 [i_0] [i_1] [i_2] [i_4] [i_0] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */int) ((((/* implicit */long long int) arr_4 [i_0] [i_0])) < (var_1)))) % (((/* implicit */int) max((var_7), (((/* implicit */unsigned short) var_10))))))));
                            arr_24 [i_0] [i_0] [i_0] [8] [(_Bool)1] = 18446744073709551604ULL;
                            arr_25 [(short)13] [i_0] [(short)13] [(short)13] [(short)13] [(short)13] = ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_21 [i_5 - 2] [i_5] [i_5 - 2] [i_5 - 2] [1LL])) / (var_4)))), (16084986214517758665ULL)))));
                        }
                    }
                    arr_26 [i_0] = ((/* implicit */signed char) var_3);
                }
            } 
        } 
    } 
}
