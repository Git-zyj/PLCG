/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4787
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
    for (int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (arr_1 [i_0 + 1])));
        var_19 = ((/* implicit */int) (-(((max((((/* implicit */unsigned long long int) arr_0 [i_0 - 1])), (arr_1 [i_0 - 1]))) >> (((/* implicit */int) ((arr_1 [i_0 - 1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))))));
    }
    for (short i_1 = 3; i_1 < 20; i_1 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
        {
            var_20 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) arr_6 [i_1 - 3] [i_1 + 1] [i_1 + 2])), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_2])) ? (arr_2 [i_1 - 1]) : (((/* implicit */int) var_0))))), (((((/* implicit */_Bool) arr_2 [i_1 + 3])) ? (arr_7 [i_1 - 3] [i_1 - 3]) : (((/* implicit */unsigned long long int) var_13))))))));
            var_21 = ((/* implicit */unsigned long long int) var_3);
            /* LoopSeq 1 */
            for (short i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((arr_3 [i_1 + 3]) - (arr_3 [i_1 - 1]))) & ((~(((/* implicit */int) arr_9 [i_3] [i_2] [i_1 + 2] [i_1 + 1])))))))));
                var_23 = ((/* implicit */short) ((unsigned long long int) (short)-1));
                var_24 = min((arr_10 [i_2] [i_2] [i_2] [i_2]), (((/* implicit */int) arr_9 [i_2] [i_1 + 1] [i_1 + 1] [i_1 + 3])));
                var_25 = ((/* implicit */int) (~(arr_4 [i_1 + 2])));
                var_26 = ((/* implicit */unsigned char) arr_9 [i_2] [i_3] [i_3] [i_3]);
            }
            var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_2 [i_1 - 2])), (arr_11 [i_1 - 2])))))) && (((/* implicit */_Bool) min((arr_11 [i_1 - 1]), (((/* implicit */unsigned long long int) arr_5 [i_1 - 1] [i_2]))))))))));
        }
        /* vectorizable */
        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 3) 
        {
            var_28 = ((/* implicit */short) ((-2147483641) | (((/* implicit */int) (_Bool)1))));
            var_29 = ((/* implicit */unsigned long long int) (~(arr_4 [i_1 + 3])));
            var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_1 - 3] [i_1 + 1])))))));
        }
        for (unsigned short i_5 = 1; i_5 < 21; i_5 += 3) 
        {
            var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) arr_14 [(unsigned char)22]))));
            var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) min((arr_11 [i_1 + 1]), (((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_13 [(unsigned char)12] [i_5 + 1] [i_5 + 2]), (arr_13 [(unsigned char)16] [i_5 + 1] [i_5 + 2]))))) - (((arr_11 [i_1 - 2]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [10] [i_1 - 1] [i_5 + 1]))))))))))));
        }
        for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 2) 
        {
            var_33 = ((/* implicit */long long int) arr_16 [i_6] [i_1 - 2]);
            var_34 = var_2;
        }
        var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) max((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)10355))))), (((max((arr_8 [i_1 + 3] [i_1 - 1] [i_1 - 3]), (((/* implicit */long long int) arr_2 [i_1 - 3])))) | (((/* implicit */long long int) ((/* implicit */int) var_8))))))))));
        var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) arr_14 [(signed char)4]))));
        var_37 = ((/* implicit */unsigned long long int) arr_15 [i_1 + 1] [i_1 + 3]);
    }
    var_38 = ((/* implicit */signed char) (-(min((var_9), ((+(((/* implicit */int) var_5))))))));
}
