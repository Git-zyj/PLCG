/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44045
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
    var_19 = ((/* implicit */short) var_3);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 15; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        {
                            arr_9 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((short) ((var_9) != (var_9)))))));
                            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((((/* implicit */int) (short)-18)) < (((/* implicit */int) (short)-32752)))) && (((/* implicit */_Bool) ((arr_8 [i_2 + 2] [i_1] [i_2 + 1] [i_3] [(short)11]) << (((arr_8 [i_2 + 2] [i_1] [i_2] [i_3] [i_2]) - (7947534920190153955ULL)))))))))));
                            arr_10 [i_3] [i_2] [(short)0] [i_0] = ((unsigned long long int) (!(((/* implicit */_Bool) 536870911ULL))));
                            arr_11 [i_0] [7ULL] [i_2] = ((/* implicit */short) ((unsigned long long int) (short)(-32767 - 1)));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 4) 
                {
                    arr_15 [i_4] [i_4] [i_4] = ((/* implicit */short) arr_7 [i_4] [i_0] [i_0] [i_0]);
                    arr_16 [i_0] [i_0] [i_0] [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(var_3))))));
                }
                /* vectorizable */
                for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 1) 
                {
                    arr_19 [i_0] [(short)3] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (arr_4 [i_5] [i_1] [i_0]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-29670)))))));
                    arr_20 [i_5] [i_1] [i_1] [i_0] = ((short) (short)-32756);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 4) 
                    {
                        var_21 = ((/* implicit */short) arr_8 [6ULL] [6ULL] [6ULL] [6ULL] [i_5]);
                        arr_23 [i_0] [i_0] [i_0] [i_6] = ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-32752)))))) : (((unsigned long long int) 144110790029344768ULL)));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 4) 
                        {
                            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (-(((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (short)(-32767 - 1))))))))));
                            var_23 -= ((/* implicit */short) ((((/* implicit */_Bool) (short)32752)) ? (arr_13 [i_0] [i_6] [i_5]) : (6301501537166173188ULL)));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 4) 
                        {
                            arr_29 [i_1] [i_5] [i_6] [i_1] = ((/* implicit */short) (+(arr_13 [i_0] [i_0] [(short)4])));
                            arr_30 [(short)9] [i_1] [i_1] [i_1] [i_8] = ((unsigned long long int) (short)-14868);
                            var_24 = var_13;
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 3) 
                        {
                            var_25 = (-(arr_1 [i_5] [i_9]));
                            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 73140939521138738ULL)) ? (((/* implicit */int) (short)-10697)) : (((/* implicit */int) (short)32767)))))));
                            arr_35 [i_0] [i_0] [i_9] [i_6] = ((short) (-(((/* implicit */int) (short)-32752))));
                            arr_36 [i_0] [i_1] [i_5] [i_6] [i_1] [i_9] = var_7;
                            arr_37 [(short)2] [i_5] [i_9] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) arr_31 [i_9])) ? (arr_31 [i_9]) : (arr_31 [i_9])));
                        }
                        for (short i_10 = 2; i_10 < 16; i_10 += 4) 
                        {
                            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) arr_34 [i_0] [i_0] [i_6] [i_0] [i_0] [10ULL]))));
                            var_28 *= ((/* implicit */short) ((arr_4 [i_0] [i_1] [i_5]) << (((((unsigned long long int) var_10)) - (8859695078341325119ULL)))));
                            var_29 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_0] [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (short)-7168)) : (((/* implicit */int) (short)15360)))))));
                            arr_40 [i_0] [i_0] [i_1] [i_0] = ((8589901824ULL) ^ (arr_21 [i_10 - 2] [i_10 - 2] [i_10 - 1] [i_10] [i_10] [i_10]));
                            var_30 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_12 [i_10 + 1] [11ULL] [i_10 - 2]))));
                        }
                        arr_41 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_22 [i_6] [i_0]))));
                    }
                }
            }
        } 
    } 
    var_31 = (short)32756;
}
