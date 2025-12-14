/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213271
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
    var_11 = ((/* implicit */int) var_4);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 11; i_2 += 2) /* same iter space */
                {
                    var_12 -= ((/* implicit */unsigned short) (+((+(arr_3 [i_1 + 2] [i_1 - 1])))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (long long int i_4 = 3; i_4 < 9; i_4 += 3) 
                        {
                            {
                                arr_11 [i_0] [0LL] [i_2] [i_4] [0LL] [(signed char)2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_0])) == (((/* implicit */int) ((short) (~(arr_2 [i_1] [i_1] [i_2])))))));
                                arr_12 [i_4] [i_1] [i_2] = ((/* implicit */short) ((((unsigned long long int) ((_Bool) arr_2 [i_1] [i_1] [i_2]))) * (((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_1 [i_2])) | (((/* implicit */int) arr_10 [(signed char)3] [i_1] [i_1] [(short)5] [i_4])))))))));
                                var_13 = ((/* implicit */short) ((_Bool) min((arr_5 [i_1 + 2]), (arr_5 [i_1 + 1]))));
                            }
                        } 
                    } 
                }
                for (int i_5 = 0; i_5 < 11; i_5 += 2) /* same iter space */
                {
                    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((((/* implicit */int) arr_15 [i_1] [(unsigned short)0] [(_Bool)1] [i_1 - 1])) / (((/* implicit */int) arr_15 [i_0] [6] [i_5] [i_1 + 1])))) * (((((/* implicit */int) arr_15 [i_0] [i_1] [(short)0] [i_1 - 1])) * (((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [i_1 + 3])))))))));
                    arr_16 [i_5] [(short)9] [i_0] = max((max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)52)) != (((/* implicit */int) (short)8894))))), (arr_6 [i_0] [i_0] [i_1 - 1] [i_1 - 1] [i_0]))), (((/* implicit */unsigned long long int) arr_3 [i_0] [(short)4])));
                    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) arr_1 [(signed char)5]))));
                    arr_17 [i_0] [i_1 + 1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_1 + 3])) - (arr_3 [i_1 + 3] [i_0])));
                }
                var_16 = ((/* implicit */unsigned short) arr_13 [i_0] [i_0] [i_1 - 1]);
                var_17 ^= ((/* implicit */_Bool) arr_10 [i_0] [i_1] [(_Bool)1] [i_1 + 3] [i_1]);
            }
        } 
    } 
    var_18 = ((/* implicit */short) ((((/* implicit */int) var_7)) >> (((/* implicit */int) var_2))));
}
