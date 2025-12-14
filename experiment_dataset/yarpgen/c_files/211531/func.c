/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211531
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
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            arr_4 [i_0] [0] [0] = ((/* implicit */long long int) -446586243);
            var_19 = ((/* implicit */signed char) (-(((/* implicit */int) arr_1 [i_0 - 1] [i_1]))));
            arr_5 [i_0 - 3] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)42)) ^ (((/* implicit */int) (unsigned short)39347))));
        }
        for (short i_2 = 1; i_2 < 12; i_2 += 3) /* same iter space */
        {
            var_20 = ((/* implicit */signed char) ((arr_2 [i_2 + 1] [i_0 + 2]) ? ((-(((/* implicit */int) var_7)))) : ((~(((/* implicit */int) arr_2 [i_2] [i_2]))))));
            var_21 = ((/* implicit */signed char) (-9223372036854775807LL - 1LL));
        }
        for (short i_3 = 1; i_3 < 12; i_3 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (signed char i_5 = 0; i_5 < 13; i_5 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_6 = 0; i_6 < 13; i_6 += 3) /* same iter space */
                        {
                            var_22 += ((/* implicit */signed char) arr_1 [i_4] [i_4]);
                            var_23 = ((/* implicit */unsigned short) ((int) -9223372036854775780LL));
                            arr_20 [(unsigned short)7] [i_3] [i_3] [i_5] [i_6] = ((/* implicit */unsigned long long int) arr_13 [i_0] [(signed char)2]);
                            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) (!((_Bool)1))))));
                        }
                        for (short i_7 = 0; i_7 < 13; i_7 += 3) /* same iter space */
                        {
                            arr_23 [i_4] [i_4] [i_0] [i_4] [i_4] = ((/* implicit */short) ((long long int) (short)30125));
                            var_25 = ((/* implicit */long long int) (_Bool)1);
                        }
                        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) -4115498902364737519LL))));
                        arr_24 [i_0] [i_0] [i_0 - 3] [i_0 - 3] = ((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0]))));
                        var_27 = var_13;
                    }
                } 
            } 
            var_28 = ((/* implicit */signed char) (((_Bool)1) ? (279223176896970752LL) : (((6643027000850548974LL) + (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_3 + 1] [i_3] [i_3 + 1])))))));
        }
        arr_25 [(short)8] [(short)8] = ((/* implicit */_Bool) ((arr_16 [i_0 + 1] [i_0] [i_0 - 2] [i_0] [i_0] [i_0] [i_0]) + (((/* implicit */int) (short)21850))));
        arr_26 [i_0] [(short)5] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)48328)) ? (2147483136) : (((/* implicit */int) arr_22 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0])))) << (((((/* implicit */int) arr_17 [i_0 - 2] [i_0 - 2] [i_0 + 2])) - (1)))));
        var_29 = ((/* implicit */long long int) arr_9 [i_0 - 1] [i_0 - 1] [i_0]);
    }
    var_30 = var_9;
}
