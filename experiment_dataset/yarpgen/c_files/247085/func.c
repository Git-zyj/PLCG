/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247085
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
    for (unsigned short i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) max((arr_2 [i_0 - 1] [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_0])))))));
        var_12 = ((/* implicit */int) var_6);
        var_13 *= ((/* implicit */short) max((((/* implicit */unsigned int) arr_1 [i_0 - 1])), (arr_0 [i_0] [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            for (unsigned char i_2 = 4; i_2 < 10; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 11; i_4 += 1) /* same iter space */
                        {
                            var_14 += ((/* implicit */long long int) arr_12 [i_0] [(_Bool)1] [i_0] [i_0] [i_0 - 2]);
                            var_15 = ((/* implicit */short) arr_3 [i_0]);
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 11; i_5 += 1) /* same iter space */
                        {
                            var_16 = ((/* implicit */unsigned short) var_5);
                            var_17 ^= ((/* implicit */short) var_8);
                        }
                        for (int i_6 = 0; i_6 < 11; i_6 += 1) /* same iter space */
                        {
                            var_18 -= ((/* implicit */unsigned long long int) min((arr_10 [9U] [i_1 + 2] [(short)9] [i_3]), (((/* implicit */long long int) arr_5 [i_0]))));
                            arr_18 [i_0] [i_0] [i_0] [i_6] = ((/* implicit */unsigned int) arr_7 [i_0 + 1] [i_1] [i_3]);
                            var_19 += ((/* implicit */unsigned int) arr_2 [3] [i_2]);
                            arr_19 [i_2] [i_2] [i_0] [i_2 - 1] [4LL] = ((/* implicit */unsigned char) var_2);
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_7 = 0; i_7 < 11; i_7 += 2) 
                        {
                            arr_23 [i_0] [i_1] [i_0] [(unsigned char)10] [0] [i_7] [i_3] = ((/* implicit */long long int) arr_8 [9LL]);
                            arr_24 [i_7] [i_0] [i_7] [i_7] = ((/* implicit */unsigned long long int) var_3);
                        }
                        arr_25 [i_0] [i_1] [i_2] [i_0] [i_3] = ((/* implicit */short) min((var_2), (((/* implicit */signed char) (_Bool)1))));
                        arr_26 [i_0] [i_0 - 3] [i_0 - 2] = ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_5 [i_0 - 1])), (arr_14 [(unsigned char)5] [4ULL] [i_2] [i_3] [4LL] [i_0])));
                    }
                } 
            } 
        } 
    }
    for (signed char i_8 = 3; i_8 < 18; i_8 += 4) 
    {
        var_20 = var_9;
        arr_29 [i_8 - 3] = ((/* implicit */int) min((max((arr_28 [(unsigned char)5] [15LL]), (max((((/* implicit */long long int) (_Bool)1)), (arr_28 [i_8 - 2] [i_8]))))), (min((arr_28 [i_8] [(_Bool)1]), (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_27 [i_8])), (4273903719U))))))));
    }
    var_21 = ((/* implicit */unsigned char) var_4);
    var_22 = ((/* implicit */_Bool) var_3);
}
