/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34724
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
    var_16 = ((/* implicit */short) (_Bool)1);
    var_17 ^= ((/* implicit */unsigned int) (_Bool)0);
    var_18 &= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) max((((/* implicit */short) var_9)), (var_15))))))) * (var_4)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (_Bool)1))));
                        var_20 = ((/* implicit */unsigned int) (short)-22714);
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            var_21 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_3 - 1] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) min(((short)-22719), (((/* implicit */short) arr_5 [i_0] [i_4])))))) : (max((arr_8 [i_0]), (((/* implicit */long long int) (_Bool)0))))))) ? (((long long int) arr_10 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1])) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)22714)) <= (((/* implicit */int) (_Bool)1))))))));
                            arr_15 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (short)22700)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))))) ? (((/* implicit */int) (short)22700)) : (((/* implicit */int) (short)22700))));
                            var_22 *= ((/* implicit */short) var_14);
                        }
                        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                        {
                            var_23 -= ((/* implicit */signed char) (short)-22704);
                            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((short) ((((/* implicit */int) ((_Bool) arr_8 [i_5]))) & (((/* implicit */int) arr_1 [i_0] [1LL]))))))));
                        }
                    }
                    var_25 -= ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_14 [i_0] [i_0] [i_0] [i_1] [i_2])))) : (min((((/* implicit */unsigned int) (short)26926)), (620247521U))))));
                    /* LoopSeq 3 */
                    for (short i_6 = 0; i_6 < 15; i_6 += 3) 
                    {
                        arr_20 [i_0] [i_2] [i_6] &= ((/* implicit */long long int) ((arr_13 [i_1] [i_1] [(short)3] [i_1] [2LL]) + (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >> (min((((/* implicit */unsigned int) (_Bool)1)), (var_13))))))));
                        arr_21 [i_0] [10U] [i_2] [i_6] = arr_3 [i_1];
                    }
                    /* vectorizable */
                    for (short i_7 = 2; i_7 < 14; i_7 += 4) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned int) min((var_26), (var_4)));
                        var_27 = ((/* implicit */_Bool) (+(arr_11 [i_2] [i_7 - 2] [i_7 + 1] [i_7] [i_7 + 1])));
                    }
                    for (short i_8 = 2; i_8 < 14; i_8 += 4) /* same iter space */
                    {
                        arr_29 [i_1] [i_1] [3LL] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_8 + 1] [i_8 - 2] [i_8 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)36))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 4043684439548248923LL)))) : (((((long long int) var_12)) + (((((/* implicit */_Bool) var_14)) ? (arr_24 [i_0] [(_Bool)1] [(signed char)9] [i_8 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_1])))))))));
                        arr_30 [i_0] = ((/* implicit */_Bool) ((long long int) max((((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) / (arr_14 [i_0] [i_0] [i_2] [i_8 - 1] [(short)10]))), (((/* implicit */long long int) (signed char)-36)))));
                        var_28 ^= arr_7 [i_0] [i_1] [i_2] [i_8];
                        var_29 = ((/* implicit */_Bool) (+(max((max((((/* implicit */long long int) var_13)), (var_0))), (((/* implicit */long long int) min(((short)10182), ((short)22713))))))));
                        var_30 = ((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), ((short)-22704)));
                    }
                    /* LoopNest 2 */
                    for (short i_9 = 2; i_9 < 12; i_9 += 2) 
                    {
                        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                        {
                            {
                                arr_36 [(_Bool)1] [(_Bool)1] [i_2] [i_2] [i_9] [i_10 - 1] = ((/* implicit */signed char) (((_Bool)1) && (((/* implicit */_Bool) (signed char)70))));
                                var_31 -= ((/* implicit */long long int) (short)-18751);
                                arr_37 [(short)6] [i_1] [i_1] [(short)1] [i_9 + 1] [i_10 - 1] = 9223372036854775807LL;
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */_Bool) max((((/* implicit */int) arr_26 [i_0] [i_1] [i_2] [(_Bool)1] [i_2])), (((((/* implicit */int) var_2)) >> (((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    } 
}
