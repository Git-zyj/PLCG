/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202390
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
    var_20 -= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_15)), (((unsigned long long int) (unsigned short)14056))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0 + 2])) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) arr_3 [(unsigned short)12] [i_0] [i_0 + 2])))));
                arr_5 [i_0] [i_0 + 1] [i_1] = ((/* implicit */int) (short)30859);
                /* LoopSeq 2 */
                for (unsigned char i_2 = 2; i_2 < 23; i_2 += 3) /* same iter space */
                {
                    var_21 = ((/* implicit */short) arr_6 [i_0 - 1] [i_0] [i_2 - 2]);
                    var_22 *= ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_7 [i_0 + 1] [(signed char)8] [i_0 + 2])) ? (((/* implicit */int) arr_7 [i_0 + 1] [(short)4] [(short)24])) : (((/* implicit */int) arr_7 [i_0 + 2] [(signed char)12] [(signed char)8])))), (((((/* implicit */int) arr_7 [i_0 + 2] [(signed char)16] [i_0])) % (((/* implicit */int) arr_7 [i_0 - 1] [24] [i_0]))))));
                    arr_8 [i_0] [(short)4] [i_0 + 3] [i_0] &= ((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_7 [i_2 - 1] [(unsigned short)22] [i_0 + 1])) < (((/* implicit */int) (unsigned char)116)))));
                    arr_9 [i_0 + 1] [i_0] [i_0 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_1 [i_0 + 2]))) ? (min((arr_1 [i_0 - 1]), (arr_1 [i_0 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 + 2])) || (((/* implicit */_Bool) arr_1 [i_0 + 3]))))))));
                }
                /* vectorizable */
                for (unsigned char i_3 = 2; i_3 < 23; i_3 += 3) /* same iter space */
                {
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) arr_7 [i_0 + 1] [i_0] [i_3 - 1])) : (((/* implicit */int) ((short) (signed char)-47)))));
                    arr_12 [i_0] [i_0 + 1] [i_0] = ((/* implicit */unsigned char) ((signed char) (_Bool)1));
                    arr_13 [i_3] [i_0] [i_0] = ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0]));
                    arr_14 [i_0] [(unsigned short)15] [i_1] [i_0] = ((/* implicit */short) (unsigned short)60202);
                    arr_15 [i_0] [i_0] = ((/* implicit */short) arr_6 [i_0 + 1] [i_0] [i_3]);
                }
            }
        } 
    } 
    var_24 |= ((/* implicit */signed char) var_17);
    var_25 = max((((((/* implicit */_Bool) ((short) (_Bool)1))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (max((((/* implicit */long long int) 449230712U)), (-4177447419154455393LL))))), (((/* implicit */long long int) var_0)));
}
