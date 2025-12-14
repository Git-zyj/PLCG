/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28835
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
    var_13 += min((var_4), (((/* implicit */int) ((max((((/* implicit */unsigned int) var_7)), (var_10))) > (var_10)))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((arr_1 [i_0 + 1] [i_0]) >= (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_1 [i_0] [21ULL]), (arr_1 [i_0 + 2] [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 + 2]))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)16))))))))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 24; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_0] [i_1] [i_1] [i_3] |= ((/* implicit */long long int) arr_5 [i_2 - 1] [i_1] [i_1]);
                        arr_12 [i_0] [i_2 - 1] [i_1] [i_0] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), (arr_0 [2])))) ? (((/* implicit */int) ((_Bool) var_12))) : (((/* implicit */int) ((arr_3 [i_1] [i_1] [i_2]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_4 = 0; i_4 < 25; i_4 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (int i_5 = 2; i_5 < 24; i_5 += 3) 
                        {
                            var_15 -= ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_5 [i_0 + 1] [(_Bool)1] [i_5])))) >= (((((/* implicit */_Bool) arr_8 [i_0 + 3] [i_1] [i_2 - 1] [i_5])) ? (((/* implicit */unsigned long long int) 548607716)) : (arr_2 [i_4]))))))));
                            arr_17 [i_0 + 2] [i_0 + 2] [i_0 + 1] [i_0 + 2] [i_0 - 1] [i_0] [i_0 + 2] = ((/* implicit */short) max(((-(((/* implicit */int) arr_6 [i_0 + 2] [i_0 + 2] [(signed char)8] [i_4])))), (((/* implicit */int) arr_9 [i_2] [i_2 + 1] [10ULL] [(unsigned char)1] [(unsigned char)1]))));
                            var_16 |= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) == (((((/* implicit */_Bool) arr_5 [i_0 + 3] [i_0] [(unsigned short)23])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_9 [i_1] [i_0 + 2] [i_2] [i_1] [i_0 + 2]))))) : (((((/* implicit */_Bool) arr_10 [i_0 + 2] [i_0 + 3] [i_0] [i_0] [i_0] [i_0])) ? (arr_1 [(unsigned char)16] [i_1]) : (((/* implicit */long long int) arr_15 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_4] [i_0 + 2]))))))));
                            var_17 += ((/* implicit */unsigned int) (((~(((/* implicit */int) arr_7 [i_2])))) != ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_0 + 1] [i_1] [i_0 + 1] [i_4] [i_5 + 1])))))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_6 = 0; i_6 < 25; i_6 += 1) 
                        {
                            arr_20 [i_0] [i_0 + 3] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) arr_13 [i_0] [i_1] [i_4] [i_6]))) ? ((-(arr_15 [i_0] [i_0] [i_2 - 1] [i_0] [i_6]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -548607716))))))));
                            var_18 = ((/* implicit */unsigned short) (~(((int) arr_16 [i_0 - 1] [i_1] [i_2 - 1] [i_0] [i_2 - 1]))));
                            var_19 -= ((/* implicit */short) (-(arr_16 [i_0] [i_0 + 2] [i_2 - 1] [i_4] [i_2 - 1])));
                        }
                        var_20 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) arr_4 [i_0])))));
                        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1])))))) + (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_2 [i_4]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2] [i_2 + 1] [i_2] [i_2] [i_2 - 1] [i_2 - 1]))) : (0U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_5 [i_0] [i_1] [i_4])))) : (var_2)))))))));
                    }
                    for (unsigned short i_7 = 0; i_7 < 25; i_7 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned char) ((unsigned int) min((((((/* implicit */_Bool) (unsigned char)29)) ? (arr_15 [i_0 - 1] [i_0 - 1] [i_2 + 1] [i_0 - 1] [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0]))))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_6 [2LL] [(unsigned char)11] [i_2 + 1] [i_7])), (arr_0 [i_2])))))));
                        arr_25 [i_0 + 1] [i_1] [i_2] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((_Bool) ((((/* implicit */int) var_8)) - (((/* implicit */int) arr_23 [i_1] [i_1] [i_1])))))), (arr_16 [i_0] [i_0] [i_0 + 1] [i_0] [i_0 - 1])));
                        arr_26 [i_7] [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((((/* implicit */_Bool) var_9)) ? (arr_8 [i_0] [i_0 - 1] [i_0 + 1] [i_0 + 3]) : (arr_8 [i_0] [i_0] [i_0 + 2] [i_0 + 1]))) : (arr_8 [2ULL] [i_0] [i_0 + 1] [i_0 - 1])));
                    }
                    var_23 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65519)) ? (201323692400591902ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_3 [15ULL] [i_1] [i_0]))) : (((arr_2 [i_2]) * (((/* implicit */unsigned long long int) arr_1 [23] [(unsigned short)24])))))) + (((/* implicit */unsigned long long int) max((arr_16 [i_0 + 3] [i_1] [i_2 - 1] [i_0] [i_0 - 1]), ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0 + 1]))))))));
                    var_24 = ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)35)) >= (((/* implicit */int) (unsigned short)45687)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_13 [i_0] [i_0] [i_2] [i_2]), (var_7)))) ? (min((arr_3 [i_0 + 2] [i_0 + 2] [i_0]), (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_21 [i_0 - 1] [i_0]) > (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0 + 2] [i_1] [i_2 - 1]))))))))))));
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) >= (min((arr_21 [i_0] [i_0]), (arr_21 [i_0 + 2] [i_0 + 2])))))) << (((((/* implicit */int) arr_9 [i_0 + 3] [i_0] [i_0 + 3] [i_0 + 2] [i_0])) - (31))))))));
    }
}
