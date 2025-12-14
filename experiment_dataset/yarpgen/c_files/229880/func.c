/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229880
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
    for (unsigned int i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_7 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_0 [i_0 - 1]), (((/* implicit */unsigned int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_0 [i_0 - 2])))) : (((((/* implicit */_Bool) arr_0 [i_0 - 3])) ? (var_4) : (((/* implicit */long long int) arr_0 [i_0 - 2]))))));
                var_12 = ((/* implicit */unsigned long long int) max((7994000393921745746LL), (((/* implicit */long long int) (unsigned short)35735))));
                /* LoopSeq 3 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    arr_11 [i_2] = ((/* implicit */short) max((min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (2699401927U))), (arr_0 [i_0]))), (((/* implicit */unsigned int) ((signed char) arr_2 [i_0 - 3])))));
                    var_13 = ((/* implicit */unsigned short) arr_6 [i_2] [i_0]);
                }
                /* vectorizable */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_16 [i_0] [i_1] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) arr_5 [i_1] [i_0]))));
                    /* LoopNest 2 */
                    for (long long int i_4 = 2; i_4 < 17; i_4 += 3) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 18; i_5 += 3) 
                        {
                            {
                                var_14 = 2699401938U;
                                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((var_3) ^ (((/* implicit */long long int) var_0)))) > (((/* implicit */long long int) (~(((/* implicit */int) var_2))))))))));
                                arr_21 [i_3] [i_3] [i_3] [i_4 - 1] [i_5] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)26609))));
                            }
                        } 
                    } 
                    arr_22 [i_3] = ((/* implicit */signed char) ((unsigned long long int) arr_1 [i_0 + 1]));
                }
                for (signed char i_6 = 0; i_6 < 18; i_6 += 3) 
                {
                    var_16 += ((/* implicit */unsigned short) 2699401927U);
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 18; i_7 += 2) 
                    {
                        for (unsigned short i_8 = 4; i_8 < 16; i_8 += 2) 
                        {
                            {
                                arr_29 [i_8] [i_7] [i_6] [i_1] [i_1] [i_0 - 2] = ((((/* implicit */_Bool) max((var_10), (arr_14 [i_0 - 2] [i_6] [i_7])))) ? (((long long int) arr_14 [i_1] [i_1] [i_6])) : (((/* implicit */long long int) ((/* implicit */int) max((arr_2 [i_0 - 3]), (arr_2 [i_1]))))));
                                arr_30 [i_0 - 1] [i_1] [i_1] [i_6] [i_7] [i_8 + 2] = ((/* implicit */unsigned long long int) var_2);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) min((1595565369U), (3919480489U)));
}
