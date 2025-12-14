/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214381
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
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 14; i_0 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned int) max((((/* implicit */long long int) max((arr_0 [i_0 + 1] [i_0 + 1]), (arr_2 [i_0 - 2])))), (((long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_3 [10LL]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 13; i_3 += 1) 
                    {
                        for (signed char i_4 = 1; i_4 < 14; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_3 + 1] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)234)) ? (12095812516206048692ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_12 [i_0] [i_1] [14] [i_3 + 2] [14])), (6350931557503502910ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (-8314110480725433190LL))))));
                                arr_16 [i_2] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_2 [i_3])))) | ((~(((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [(unsigned char)7] [(unsigned char)12] [i_4]))))))), (((arr_9 [i_0 - 1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6198)))))));
                                var_16 = ((/* implicit */short) (_Bool)1);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 15; i_6 += 4) 
                        {
                            {
                                arr_23 [i_0] [i_5] = var_12;
                                var_17 = ((/* implicit */int) max((((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)0)), (arr_17 [i_5] [i_1] [i_2] [i_5] [i_2] [i_5])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), (var_9))))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (15402290199099107652ULL))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)36591))))) > (((/* implicit */long long int) 81157128U)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_14 [i_0 - 3] [(short)14] [7LL] [12ULL] [i_0] [i_0 - 3]))))) ? (((/* implicit */int) max((arr_1 [i_0 - 1] [i_0 - 1]), (((/* implicit */unsigned char) (_Bool)0))))) : (((/* implicit */int) arr_10 [2U] [i_0] [(_Bool)1] [2U] [2U] [i_0]))));
        var_19 = ((/* implicit */unsigned char) min((var_9), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)7)))))));
    }
    for (long long int i_7 = 3; i_7 < 14; i_7 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_8 = 0; i_8 < 15; i_8 += 4) 
        {
            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(arr_25 [i_7 - 1])))), (((var_10) ? (2145476465979798709ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_7] [i_7] [i_7 - 1] [i_8] [i_8] [i_8]))) >= (var_3)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_7 - 3])) && (((/* implicit */_Bool) arr_6 [i_7 - 3])))))));
            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) 14496271178834808252ULL))));
            var_22 = var_9;
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_9 = 0; i_9 < 15; i_9 += 2) 
        {
            arr_32 [i_9] [i_9] [i_9] = ((/* implicit */_Bool) (~(((/* implicit */int) ((var_8) > (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
            arr_33 [i_7] [i_9] = ((/* implicit */unsigned short) ((arr_6 [i_7]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_7 - 3] [i_7] [i_7 + 1] [i_7] [4] [i_7] [i_9])))));
        }
    }
    var_23 = var_10;
    var_24 = ((/* implicit */unsigned char) max((var_0), (((/* implicit */long long int) var_7))));
    var_25 = ((/* implicit */long long int) (-(14496271178834808252ULL)));
}
