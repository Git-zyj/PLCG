/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34690
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
    var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) var_13))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 4; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 9; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 3; i_3 < 10; i_3 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (int i_4 = 3; i_4 < 11; i_4 += 2) 
                        {
                            arr_14 [i_4 - 1] [i_0] [i_2] [i_0] [i_0 - 4] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)16128)) > (((/* implicit */int) (unsigned short)49408))));
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_2 + 2] [i_0] [i_4 - 1] = ((/* implicit */unsigned int) 32767);
                        }
                        for (signed char i_5 = 2; i_5 < 10; i_5 += 1) 
                        {
                            arr_19 [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_11 [i_0] [i_0] [i_1] [i_1] [i_2 + 1] [4ULL] [i_5]);
                            var_15 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_7 [i_1] [i_2] [i_3] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16128))) : (arr_4 [i_3 + 1] [i_5 + 1]))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_2 + 2] [i_3 - 1] [i_2 + 2] [i_0 - 1] [i_0 - 1])) ? ((-(-32768))) : (((/* implicit */int) arr_12 [i_0] [i_1] [i_2 - 1] [i_1] [i_2 + 2] [i_5 + 2] [i_0 - 1])))))));
                            arr_20 [2ULL] [i_0] [7U] [i_0] [i_0 - 1] = ((/* implicit */unsigned char) arr_16 [i_3] [i_3] [i_3] [i_3 + 1] [i_5 - 1]);
                            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) arr_12 [i_0 - 4] [i_0 - 4] [i_1] [i_2] [i_3] [i_2] [i_5]))));
                        }
                        var_17 -= ((/* implicit */unsigned short) max((((/* implicit */int) arr_7 [i_0 + 1] [i_0] [i_0 - 2] [i_1])), (((arr_5 [i_0 - 3] [i_2 + 3] [i_3 + 2]) + (((/* implicit */int) arr_7 [i_0 - 1] [(_Bool)1] [i_0 - 1] [i_1]))))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) min(((+((~(arr_0 [i_1]))))), (((((/* implicit */_Bool) arr_4 [i_0 - 3] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_22 [i_6] [i_1] [i_1] [i_0 - 3]))))))));
                        arr_23 [i_0 - 4] [i_0 - 4] [(_Bool)1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)16128)) + (((/* implicit */int) (_Bool)1))));
                        arr_24 [i_0] [i_0] = arr_0 [i_0];
                    }
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (+(0ULL))))));
                    arr_25 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) arr_10 [i_0] [(_Bool)1] [i_1] [i_1] [6] [i_2 + 1]);
                }
            } 
        } 
    } 
}
