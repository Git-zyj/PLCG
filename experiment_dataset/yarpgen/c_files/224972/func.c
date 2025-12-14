/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224972
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
    var_11 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) var_3)) / (var_4))) * (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) / (var_8))))))) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */unsigned long long int) var_1)))) ^ (((var_4) << (((((/* implicit */int) (short)32767)) - (32724))))))))));
    var_12 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) var_2)) ? (((var_0) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))))));
    var_13 = ((/* implicit */signed char) var_0);
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 7; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 8; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 ^= ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_1 - 2] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 1]))) : (((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */unsigned long long int) arr_3 [(unsigned char)8] [i_2])) : (var_4))))));
                    var_15 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 43318319U)) ? (((((/* implicit */_Bool) -1363588855)) ? (43318348U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)44))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)0)))))));
                    var_16 = ((/* implicit */long long int) arr_7 [i_0] [i_1 - 2] [(_Bool)1] [8LL]);
                    /* LoopSeq 1 */
                    for (long long int i_3 = 1; i_3 < 8; i_3 += 4) 
                    {
                        arr_10 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (short)-26275)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (3805805513902885683LL)));
                        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_1] [2ULL] [i_3]))) ^ (-8482223249286530825LL))), (((/* implicit */long long int) arr_2 [i_0 - 1] [i_3]))))) ? (max((((arr_2 [(unsigned char)9] [i_2]) ? (((/* implicit */unsigned long long int) arr_3 [i_0 + 3] [(signed char)4])) : (var_4))), (((/* implicit */unsigned long long int) ((long long int) var_9))))) : (((/* implicit */unsigned long long int) var_8)))))));
                        arr_11 [i_1 - 1] [7LL] [7LL] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_4 [i_0] [i_0]) ? (((/* implicit */int) arr_4 [i_3 - 1] [i_3])) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_1 - 2] [i_0]))))) ? ((+(var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_4 [i_2] [i_0]) || (((/* implicit */_Bool) (((_Bool)1) ? (arr_6 [i_0] [i_1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))))))))));
                        var_18 *= ((/* implicit */_Bool) (~((~(var_8)))));
                    }
                    arr_12 [(signed char)4] [i_0 + 2] [i_0 + 2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_2 [i_2] [i_0 - 1])), (var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_1)));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_4 = 3; i_4 < 12; i_4 += 3) 
    {
        for (signed char i_5 = 2; i_5 < 11; i_5 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) min((var_6), (((/* implicit */unsigned short) (_Bool)1)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_13 [i_5]))))))) : (max((var_3), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_5])) ? (arr_13 [i_5]) : (4251648975U)))))))))));
                /* LoopSeq 3 */
                for (signed char i_6 = 0; i_6 < 13; i_6 += 4) 
                {
                    var_20 += ((/* implicit */int) min((((((unsigned long long int) var_2)) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_4] [i_5] [i_4] [i_4]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_20 [(_Bool)1] [i_5] [10ULL] [i_6])) && (((/* implicit */_Bool) arr_13 [i_5]))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)126))))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_7 = 1; i_7 < 10; i_7 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_20 [i_4] [i_5] [i_5] [i_7 + 1])) && (((/* implicit */_Bool) var_4)))) ? (arr_15 [i_6]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_4] [10LL] [i_7 - 1])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))))));
                        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_5])) ? (arr_15 [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_7] [i_7] [i_4 + 1]))))))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_8 = 3; i_8 < 11; i_8 += 4) 
                    {
                        for (unsigned int i_9 = 1; i_9 < 12; i_9 += 1) 
                        {
                            {
                                arr_30 [i_4 + 1] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -270733563558185169LL)) ? (((/* implicit */int) arr_28 [i_9] [i_9] [i_9 - 1] [i_9 - 1] [i_9 + 1])) : (((/* implicit */int) arr_23 [i_9] [i_9 - 1] [i_9 + 1] [(_Bool)1] [i_9]))))) ? ((-(var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) arr_23 [i_9 - 1] [i_9] [i_9 - 1] [i_9 - 1] [i_9])), (arr_28 [i_9] [i_9] [i_9 + 1] [i_9] [i_9 + 1])))))));
                                var_23 = ((/* implicit */short) var_0);
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned char) (-((+(var_0)))));
                }
                for (unsigned long long int i_10 = 1; i_10 < 11; i_10 += 4) 
                {
                    var_25 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_10] [i_10 + 2] [i_10 + 2] [i_5 + 1] [i_4 + 1])) ? (((/* implicit */unsigned int) (-(-1363588855)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_19 [i_4] [i_5] [i_5])))))) ? ((-(((/* implicit */int) (unsigned short)57344)))) : (((((/* implicit */_Bool) arr_26 [i_5 - 2] [i_10 - 1] [i_5] [i_4 + 1])) ? (arr_26 [i_5 + 1] [i_10 - 1] [i_10 + 2] [i_4 - 1]) : (arr_26 [i_5 - 2] [i_10 + 1] [(unsigned char)8] [i_4 - 3])))));
                    var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_31 [i_4 - 1] [0ULL] [i_5])), (arr_22 [i_4] [i_5 - 1] [(unsigned short)12] [i_10 + 2])))) ? (min((arr_21 [i_5] [i_5]), (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-24231))))))))));
                    var_27 = ((/* implicit */unsigned int) var_1);
                }
                for (unsigned long long int i_11 = 2; i_11 < 11; i_11 += 4) 
                {
                    var_28 = arr_23 [i_4 - 3] [i_5] [i_11] [i_11] [i_11];
                    arr_36 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_4] [i_5] [i_11 - 2] [i_5] [i_4 - 2])) ? (((((/* implicit */_Bool) var_3)) ? (min((((/* implicit */unsigned int) arr_35 [i_4] [i_5] [i_5] [i_4])), (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) -2577513877601349544LL)) == (arr_15 [i_4]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_4] [i_5] [i_4] [i_5] [i_4])))));
                    arr_37 [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) arr_13 [i_4]);
                }
                arr_38 [i_4] [i_4] [i_5] = ((/* implicit */short) ((int) (-(((/* implicit */int) ((((/* implicit */int) (short)-22006)) < (((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
}
