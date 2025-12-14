/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24519
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
    var_14 = ((((/* implicit */unsigned long long int) max((((long long int) (unsigned char)48)), (((/* implicit */long long int) var_7))))) * ((-(min((((/* implicit */unsigned long long int) var_2)), (var_13))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_5 [i_0] |= ((/* implicit */unsigned char) ((_Bool) (+(arr_0 [i_0]))));
                arr_6 [i_0] [i_1] = ((/* implicit */_Bool) ((unsigned char) 208821117));
                var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((unsigned long long int) (-(((/* implicit */int) var_4))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_17 -= ((/* implicit */unsigned char) (((((((_Bool)1) ? (((/* implicit */unsigned long long int) 536870911U)) : (0ULL))) ^ (((/* implicit */unsigned long long int) arr_12 [i_0] [i_1] [i_2] [i_3] [i_4])))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3] [i_2]))) : (var_13))))))));
                                var_18 |= ((((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_0] [i_1])) && (((/* implicit */_Bool) arr_11 [i_4] [i_4]))))) != (((/* implicit */int) min(((unsigned short)14222), (((/* implicit */unsigned short) (signed char)4))))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_5 = 0; i_5 < 11; i_5 += 1) 
                {
                    var_19 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_5] [i_1])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_9))))))) ? (((((((/* implicit */long long int) ((/* implicit */int) (short)-5896))) + (arr_4 [i_0]))) / (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) var_8))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_5])))));
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((arr_0 [i_5]) / (((/* implicit */long long int) (-(((/* implicit */int) var_11)))))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)79)) / (((/* implicit */int) var_9))))), (((((/* implicit */_Bool) arr_14 [i_7])) ? (((/* implicit */unsigned long long int) arr_17 [i_5] [i_6])) : (4765510353461554537ULL)))))));
                                var_21 = ((/* implicit */unsigned long long int) arr_11 [i_1] [i_0]);
                                var_22 = ((/* implicit */int) ((unsigned long long int) var_8));
                                arr_20 [i_0] |= ((/* implicit */short) max((4765510353461554537ULL), (((/* implicit */unsigned long long int) (signed char)127))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned int) ((max((var_13), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1])))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_8 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_4 [i_5]))))))));
                }
                var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((_Bool) min((((var_12) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) arr_1 [i_1]))))))));
            }
        } 
    } 
}
