/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43301
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
    var_19 = ((/* implicit */short) var_17);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (int i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 12; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                arr_17 [i_1] [i_4] [(short)12] [i_1 + 1] [i_2] [i_1 + 1] [i_1] = ((/* implicit */long long int) var_0);
                                var_20 = ((/* implicit */short) ((arr_1 [i_2]) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0 - 2] [i_0 - 1] [0ULL])))))) : (arr_2 [i_3])));
                                var_21 *= ((/* implicit */short) arr_5 [i_0] [(short)3] [(short)3]);
                                arr_18 [i_4] [i_1] [i_1] [(_Bool)1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_13 [i_4] [i_1 + 4] [(_Bool)1] [i_1] [i_4]), (((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */int) arr_9 [(short)9] [1ULL] [i_1])) : (((/* implicit */int) arr_9 [i_0] [i_2] [i_2]))))))) ? (((/* implicit */long long int) min((((/* implicit */int) arr_3 [i_0] [i_0])), (arr_13 [i_0 - 1] [i_1 + 3] [i_1 + 3] [i_1] [i_3 + 1])))) : (min((((long long int) arr_14 [(_Bool)1] [(_Bool)1] [(_Bool)1] [1])), (((/* implicit */long long int) var_15))))));
                                var_22 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 2]))) : (arr_2 [i_0 + 1]))) % (max((((/* implicit */long long int) (-(arr_4 [i_1 - 1] [i_0])))), (-1LL)))));
                            }
                        } 
                    } 
                    var_23 = min((((/* implicit */unsigned long long int) (+(((/* implicit */int) min((var_13), ((short)-17489))))))), (min((var_18), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [2LL]))))))));
                }
                for (int i_5 = 0; i_5 < 13; i_5 += 4) /* same iter space */
                {
                    arr_21 [i_1] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) max(((short)-17477), (arr_12 [(short)2] [i_5])))) * (((/* implicit */int) var_12)))))));
                    arr_22 [i_1] [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((arr_6 [i_1 + 4] [i_1] [i_1 + 3]), (arr_6 [i_1 + 2] [i_1 - 2] [i_1 + 1])))), (var_1)));
                    arr_23 [i_1] [i_1] [i_1] = ((/* implicit */short) 18446744073709551611ULL);
                }
                for (int i_6 = 0; i_6 < 13; i_6 += 4) /* same iter space */
                {
                    var_24 = ((/* implicit */short) max((((/* implicit */int) (short)(-32767 - 1))), (((((/* implicit */_Bool) 5ULL)) ? (((/* implicit */int) ((_Bool) var_15))) : (var_17)))));
                    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_1 [i_1 - 2]), (arr_1 [i_1 - 2])))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))));
                }
                var_26 |= ((/* implicit */unsigned long long int) min((max((arr_8 [10LL] [10LL] [(short)2] [i_1]), (((((/* implicit */_Bool) arr_11 [i_1 - 1] [i_1] [4] [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_10 [0ULL] [i_1 + 1] [i_0] [i_0])))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 - 2])))))));
                var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_0] [12ULL] [0LL] [12ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_24 [i_0] [i_1] [i_0 + 1]), (((((/* implicit */long long int) ((/* implicit */int) var_6))) < (arr_2 [i_1]))))))) : (((unsigned long long int) arr_19 [i_1] [i_1] [i_1]))));
                arr_27 [i_0] [i_1] = ((/* implicit */unsigned long long int) (_Bool)1);
            }
        } 
    } 
}
