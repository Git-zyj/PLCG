/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237936
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
    for (short i_0 = 4; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned char i_3 = 1; i_3 < 16; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_1] [i_1] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) arr_4 [i_3] [i_0 + 1] [i_0 + 1])) - (((/* implicit */int) (short)-16057)))) != (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))) : (((arr_1 [i_0 - 2] [i_3 - 1]) >> (((1332678297U) - (1332678281U)))))));
                            var_14 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_10 [(short)18] [i_1] [(signed char)14] [i_3 + 2])) || (((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1])) || (((/* implicit */_Bool) var_13))))) : (((/* implicit */int) ((signed char) var_13)))))) % (((((((/* implicit */_Bool) (unsigned char)6)) && (var_12))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_6 [i_0] [i_1] [i_2] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
                            /* LoopSeq 3 */
                            for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) 
                            {
                                var_15 = ((/* implicit */unsigned char) arr_8 [i_0 + 1] [i_0 + 1] [i_2] [i_4]);
                                arr_14 [i_0] [i_1] [i_1] [i_3] [i_1] = ((((/* implicit */_Bool) (unsigned short)8787)) ? (((var_12) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((short) (unsigned short)2047))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_3 - 1] [10] [i_3] [i_0 - 2] [i_4]))))));
                            }
                            for (unsigned int i_5 = 0; i_5 < 20; i_5 += 2) 
                            {
                                var_16 = ((/* implicit */unsigned short) (((~(((/* implicit */int) var_8)))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_3 + 1] [i_0 + 1] [i_2] [i_3 + 1])))))));
                                var_17 = ((/* implicit */int) (-(arr_1 [i_3 + 3] [i_0 - 4])));
                            }
                            for (short i_6 = 0; i_6 < 20; i_6 += 3) 
                            {
                                arr_20 [i_0] [i_0] [i_0] [(unsigned short)9] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((int) var_8)))));
                                arr_21 [i_0] [17] [i_1] [i_2] [i_2] [i_1] = ((/* implicit */unsigned char) (_Bool)1);
                            }
                            arr_22 [i_0 - 2] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14916553644860878747ULL)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (arr_16 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_1] [i_2] [i_0 + 1] [i_3]))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)7)))))))) || ((!(((/* implicit */_Bool) arr_2 [i_0 - 3]))))));
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((min((arr_5 [i_0] [i_3 + 2] [i_3 + 2]), (((/* implicit */int) arr_13 [i_3 + 1])))) != (((/* implicit */int) var_9)))))) * (((((/* implicit */_Bool) (unsigned short)6)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_12 [i_0] [i_0 + 1] [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_2] [i_2]))))))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */signed char) ((((unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0])) || (((/* implicit */_Bool) arr_0 [i_0] [i_0]))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_1] [i_0] [i_0] [i_0 - 3] [i_0 - 3])) ? (((/* implicit */int) var_11)) : (arr_16 [i_0] [i_0] [i_0 - 2] [i_0] [i_0] [i_1] [i_1]))))));
                /* LoopSeq 2 */
                for (int i_7 = 0; i_7 < 20; i_7 += 4) 
                {
                    var_20 = ((/* implicit */signed char) var_9);
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 20; i_8 += 4) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 20; i_9 += 4) 
                        {
                            {
                                var_21 = min((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 - 1]))))), (((int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) var_13))))));
                                arr_31 [i_8] [i_7] [8U] [i_0] = ((/* implicit */_Bool) ((int) ((((((/* implicit */_Bool) var_5)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) & (((/* implicit */unsigned int) ((/* implicit */int) var_11))))));
                                arr_32 [i_0] [i_0] [i_7] [i_8] [14] [i_9] = ((/* implicit */int) var_13);
                                arr_33 [i_0] [i_7] [(signed char)1] [i_7] |= max((((((/* implicit */int) arr_25 [i_0 - 2] [(_Bool)1])) % (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_9]))))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_10 = 3; i_10 < 16; i_10 += 3) 
                {
                    var_22 = ((/* implicit */short) max((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_23 [i_10 + 4] [i_0 + 1]))))), (arr_23 [i_10 + 3] [i_0 + 1])));
                    var_23 = ((/* implicit */_Bool) min((((/* implicit */unsigned short) ((_Bool) arr_7 [i_10 + 2] [i_0 - 1] [i_10 + 2] [i_10 + 2] [i_10]))), (((unsigned short) var_10))));
                }
                var_24 |= ((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned char)2)))) || (((arr_7 [i_0 - 4] [i_0] [i_0 - 4] [i_0 - 2] [i_0 - 4]) != (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
            }
        } 
    } 
    var_25 = (+(var_13));
    var_26 = ((/* implicit */_Bool) 13284218957466094047ULL);
}
