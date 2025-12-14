/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193755
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
    var_20 |= ((/* implicit */unsigned short) var_15);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    arr_9 [i_2] [i_0] = (short)-31135;
                    arr_10 [(unsigned short)11] [i_1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (var_0) : (((/* implicit */unsigned long long int) min((arr_1 [0LL]), (var_4)))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_7 [i_0] [(unsigned short)20] [4])))))));
                }
                /* vectorizable */
                for (unsigned short i_3 = 4; i_3 < 17; i_3 += 2) /* same iter space */
                {
                    var_21 &= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [12]))) <= (arr_1 [i_1])));
                    var_22 = ((/* implicit */unsigned short) arr_6 [i_1] [i_1]);
                    arr_13 [(short)15] = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_3 - 1] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (arr_5 [i_3] [i_1] [i_0])))) : (((6433947242019731292LL) | (((/* implicit */long long int) arr_5 [i_0] [i_1] [i_3 - 2]))))));
                    var_23 = ((/* implicit */unsigned char) arr_2 [i_0] [i_1]);
                    arr_14 [i_0] [i_1] [i_3] |= ((/* implicit */unsigned short) (-(((((/* implicit */int) arr_4 [i_3] [i_0] [i_3])) >> (((((/* implicit */int) (signed char)120)) - (101)))))));
                }
                for (unsigned short i_4 = 4; i_4 < 17; i_4 += 2) /* same iter space */
                {
                    var_24 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)1735)) <= (arr_2 [i_0] [i_0])))), (arr_3 [i_4 - 3] [i_4])))) ? (((/* implicit */int) max((arr_12 [i_0] [(unsigned short)12] [i_4 - 2] [i_4]), (((/* implicit */unsigned short) arr_16 [i_1] [i_1] [i_4 - 2] [i_4 - 3]))))) : (max((((((/* implicit */_Bool) arr_15 [i_4 + 3] [i_4 - 3] [i_4])) ? (((/* implicit */int) (unsigned char)215)) : (arr_2 [i_4] [i_0]))), (((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) arr_6 [19LL] [i_1])))))))));
                    var_25 = ((/* implicit */int) arr_4 [(unsigned short)19] [1LL] [i_1]);
                    var_26 ^= ((/* implicit */short) ((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)47294))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) != (arr_5 [i_0] [i_0] [i_0])))) : (((/* implicit */int) min((arr_0 [i_4]), (var_12)))))) >= (((/* implicit */int) arr_11 [(unsigned char)8] [i_1]))));
                    arr_17 [7] [i_0] [7] [i_4 + 4] = (-(((/* implicit */int) max((arr_8 [i_0] [i_4] [i_4 + 2]), (arr_8 [i_4] [i_1] [i_4 - 1])))));
                    var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */long long int) (unsigned char)87))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_4 - 4] [i_4 + 2] [i_4]))) : (((arr_5 [i_0] [i_4] [i_4]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1] [i_1]))))))) : (((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned char)81)) ? (((/* implicit */int) arr_16 [i_0] [i_1] [i_0] [i_0])) : (((/* implicit */int) var_2)))), (((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))))))));
                }
                var_28 -= ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_6 [i_0] [20LL])), (var_11)))) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))))), (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) - (arr_3 [i_0] [i_1])))));
            }
        } 
    } 
    var_29 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_13))));
}
