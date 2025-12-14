/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211118
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
    for (signed char i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)(-32767 - 1)))));
        arr_3 [i_0 + 2] = ((/* implicit */signed char) ((((((/* implicit */int) (short)(-32767 - 1))) <= (((/* implicit */int) (short)32767)))) ? ((-(((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_0 [i_0] [i_0 + 3])))))) : (((/* implicit */int) var_8))));
        arr_4 [i_0] [10LL] = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) (short)(-32767 - 1))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_4 = 1; i_4 < 7; i_4 += 4) 
                    {
                        var_10 = ((/* implicit */unsigned char) max((((/* implicit */int) (((!(arr_7 [i_4] [i_2]))) && (((/* implicit */_Bool) (unsigned short)28175))))), (((((/* implicit */_Bool) arr_1 [i_3] [i_4])) ? (((int) 252566632610443922ULL)) : (((/* implicit */int) var_5))))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_5 = 2; i_5 < 9; i_5 += 3) 
                        {
                            arr_19 [3] [i_4] [i_3] = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)(-127 - 1)))));
                            arr_20 [i_4] [i_2] [i_4] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned short)23501)) && ((_Bool)1))), (((((((/* implicit */_Bool) var_9)) ? (18194177441099107694ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) var_1))))))))));
                        }
                        for (long long int i_6 = 2; i_6 < 9; i_6 += 4) /* same iter space */
                        {
                            arr_23 [i_6] [i_4] [i_3] [i_4] [i_4] [i_1] = ((/* implicit */long long int) (short)(-32767 - 1));
                            arr_24 [i_1] [(_Bool)1] [i_4] = ((/* implicit */short) max((max((max((arr_18 [i_4] [(unsigned char)3] [i_1] [i_3] [i_6] [i_6] [(unsigned short)2]), (((/* implicit */unsigned int) arr_0 [i_3] [i_3])))), (((/* implicit */unsigned int) ((signed char) (unsigned short)0))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)8716)) && (((/* implicit */_Bool) arr_15 [i_1] [i_6 + 1] [i_3] [i_4 + 2] [i_6] [i_4])))))));
                        }
                        for (long long int i_7 = 2; i_7 < 9; i_7 += 4) /* same iter space */
                        {
                            var_11 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [18LL] [i_1]))));
                            var_12 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_7] [i_4 + 4] [i_3] [i_7 - 2] [i_7 - 2] [i_7 - 2])) ? (arr_15 [i_4] [i_4 - 1] [i_3] [i_7 - 2] [i_7 - 2] [i_4 - 1]) : (arr_15 [i_1] [i_4 - 1] [i_4 - 1] [i_7 + 1] [i_7] [i_4 + 2]))))));
                            var_13 = ((/* implicit */unsigned char) arr_1 [i_3] [i_7]);
                            var_14 = ((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_27 [i_4 + 4] [i_4])) * (((/* implicit */int) (unsigned char)0)))), (max((max((((/* implicit */int) (unsigned short)23501)), (262909641))), (((1313235032) + (((/* implicit */int) (unsigned short)0))))))));
                        }
                        for (unsigned short i_8 = 0; i_8 < 11; i_8 += 1) 
                        {
                            var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_4] [i_2]))) <= (arr_28 [i_1] [i_2] [i_3] [i_4] [i_8]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (signed char)78)) : (((/* implicit */int) var_7))))) : (max((arr_9 [i_2] [0LL] [i_8]), (5619803872954462087LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((arr_28 [i_2] [i_2] [i_4 - 1] [i_4] [i_4 - 1]) / (((/* implicit */long long int) var_2))))));
                            arr_30 [i_4] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_1)))))));
                            var_16 = ((/* implicit */signed char) (short)0);
                            var_17 = ((/* implicit */int) max(((((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */long long int) ((arr_15 [i_1] [(signed char)6] [i_3] [(_Bool)1] [i_4] [i_3]) / (((/* implicit */int) var_8))))) : (((-6746166363185360749LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_1))))))), (((/* implicit */long long int) var_6))));
                        }
                        var_18 = ((/* implicit */unsigned short) max((max((((((/* implicit */int) (short)(-32767 - 1))) + (1647016278))), (((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_4] [(signed char)5] [(signed char)5] [i_4] [i_3] [i_3] [i_3]))))) ^ (((/* implicit */int) ((_Bool) 262909641)))))));
                        var_19 = (!(((/* implicit */_Bool) 752942)));
                    }
                    var_20 = ((/* implicit */signed char) ((long long int) ((((/* implicit */int) (signed char)93)) <= (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (unsigned char)247)) : (((/* implicit */int) (_Bool)1)))))));
                    arr_31 [0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) arr_11 [(unsigned short)4] [i_2] [10]))) ? (((/* implicit */int) (short)(-32767 - 1))) : (((((/* implicit */_Bool) arr_0 [i_1] [2])) ? (max((((/* implicit */int) var_7)), (arr_11 [i_1] [i_2] [i_1]))) : (((/* implicit */int) ((signed char) arr_21 [i_1] [i_3])))))));
                }
            } 
        } 
        arr_32 [i_1] = ((/* implicit */unsigned long long int) ((int) 708780099U));
        arr_33 [3LL] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_21 [i_1] [i_1])))) ? ((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) var_0)))))));
    }
    var_21 = ((/* implicit */unsigned char) var_0);
}
