/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200657
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
    for (signed char i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 9; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned char i_4 = 0; i_4 < 12; i_4 += 4) 
                            {
                                var_15 = ((/* implicit */_Bool) ((unsigned char) ((unsigned int) arr_4 [i_2 - 1])));
                                var_16 = ((/* implicit */signed char) ((arr_7 [i_4] [(unsigned short)0] [i_4] [i_4] [i_4]) - (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                                arr_13 [i_4] [(unsigned short)2] [i_3] [(unsigned short)2] [10] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-10779)) / (((/* implicit */int) arr_8 [i_0] [i_0 + 1] [i_0 + 1] [i_3] [i_2 + 2]))))) ? (((/* implicit */int) (unsigned char)238)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) != (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))))));
                                arr_14 [i_3] [i_1] [i_1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-21097)) ? (7588102630882332939ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21090)))))) ? (((((/* implicit */int) ((unsigned char) var_9))) % (-932638316))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0 - 3])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 14518631113489502621ULL)) ? (arr_7 [4ULL] [i_1] [i_1] [i_0] [(unsigned char)7]) : (var_6)))))))));
                            }
                            /* LoopSeq 3 */
                            for (long long int i_5 = 0; i_5 < 12; i_5 += 1) 
                            {
                                arr_17 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */short) arr_1 [i_0] [4U]);
                                arr_18 [i_0] [i_0] [i_2] [i_3] [8U] [(_Bool)1] = ((/* implicit */unsigned char) min((max((14518631113489502621ULL), (((/* implicit */unsigned long long int) arr_5 [i_0 - 1])))), (((/* implicit */unsigned long long int) max((arr_5 [i_0 - 2]), (arr_5 [i_0 - 1]))))));
                            }
                            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                            {
                                var_17 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_10 [i_6] [i_6] [i_6] [i_6 - 1] [i_0 + 1])))) | (((((/* implicit */_Bool) arr_0 [i_6 - 1] [i_1])) ? (arr_0 [i_3] [i_3]) : (arr_0 [i_0] [i_0 - 1])))));
                                var_18 = ((/* implicit */long long int) min((arr_15 [i_0 - 2] [i_0] [i_0 - 1] [i_2 + 1] [i_6 - 1]), (((/* implicit */unsigned int) ((int) 663500691)))));
                            }
                            for (long long int i_7 = 1; i_7 < 11; i_7 += 2) 
                            {
                                var_19 = ((/* implicit */unsigned int) var_7);
                                var_20 *= arr_16 [i_0] [i_0] [i_1] [6ULL] [6ULL] [i_7];
                            }
                        }
                    } 
                } 
                arr_24 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_0)), ((+(10168309388812148248ULL)))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) var_13);
}
