/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36195
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
    var_16 = ((/* implicit */int) var_13);
    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (+((-(((/* implicit */int) var_4)))))))));
    var_18 -= ((/* implicit */unsigned short) min((((/* implicit */long long int) var_15)), ((-((~(var_9)))))));
    var_19 = ((/* implicit */_Bool) var_11);
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_20 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-27790)))))) : (arr_3 [i_0] [i_0] [i_0])))) ? (var_14) : (((/* implicit */unsigned int) (+(2147483647))))));
                var_21 = ((/* implicit */unsigned short) arr_5 [i_1] [i_1]);
                arr_6 [i_0 - 1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)12551))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-12551))) : (657387419U)))) ? ((+(((/* implicit */int) var_15)))) : (((/* implicit */int) (short)-12552))))) : (((unsigned long long int) (!(arr_1 [i_0 - 2] [i_0 - 2]))))));
                arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_2 [i_0] [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_1] [i_0 - 1])) : (((/* implicit */int) arr_2 [(unsigned char)8] [i_0 - 1])))) ^ (((((/* implicit */_Bool) (short)-12551)) ? (((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_2 [i_1] [i_0 + 1]))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned char i_4 = 2; i_4 < 18; i_4 += 3) /* same iter space */
                            {
                                var_22 = ((/* implicit */int) var_12);
                                var_23 -= ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8)))))))) ? (((((/* implicit */_Bool) arr_17 [16LL] [i_1] [i_2] [(unsigned char)4] [i_2])) ? (((/* implicit */int) arr_17 [0U] [12LL] [i_2] [i_3] [i_0])) : (((/* implicit */int) arr_17 [i_0 + 1] [i_0] [i_0 - 2] [i_0 - 2] [i_2])))) : (((/* implicit */int) var_15))));
                            }
                            for (unsigned char i_5 = 2; i_5 < 18; i_5 += 3) /* same iter space */
                            {
                                var_24 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (~(((/* implicit */int) (short)-12560))))) ? (((/* implicit */int) arr_14 [i_0] [(_Bool)1] [i_2] [i_0] [i_5] [(_Bool)1])) : ((+(((/* implicit */int) (unsigned short)24467)))))) * ((+(((int) var_15))))));
                                var_25 = ((/* implicit */signed char) (((-(((/* implicit */int) arr_4 [i_0])))) | (var_10)));
                                var_26 = arr_14 [i_0 + 1] [i_0 + 1] [i_2] [i_0 + 1] [i_5] [i_3];
                                var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_20 [i_0] [i_1] [i_2] [14U] [i_5] [i_2]))))) ? ((~(var_14))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))))))));
                            }
                            for (unsigned char i_6 = 2; i_6 < 18; i_6 += 3) /* same iter space */
                            {
                                var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1734305667986703824LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12545))) : (var_3)));
                                arr_23 [i_0] [i_0] [i_2] [i_1] [i_6] = ((/* implicit */unsigned long long int) var_4);
                                var_29 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_12 [i_0 - 2] [i_2] [i_6 - 2] [i_3])) || (((/* implicit */_Bool) var_11)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2] [i_1] [i_0]))) : (((unsigned long long int) arr_11 [i_6 - 1] [i_1] [i_0 - 1]))));
                                arr_24 [i_6] [i_1] [i_1] [i_1] [i_0 + 1] = ((/* implicit */unsigned long long int) arr_17 [i_0] [i_1] [i_2] [i_3] [i_1]);
                            }
                            var_30 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) (short)-12551)) ? (3454401856018399589ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24467))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) ? (((/* implicit */int) (signed char)92)) : ((-(((/* implicit */int) (unsigned short)41073))))));
                            var_31 = arr_20 [i_0 - 1] [i_1] [i_2] [17U] [i_3] [i_1];
                            arr_25 [i_0] [i_1] [(short)14] [i_3] [i_1] [i_3] = ((/* implicit */short) min(((-(((/* implicit */int) var_2)))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_3) : (((/* implicit */unsigned long long int) var_12))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
