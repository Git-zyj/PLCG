/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37825
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
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_2 = 1; i_2 < 13; i_2 += 4) 
                {
                    arr_6 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0]);
                    var_15 = ((/* implicit */short) (-(((/* implicit */int) var_5))));
                }
                /* vectorizable */
                for (long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_8 [i_1]);
                    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) var_7))));
                }
                arr_10 [i_0] [i_1] = ((/* implicit */unsigned short) arr_5 [i_0]);
                /* LoopSeq 3 */
                for (long long int i_4 = 0; i_4 < 14; i_4 += 3) /* same iter space */
                {
                    var_17 &= ((/* implicit */short) var_8);
                    var_18 ^= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_3))) : (((/* implicit */long long int) ((/* implicit */int) min((var_2), (arr_0 [i_0]))))))), (((/* implicit */long long int) max((((/* implicit */int) arr_12 [i_4] [(_Bool)1] [i_4])), ((~(((/* implicit */int) var_2)))))))));
                    arr_13 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_14), (((/* implicit */unsigned long long int) arr_3 [i_1] [i_0] [i_0]))))) ? (((/* implicit */int) arr_12 [i_4] [i_0] [i_0])) : ((+(((/* implicit */int) arr_8 [i_0]))))))) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))));
                    var_19 += ((/* implicit */short) min((((/* implicit */unsigned short) arr_2 [i_0] [i_0] [i_0])), (var_13)));
                }
                for (long long int i_5 = 0; i_5 < 14; i_5 += 3) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [5ULL] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned short)39408))))) ? (min((max((var_7), (arr_11 [i_0] [i_1] [i_0] [i_5]))), (((/* implicit */long long int) arr_3 [i_0] [i_0] [i_0])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_0 [i_0])))))));
                    arr_17 [i_0] [i_0] [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((max((arr_7 [i_0] [i_1] [i_1] [i_0]), (arr_11 [i_0] [i_1] [i_0] [i_0]))), (((/* implicit */long long int) var_13)))))));
                }
                /* vectorizable */
                for (long long int i_6 = 0; i_6 < 14; i_6 += 3) /* same iter space */
                {
                    var_21 *= ((/* implicit */unsigned short) var_3);
                    var_22 = ((/* implicit */short) arr_19 [i_0] [i_6]);
                    arr_20 [i_0] [11U] [i_6] [i_6] = ((((/* implicit */_Bool) arr_7 [i_6] [i_1] [i_6] [i_0])) ? (arr_7 [i_0] [i_1] [i_6] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))));
                }
                var_23 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_18 [i_0] [i_1])) ^ (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) arr_12 [i_0] [i_0] [(short)7]))))), (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)248))) : (arr_4 [i_1])))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(min((var_8), (((/* implicit */long long int) var_5))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)6), (var_4))))) : (max((((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) var_4))))));
}
