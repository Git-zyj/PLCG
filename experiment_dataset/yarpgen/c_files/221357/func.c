/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221357
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
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) var_8)) : (max((((/* implicit */long long int) 6U)), (-1040311251851753340LL)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_13 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_3 + 1] [i_2] [i_2 - 1])) ? (((/* implicit */int) max((arr_8 [i_0] [i_3 - 1] [i_2] [i_2 + 2]), (((/* implicit */unsigned short) var_2))))) : (((((/* implicit */_Bool) var_18)) ? (var_4) : (((/* implicit */int) arr_11 [i_0] [i_3 + 1] [i_2 - 1] [i_2 + 1] [i_2]))))));
                                arr_14 [i_0] [i_0] [i_2] [i_0] [i_4] [i_2] = ((/* implicit */int) min((((/* implicit */long long int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) 6U)) : (15998523629135491753ULL))) > (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_9 [(_Bool)1] [i_1] [i_1] [i_3] [i_2] [i_3])), (var_13))))))), (min((((/* implicit */long long int) (~(((/* implicit */int) var_15))))), (1040311251851753351LL)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        for (long long int i_6 = 1; i_6 < 17; i_6 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) var_13);
                                var_21 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) 1958044839)) / (max((((/* implicit */unsigned int) (short)-27746)), (min((var_3), (((/* implicit */unsigned int) arr_6 [i_0] [i_5] [i_2 - 1] [i_2]))))))));
                                arr_19 [i_6 + 1] [12LL] [(_Bool)1] [i_6 + 1] [i_5] [i_6] &= ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) min((var_8), (var_8)))) || (((/* implicit */_Bool) min((((/* implicit */short) var_11)), (arr_11 [i_0] [i_1] [i_2] [i_5] [i_5]))))))));
                            }
                        } 
                    } 
                    var_22 ^= ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) 6U)) : (-1040311251851753351LL)))) || (((/* implicit */_Bool) max((max((var_3), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) (short)-2)))))));
                    var_23 = ((/* implicit */_Bool) min((max((max((4U), (79340050U))), (min((((/* implicit */unsigned int) var_13)), (4294967290U))))), (((/* implicit */unsigned int) (-(arr_12 [i_2] [i_2] [i_2] [i_2 + 2] [i_2 + 1] [i_2 - 1] [i_2 + 2]))))));
                }
            } 
        } 
    } 
}
