/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50742
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned int) min((max((((/* implicit */long long int) max((var_6), (((/* implicit */unsigned int) 405147187))))), (((long long int) (unsigned char)153)))), (((/* implicit */long long int) ((_Bool) min((var_12), (((/* implicit */unsigned long long int) (_Bool)0))))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            var_14 += ((/* implicit */_Bool) max((((long long int) arr_2 [(_Bool)0] [i_1] [i_1])), (((/* implicit */long long int) ((unsigned int) ((unsigned char) arr_1 [i_0] [i_0]))))));
            arr_4 [i_1] = ((/* implicit */unsigned long long int) ((_Bool) min((arr_3 [i_1] [i_1]), (max((arr_3 [i_1] [i_1]), (((/* implicit */int) (unsigned char)232)))))));
        }
        var_15 = ((/* implicit */_Bool) min((max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)26))), (((/* implicit */unsigned char) (_Bool)0))));
    }
    /* vectorizable */
    for (long long int i_2 = 2; i_2 < 21; i_2 += 1) 
    {
        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((long long int) arr_2 [(signed char)0] [i_2] [i_2])))));
        arr_7 [i_2] [19U] = ((/* implicit */int) ((_Bool) arr_1 [i_2 - 2] [i_2 + 3]));
        var_17 = ((/* implicit */int) ((unsigned int) var_9));
    }
    /* vectorizable */
    for (unsigned short i_3 = 1; i_3 < 24; i_3 += 1) 
    {
        arr_11 [i_3] [i_3] = ((/* implicit */signed char) ((int) var_10));
        var_18 = ((/* implicit */unsigned short) ((unsigned int) var_10));
        /* LoopSeq 1 */
        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 1) 
        {
            arr_16 [i_3] = ((/* implicit */_Bool) ((long long int) ((long long int) arr_3 [i_3] [i_4])));
            arr_17 [i_3] = ((/* implicit */unsigned int) ((long long int) (_Bool)1));
        }
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_7 = 1; i_7 < 24; i_7 += 1) 
                    {
                        var_19 = ((/* implicit */signed char) ((int) arr_3 [i_3] [i_7 - 1]));
                        arr_27 [i_3] [i_5] [i_6] [i_7] = ((/* implicit */long long int) ((short) var_7));
                    }
                    for (unsigned char i_8 = 0; i_8 < 25; i_8 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_9 = 3; i_9 < 21; i_9 += 1) /* same iter space */
                        {
                            arr_33 [i_3 - 1] [(unsigned short)6] [i_6] [i_8] [i_3] = ((/* implicit */_Bool) ((long long int) arr_21 [i_3] [i_5] [18LL] [i_9 - 1]));
                            arr_34 [i_3] [i_5] [i_8] [i_6] [15LL] [i_5] [i_3] = ((/* implicit */_Bool) ((long long int) (_Bool)0));
                        }
                        for (unsigned int i_10 = 3; i_10 < 21; i_10 += 1) /* same iter space */
                        {
                            var_20 -= ((unsigned char) var_11);
                            var_21 = ((/* implicit */_Bool) ((long long int) (_Bool)1));
                            arr_37 [i_3] [i_5] [i_6] [i_8] [i_8] [i_10] = ((/* implicit */unsigned short) ((long long int) ((_Bool) arr_13 [i_10 - 1] [i_6])));
                            arr_38 [i_10] [i_5] [i_3] = ((unsigned short) ((signed char) arr_10 [18LL]));
                            arr_39 [20] [i_3] [i_5] [i_5] [i_6] [i_8] [(unsigned short)24] = ((unsigned char) ((unsigned short) arr_31 [i_3]));
                        }
                        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                        {
                            arr_42 [(_Bool)1] [i_3] [15LL] [i_3] [15LL] = ((/* implicit */_Bool) ((short) var_12));
                            var_22 = ((/* implicit */int) ((long long int) arr_24 [i_3]));
                            var_23 -= ((/* implicit */int) ((unsigned short) arr_12 [i_3 - 1] [12LL] [i_11 - 1]));
                            arr_43 [i_3] [i_5] [i_6] [i_8] [i_11] [i_6] [24] = ((/* implicit */signed char) ((unsigned short) var_12));
                        }
                        var_24 *= ((/* implicit */unsigned char) ((unsigned long long int) arr_13 [i_3] [i_3]));
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 1) 
                    {
                        var_25 += ((/* implicit */signed char) ((int) arr_21 [(short)3] [i_3 + 1] [i_6] [2ULL]));
                        var_26 = ((/* implicit */long long int) ((unsigned short) (_Bool)1));
                    }
                    arr_46 [i_3] [i_5] [i_3] = ((_Bool) ((unsigned int) 4305545866216358731ULL));
                }
            } 
        } 
        arr_47 [i_3] = ((/* implicit */signed char) ((unsigned char) 14141198207493192889ULL));
    }
    var_27 = ((/* implicit */unsigned long long int) max((min((((/* implicit */signed char) var_11)), (((signed char) var_11)))), (((/* implicit */signed char) ((_Bool) ((signed char) var_11))))));
}
