/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39374
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_3 [8] [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_1 [11ULL] [11ULL])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_11))))), (((/* implicit */long long int) ((unsigned int) arr_1 [i_0] [11U])))));
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) var_10);
                                arr_16 [i_0] [10U] [i_2] [i_3] [i_4] [i_0] = ((/* implicit */unsigned short) (~((-(((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2])) ? (((/* implicit */unsigned long long int) var_6)) : (var_0)))))));
                                arr_17 [i_0] [i_1] [i_2] [i_0] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) (short)1951))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        for (short i_6 = 1; i_6 < 10; i_6 += 2) 
                        {
                            {
                                var_18 += ((/* implicit */_Bool) arr_6 [i_1] [(_Bool)0] [(signed char)1]);
                                var_19 = ((/* implicit */long long int) min((((/* implicit */unsigned int) max(((short)1951), ((short)-24478)))), (((unsigned int) (_Bool)1))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) arr_13 [i_1 - 1] [i_0] [(unsigned char)5] [(unsigned char)5] [i_1] [i_1] [(unsigned char)5])) >= (((long long int) (unsigned char)252)))) ? (((((/* implicit */int) arr_15 [i_0] [i_1 - 2] [i_0] [i_1 - 2] [i_1])) / (((/* implicit */int) arr_20 [i_1] [i_1] [7] [i_1 + 1] [i_2])))) : (((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)19))))), (var_8))))));
                }
            } 
        } 
        var_21 &= ((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)19)) != (((/* implicit */int) (short)0)))) ? (((((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [(unsigned char)0])) >> (((((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [(short)10])) - (9785))))) : (((/* implicit */int) max((arr_12 [i_0] [(signed char)1] [i_0] [i_0]), (arr_12 [i_0] [i_0] [i_0] [i_0]))))));
        arr_22 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_18 [i_0] [i_0] [8U] [i_0]))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)3))) : (var_14)))) ? (((/* implicit */int) min((var_16), (((/* implicit */unsigned short) arr_8 [i_0] [4U] [i_0]))))) : (((((/* implicit */int) (short)11225)) / (((/* implicit */int) (short)-11228))))))) : (((((unsigned int) arr_12 [i_0] [i_0] [i_0] [i_0])) / (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
    }
    var_22 = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */int) var_3)) != (((/* implicit */int) ((unsigned char) (unsigned char)253)))))), (max((min((((/* implicit */unsigned int) 2147483647)), (4294967274U))), (((/* implicit */unsigned int) var_11))))));
}
