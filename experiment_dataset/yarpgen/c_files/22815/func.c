/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22815
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
    var_15 = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)252)) && (((/* implicit */_Bool) (unsigned char)3))))), (var_1))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_1)), (var_7)))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_14)) : (var_11))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) arr_7 [(unsigned char)21])), (arr_2 [10] [(signed char)1]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_7 [i_0])))))))) ? (max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_4 [i_0] [i_0])), (arr_7 [i_2])))), ((~(arr_2 [i_0] [i_1]))))) : ((+(arr_2 [i_1] [i_1]))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 23; i_3 += 3) 
                    {
                        for (short i_4 = 2; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_3 + 1] [i_4 - 2]))))) ? ((+(arr_0 [i_4 + 2]))) : (((/* implicit */unsigned long long int) (((-(arr_12 [i_1] [i_1] [i_1] [i_1]))) + (((/* implicit */int) max((arr_4 [15] [i_4 + 1]), (((/* implicit */short) arr_10 [i_3] [(short)15] [(short)15] [i_3])))))))))))));
                                var_18 *= ((977845086) / (-1644138635));
                                var_19 *= ((((/* implicit */unsigned long long int) min((max((((/* implicit */int) arr_5 [i_3])), (arr_11 [17LL] [17LL] [(short)12] [i_4 + 3]))), (((((/* implicit */_Bool) arr_6 [i_1] [16U] [16U])) ? (((/* implicit */int) arr_6 [i_4] [17ULL] [i_1])) : (((/* implicit */int) arr_13 [i_0] [i_1] [i_0]))))))) | (((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_1] [i_0]))))) ? (((/* implicit */unsigned long long int) ((int) arr_10 [i_0] [i_1] [i_2] [i_1]))) : (((((/* implicit */_Bool) arr_4 [(signed char)4] [i_1])) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_7 [i_0])))))));
                                var_20 += ((/* implicit */unsigned char) (+(((int) ((arr_2 [i_2] [18U]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [0LL]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 *= ((/* implicit */unsigned short) max((var_1), (((/* implicit */unsigned int) var_4))));
    /* LoopSeq 1 */
    for (unsigned char i_5 = 3; i_5 < 23; i_5 += 3) 
    {
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 24; i_6 += 2) 
        {
            for (unsigned int i_7 = 0; i_7 < 25; i_7 += 4) 
            {
                {
                    var_22 = ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) (unsigned char)235)) : (((/* implicit */int) (short)(-32767 - 1))))))) ? (((((/* implicit */int) min(((short)19234), (((/* implicit */short) arr_18 [i_5] [i_6] [i_5 - 3]))))) * (((/* implicit */int) max((arr_21 [i_5 - 1] [15ULL] [15ULL] [i_7]), (arr_21 [i_5] [i_5] [i_6] [i_5])))))) : ((+((-(-648832009))))));
                    var_23 = ((/* implicit */unsigned char) ((long long int) ((unsigned long long int) arr_4 [4] [i_6 + 1])));
                }
            } 
        } 
        var_24 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_0 [i_5])) ? (arr_14 [i_5]) : (arr_20 [(unsigned char)2] [i_5]))))))));
        arr_22 [i_5] |= ((/* implicit */int) ((short) min(((-(arr_0 [i_5 + 2]))), (((/* implicit */unsigned long long int) ((unsigned char) arr_3 [17U]))))));
        /* LoopNest 2 */
        for (int i_8 = 4; i_8 < 22; i_8 += 3) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    var_25 = ((/* implicit */int) max((((/* implicit */unsigned long long int) arr_28 [i_9] [(signed char)7] [i_5 + 2] [i_5 - 3])), (min((min((((/* implicit */unsigned long long int) arr_4 [i_5] [i_5 + 2])), (arr_0 [(unsigned short)2]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_12 [i_8] [i_8 + 3] [i_8 - 1] [20LL])))))))));
                    var_26 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_5] [i_8] [i_5])) ? (arr_9 [(unsigned char)10] [(unsigned short)10] [(signed char)1] [i_9]) : (arr_12 [i_5] [10] [10] [10])))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_21 [i_8] [(unsigned char)19] [(signed char)14] [i_8])), (arr_17 [4U] [i_8]))))) : ((+(arr_26 [9U])))))), (((((/* implicit */_Bool) ((unsigned long long int) arr_25 [i_5] [i_5] [i_5]))) ? (((/* implicit */unsigned long long int) ((arr_23 [i_9] [i_8]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_5] [i_5] [i_5] [i_9])))))) : (((2465510452675156771ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-58)))))))));
                }
            } 
        } 
    }
}
