/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246998
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
    var_12 = ((/* implicit */unsigned long long int) var_0);
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_13 ^= ((/* implicit */int) arr_1 [i_0] [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned char) var_7);
        arr_4 [i_0] = ((((/* implicit */_Bool) min((var_0), (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((long long int) arr_1 [i_0] [i_0])) : (((long long int) ((14866814822585798301ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)120)))))));
    }
    for (short i_1 = 2; i_1 < 24; i_1 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            for (unsigned int i_3 = 2; i_3 < 23; i_3 += 3) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_14 = ((/* implicit */unsigned short) arr_14 [i_4] [i_1] [i_3] [i_1] [i_1 + 1]);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            arr_17 [i_1] [i_2] [i_3] [i_3] [i_5] = ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_6 [i_1 - 1] [i_3 - 2])));
                            var_15 = ((/* implicit */unsigned char) ((arr_13 [i_1] [i_1 + 1] [19LL] [i_4] [i_5] [i_5]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [(short)9] [i_1 - 1] [i_4] [i_4] [i_5] [i_5]))) : (14866814822585798301ULL)));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            var_16 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (short)11648)) || (((/* implicit */_Bool) 14866814822585798301ULL))));
                            arr_21 [i_1] [i_1] [i_6] = ((/* implicit */unsigned long long int) arr_5 [i_1]);
                            arr_22 [i_1] [i_1 + 1] [14ULL] [i_1] [i_1 - 2] = ((/* implicit */unsigned int) max((1919770209), (((/* implicit */int) arr_12 [i_4] [i_1] [i_4] [i_4]))));
                            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned char) arr_5 [i_1]))))) ? (arr_15 [i_1 - 1] [i_1]) : (((/* implicit */long long int) max((arr_9 [i_3 + 2] [i_1]), (arr_9 [i_1 - 1] [i_1]))))));
                            var_18 ^= min((var_8), (arr_14 [(unsigned short)8] [(unsigned short)6] [i_3] [i_3] [i_3]));
                        }
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */short) var_1);
    }
    for (short i_7 = 2; i_7 < 24; i_7 += 3) /* same iter space */
    {
        arr_27 [i_7] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((unsigned long long int) var_6))) ? (((/* implicit */int) arr_23 [i_7] [i_7 - 1])) : (((/* implicit */int) var_2)))), (((/* implicit */int) ((unsigned short) var_9)))));
        /* LoopSeq 1 */
        for (unsigned long long int i_8 = 3; i_8 < 24; i_8 += 4) 
        {
            var_20 ^= ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_8 - 1] [i_7]))) - (var_10)))) % (((((/* implicit */_Bool) arr_9 [i_7] [(_Bool)1])) ? (17214450227115776102ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [2] [i_7] [2]))))))), (((/* implicit */unsigned long long int) arr_13 [(_Bool)1] [i_8] [i_7] [i_7] [i_7] [(short)24]))));
            var_21 ^= (signed char)67;
            /* LoopSeq 1 */
            for (unsigned char i_9 = 0; i_9 < 25; i_9 += 1) 
            {
                var_22 += ((/* implicit */unsigned char) arr_15 [i_7 + 1] [i_8]);
                arr_32 [i_7 - 2] [i_7] [i_9] = ((/* implicit */_Bool) var_2);
            }
        }
        /* LoopNest 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (long long int i_11 = 3; i_11 < 22; i_11 += 4) 
            {
                {
                    arr_39 [i_7] = ((/* implicit */unsigned long long int) 507425817);
                    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) arr_6 [i_11 - 1] [i_10]))));
                    /* LoopSeq 1 */
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                    {
                        arr_43 [14ULL] |= ((/* implicit */unsigned int) var_3);
                        var_24 *= ((/* implicit */unsigned long long int) min((-1919770197), (max((((/* implicit */int) ((short) 3579929251123753315ULL))), (1919770197)))));
                        arr_44 [6U] [i_10] [i_10] [i_10] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_40 [i_7 - 2] [i_10] [6LL] [i_12 - 1])) ^ (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) arr_33 [i_7] [i_7 - 2] [(short)14])) : (arr_11 [i_12] [i_11 - 1] [(unsigned short)19])))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_1), (var_8))))) : ((+(arr_15 [i_7 - 2] [11ULL]))))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                    }
                }
            } 
        } 
    }
    var_25 = ((/* implicit */_Bool) var_9);
    var_26 = ((/* implicit */short) (((+(2221866792958849455ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
    var_27 = ((/* implicit */signed char) min((((((((/* implicit */_Bool) var_7)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) / (((/* implicit */long long int) ((/* implicit */int) var_2))))), (((/* implicit */long long int) var_3))));
}
