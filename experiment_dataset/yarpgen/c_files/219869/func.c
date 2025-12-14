/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219869
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
    var_18 = ((/* implicit */unsigned int) ((unsigned long long int) var_17));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_1]))) : (arr_2 [i_0] [i_0])))) && (((/* implicit */_Bool) (~(((/* implicit */int) (short)-25)))))));
                var_19 = (unsigned char)52;
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_12 [i_3] [i_3] = ((/* implicit */unsigned int) (_Bool)1);
                            arr_13 [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_2 [i_0] [i_2])))) ? (min((arr_2 [i_0] [i_2]), (arr_2 [i_0] [i_3]))) : (max((arr_2 [i_1] [i_2]), (arr_2 [i_2] [i_3])))));
                            /* LoopSeq 4 */
                            for (unsigned char i_4 = 0; i_4 < 19; i_4 += 2) 
                            {
                                var_20 = max((((/* implicit */short) (signed char)-95)), (min((arr_15 [i_3] [i_3] [i_2] [i_1] [i_3]), (arr_15 [i_3] [i_1] [i_2] [i_3] [i_4]))));
                                var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1] [i_1]))));
                            }
                            for (signed char i_5 = 0; i_5 < 19; i_5 += 3) 
                            {
                                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (unsigned char)203))));
                                var_23 = ((((/* implicit */_Bool) (short)-39)) ? (min((arr_11 [i_2] [i_3] [i_5]), (arr_11 [i_5] [i_3] [i_2]))) : ((-(arr_11 [i_3] [i_3] [i_3]))));
                            }
                            for (unsigned char i_6 = 0; i_6 < 19; i_6 += 4) 
                            {
                                var_24 = ((/* implicit */short) (~(arr_1 [i_2] [i_3])));
                                var_25 = ((/* implicit */short) max((min(((-(2031900484))), ((-(((/* implicit */int) (unsigned char)211)))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_3] [i_3])))))));
                                var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_4 [i_1] [i_2]), (((/* implicit */long long int) arr_21 [i_0] [i_1] [i_3] [i_2] [i_0] [i_6])))))));
                            }
                            for (short i_7 = 0; i_7 < 19; i_7 += 3) 
                            {
                                arr_24 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] &= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((((/* implicit */int) (short)-17)) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))))))) - ((+(((((/* implicit */_Bool) (unsigned char)142)) ? (var_7) : (((/* implicit */unsigned long long int) arr_4 [i_2] [i_7]))))))));
                                var_27 = max(((!(((/* implicit */_Bool) var_3)))), (((arr_18 [i_7] [i_3] [i_3] [i_2] [i_2] [i_0] [i_0]) >= (((/* implicit */unsigned long long int) arr_14 [i_3] [i_2] [i_0] [i_3])))));
                                arr_25 [(short)5] [i_3] [i_3] [i_1] [i_3] [i_0] [i_0] = ((/* implicit */unsigned char) ((max((arr_17 [i_3] [i_3] [i_3] [i_1]), (((/* implicit */unsigned long long int) (unsigned char)0)))) + (((/* implicit */unsigned long long int) (-(arr_1 [i_0] [i_3]))))));
                                arr_26 [i_3] [i_3] [i_3] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_15 [i_3] [i_3] [i_2] [i_1] [i_3])) ? (18446744073709551615ULL) : (11173319171851010330ULL))) << (((((/* implicit */int) (signed char)-82)) + (83))))))));
                                arr_27 [i_3] [i_1] [i_2] [i_3] = ((/* implicit */int) (unsigned char)52);
                            }
                        }
                    } 
                } 
                arr_28 [i_0] = ((/* implicit */unsigned int) arr_21 [i_1] [i_1] [i_0] [i_0] [i_0] [i_0]);
            }
        } 
    } 
}
