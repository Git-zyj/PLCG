/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40108
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
    var_13 = var_9;
    var_14 = ((/* implicit */short) var_12);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_3] [i_1])) : (((/* implicit */int) var_10)))) % (((/* implicit */int) arr_2 [i_2] [(unsigned short)5])))) << (((((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_6 [i_0 + 1] [(unsigned short)17] [i_0 - 1] [i_0 - 1] [i_0 + 1])) : (((/* implicit */int) arr_6 [i_0 - 1] [i_0] [i_0 + 1] [i_0 - 1] [i_0 - 1])))) - (33838)))));
                                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4 - 1] [i_4 - 3] [i_4 - 3] [i_4 - 1] [i_4 - 3])) ? (((/* implicit */int) arr_11 [i_4 - 2] [i_4 + 1] [17ULL] [i_4 - 2] [i_4 - 2])) : (((/* implicit */int) arr_11 [i_4 - 1] [i_4 - 1] [i_4] [i_4] [i_4]))))) ? (((arr_0 [i_4 - 1]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))))) : (((/* implicit */unsigned int) (((~(((/* implicit */int) arr_2 [i_1] [i_1])))) | (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0 - 1] [i_0])) : (((/* implicit */int) arr_12 [10ULL] [(unsigned char)5] [6ULL] [i_1] [i_0])))))))));
                            }
                        } 
                    } 
                } 
                arr_13 [(signed char)19] [i_1] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) var_10)) / ((-(((/* implicit */int) arr_1 [i_0])))))));
                arr_14 [i_1] [i_1] = ((/* implicit */unsigned short) var_2);
                var_17 += ((((/* implicit */_Bool) ((unsigned int) arr_9 [i_0 - 1]))) ? (((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (arr_10 [i_0 - 1] [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : ((+(arr_10 [i_0 + 1] [i_0 + 1]))));
                arr_15 [i_1] = ((/* implicit */unsigned char) arr_4 [i_0]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 10; i_5 += 4) 
    {
        for (signed char i_6 = 0; i_6 < 10; i_6 += 4) 
        {
            {
                arr_21 [i_5] [i_5] [i_5] = ((/* implicit */signed char) arr_19 [i_6]);
                /* LoopNest 2 */
                for (signed char i_7 = 1; i_7 < 8; i_7 += 4) 
                {
                    for (unsigned char i_8 = 1; i_8 < 8; i_8 += 4) 
                    {
                        {
                            arr_29 [i_6] [4LL] [i_6] [i_7] = ((/* implicit */unsigned int) ((signed char) (-(((/* implicit */int) arr_23 [i_5] [i_5] [i_7] [i_7])))));
                            arr_30 [7ULL] [i_7] [i_7] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_12 [i_5] [i_5] [i_5] [i_5] [i_5]))));
                        }
                    } 
                } 
            }
        } 
    } 
}
