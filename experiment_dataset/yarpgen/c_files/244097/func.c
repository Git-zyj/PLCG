/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244097
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
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (_Bool)1))));
    var_19 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)221)) ? (((/* implicit */int) (signed char)20)) : (((/* implicit */int) (unsigned char)48))));
    var_20 = ((/* implicit */short) ((((((((/* implicit */_Bool) ((var_16) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16867)))))) ? (var_1) : (((/* implicit */long long int) ((var_15) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)74)))))))) + (9223372036854775807LL))) >> (((((/* implicit */int) var_8)) + (10399)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (long long int i_3 = 3; i_3 < 9; i_3 += 3) 
                    {
                        {
                            arr_8 [(unsigned char)7] [(unsigned char)7] [(unsigned char)7] [i_0] [(unsigned char)7] = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-15872))) : ((+(var_3)))));
                            var_21 = ((/* implicit */short) ((min((((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0] [i_0])), (arr_0 [(_Bool)1] [(short)4]))) & (min((((unsigned long long int) arr_0 [i_1] [i_1])), (((/* implicit */unsigned long long int) min((((/* implicit */short) (unsigned char)255)), ((short)-537))))))));
                            arr_9 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */short) (((_Bool)0) ? ((-(2464407011U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)39)))))));
                            arr_10 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */unsigned char) (+(3957829507246351756ULL)));
                        }
                    } 
                } 
                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_2 [7LL])) : (((/* implicit */int) (unsigned char)34))))) ? (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-9)))) : (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)0))))))) ? (((arr_0 [i_0] [i_1]) << (((((3957829507246351745ULL) << (((arr_0 [(unsigned char)1] [i_1]) - (10844528518572190260ULL))))) - (17626891785886236625ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_1])))));
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 11; i_4 += 4) 
                {
                    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        {
                            arr_16 [i_0] [i_4] = ((/* implicit */_Bool) 4503599627370495ULL);
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (int i_6 = 4; i_6 < 10; i_6 += 1) 
                            {
                                arr_20 [i_0] [i_1] [i_4] [i_6] [i_6 - 2] = ((/* implicit */signed char) (((+(arr_18 [i_0] [i_0] [i_0] [i_5] [i_6] [(unsigned short)6]))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_6] [i_6] [i_6] [i_6])))))));
                                var_23 = ((/* implicit */short) ((arr_7 [i_0] [i_1]) % (((14488914566463199871ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))));
                            }
                            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                            {
                                var_24 = (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) min((arr_0 [i_7] [i_7]), (arr_1 [i_0])))))) : ((((!(((/* implicit */_Bool) 14488914566463199879ULL)))) ? (((arr_0 [i_0] [i_0]) % (arr_7 [i_0] [i_1]))) : (((/* implicit */unsigned long long int) min((6134257660265591320LL), (((/* implicit */long long int) arr_5 [i_5] [i_4] [i_1] [i_0]))))))));
                                var_25 = arr_1 [i_0];
                                var_26 = ((/* implicit */short) arr_4 [i_5] [i_1] [i_0]);
                            }
                            arr_23 [i_5] [i_4] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */signed char) min(((((-(((/* implicit */int) arr_22 [i_0] [i_1] [i_4])))) / (((/* implicit */int) var_8)))), (((/* implicit */int) var_12))));
                            var_27 = ((/* implicit */unsigned int) arr_19 [i_0] [i_1] [i_4] [i_0] [i_4] [8] [i_0]);
                        }
                    } 
                } 
            }
        } 
    } 
}
