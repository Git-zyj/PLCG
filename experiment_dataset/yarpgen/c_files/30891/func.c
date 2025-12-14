/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30891
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
    var_13 = ((/* implicit */long long int) var_12);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            arr_13 [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) var_9);
                            arr_14 [i_2] [5ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (4294967284U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-9)))));
                            /* LoopSeq 3 */
                            for (unsigned char i_4 = 2; i_4 < 16; i_4 += 1) 
                            {
                                arr_18 [i_2] = ((/* implicit */_Bool) (+((+(((var_0) * (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
                                arr_19 [16LL] [i_2] [i_2] [i_0] = ((/* implicit */unsigned long long int) min(((+((-(var_0))))), (((/* implicit */long long int) arr_5 [i_4 + 1] [i_4 - 1] [i_4 + 1]))));
                            }
                            /* vectorizable */
                            for (long long int i_5 = 0; i_5 < 17; i_5 += 2) 
                            {
                                arr_23 [i_2] [i_1] [i_1] [i_1] [i_1] [i_2] = ((/* implicit */long long int) var_6);
                                arr_24 [i_2] [i_2] = ((/* implicit */_Bool) var_5);
                                arr_25 [i_0] [13U] [8LL] [8LL] [i_3] [i_2] = ((/* implicit */_Bool) arr_11 [14U] [i_2] [i_3]);
                                arr_26 [i_2] [i_2] [i_2] [i_2] [i_5] [i_3] [9LL] = ((/* implicit */unsigned int) ((12U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0])))));
                            }
                            for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 4) 
                            {
                                arr_29 [i_0] [i_3] [i_0] [i_3] = ((/* implicit */short) min(((-(arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */long long int) (~(((/* implicit */int) ((unsigned char) arr_28 [i_0] [i_0] [i_0] [i_2] [i_2] [(signed char)10] [i_6]))))))));
                                arr_30 [i_2] = ((/* implicit */_Bool) (-(((/* implicit */int) var_5))));
                            }
                            arr_31 [i_0] [i_1] [i_1] [4U] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */unsigned int) var_8)) < (arr_5 [(_Bool)1] [(_Bool)1] [(_Bool)1]))))));
                        }
                    } 
                } 
                arr_32 [i_0] [i_0] [i_0] = ((/* implicit */int) var_11);
            }
        } 
    } 
    var_14 = ((/* implicit */int) 8U);
    var_15 = ((/* implicit */unsigned long long int) (_Bool)1);
}
