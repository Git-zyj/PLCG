/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218587
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned int) (unsigned short)0);
                            /* LoopSeq 4 */
                            /* vectorizable */
                            for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 4) 
                            {
                                var_13 = ((/* implicit */int) arr_5 [i_2]);
                                var_14 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)-3750)))))));
                                arr_10 [i_2] [i_1] [0ULL] [1] [i_1] [i_3] [13ULL] = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)-101))));
                            }
                            for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 2) /* same iter space */
                            {
                                var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) max((var_3), (arr_13 [i_0] [i_1] [i_1] [i_2] [i_3] [i_5]))))));
                                var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)39043))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)3743)))))) : (min((((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_1] [i_2] [i_3] [i_5])), (18446744073709551609ULL)))))) ? ((-(var_11))) : (((/* implicit */unsigned long long int) (~(arr_6 [i_2] [10LL] [i_2] [i_5])))));
                                arr_15 [i_2] [i_1] [i_2] [(unsigned short)7] [i_5] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((arr_6 [i_2] [i_1] [i_1] [(signed char)1]) << (((((/* implicit */int) ((unsigned char) (unsigned short)65533))) - (253)))))) <= (max((((unsigned long long int) arr_14 [i_1] [i_3])), (((/* implicit */unsigned long long int) (unsigned short)0))))));
                                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) var_4))));
                            }
                            for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 2) /* same iter space */
                            {
                                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (~(arr_17 [(unsigned short)0] [(unsigned short)0] [i_2] [i_1] [10]))))));
                                var_19 = ((/* implicit */unsigned short) 11091680139540475087ULL);
                                var_20 = ((/* implicit */long long int) arr_1 [i_0]);
                                var_21 &= (+(((/* implicit */int) var_4)));
                                arr_19 [i_2] [i_1] [i_2] [i_1] = ((/* implicit */short) max((((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_1] [i_3] [i_2])), ((-(min((var_11), (((/* implicit */unsigned long long int) var_6))))))));
                            }
                            for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 2) /* same iter space */
                            {
                                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)65525)), (var_9)))))))) + (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_2] [i_1] [i_1] [i_2]))) : (arr_13 [i_0] [i_2] [i_2] [i_0] [i_7] [i_2]))) | (((/* implicit */unsigned int) (~(arr_18 [i_0] [i_1] [4] [(signed char)10] [4ULL]))))))));
                                var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) max(((~(((/* implicit */int) ((_Bool) (unsigned short)65535))))), (((/* implicit */int) (short)-3744)))))));
                                var_24 = ((/* implicit */_Bool) arr_21 [i_0] [(_Bool)0] [i_1] [3ULL] [i_3] [i_3] [i_2]);
                                arr_22 [i_0] [i_2] = ((/* implicit */long long int) ((unsigned short) (!(((/* implicit */_Bool) var_5)))));
                            }
                        }
                    } 
                } 
                arr_23 [i_0] = ((/* implicit */signed char) min((16938450648051771684ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (arr_7 [i_1] [i_1] [i_1] [i_0]) : (arr_7 [i_0] [i_0] [i_0] [i_0]))))));
                var_25 *= ((/* implicit */unsigned char) min((((/* implicit */int) ((_Bool) arr_11 [i_0] [i_0] [11] [i_1] [(signed char)13] [i_1]))), (((((/* implicit */_Bool) ((((((/* implicit */int) (short)-3747)) + (2147483647))) >> (((-775591505) + (775591512)))))) ? (arr_17 [i_0] [i_0] [i_1] [i_1] [i_1]) : (((((/* implicit */_Bool) -642122068)) ? (((/* implicit */int) (short)-3719)) : (((/* implicit */int) (unsigned char)15))))))));
                var_26 = ((/* implicit */unsigned short) ((arr_21 [i_0] [i_1] [i_0] [i_0] [i_1] [i_1] [i_1]) ^ (var_9)));
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned long long int) var_9);
    var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) (~((~(var_3))))))));
    var_29 = ((/* implicit */int) var_7);
}
