/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30745
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
    var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) ((var_0) > (((((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */long long int) 1683611332)))) / (var_0))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0])) ^ (((/* implicit */int) arr_1 [i_3] [i_1]))))) ^ (min((((/* implicit */unsigned long long int) ((arr_8 [i_3] [i_1] [i_0]) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3] [i_0]))) : (var_5))))))))));
                        arr_14 [i_2] [(signed char)4] [i_3] [i_1] = ((signed char) max(((unsigned short)64152), ((unsigned short)49421)));
                        var_14 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)54)) || (((/* implicit */_Bool) arr_3 [5])))) ? (((134217727) >> (((/* implicit */int) var_2)))) : (((/* implicit */int) min((var_1), (var_9)))))))));
                        arr_15 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -134217733)) ? (-134217727) : (((/* implicit */int) arr_12 [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) arr_8 [i_0] [i_1] [i_0])), ((short)16784))))) : (arr_13 [i_3] [(signed char)3] [7] [(signed char)10] [(unsigned short)3] [i_0])))));
                        arr_16 [i_0] [i_1] [i_1] [i_1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)202)) ? (((/* implicit */int) ((unsigned short) arr_1 [(signed char)0] [i_2]))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_5)))))))));
                    }
                    for (signed char i_4 = 0; i_4 < 14; i_4 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned int) var_4);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 14; i_5 += 3) 
                        {
                            var_16 += ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [12])) == (((/* implicit */int) (short)16784))));
                            arr_22 [i_0] [i_0] [4U] [i_4] [i_5] [i_1] = ((/* implicit */short) ((unsigned short) ((((/* implicit */int) (unsigned short)1384)) - (1683611332))));
                        }
                        arr_23 [i_4] [i_1] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */long long int) arr_4 [(signed char)8] [i_1])) / (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                        arr_24 [i_1] [(_Bool)0] [i_2] [i_4] [i_4] = ((/* implicit */unsigned long long int) (unsigned char)54);
                    }
                    arr_25 [i_1] [i_1] = ((/* implicit */signed char) -1683611333);
                }
            } 
        } 
    } 
}
