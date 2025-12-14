/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212391
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
    var_13 = ((/* implicit */long long int) var_11);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                {
                    var_14 ^= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_7 [(_Bool)1] [i_1 + 1] [i_1 - 1] [i_2 + 1])) ? (((/* implicit */int) arr_7 [8LL] [10LL] [(unsigned short)12] [i_2 + 1])) : (((/* implicit */int) arr_7 [(unsigned short)2] [8LL] [12LL] [i_0])))), (((/* implicit */int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                arr_14 [(unsigned short)8] [(signed char)2] [(unsigned char)5] [(unsigned char)3] [(unsigned short)0] [i_1] [4ULL] = ((/* implicit */unsigned short) (_Bool)1);
                                var_15 = ((/* implicit */unsigned short) -1LL);
                                var_16 = ((/* implicit */long long int) var_12);
                                var_17 = -11LL;
                                var_18 = max((((/* implicit */long long int) max((((((/* implicit */_Bool) -5LL)) ? (((/* implicit */int) (unsigned short)23662)) : (((/* implicit */int) (unsigned char)120)))), (((((/* implicit */_Bool) (unsigned short)65450)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_6 [(unsigned short)5] [(short)9] [(unsigned char)1]))))))), (((((/* implicit */_Bool) ((arr_3 [4ULL] [i_1] [(_Bool)1]) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (-15LL)))) ? (-2764863135952104954LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [(unsigned char)6] [8ULL]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 2; i_5 < 10; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 3; i_6 < 12; i_6 += 4) 
                        {
                            {
                                var_19 = ((((/* implicit */_Bool) (unsigned short)14336)) ? (((((/* implicit */_Bool) arr_8 [3ULL] [(unsigned short)7] [i_5 + 1] [(unsigned char)4] [8ULL] [(unsigned short)4])) ? (((/* implicit */int) (unsigned char)249)) : (((/* implicit */int) arr_8 [(unsigned short)5] [(short)1] [i_5 + 2] [(unsigned char)9] [(short)7] [3LL])))) : (((/* implicit */int) arr_8 [6LL] [1ULL] [i_5 - 1] [4LL] [(_Bool)1] [11LL])));
                                arr_21 [(_Bool)1] [(unsigned short)7] [(unsigned short)12] [(unsigned short)7] [i_1] [(unsigned short)9] = ((/* implicit */short) ((((/* implicit */int) arr_6 [9LL] [(unsigned char)2] [(unsigned short)12])) / (((arr_0 [(short)11] [(signed char)4]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)57064))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 0; i_7 < 13; i_7 += 1) 
                    {
                        arr_24 [(short)4] [12LL] |= -8980810865200849727LL;
                        var_20 = ((/* implicit */unsigned char) -1LL);
                        var_21 = ((/* implicit */long long int) max((arr_10 [(signed char)8] [6LL] [i_1] [(unsigned short)1] [i_1] [(unsigned char)2] [0LL]), (((((/* implicit */_Bool) -8980810865200849727LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [6LL] [2LL] [(signed char)3] [1LL] [8LL] [(short)2] [i_1]))) : (arr_10 [(unsigned char)8] [1LL] [i_1] [(unsigned char)2] [i_1 + 1] [4LL] [(unsigned short)4])))));
                        var_22 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) -8LL)) ? ((~(((/* implicit */int) arr_2 [(short)0] [(short)2])))) : (((/* implicit */int) (unsigned short)15393)))) + (2147483647))) >> (((((/* implicit */int) arr_9 [(unsigned short)9] [(_Bool)1])) / (((/* implicit */int) arr_11 [(unsigned short)10] [(short)6] [(unsigned short)11] [i_1 - 1] [(short)1] [(unsigned short)7] [i_1]))))));
                        var_23 |= ((/* implicit */unsigned char) 8LL);
                    }
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)144)) : (((((/* implicit */_Bool) 12988708361391086856ULL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_12)))))))));
}
