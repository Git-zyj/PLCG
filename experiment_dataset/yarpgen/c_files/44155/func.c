/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44155
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned int) var_19);
                arr_5 [i_1] [i_0] [(short)10] = ((/* implicit */signed char) min((arr_2 [i_0] [i_1]), (((short) arr_2 [i_0] [i_1]))));
                arr_6 [i_1] = ((/* implicit */unsigned int) max(((~(((/* implicit */int) var_18)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_18)))))));
                /* LoopNest 2 */
                for (long long int i_2 = 3; i_2 < 18; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        {
                            arr_13 [i_2] = ((/* implicit */short) min((arr_7 [i_2] [(unsigned short)7] [i_2] [(unsigned short)7]), (((/* implicit */long long int) (((~(var_4))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))))))));
                            arr_14 [i_0] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0] [i_1])) % (((/* implicit */int) arr_3 [10]))));
                            /* LoopSeq 3 */
                            for (long long int i_4 = 0; i_4 < 19; i_4 += 1) 
                            {
                                arr_18 [i_2] [i_0] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_2] [i_1] [i_3] [i_4])) ? ((~(3336784250543322718LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_3)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_15 [i_0] [i_2] [i_3] [i_3])))) : (((unsigned int) arr_0 [i_0])))))));
                                arr_19 [i_2] = ((/* implicit */int) var_15);
                                var_20 = ((/* implicit */unsigned int) (+((((!(((/* implicit */_Bool) arr_7 [i_2] [i_2 - 2] [i_2 - 2] [i_2])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_3] [i_4]))))) : (((/* implicit */int) arr_1 [i_4]))))));
                                arr_20 [i_0] [i_2] [6U] [6U] [i_2] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */short) (!(((/* implicit */_Bool) arr_10 [i_1] [i_2 - 1] [i_1] [i_2 + 1] [i_0] [i_1]))))), (arr_16 [i_0] [i_2] [i_1] [i_2] [i_3] [i_4])));
                            }
                            /* vectorizable */
                            for (unsigned int i_5 = 1; i_5 < 15; i_5 += 2) /* same iter space */
                            {
                                arr_24 [i_5] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) arr_1 [i_2]);
                                arr_25 [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_4) | (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_5])))))) ? (((/* implicit */int) arr_9 [i_2 + 1] [i_5 - 1])) : (((/* implicit */int) var_8))));
                                arr_26 [i_2] [i_1] = ((/* implicit */unsigned short) arr_12 [i_5 + 4] [i_1] [i_2] [10U] [i_1] [i_3]);
                            }
                            /* vectorizable */
                            for (unsigned int i_6 = 1; i_6 < 15; i_6 += 2) /* same iter space */
                            {
                                var_21 *= ((/* implicit */short) ((((/* implicit */int) arr_29 [i_2 - 3] [i_2 + 1] [i_2 - 1] [i_0] [i_6 + 2] [i_6 + 4] [i_6 + 4])) >> (((1028588674U) - (1028588659U)))));
                                var_22 -= ((/* implicit */unsigned int) (+(arr_7 [i_1] [i_2 - 2] [i_2 - 1] [i_2 - 3])));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) var_18);
}
