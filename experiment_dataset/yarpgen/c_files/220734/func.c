/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220734
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned int) arr_2 [i_0]);
                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) arr_2 [i_0]))) ? (arr_3 [i_0] [i_1] [(unsigned short)1]) : (max((arr_3 [i_0] [i_1] [i_1]), (((/* implicit */long long int) arr_1 [i_1])))))))));
                arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [(signed char)3])) + (((/* implicit */int) (signed char)-113))))) ? (((((/* implicit */_Bool) arr_2 [i_1])) ? (2810384093U) : (2810384086U))) : (1484583202U)))) ? (((arr_0 [i_0]) ^ (arr_0 [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1]))))))));
                arr_5 [i_0] = min((((/* implicit */long long int) arr_0 [i_1])), (max((arr_3 [i_0] [i_0] [i_0]), (((/* implicit */long long int) arr_2 [i_1])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 1; i_2 < 18; i_2 += 1) 
    {
        for (signed char i_3 = 1; i_3 < 17; i_3 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_4 = 1; i_4 < 18; i_4 += 3) 
                {
                    for (signed char i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (~(arr_14 [i_5] [(signed char)12] [i_3 + 2] [7LL]))))));
                            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((((/* implicit */int) ((signed char) ((signed char) arr_8 [i_2 - 1])))) + (2147483647))) >> (((((/* implicit */long long int) min((((/* implicit */int) arr_9 [i_2] [i_3 + 2])), (arr_10 [i_3] [i_5])))) / (((((/* implicit */_Bool) arr_10 [3U] [(_Bool)1])) ? (arr_6 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_5]))))))))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned char) arr_8 [i_3 + 1]);
                var_25 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_2])) ? (arr_10 [i_2 + 1] [i_3 + 2]) : (((/* implicit */int) arr_12 [i_2 - 1] [16LL]))));
                /* LoopSeq 2 */
                for (signed char i_6 = 0; i_6 < 20; i_6 += 3) 
                {
                    var_26 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (+(((/* implicit */int) (signed char)106))))), ((~(arr_6 [i_2 + 1])))));
                    arr_19 [i_3] [i_3] = ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */_Bool) (~(arr_15 [i_3])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [(unsigned short)2] [i_6])) ? (var_0) : (((/* implicit */int) arr_8 [i_3 + 2])))))))), (((((/* implicit */int) arr_9 [i_2 + 2] [6])) / (((/* implicit */int) ((unsigned char) arr_9 [8LL] [i_6])))))));
                }
                for (short i_7 = 0; i_7 < 20; i_7 += 3) 
                {
                    var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_16 [i_2] [i_2] [i_3] [10U]), (arr_13 [(_Bool)1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_3 - 1] [i_3 - 1] [i_3 + 3] [10LL]))))) : (((((/* implicit */int) min(((signed char)44), ((signed char)15)))) | ((~(((/* implicit */int) (unsigned short)27675)))))))))));
                    arr_22 [i_7] [i_7] [i_7] [i_3] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_2] [i_3] [i_3])) ? (((/* implicit */int) arr_13 [i_3])) : (((/* implicit */int) arr_20 [i_3]))))), (1484583205U)));
                    var_28 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(257037816U)))) ? (((/* implicit */int) ((_Bool) (unsigned short)35851))) : (((/* implicit */int) (signed char)101))))) ? (max((arr_11 [(unsigned char)15] [i_3 + 1] [i_3]), (((((/* implicit */_Bool) arr_15 [(unsigned short)6])) ? (((/* implicit */int) arr_16 [i_2] [i_3] [(signed char)18] [0U])) : (arr_10 [i_2 + 2] [i_2 + 2]))))) : (((/* implicit */int) (!(((((/* implicit */int) arr_17 [i_2] [i_3 + 3] [(unsigned short)12] [0U])) >= (((/* implicit */int) arr_17 [i_3] [i_3 + 1] [(unsigned char)6] [i_3 - 1])))))))));
                }
            }
        } 
    } 
    var_29 = ((/* implicit */signed char) var_14);
}
