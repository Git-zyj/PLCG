/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194792
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
    var_16 = ((/* implicit */short) (((-(((/* implicit */int) (short)8192)))) < (((/* implicit */int) (short)-11))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_17 *= ((/* implicit */unsigned int) arr_3 [i_0 + 1] [i_3] [(unsigned char)5]);
                                arr_12 [i_0 - 2] [i_1] [i_2] [i_3] [i_4 + 2] = ((/* implicit */short) (-(((/* implicit */int) arr_2 [i_0 - 1] [i_0 + 1]))));
                                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) min((arr_10 [i_1] [i_1] [i_2] [i_0 + 1] [i_4 + 1]), (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_4 - 2] [i_4 + 2])) & (((/* implicit */int) arr_2 [i_4 + 1] [i_4 + 2]))))))))));
                            }
                        } 
                    } 
                } 
                var_19 -= ((/* implicit */unsigned int) arr_6 [i_0 - 2] [11ULL] [11ULL]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 23; i_5 += 1) 
    {
        for (long long int i_6 = 0; i_6 < 23; i_6 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_7 = 2; i_7 < 22; i_7 += 2) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            arr_26 [i_5] [i_6] [i_6] [i_7 + 1] [i_7 - 1] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_24 [i_5] [i_6]), (((/* implicit */unsigned int) arr_21 [i_5] [i_6] [i_7 - 2] [i_8]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_7 + 1] [i_5] [i_7 - 1] [i_7 - 1]))) : (min((((-8266962133417789936LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_0))))), (((/* implicit */long long int) (short)10985))))));
                            arr_27 [i_8] [i_8] [i_5] [(_Bool)1] = ((/* implicit */_Bool) max(((-(((((/* implicit */_Bool) (signed char)-114)) ? (-8266962133417789941LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-8848))))))), (((/* implicit */long long int) min((((/* implicit */unsigned short) ((signed char) -8266962133417789930LL))), (arr_13 [i_5] [i_5]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_9 = 1; i_9 < 22; i_9 += 1) 
                {
                    for (signed char i_10 = 0; i_10 < 23; i_10 += 2) 
                    {
                        {
                            var_20 += ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_29 [i_9 + 1] [i_9 - 1] [i_9 - 1] [i_9 + 1])))) < (((arr_29 [i_9 - 1] [i_9] [i_9 + 1] [i_9]) / (arr_29 [i_9 - 1] [i_9 + 1] [i_9 + 1] [i_9 + 1])))));
                            var_21 = ((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) var_3)))));
                            arr_34 [i_5] [i_5] [(unsigned char)19] [i_5] [(unsigned char)7] = ((/* implicit */int) 8266962133417789920LL);
                        }
                    } 
                } 
                arr_35 [i_5] = ((/* implicit */unsigned short) ((_Bool) min((1678773679U), (((/* implicit */unsigned int) arr_13 [i_5] [i_5])))));
                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [(short)10] [i_6])) ? (arr_24 [i_5] [i_5]) : (arr_24 [i_5] [i_6])))) ? (((long long int) arr_25 [i_5] [i_5] [i_5] [i_6] [i_6] [i_6])) : (((/* implicit */long long int) -930255575))))) ? (min((((/* implicit */unsigned int) var_4)), (arr_24 [i_5] [i_5]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_6] [i_6] [i_5])) || (((/* implicit */_Bool) arr_23 [i_5] [(unsigned short)10] [i_5]))))))));
            }
        } 
    } 
    var_23 ^= ((/* implicit */unsigned short) (((-(((/* implicit */int) ((((/* implicit */int) var_11)) >= (((/* implicit */int) var_9))))))) < (((/* implicit */int) (((-(((/* implicit */int) (short)12936)))) >= (1998776843))))));
}
