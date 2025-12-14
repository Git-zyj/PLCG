/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51050
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
    var_12 = ((/* implicit */unsigned char) ((var_8) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)13)))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)0)) < (((/* implicit */int) (unsigned char)243))));
            var_13 = ((/* implicit */long long int) min((arr_4 [i_0 + 4] [i_0 + 3] [i_0 + 3]), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) < (((var_7) / (arr_4 [i_0 - 1] [i_0 - 1] [i_1]))))))));
            var_14 = ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) var_9)), (arr_4 [i_0 + 2] [i_1] [i_0 + 2]))) & (arr_4 [i_0 + 1] [i_1] [i_0 + 1])));
            var_15 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */short) var_3)), (arr_5 [i_0] [i_1] [i_1])))) < (((/* implicit */int) var_10))))), (var_7)));
        }
        /* vectorizable */
        for (short i_2 = 2; i_2 < 15; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_3 = 0; i_3 < 19; i_3 += 1) 
            {
                arr_12 [i_0] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0 + 1])) << (((/* implicit */int) var_6)))))));
                arr_13 [i_2] [i_2 - 1] [i_2] = arr_5 [i_0 + 4] [i_2] [i_2 + 2];
            }
            var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [i_0 + 4] [i_0 + 4] [i_2 - 2])) >> (((((/* implicit */int) arr_9 [i_0 + 2] [i_0 + 4] [i_2 + 1])) - (87)))));
            var_17 ^= ((/* implicit */long long int) (((+(arr_4 [i_0 + 2] [i_0 + 2] [i_2 - 2]))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_0] [i_2 + 2])) + (((/* implicit */int) var_10)))))));
        }
        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 1) 
        {
            var_18 = ((/* implicit */int) var_1);
            arr_18 [i_4] [i_0 - 1] = ((/* implicit */signed char) (((+(min((((/* implicit */unsigned long long int) var_4)), (arr_4 [i_0 + 1] [i_0 + 4] [i_4]))))) - (((/* implicit */unsigned long long int) max((((/* implicit */int) max((((/* implicit */short) (signed char)60)), ((short)-5474)))), (((((/* implicit */int) arr_11 [i_0 - 1] [i_4] [(signed char)4] [i_0 - 1])) >> (((((/* implicit */int) var_3)) - (113))))))))));
        }
        var_19 = max((((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)241)) && (((/* implicit */_Bool) ((var_8) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))), (arr_0 [i_0 + 3]));
        var_20 &= ((((/* implicit */int) ((((/* implicit */unsigned int) ((((((/* implicit */int) var_10)) + (2147483647))) >> (((((/* implicit */int) var_0)) - (22408)))))) < (max((((/* implicit */unsigned int) var_10)), (var_11)))))) <= (((/* implicit */int) ((min((var_8), (var_9))) <= (((/* implicit */unsigned int) (-(((/* implicit */int) arr_7 [(unsigned char)10])))))))));
        /* LoopSeq 1 */
        for (short i_5 = 0; i_5 < 19; i_5 += 1) 
        {
            arr_21 [i_5] [i_5] [i_5] = ((((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) <= (arr_4 [i_0 + 1] [i_0 + 1] [i_0])))) + (((((/* implicit */int) arr_3 [i_0 + 3])) - (((/* implicit */int) var_4)))))) < (((/* implicit */int) arr_15 [i_0])));
            var_21 ^= max((((/* implicit */short) ((((var_7) / (((/* implicit */unsigned long long int) var_11)))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 4])))))), (arr_16 [i_5] [i_5] [i_5]));
            arr_22 [i_0 + 4] [i_5] = ((/* implicit */signed char) arr_1 [i_0 - 1]);
        }
    }
}
