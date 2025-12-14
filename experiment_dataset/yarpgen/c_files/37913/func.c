/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37913
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    var_12 = ((/* implicit */short) (-(var_9)));
                    arr_9 [(unsigned short)4] [1ULL] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [6U]))) : (8002259106169825283LL)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 15; i_3 += 3) 
                    {
                        for (signed char i_4 = 1; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_13 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_0] [4U]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_3 - 3] [i_3 - 2])) ? (((/* implicit */int) arr_1 [i_2 - 1])) : (((/* implicit */int) arr_1 [i_2 - 1]))))) : (((((/* implicit */_Bool) arr_14 [(_Bool)1] [i_1 + 1] [i_1 + 1])) ? (arr_14 [i_0] [i_0] [i_4 - 1]) : (arr_14 [i_0] [i_0] [i_0])))));
                                var_14 = ((/* implicit */unsigned short) var_8);
                                var_15 = ((/* implicit */short) min((min((((((/* implicit */_Bool) (signed char)61)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (short)15584))))), (((/* implicit */unsigned int) ((((/* implicit */int) (short)2048)) | (((/* implicit */int) arr_1 [i_1]))))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_4 - 1] [i_4 + 1])) <= (((/* implicit */int) (unsigned char)136)))))));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [4U] [i_1] = ((/* implicit */unsigned long long int) max(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (3358933749U) : (var_1)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3358933749U)) ? (var_8) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0]))))) && (((/* implicit */_Bool) max(((unsigned char)125), (((/* implicit */unsigned char) arr_8 [i_2] [i_1])))))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) min((min((((((/* implicit */_Bool) (short)-15606)) ? (var_2) : (((/* implicit */long long int) arr_7 [4] [i_1] [i_2] [i_0])))), (((arr_13 [i_0] [i_0] [i_0] [9] [i_0]) | (((/* implicit */long long int) var_4)))))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) 15634937105429129708ULL)))) + ((-(672265355U)))))))))));
                }
                for (short i_5 = 1; i_5 < 15; i_5 += 1) 
                {
                    arr_20 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) (short)-2031)), (arr_5 [(_Bool)1] [(_Bool)1])))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_11))))) : (var_7)))), (min((arr_13 [i_0] [i_1] [2U] [i_5 + 1] [i_5]), (((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_0] [i_1])))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 3; i_6 < 14; i_6 += 2) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 16; i_7 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */short) arr_25 [i_0] [5ULL] [i_1] [i_1] [i_5 + 1]);
                                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) min(((-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_7] [14] [i_7] [14ULL]))) != (var_2)))))), (max((((((/* implicit */int) arr_4 [7] [7])) % (((/* implicit */int) arr_8 [i_1] [i_7])))), (((/* implicit */int) ((unsigned short) arr_25 [4ULL] [i_1] [i_7] [i_6] [4ULL]))))))))));
                                arr_26 [i_0] [i_1] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_1 + 1])))))));
                            }
                        } 
                    } 
                    var_19 |= ((/* implicit */short) var_10);
                }
                var_20 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_22 [i_1] [i_1] [i_1]), (((/* implicit */unsigned short) arr_4 [i_0] [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (3358933749U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))) : (min((((/* implicit */long long int) var_5)), (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])))))) < (((unsigned long long int) (~(arr_11 [(unsigned char)2]))))));
                /* LoopNest 3 */
                for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 1) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (int i_10 = 2; i_10 < 15; i_10 += 2) 
                        {
                            {
                                arr_35 [i_0] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_9] [i_10] [i_10]))));
                                var_21 *= ((/* implicit */short) max((((/* implicit */long long int) var_5)), (((((/* implicit */long long int) ((unsigned int) var_9))) / (-6556624724156204259LL)))));
                            }
                        } 
                    } 
                } 
                arr_36 [i_1] [i_1] = ((/* implicit */_Bool) (signed char)-49);
                arr_37 [14] |= ((((/* implicit */_Bool) arr_31 [(short)0])) ? (((/* implicit */int) arr_1 [i_0])) : ((~(((/* implicit */int) (unsigned short)45809)))));
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) max((((((/* implicit */int) ((var_4) == (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) * (((((/* implicit */int) var_3)) / (((/* implicit */int) var_3)))))), (((/* implicit */int) (!(((((/* implicit */int) var_0)) != (((/* implicit */int) var_5)))))))));
}
