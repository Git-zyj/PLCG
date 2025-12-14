/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192496
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
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) arr_1 [11]);
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_20 = ((/* implicit */long long int) arr_0 [12U] [i_0]);
            var_21 ^= ((/* implicit */int) min((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */unsigned long long int) ((arr_0 [i_1] [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25941)))))) / (arr_3 [(signed char)8] [8U])))));
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_2 [i_0 - 2] [i_0 - 1])), (5378779170827603554LL)))) ? (((((/* implicit */int) arr_2 [i_0 + 1] [i_0])) % (((/* implicit */int) arr_2 [i_0 + 1] [i_0])))) : (((/* implicit */int) arr_2 [i_0 - 2] [i_0]))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_3 = 3; i_3 < 11; i_3 += 2) 
                {
                    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [11LL] [12U] [i_2])))))));
                    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (((((_Bool)1) && (((/* implicit */_Bool) arr_1 [i_3])))) ? (((((/* implicit */long long int) arr_6 [i_0])) ^ (arr_10 [i_0] [i_0] [i_2] [i_1] [(unsigned short)2] [2LL]))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_15)))))))));
                    var_25 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1798597147384511920LL)) ? (((((/* implicit */_Bool) arr_1 [9LL])) ? (((/* implicit */unsigned long long int) 1798597147384511920LL)) : (arr_3 [i_2] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_1 [i_2])) ^ (arr_10 [i_0] [i_1] [i_0] [i_1] [i_1] [i_1]))))));
                }
                /* vectorizable */
                for (unsigned char i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_0 - 2] [i_1] [i_0 - 2])) & (((/* implicit */int) (signed char)-81)))))));
                    var_27 ^= ((/* implicit */int) (-(arr_6 [i_0])));
                    var_28 = ((/* implicit */unsigned char) ((long long int) ((long long int) arr_8 [i_0] [i_1] [i_1])));
                }
                arr_15 [i_1] = ((/* implicit */unsigned char) var_16);
                var_29 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_7 [i_0] [i_1] [0LL])) < (((((/* implicit */_Bool) arr_2 [(unsigned short)11] [i_2])) ? (((/* implicit */int) arr_2 [i_0 - 2] [(_Bool)1])) : (((/* implicit */int) ((((/* implicit */_Bool) -1798597147384511937LL)) || (((/* implicit */_Bool) arr_3 [i_0] [i_1])))))))));
                var_30 = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)127))));
            }
        }
        var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [4U])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1798597147384511915LL)) ? (arr_14 [0U] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0 - 2] [i_0] [(unsigned short)1] [i_0 + 1] [i_0] [i_0])))))))))) : (arr_1 [i_0 - 2]))))));
    }
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        arr_20 [i_5] = ((/* implicit */signed char) min((max((1798597147384511920LL), (((/* implicit */long long int) ((unsigned int) -5926207803978189705LL))))), (((((/* implicit */long long int) ((/* implicit */int) var_17))) * (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)20418))) / (arr_18 [i_5])))))));
        var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) (signed char)-111))));
        var_33 = ((/* implicit */unsigned int) (~(((((((/* implicit */_Bool) 5032892209656347594ULL)) && (((/* implicit */_Bool) (unsigned short)54938)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-113))) >= (arr_17 [i_5 - 1] [9ULL]))))) : (min((((/* implicit */long long int) (unsigned short)65535)), (arr_17 [(unsigned char)12] [i_5])))))));
    }
    var_34 = ((/* implicit */int) var_12);
}
