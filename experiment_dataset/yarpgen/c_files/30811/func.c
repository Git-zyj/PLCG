/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30811
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned char) min((min((((var_11) - (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1 - 1] [i_0]))))), (((/* implicit */unsigned int) arr_0 [i_0])))), ((~(((((/* implicit */_Bool) arr_4 [(signed char)6] [12U])) ? (arr_3 [i_0] [i_1]) : (((/* implicit */unsigned int) var_4))))))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned long long int) var_15);
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 3; i_2 < 18; i_2 += 2) 
    {
        for (unsigned int i_3 = 0; i_3 < 20; i_3 += 4) 
        {
            {
                arr_13 [2ULL] [i_2] [i_2] = ((_Bool) (!(((/* implicit */_Bool) min((arr_3 [i_2] [(signed char)3]), (((/* implicit */unsigned int) arr_0 [i_2])))))));
                arr_14 [i_2] [i_2 + 2] [i_2] = ((/* implicit */unsigned char) (~(min((arr_2 [i_2 + 1]), (((/* implicit */long long int) arr_0 [i_2 + 2]))))));
                var_17 += ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)52405)), (var_13)))) ? (((((/* implicit */int) arr_4 [i_2] [i_3])) << (((((/* implicit */int) (unsigned short)26977)) - (26965))))) : (((/* implicit */int) var_8)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 21; i_4 += 3) 
    {
        for (short i_5 = 1; i_5 < 19; i_5 += 2) 
        {
            {
                var_18 ^= ((/* implicit */_Bool) (~(((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)16)), ((unsigned short)52380)))) + (((/* implicit */int) ((((/* implicit */int) (unsigned short)4267)) <= (((/* implicit */int) (unsigned short)13131)))))))));
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_5]))) + (max((((/* implicit */long long int) (unsigned char)39)), (2097024LL)))));
                var_20 = ((/* implicit */_Bool) ((signed char) (~(((((/* implicit */_Bool) var_2)) ? (arr_18 [i_5] [i_5]) : (((/* implicit */unsigned long long int) -4366860379336384984LL)))))));
                /* LoopSeq 2 */
                for (unsigned char i_6 = 0; i_6 < 21; i_6 += 2) 
                {
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_19 [i_5] [i_5])) >= (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) -398165662280959604LL)))) <= (-766123236134523457LL))))));
                    var_22 = ((/* implicit */long long int) (!((((!(((/* implicit */_Bool) var_2)))) && (var_6)))));
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 21; i_7 += 1) 
                    {
                        for (short i_8 = 0; i_8 < 21; i_8 += 3) 
                        {
                            {
                                arr_28 [i_4] [i_7] [i_5] [i_7] [i_5] [i_4] = ((/* implicit */unsigned short) min((((/* implicit */int) ((unsigned char) arr_16 [i_4]))), (min((((/* implicit */int) arr_22 [i_5 + 2] [i_5 + 2])), (2147483628)))));
                                var_23 |= ((/* implicit */long long int) ((((((/* implicit */int) arr_27 [i_5 + 1] [i_5] [2ULL] [i_5 - 1] [i_5 + 1] [i_5])) <= (((/* implicit */int) arr_27 [i_5] [i_5] [i_5] [i_5 - 1] [i_5 + 1] [i_5])))) ? (((unsigned int) arr_27 [i_5 + 2] [i_5] [4ULL] [i_5 - 1] [i_5 + 1] [i_8])) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_27 [i_5] [i_5] [i_5 + 1] [i_5 - 1] [i_5 + 1] [i_5 + 1]), (arr_27 [2U] [2U] [i_4] [i_5 - 1] [i_5 + 1] [i_8])))))));
                                var_24 = ((/* implicit */unsigned long long int) arr_26 [(signed char)2] [i_5]);
                                var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) arr_21 [i_5 + 1] [i_6] [i_7]))));
                            }
                        } 
                    } 
                }
                for (short i_9 = 0; i_9 < 21; i_9 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 0; i_10 < 21; i_10 += 1) 
                    {
                        for (int i_11 = 1; i_11 < 18; i_11 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 7957475064311080592LL)) || ((!(((/* implicit */_Bool) (unsigned short)52402))))));
                                var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) (!(arr_20 [i_11 - 1] [i_10] [(unsigned short)0] [i_4]))))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */short) min((min((((/* implicit */int) arr_25 [i_4] [i_4] [i_4] [i_5 + 1])), (var_4))), (((/* implicit */int) max(((unsigned short)28207), (((/* implicit */unsigned short) (short)-27337)))))));
                }
            }
        } 
    } 
}
