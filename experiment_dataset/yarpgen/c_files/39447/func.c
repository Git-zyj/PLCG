/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39447
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
    var_18 += ((/* implicit */unsigned char) var_0);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) max((var_19), (((unsigned char) arr_1 [i_0] [i_1]))));
                                var_20 = max((((unsigned char) (!(((/* implicit */_Bool) arr_6 [i_0] [i_3] [i_4]))))), (arr_12 [i_1 - 1] [(unsigned char)10] [i_1 - 1] [i_1 - 1] [(unsigned char)3] [i_3] [i_3]));
                                var_21 = ((/* implicit */unsigned char) min((1855046692849264088LL), (4323455642275676160LL)));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned char) min((var_22), (arr_11 [i_0] [i_1 + 1] [i_1] [i_0] [i_1 + 1] [i_2])));
                    var_23 = ((unsigned char) ((long long int) ((long long int) arr_12 [10LL] [i_0] [i_0] [i_0] [10LL] [10LL] [(unsigned char)1])));
                }
            } 
        } 
        var_24 = ((/* implicit */long long int) arr_8 [i_0] [i_0] [(unsigned char)2] [i_0]);
        var_25 = ((/* implicit */long long int) (unsigned char)102);
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 12; i_5 += 2) 
        {
            for (unsigned char i_6 = 0; i_6 < 12; i_6 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_7 = 0; i_7 < 12; i_7 += 1) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned char) min((var_26), (((unsigned char) ((unsigned char) ((unsigned char) (unsigned char)130))))));
                        /* LoopSeq 2 */
                        for (long long int i_8 = 0; i_8 < 12; i_8 += 3) 
                        {
                            var_27 = ((long long int) arr_1 [i_5] [i_6]);
                            var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) (~(((/* implicit */int) ((unsigned char) 9223372036854775807LL))))))));
                            var_29 = ((/* implicit */unsigned char) arr_17 [i_6] [i_7] [i_8]);
                        }
                        for (unsigned char i_9 = 2; i_9 < 10; i_9 += 1) 
                        {
                            var_30 = arr_12 [10LL] [i_9 - 2] [i_9 + 1] [i_9 + 2] [i_9] [(unsigned char)0] [i_9];
                            var_31 = arr_3 [i_0] [i_0] [i_9];
                            var_32 = ((/* implicit */unsigned char) (+((-9223372036854775807LL - 1LL))));
                            var_33 = ((/* implicit */long long int) ((unsigned char) 1604217008032753588LL));
                        }
                    }
                    for (long long int i_10 = 0; i_10 < 12; i_10 += 1) /* same iter space */
                    {
                        var_34 &= ((/* implicit */long long int) ((unsigned char) arr_18 [i_6] [i_10]));
                        var_35 = ((/* implicit */unsigned char) max((var_35), (((unsigned char) -4323455642275676161LL))));
                        var_36 = ((/* implicit */unsigned char) max((var_36), (((unsigned char) -5474446517078349326LL))));
                        var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) ((unsigned char) -1604217008032753592LL)))));
                        var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) ((unsigned char) max((((/* implicit */int) max(((unsigned char)238), ((unsigned char)103)))), ((+(((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_10]))))))))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_11 = 1; i_11 < 10; i_11 += 2) 
                    {
                        for (unsigned char i_12 = 0; i_12 < 12; i_12 += 2) 
                        {
                            {
                                var_39 = ((/* implicit */unsigned char) max((var_39), (arr_32 [5LL])));
                                var_40 |= ((/* implicit */unsigned char) min((((long long int) (+(arr_13 [i_6] [i_6])))), (max((arr_13 [i_5] [i_11]), (((/* implicit */long long int) ((unsigned char) arr_23 [i_5] [i_6] [i_11] [i_12])))))));
                                var_41 = arr_20 [i_0] [i_5] [i_0] [i_5] [i_0];
                            }
                        } 
                    } 
                    var_42 = ((/* implicit */unsigned char) min((9223372036854775807LL), (3538995431482549586LL)));
                    var_43 |= ((unsigned char) 11LL);
                }
            } 
        } 
    }
}
