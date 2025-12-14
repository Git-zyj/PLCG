/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198422
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
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            {
                arr_5 [i_1] [i_1 - 2] = ((/* implicit */unsigned short) (~(arr_0 [i_0] [i_1])));
                var_13 = ((/* implicit */signed char) var_11);
                /* LoopSeq 2 */
                for (signed char i_2 = 2; i_2 < 20; i_2 += 2) 
                {
                    var_14 = ((/* implicit */signed char) max((var_7), (((/* implicit */unsigned long long int) max((((unsigned int) arr_2 [i_0] [i_0])), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_6 [i_0] [(short)2] [i_2] [i_1])) : (((/* implicit */int) var_10))))))))));
                    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) var_6))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_11 [i_1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)101)) ? (7713369535978740870ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))));
                    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) var_5))));
                    var_17 = ((/* implicit */_Bool) 7713369535978740870ULL);
                    /* LoopNest 2 */
                    for (short i_4 = 2; i_4 < 20; i_4 += 3) 
                    {
                        for (signed char i_5 = 0; i_5 < 22; i_5 += 3) 
                        {
                            {
                                arr_18 [(_Bool)1] [i_1] [i_3] [i_4] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_13 [i_1 - 1] [i_1 - 2] [i_1] [i_1 - 2] [i_1 - 3] [i_4 - 2]), (((/* implicit */unsigned short) (short)32767))))) ? (((/* implicit */int) arr_13 [i_1 - 1] [i_1 - 2] [i_1] [i_1 - 1] [i_1 + 1] [i_4 + 2])) : (((/* implicit */int) ((unsigned short) var_2)))));
                                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 10733374537730810743ULL)) || (((/* implicit */_Bool) 15ULL)))))));
                                arr_19 [i_0] [i_1] [i_1] [(_Bool)1] [i_5] = ((/* implicit */unsigned long long int) var_0);
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_1] [i_1] [i_3] [i_1 + 2])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_1]))) * (7713369535978740870ULL))) : (max((18446744073709551592ULL), (((/* implicit */unsigned long long int) (short)32764))))));
                }
                arr_20 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) (short)32740);
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) var_6);
}
