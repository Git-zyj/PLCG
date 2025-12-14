/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235632
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
    var_16 = ((/* implicit */unsigned long long int) var_13);
    var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((min((((/* implicit */long long int) var_6)), ((-9223372036854775807LL - 1LL)))) >= (((/* implicit */long long int) ((/* implicit */int) var_1))))))));
    var_18 *= ((/* implicit */unsigned short) var_4);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                arr_5 [i_0 + 2] [i_0] = ((/* implicit */unsigned char) arr_3 [(unsigned short)0]);
                /* LoopSeq 2 */
                for (int i_2 = 2; i_2 < 12; i_2 += 1) 
                {
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) (unsigned short)10234)))))) && (((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)42386)))))))));
                    arr_8 [i_2] [1] [i_0] = ((/* implicit */long long int) -606755983);
                }
                for (unsigned short i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_1] [i_0]))));
                    var_21 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [2ULL] [i_0 + 1])) ? (((/* implicit */int) (unsigned short)55291)) : (((/* implicit */int) arr_12 [i_0 + 1] [i_3] [(short)7] [i_3]))))) ? (((long long int) arr_7 [i_0 - 2] [i_0 - 2] [10LL] [10LL])) : (((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_0 - 1] [i_1] [i_3] [i_3]))))))), (((/* implicit */long long int) min((606755982), (((/* implicit */int) arr_9 [(signed char)12] [i_1] [i_3])))))));
                    arr_13 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_0]))))) && (((/* implicit */_Bool) max((((/* implicit */int) arr_7 [i_3] [5LL] [i_3] [i_3])), (((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) (_Bool)1)))))))));
                }
                var_22 -= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) ((long long int) 606755983))) && (((((/* implicit */int) var_6)) >= (((/* implicit */int) arr_6 [(short)2]))))))) >= (((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_7 [i_0] [i_1] [i_0 + 1] [10ULL])), (arr_10 [i_1] [i_0])))) ? (((/* implicit */int) ((signed char) arr_9 [i_1] [i_0 - 1] [i_0]))) : (((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
}
