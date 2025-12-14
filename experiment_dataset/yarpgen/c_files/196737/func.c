/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196737
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
    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((short) -1829939448)))))))))));
    var_14 = ((/* implicit */_Bool) var_9);
    var_15 = ((/* implicit */signed char) var_4);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */int) ((unsigned int) (unsigned char)0));
                /* LoopSeq 3 */
                for (unsigned char i_2 = 1; i_2 < 8; i_2 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 1; i_3 < 6; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            arr_14 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)104)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (131071LL)));
                            var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_2 - 1])))))));
                            var_17 = (+(var_8));
                        }
                        var_18 = ((/* implicit */signed char) arr_13 [i_3] [i_3 + 3] [i_3]);
                    }
                    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 1) /* same iter space */
                    {
                        var_19 -= ((/* implicit */_Bool) min((max(((+(((/* implicit */int) var_7)))), (((/* implicit */int) min((arr_3 [i_5]), ((short)63)))))), (((/* implicit */int) ((unsigned short) (short)-13296)))));
                        arr_17 [i_5] [i_1] [(_Bool)1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((unsigned short) ((short) arr_8 [i_2 - 1] [i_2] [0LL] [i_2 + 1])));
                    }
                    for (unsigned char i_6 = 0; i_6 < 10; i_6 += 1) /* same iter space */
                    {
                        var_20 = ((/* implicit */long long int) (-(((/* implicit */int) min((arr_10 [i_0] [i_2 + 2] [i_2 + 1] [5]), (arr_10 [i_0] [i_2 - 1] [i_2] [i_6]))))));
                        var_21 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) 10107798279130566500ULL))))));
                    }
                    var_22 *= ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) (short)-26303)))), ((-(((/* implicit */int) (unsigned char)65))))));
                }
                for (short i_7 = 0; i_7 < 10; i_7 += 3) 
                {
                    var_23 = ((/* implicit */long long int) (+((+((~(arr_18 [i_0] [i_0] [i_1] [i_7])))))));
                    arr_22 [i_0] [0U] [i_1] [i_7] = ((((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_1] [i_0]))))) == ((-(arr_7 [i_0] [i_0] [i_0]))));
                    var_24 = ((/* implicit */int) ((_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [(unsigned char)4] [i_1] [i_7] [i_7] [i_7]))))))));
                    arr_23 [i_0] [(unsigned short)5] [i_7] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)0))));
                }
                for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 3) 
                {
                    var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) var_5))));
                    var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) min((((long long int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1]))))), (arr_7 [(unsigned short)3] [0ULL] [i_8]))))));
                }
                arr_26 [i_0] [i_1] [i_1] = ((/* implicit */long long int) (+(min((6460280848964561896ULL), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0]))))));
            }
        } 
    } 
    var_27 ^= ((/* implicit */unsigned short) max((min((((/* implicit */unsigned long long int) (+((-9223372036854775807LL - 1LL))))), ((+(18446744073709551592ULL))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) max((var_6), ((_Bool)0)))))))));
}
