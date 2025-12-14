/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230536
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    arr_6 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_9) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2])))))) ? (min(((~(2417608815692598215ULL))), (14492138420525703572ULL))) : (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 14492138420525703598ULL)))) ? (((((/* implicit */int) arr_0 [i_0])) ^ (var_18))) : (((/* implicit */int) ((4294967285U) <= (((/* implicit */unsigned int) arr_4 [i_1] [i_1] [i_2]))))))))));
                    arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) (+((-(((((/* implicit */_Bool) var_7)) ? (var_4) : (arr_4 [i_1] [i_1] [i_1])))))));
                    var_19 = ((/* implicit */unsigned int) ((((-7754594828305990228LL) + (9223372036854775807LL))) << (((14492138420525703572ULL) - (14492138420525703572ULL)))));
                }
                for (short i_3 = 1; i_3 < 17; i_3 += 3) 
                {
                    arr_11 [i_1] [i_1] = 7820732108228917104ULL;
                    /* LoopSeq 2 */
                    for (short i_4 = 2; i_4 < 17; i_4 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_5 = 2; i_5 < 17; i_5 += 2) 
                        {
                            var_20 = ((/* implicit */short) ((int) ((int) (~(((/* implicit */int) (signed char)-119))))));
                            arr_18 [i_5] [i_1] [i_3] [i_1] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_3])), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) arr_4 [i_1] [i_3] [i_3])) : (10626011965480634490ULL)))));
                            arr_19 [i_1] [i_1] [i_3 - 1] [i_1] [i_5] [i_0] [i_5] = ((((/* implicit */int) arr_15 [i_3 + 1])) == ((-(((/* implicit */int) (short)-32764)))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_6 = 1; i_6 < 15; i_6 += 1) 
                        {
                            arr_24 [i_6] [i_6] [i_1] [i_4] [i_6] [i_3 + 1] = ((/* implicit */int) 4384123686039350478ULL);
                            arr_25 [i_0] [i_1] [i_3] [i_4 - 1] [i_6 - 1] = ((/* implicit */int) (+((~(7820732108228917110ULL)))));
                            var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)120))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_29 [i_0] [i_1] [i_1] [i_3] [i_4] [i_7] = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_4 - 1] [i_0]);
                            arr_30 [i_0] [i_1] [i_3] [i_3] [i_1] [i_7] = arr_16 [i_1] [i_7] [i_3] [i_4] [i_7] [i_4] [i_1];
                            arr_31 [i_1] [i_1] = ((/* implicit */int) arr_28 [i_0] [i_1] [i_4] [i_7]);
                        }
                        var_22 = ((/* implicit */short) arr_1 [i_0]);
                    }
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 1) 
                        {
                            var_23 = ((/* implicit */long long int) var_2);
                            arr_38 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18314))) + (10626011965480634512ULL)))))))) == (10626011965480634463ULL)));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            arr_41 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */short) arr_26 [i_0] [i_1] [i_0] [i_0] [i_0]);
                            var_24 = ((/* implicit */int) ((((((unsigned int) 17580020369982073360ULL)) - (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_32 [i_0] [i_1] [i_3] [i_8] [i_10])))))) - (((/* implicit */unsigned int) (-((+(((/* implicit */int) (short)-32764)))))))));
                            arr_42 [i_0] [i_1] [i_3] [i_8] [i_3] = ((/* implicit */long long int) arr_34 [i_0] [i_1] [i_3] [i_8] [i_3] [i_10]);
                        }
                        /* LoopSeq 1 */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            arr_46 [i_1] [i_1] [i_3] [i_8 - 1] [i_11] [i_1] = ((/* implicit */_Bool) (short)-2697);
                            var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_35 [i_1] [i_8 - 1]))));
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_12 = 2; i_12 < 17; i_12 += 3) 
                        {
                            arr_50 [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_17 [i_0] [i_8 - 1] [i_1] [i_1] [i_0] [i_0]))) ? (((/* implicit */unsigned long long int) ((var_18) * (((/* implicit */int) arr_21 [i_12] [i_8] [i_3 + 1] [i_1] [i_1] [i_0]))))) : (((((/* implicit */_Bool) 17580020369982073361ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_12]))) : (7820732108228917129ULL)))));
                            var_26 = ((/* implicit */short) 2987369806726229903LL);
                            arr_51 [i_0] [i_1] [i_1] [i_8] [i_12] = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 1008738072U))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) 4U)))))));
                        }
                        arr_52 [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */int) arr_33 [i_0]);
                    }
                    arr_53 [i_1] [i_1] [i_3 - 1] = ((/* implicit */short) (!(((/* implicit */_Bool) (short)7922))));
                }
                arr_54 [i_1] [i_1] [i_1] = ((/* implicit */short) arr_16 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1] [i_1]);
                arr_55 [i_1] = ((/* implicit */unsigned char) max((-2987369806726229903LL), (((/* implicit */long long int) (short)1008))));
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned long long int) var_1);
}
