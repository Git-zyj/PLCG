/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229251
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 9; i_2 += 2) 
            {
                {
                    var_10 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1]))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        arr_14 [i_1] = ((/* implicit */short) ((((/* implicit */int) max((((/* implicit */unsigned short) var_7)), (arr_0 [i_0] [i_0 + 2])))) == (-916637963)));
                        arr_15 [i_1] [(unsigned char)7] [i_1] = arr_13 [i_1] [i_2 + 2] [(unsigned short)4] [i_3];
                        arr_16 [(_Bool)1] [i_1] [i_1] [i_0] = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) var_5)), (min((((/* implicit */unsigned long long int) arr_13 [i_2 - 2] [i_3] [(unsigned char)2] [i_1])), (arr_6 [3U]))))), (((/* implicit */unsigned long long int) -916637956))));
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 1; i_4 < 8; i_4 += 2) 
                    {
                        var_11 = ((/* implicit */short) (-(arr_8 [i_0 + 2] [i_1] [i_4 + 2])));
                        var_12 -= ((/* implicit */unsigned int) arr_19 [i_0 - 1] [i_0 + 2] [10] [i_0 - 1]);
                    }
                    /* vectorizable */
                    for (short i_5 = 4; i_5 < 9; i_5 += 4) 
                    {
                        var_13 = arr_8 [i_2 - 2] [i_1] [i_2 - 2];
                        var_14 = ((/* implicit */unsigned long long int) (short)-22320);
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 2) 
                    {
                        var_15 = ((/* implicit */unsigned short) (short)22339);
                        arr_25 [i_1] [i_2] [(short)10] [i_0] [i_1] = ((/* implicit */unsigned long long int) (+(min((arr_13 [i_2 - 2] [4LL] [i_2 + 2] [(unsigned char)10]), (arr_13 [i_2 - 2] [i_2 - 1] [i_2] [i_2 + 2])))));
                    }
                    var_16 &= ((/* implicit */unsigned int) (-(arr_20 [i_0] [(short)4] [2LL] [(_Bool)1])));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) var_0);
    var_18 = ((/* implicit */int) (~(max((((/* implicit */unsigned long long int) var_0)), (((var_1) ^ (((/* implicit */unsigned long long int) var_8))))))));
    var_19 = ((/* implicit */long long int) var_2);
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (-(var_9))))));
}
