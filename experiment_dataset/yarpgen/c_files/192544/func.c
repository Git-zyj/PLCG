/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192544
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
    var_16 = ((/* implicit */int) var_15);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            arr_5 [i_0] = max((((/* implicit */unsigned char) ((((/* implicit */int) min((arr_2 [i_0]), (arr_2 [i_1])))) >= (((/* implicit */int) arr_4 [i_0]))))), (arr_1 [(signed char)5]));
            var_17 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) >= (((((/* implicit */int) arr_2 [i_0])) / (arr_3 [i_1])))))) ^ (((/* implicit */int) arr_2 [i_0]))));
            var_18 = ((/* implicit */unsigned char) arr_2 [i_0]);
            var_19 = ((/* implicit */unsigned int) min((max((arr_0 [i_0]), (((/* implicit */long long int) arr_3 [7LL])))), (((/* implicit */long long int) min((((/* implicit */int) ((arr_3 [i_1]) > (((/* implicit */int) arr_1 [i_0]))))), (arr_3 [i_0]))))));
        }
        /* LoopSeq 1 */
        for (long long int i_2 = 3; i_2 < 12; i_2 += 2) 
        {
            var_20 = ((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_0] [1])) % (((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))));
            arr_8 [i_0] [i_2 - 1] [9ULL] = ((/* implicit */short) min((((/* implicit */long long int) max((((/* implicit */signed char) ((((/* implicit */int) arr_1 [(unsigned short)9])) >= (((/* implicit */int) arr_1 [i_0]))))), (arr_7 [i_0] [(unsigned short)9] [(unsigned short)9])))), (min((min((arr_0 [i_0]), (((/* implicit */long long int) arr_2 [i_2])))), (arr_0 [i_0])))));
            arr_9 [i_0] [i_0] = ((/* implicit */short) arr_3 [i_0]);
            var_21 = ((/* implicit */unsigned int) arr_3 [8LL]);
            var_22 = ((/* implicit */long long int) arr_4 [i_0]);
        }
        var_23 = min((max((((/* implicit */long long int) arr_6 [i_0] [i_0])), (min((-9223372036854775778LL), (-9223372036854775777LL))))), (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_0] [(signed char)13])) + (((/* implicit */int) arr_2 [i_0]))))));
        var_24 ^= ((/* implicit */signed char) min((((max((((/* implicit */unsigned int) (signed char)-35)), (418671713U))) > (((/* implicit */unsigned int) ((/* implicit */int) min((arr_6 [(unsigned char)3] [i_0]), (arr_6 [(signed char)4] [(signed char)4]))))))), (((((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775781LL)) && (((/* implicit */_Bool) (signed char)-65))))) < (((/* implicit */int) min((((/* implicit */short) arr_6 [6LL] [i_0])), (arr_2 [i_0]))))))));
    }
    for (short i_3 = 0; i_3 < 21; i_3 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_4 = 0; i_4 < 21; i_4 += 1) 
        {
            var_25 = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_4])) / (((/* implicit */int) arr_12 [i_3]))))) && (((/* implicit */_Bool) max((arr_15 [(short)13] [i_4] [(short)13]), (((/* implicit */unsigned short) arr_11 [i_3])))))))), (((((/* implicit */int) arr_13 [i_3])) / (((/* implicit */int) arr_10 [i_4] [i_4]))))));
            var_26 += ((/* implicit */unsigned short) arr_14 [i_3]);
            var_27 *= ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */int) arr_10 [i_3] [i_4])) > (((((/* implicit */int) arr_12 [i_3])) - (((/* implicit */int) arr_10 [i_4] [i_4]))))))), (((4) * (((/* implicit */int) arr_14 [i_4]))))));
        }
        arr_16 [i_3] = ((/* implicit */unsigned short) min((((((((/* implicit */int) arr_10 [8U] [(unsigned short)5])) >> (((((/* implicit */int) arr_11 [i_3])) - (27819))))) | (((/* implicit */int) ((((/* implicit */int) arr_14 [(signed char)2])) < (((/* implicit */int) arr_15 [i_3] [i_3] [(unsigned short)13]))))))), (((((((/* implicit */int) arr_14 [(unsigned short)2])) | (((/* implicit */int) arr_10 [7] [i_3])))) / (((/* implicit */int) min((arr_11 [i_3]), (((/* implicit */short) (signed char)112)))))))));
        var_28 = min((max((max((arr_10 [i_3] [(signed char)15]), (arr_10 [i_3] [i_3]))), (max((((/* implicit */short) arr_12 [i_3])), (arr_10 [i_3] [10U]))))), (arr_13 [i_3]));
    }
    var_29 = ((/* implicit */long long int) var_3);
}
