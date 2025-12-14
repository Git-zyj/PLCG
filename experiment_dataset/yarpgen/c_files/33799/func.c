/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33799
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (short i_4 = 3; i_4 < 20; i_4 += 1) 
                            {
                                var_20 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_14)))) ? (var_16) : (((/* implicit */unsigned long long int) ((var_7) ? (var_9) : (var_17))))));
                                var_21 = ((/* implicit */unsigned int) ((arr_7 [i_0] [i_4 + 1] [i_4 + 1]) ? (((/* implicit */int) arr_7 [i_0] [i_4 + 2] [i_4 + 1])) : (((/* implicit */int) var_1))));
                            }
                            for (long long int i_5 = 0; i_5 < 22; i_5 += 1) 
                            {
                                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) ((var_12) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6687))))))))), ((+(((/* implicit */int) var_6)))))))));
                                var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((arr_1 [i_0] [i_1]), (arr_1 [i_3] [i_2])))), (((unsigned long long int) arr_1 [i_1] [i_2])))))));
                                arr_18 [i_1] [i_2] [(unsigned char)17] [i_0] = ((/* implicit */short) 16106127360LL);
                                arr_19 [i_0] = min((((((/* implicit */_Bool) var_14)) ? (arr_2 [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_13)))))), (((/* implicit */unsigned int) ((((/* implicit */int) (!(var_7)))) * (((/* implicit */int) min((var_6), (((/* implicit */short) var_7)))))))));
                            }
                            var_24 = (i_0 % 2 == zero) ? (((/* implicit */long long int) ((((((/* implicit */int) arr_14 [i_0] [i_0] [i_2] [i_3] [i_0] [i_0])) >> ((((-(((/* implicit */int) arr_4 [i_0] [i_3])))) + (31872))))) * (((/* implicit */int) var_7))))) : (((/* implicit */long long int) ((((((/* implicit */int) arr_14 [i_0] [i_0] [i_2] [i_3] [i_0] [i_0])) >> ((((((-(((/* implicit */int) arr_4 [i_0] [i_3])))) + (31872))) - (21515))))) * (((/* implicit */int) var_7)))));
                            var_25 = ((/* implicit */_Bool) var_8);
                        }
                    } 
                } 
                var_26 = ((/* implicit */signed char) max((var_26), (var_0)));
                arr_20 [i_0] = ((((/* implicit */int) var_10)) <= (((/* implicit */int) arr_0 [i_0])));
                arr_21 [i_0] [i_1] [i_1] &= (-(((/* implicit */int) max((arr_3 [i_1] [i_1] [i_1]), (arr_3 [i_1] [i_1] [i_1])))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_6 = 3; i_6 < 23; i_6 += 3) 
    {
        arr_24 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_6 + 2])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_22 [i_6 + 1]))))) ? (((/* implicit */int) arr_22 [i_6 - 1])) : (((/* implicit */int) arr_23 [i_6 - 2]))));
        arr_25 [i_6] [i_6] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_23 [i_6])), (((((/* implicit */unsigned long long int) (((_Bool)1) ? (3899347155U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) % (((16667771423880600519ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))))))));
        /* LoopSeq 1 */
        for (unsigned short i_7 = 0; i_7 < 25; i_7 += 3) 
        {
            /* LoopSeq 1 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                var_27 = ((short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))))), (var_16)));
                arr_32 [15] [i_8] [i_7] [(short)0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_22 [i_6 - 3])) ? (max((((/* implicit */unsigned long long int) var_11)), (18014398509481976ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_30 [i_6] [(unsigned char)1])) + (((/* implicit */int) var_18))))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                var_28 = ((((/* implicit */_Bool) 395620140U)) ? (8343291024891031576LL) : (112883277234129006LL));
                var_29 = ((/* implicit */_Bool) arr_28 [i_6] [i_7] [i_8]);
                var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_19) : (var_15)));
            }
            var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) arr_31 [i_6 - 1] [i_6 - 1]))));
        }
    }
}
