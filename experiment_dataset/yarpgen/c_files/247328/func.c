/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247328
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
    var_12 = ((/* implicit */_Bool) (+(var_8)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    var_13 = ((/* implicit */short) (-(((/* implicit */int) arr_2 [i_0] [i_1] [i_2]))));
                    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((arr_3 [i_0] [i_0] [i_2]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) 2283443788U)) : (arr_3 [i_0] [i_0] [i_0])));
                    var_16 = ((/* implicit */_Bool) ((arr_3 [9U] [i_1] [i_2]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1] [i_2])))));
                    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_0] [i_1] [i_2] [i_2])) & (((/* implicit */int) arr_4 [i_0] [i_1] [(unsigned char)6] [i_1])))))));
                }
                arr_6 [i_0] [i_0] [1LL] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (short)511)), ((((-(arr_3 [(unsigned short)4] [6LL] [i_1]))) - (arr_3 [(unsigned short)12] [i_0] [i_1])))));
                arr_7 [(short)10] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((arr_5 [i_0] [i_1] [(_Bool)1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_2 [(unsigned short)12] [(unsigned short)12] [(signed char)2]), (arr_4 [13LL] [13LL] [13LL] [10LL]))))))))));
                arr_8 [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) min((((/* implicit */short) ((unsigned char) arr_5 [10ULL] [10ULL] [10ULL]))), (arr_2 [i_0] [i_0] [i_1]))))));
                var_18 *= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0] [i_1] [i_0] [i_1])) / (((/* implicit */int) arr_0 [i_0] [i_0]))))), (((arr_3 [i_0] [i_0] [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_0])))))));
            }
        } 
    } 
}
