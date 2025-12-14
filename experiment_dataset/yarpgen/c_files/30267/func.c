/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30267
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
    var_14 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)6))))), (((((/* implicit */_Bool) 3152387234U)) ? (8693390518168220298LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)235)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned short i_2 = 2; i_2 < 14; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 = (+(((unsigned int) arr_2 [i_2 - 2])));
                                var_16 = ((/* implicit */unsigned int) min((var_16), (var_7)));
                                arr_16 [i_0] [i_1] [i_0] [(unsigned char)12] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)248))) >= (15059952801668062318ULL)));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_6 = 0; i_6 < 15; i_6 += 1) 
                        {
                            arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned short) ((signed char) 8166088578116310003ULL)));
                            arr_23 [i_0] [(unsigned char)0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_21 [i_0] [12U] [i_6] [i_2 - 1] [i_0])) >> (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)21747))) : (arr_4 [i_0]))) - (21727U)))));
                            var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 6856990174490544002LL))));
                        }
                        /* vectorizable */
                        for (unsigned int i_7 = 2; i_7 < 14; i_7 += 3) 
                        {
                            arr_26 [i_0] [i_1] [i_1] [i_0] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) <= (((((/* implicit */_Bool) var_0)) ? (var_10) : (var_1)))));
                            arr_27 [i_0 - 2] [i_0 - 2] [i_0] [i_5] [i_7] = ((unsigned int) 250908419U);
                            arr_28 [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 17259739391909823832ULL))));
                        }
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_2 - 1] [i_2 - 1] [(signed char)5] [i_5] [i_0])) ? (arr_15 [i_2] [i_0] [i_2] [i_0] [i_0 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) max((((unsigned short) arr_17 [i_0] [(short)12] [i_0])), (((unsigned short) var_10))))))));
                        arr_29 [i_0] [i_0] [i_1] [i_2 - 1] [i_5] = arr_19 [i_0] [i_1];
                    }
                    var_19 = arr_6 [i_0 + 1] [i_0];
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 1; i_8 < 14; i_8 += 4) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 15; i_9 += 1) 
                        {
                            {
                                arr_34 [i_0] [i_1] [i_0] [i_1] [(signed char)0] = ((/* implicit */unsigned int) var_13);
                                arr_35 [(signed char)8] [(signed char)8] [(_Bool)1] [i_8 - 1] [i_0] = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_19 [i_0] [i_0]))))), (((unsigned int) (unsigned char)249)))), ((~(3269450766U)))));
                                arr_36 [i_2] [i_8 + 1] [i_0] [i_2] &= ((/* implicit */long long int) max(((-(((/* implicit */int) var_11)))), (((/* implicit */int) (!(((arr_3 [i_2] [i_2]) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
