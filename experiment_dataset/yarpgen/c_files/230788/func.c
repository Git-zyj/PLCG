/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230788
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
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_0) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((2147483647) > (2147483647))))) : (((((/* implicit */_Bool) var_8)) ? (8218586054240683746LL) : (((/* implicit */long long int) var_4))))))) ? (var_1) : (var_1)));
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) var_6)), (((((/* implicit */_Bool) 3573101776831162031ULL)) ? (((/* implicit */int) (short)127)) : (((/* implicit */int) (short)-11628))))))) ? (max((var_0), (((/* implicit */unsigned long long int) 2147483627)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 4; i_3 < 13; i_3 += 4) 
                    {
                        arr_12 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_3 - 2] [i_1])) ? (var_7) : (var_8)));
                        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_2] [i_1] [i_2 + 1] [i_3 - 1])) ? (arr_8 [i_1] [i_1] [i_2 + 1] [i_3 - 1]) : (var_1)));
                        arr_13 [i_2] [i_1] [7] = ((/* implicit */signed char) (-(arr_7 [i_0] [i_2] [i_3] [i_3 - 3])));
                        var_14 -= ((/* implicit */unsigned char) (~((+(var_4)))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 14; i_4 += 3) 
                    {
                        arr_17 [i_2] [i_4] = ((/* implicit */unsigned long long int) ((((unsigned long long int) arr_16 [i_2 + 1] [i_2] [i_2 + 1] [i_4] [i_4])) < (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_16 [(_Bool)1] [i_2] [i_1] [i_2] [12U])) >= (var_5)))))))));
                        /* LoopSeq 3 */
                        for (int i_5 = 4; i_5 < 13; i_5 += 3) 
                        {
                            var_15 = arr_14 [i_2] [3ULL];
                            arr_20 [i_2] [(unsigned char)0] [i_2 - 1] [i_2] [i_2] = (i_2 % 2 == zero) ? (((/* implicit */_Bool) max((((((/* implicit */_Bool) ((arr_2 [i_1] [i_1]) << (((arr_7 [i_0] [i_2] [i_2] [i_2]) - (14568578229072671333ULL)))))) ? (((int) (_Bool)1)) : (((/* implicit */int) arr_5 [(unsigned short)6] [(unsigned short)6])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_5 + 1] [i_1] [i_2 + 1])) && (((/* implicit */_Bool) arr_10 [i_5 - 1] [i_5 - 4] [i_2 + 1])))))))) : (((/* implicit */_Bool) max((((((/* implicit */_Bool) ((arr_2 [i_1] [i_1]) << (((((arr_7 [i_0] [i_2] [i_2] [i_2]) - (14568578229072671333ULL))) - (12899924841247911991ULL)))))) ? (((int) (_Bool)1)) : (((/* implicit */int) arr_5 [(unsigned short)6] [(unsigned short)6])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_5 + 1] [i_1] [i_2 + 1])) && (((/* implicit */_Bool) arr_10 [i_5 - 1] [i_5 - 4] [i_2 + 1]))))))));
                            var_16 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_1 [i_5 - 1])) == (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))) ? (((((/* implicit */_Bool) var_5)) ? (min((arr_0 [i_1]), (((/* implicit */unsigned int) var_1)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [i_0])) : (arr_8 [(signed char)4] [i_1] [i_1] [i_1])))))) : (((/* implicit */unsigned int) ((/* implicit */int) (((-(var_0))) > (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) & (arr_19 [0ULL] [i_0] [i_2 - 1] [i_1] [i_0]))))))))));
                            arr_21 [i_2] [13ULL] [(unsigned char)3] [i_1] [i_2] = ((/* implicit */long long int) arr_14 [i_2] [i_2]);
                        }
                        for (signed char i_6 = 1; i_6 < 11; i_6 += 4) 
                        {
                            var_17 = ((/* implicit */long long int) arr_2 [i_6] [i_0]);
                            var_18 = ((/* implicit */unsigned long long int) arr_9 [i_2] [i_6 - 1] [i_4] [i_4]);
                        }
                        for (signed char i_7 = 4; i_7 < 13; i_7 += 1) 
                        {
                            var_19 -= ((/* implicit */_Bool) (~((~(((/* implicit */int) arr_10 [i_0] [i_2] [i_2 + 1]))))));
                            var_20 = ((/* implicit */signed char) min((((/* implicit */unsigned int) arr_5 [i_2] [i_1])), (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned short)52794)) - (52763)))))) ? (max((var_8), (((/* implicit */unsigned int) arr_19 [(unsigned short)5] [i_1] [i_2] [(unsigned char)3] [(signed char)12])))) : (((/* implicit */unsigned int) var_2))))));
                        }
                        arr_26 [i_1] [i_1] [i_2] [i_2] [i_2] [i_4] = max((((unsigned short) ((signed char) var_2))), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [(signed char)0] [i_1] [i_2] [i_2 - 1] [i_0]))) > (arr_6 [i_1] [i_2 + 1])))));
                        arr_27 [i_1] [(signed char)5] [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) ((unsigned long long int) max((arr_15 [i_2]), (arr_15 [i_2]))));
                    }
                    arr_28 [i_2] [i_1] = ((/* implicit */unsigned char) max(((+(((((/* implicit */_Bool) arr_25 [i_2] [i_2] [i_2] [i_0] [i_0])) ? (arr_9 [i_2] [i_0] [i_1] [i_0]) : (((/* implicit */int) var_6)))))), ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
                }
            } 
        } 
    } 
}
