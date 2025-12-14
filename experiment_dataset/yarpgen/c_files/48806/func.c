/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48806
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((arr_0 [i_0] [i_0]) < (((/* implicit */unsigned int) ((/* implicit */int) min((((arr_0 [13U] [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))))), (((arr_0 [i_0] [i_0]) <= (arr_0 [5LL] [i_0])))))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            var_16 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */short) arr_3 [i_0] [i_1] [i_0])), (arr_4 [i_0] [i_0])))) * (((/* implicit */int) ((arr_0 [i_1] [i_1]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1]))))))))), (((min((((/* implicit */unsigned long long int) (signed char)-82)), (10811849753898208395ULL))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [(_Bool)1] [i_0])) & (((/* implicit */int) arr_1 [i_1] [i_1])))))))));
            var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-32749)) && ((_Bool)1))))));
            var_18 *= ((/* implicit */unsigned int) arr_3 [i_1] [i_0] [i_1]);
        }
        arr_5 [i_0] = ((/* implicit */short) arr_3 [i_0] [i_0] [i_0]);
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) min((arr_4 [i_0] [i_0]), (((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) && (((/* implicit */_Bool) arr_0 [i_0] [i_0])))))))) != (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))));
        arr_6 [5U] = ((/* implicit */int) arr_1 [(unsigned short)1] [(unsigned short)1]);
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */long long int) arr_8 [i_2]);
        /* LoopSeq 3 */
        for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            var_21 = ((/* implicit */signed char) ((arr_0 [i_2] [i_2]) << (((((((/* implicit */int) arr_4 [i_2] [i_3])) - (((/* implicit */int) (short)-21189)))) - (17383)))));
            var_22 = ((/* implicit */int) ((arr_10 [i_2] [i_3]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [13LL] [(short)0])))));
            var_23 = ((/* implicit */short) ((((/* implicit */int) ((arr_9 [i_2]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3] [i_2])))))) ^ (((/* implicit */int) arr_8 [i_2]))));
        }
        for (unsigned long long int i_4 = 1; i_4 < 14; i_4 += 3) 
        {
            var_24 = ((/* implicit */unsigned char) arr_0 [i_2] [i_2]);
            /* LoopSeq 2 */
            for (unsigned char i_5 = 0; i_5 < 16; i_5 += 3) 
            {
                var_25 = ((/* implicit */unsigned long long int) arr_17 [i_4] [i_4]);
                arr_18 [i_2] [i_2] [i_2] [i_4] = ((/* implicit */unsigned short) arr_17 [i_2] [i_4]);
            }
            for (signed char i_6 = 0; i_6 < 16; i_6 += 1) 
            {
                var_26 = ((((/* implicit */int) arr_4 [(signed char)6] [(signed char)6])) ^ (((/* implicit */int) ((((/* implicit */int) arr_3 [(short)12] [i_2] [i_6])) <= (((/* implicit */int) arr_16 [i_2] [i_2] [i_2]))))));
                var_27 = ((/* implicit */signed char) ((arr_17 [i_4] [i_4]) * (((/* implicit */int) ((arr_0 [i_2] [i_2]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_4] [i_4]))))))));
                /* LoopNest 2 */
                for (unsigned char i_7 = 1; i_7 < 15; i_7 += 3) 
                {
                    for (signed char i_8 = 2; i_8 < 14; i_8 += 3) 
                    {
                        {
                            arr_26 [i_2] [4] [i_2] [i_2] [15] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [(signed char)0] [(signed char)0])) && (arr_12 [i_4])))) <= (((/* implicit */int) arr_4 [i_2] [10]))));
                            var_28 = ((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_4])) - (((((/* implicit */int) arr_16 [2] [(unsigned char)10] [i_2])) | (((/* implicit */int) arr_14 [i_2]))))));
                        }
                    } 
                } 
                arr_27 [i_2] [i_2] [i_4] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_25 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])) == (((/* implicit */int) arr_4 [i_6] [i_6])))))) <= (arr_22 [i_2] [(signed char)15] [(unsigned char)14] [i_2] [i_2] [i_2])));
                var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned char)96))));
            }
            var_30 |= ((/* implicit */long long int) arr_23 [i_4] [i_4]);
        }
        for (unsigned int i_9 = 0; i_9 < 16; i_9 += 2) 
        {
            arr_30 [i_9] = ((/* implicit */unsigned int) arr_4 [i_2] [i_2]);
            var_31 ^= ((/* implicit */int) ((((((/* implicit */int) arr_7 [i_2] [i_9])) <= (((/* implicit */int) arr_4 [i_2] [i_2])))) && (((arr_9 [i_9]) <= (((/* implicit */unsigned long long int) arr_0 [i_2] [(signed char)7]))))));
            var_32 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_24 [i_2] [i_2] [i_2] [i_2] [i_9])) / (((arr_29 [i_2]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_2] [i_2] [i_2])))))));
        }
        arr_31 [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_15 [i_2] [i_2] [i_2])) + (arr_21 [i_2] [i_2] [i_2] [(unsigned short)12] [i_2] [12LL]))) ^ (((((/* implicit */int) (signed char)1)) - (((/* implicit */int) (_Bool)1))))));
    }
    var_33 = ((/* implicit */long long int) ((min((((/* implicit */long long int) var_5)), (min((var_6), (((/* implicit */long long int) var_15)))))) < (((/* implicit */long long int) ((/* implicit */int) var_15)))));
    var_34 = ((/* implicit */signed char) ((((((/* implicit */int) min((((/* implicit */unsigned char) var_5)), (var_15)))) + (((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) var_11))))))) <= (((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) <= (var_10)))) + (var_13)))));
    var_35 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((((/* implicit */int) var_5)) / (((/* implicit */int) var_2)))) <= (((/* implicit */int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) var_1)))))))), (min((((/* implicit */long long int) ((((/* implicit */int) var_12)) << (((/* implicit */int) var_4))))), (var_6)))));
}
