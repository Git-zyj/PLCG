/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227813
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
    for (long long int i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 1; i_3 < 22; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned long long int i_4 = 1; i_4 < 20; i_4 += 2) 
                            {
                                var_17 = ((/* implicit */short) ((((((/* implicit */int) ((short) (+(3882455793U))))) + (2147483647))) << (((((((/* implicit */int) min((arr_5 [i_2 - 1] [i_2 - 1] [i_3 + 2]), (var_7)))) + (26556))) - (13)))));
                                var_18 -= ((/* implicit */unsigned int) var_5);
                            }
                            /* LoopSeq 4 */
                            for (short i_5 = 0; i_5 < 24; i_5 += 1) 
                            {
                                var_19 *= ((/* implicit */long long int) (((+(var_16))) <= (((((/* implicit */long long int) 3772707108U)) & (((long long int) -5720419407225177312LL))))));
                                var_20 = ((/* implicit */short) ((unsigned short) var_1));
                                var_21 = (~(2873574433687417689ULL));
                            }
                            for (long long int i_6 = 3; i_6 < 23; i_6 += 2) /* same iter space */
                            {
                                arr_18 [i_0] [i_1 + 2] [i_1 + 2] [i_2] [i_6] = arr_10 [i_3 + 1] [i_1] [i_2 - 1] [i_1];
                                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) + (((((/* implicit */_Bool) ((short) var_4))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)14684))))) : (((((/* implicit */_Bool) var_15)) ? (12070133541272922708ULL) : (((/* implicit */unsigned long long int) var_16)))))))))));
                            }
                            for (long long int i_7 = 3; i_7 < 23; i_7 += 2) /* same iter space */
                            {
                                arr_21 [i_2] [i_3] [i_2] [i_0] [i_0] [i_2] = ((/* implicit */_Bool) ((unsigned short) max((arr_9 [i_0] [i_3]), (((short) var_14)))));
                                arr_22 [i_2] = ((/* implicit */short) ((min((arr_0 [i_1 + 1] [i_2 - 1]), (arr_0 [i_1 - 3] [i_2 - 1]))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_6 [i_0 + 1])), ((unsigned short)13269))))) : (((((/* implicit */_Bool) 3912629315U)) ? (var_9) : (((/* implicit */long long int) arr_10 [i_0 - 2] [i_0 - 2] [i_0 + 1] [i_0 + 1]))))));
                                arr_23 [i_2] [i_2] = ((/* implicit */long long int) (~(((/* implicit */int) max((var_4), (((/* implicit */unsigned short) var_11)))))));
                            }
                            for (unsigned short i_8 = 0; i_8 < 24; i_8 += 1) 
                            {
                                arr_26 [i_0 - 2] [i_0 - 2] [i_0] [i_0 - 2] [i_2] = ((/* implicit */unsigned int) ((unsigned short) (-(((/* implicit */int) arr_16 [i_0] [i_1 - 1] [i_1 - 1] [i_3 + 1] [i_0 - 2])))));
                                var_23 |= ((/* implicit */unsigned long long int) var_13);
                            }
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                var_25 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_15)) < (((/* implicit */int) var_4)))))) + (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0 + 1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0 - 2] [i_1]))) : (arr_14 [i_0] [i_0] [i_0 - 1])))));
            }
        } 
    } 
    var_26 = ((/* implicit */short) (unsigned short)30950);
}
