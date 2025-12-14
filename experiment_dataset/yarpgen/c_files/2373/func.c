/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2373
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
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) (!((_Bool)1)))), (-4158888327472324790LL)))) ? (var_5) : (((/* implicit */int) var_7))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((min((-5965258070214382350LL), (((/* implicit */long long int) (unsigned char)133)))) ^ (((/* implicit */long long int) arr_3 [i_0] [i_1])))))));
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) /* same iter space */
                {
                    var_14 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)227)) * (((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_2]))))) - (var_11)));
                    var_15 = ((/* implicit */signed char) (~((((!(((/* implicit */_Bool) (unsigned short)17611)))) ? (((/* implicit */int) (_Bool)0)) : (max((((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [i_2])), (var_6)))))));
                    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) max((max(((unsigned short)2217), (((/* implicit */unsigned short) (_Bool)1)))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)22521))))))))));
                    var_17 = arr_1 [i_0];
                }
                /* vectorizable */
                for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) /* same iter space */
                {
                    arr_12 [i_3] [i_0] [i_3] [i_3] = ((/* implicit */long long int) ((unsigned short) 3135898206U));
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)236)) ? (((/* implicit */unsigned long long int) var_6)) : (arr_2 [i_0])))) ? (((/* implicit */int) arr_0 [i_0])) : (var_6)));
                    var_19 = ((/* implicit */unsigned int) (_Bool)1);
                    arr_13 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_3 [i_0] [i_0]);
                }
                /* vectorizable */
                for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 1) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned int) ((arr_15 [i_0] [i_1] [i_4]) / (arr_15 [10LL] [i_1] [i_4])));
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
                    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_4])) ? (((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [i_0] [i_4])) : (arr_2 [i_1])));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 1; i_5 < 10; i_5 += 3) 
    {
        for (int i_6 = 0; i_6 < 12; i_6 += 1) 
        {
            {
                arr_21 [i_6] = ((/* implicit */long long int) min((((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_17 [i_5]))))))), (max((var_8), (((/* implicit */unsigned int) (-(414202741))))))));
                arr_22 [i_5 - 1] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_11 [i_6] [(short)6] [i_6]))))))) : (min((arr_7 [(unsigned char)5] [i_6] [i_5 + 2] [i_5]), (arr_7 [i_6] [i_6] [i_5 + 2] [2])))));
            }
        } 
    } 
    var_23 ^= ((/* implicit */long long int) var_8);
    var_24 = ((/* implicit */unsigned char) var_8);
}
