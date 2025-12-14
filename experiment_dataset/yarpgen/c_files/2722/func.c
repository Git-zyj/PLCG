/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2722
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_20 &= ((/* implicit */signed char) arr_1 [i_0]);
        var_21 = ((/* implicit */unsigned char) (~((+(min((var_7), (((/* implicit */long long int) var_13))))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_22 += ((/* implicit */short) (~(arr_0 [i_1] [i_1])));
        var_23 = ((/* implicit */unsigned char) (~(((arr_3 [i_1] [i_1]) + (((/* implicit */unsigned long long int) arr_0 [(unsigned short)20] [i_1]))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            var_24 ^= ((/* implicit */unsigned int) ((arr_2 [i_2]) == (((/* implicit */long long int) arr_7 [i_1] [i_1]))));
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                for (short i_4 = 1; i_4 < 8; i_4 += 3) 
                {
                    {
                        var_25 |= ((/* implicit */short) (+(((/* implicit */int) (!((_Bool)1))))));
                        var_26 = ((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_1] [i_4 + 1]))));
                        var_27 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)9903)) ? (((/* implicit */int) (unsigned short)1449)) : (((/* implicit */int) (unsigned short)9903))));
                    }
                } 
            } 
        }
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        var_28 = ((/* implicit */unsigned char) (+((-(((/* implicit */int) (unsigned short)38866))))));
        var_29 = ((/* implicit */signed char) (-(((/* implicit */int) arr_15 [i_5]))));
        var_30 = ((/* implicit */_Bool) (-(min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_5] [i_5])) ? (arr_12 [i_5]) : (((/* implicit */unsigned int) arr_7 [i_5] [i_5]))))), (min((arr_2 [i_5]), (((/* implicit */long long int) arr_11 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))))))));
        var_31 += ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_5])))))) * (((((/* implicit */_Bool) max((((/* implicit */int) arr_6 [i_5] [i_5])), (arr_10 [i_5] [i_5] [i_5])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_5]))) : (min((((/* implicit */long long int) 4266780369U)), (arr_1 [i_5])))))));
    }
}
