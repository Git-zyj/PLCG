/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230581
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                arr_4 [i_1] [i_0] = ((/* implicit */_Bool) (+(12821459503827225175ULL)));
                arr_5 [i_0] [i_1] = ((/* implicit */short) (((((~(1506551561U))) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_0])))));
                arr_6 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_3 [i_1] [i_1] [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (_Bool)0)), (arr_1 [i_0]))))) : ((+(6563959970883392401LL)))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        {
                            var_10 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_0 [i_0] [i_2])), (var_8)))))) ? (((/* implicit */int) min((arr_2 [i_2] [i_1]), (((/* implicit */unsigned short) var_3))))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)46)) || (((/* implicit */_Bool) var_0)))))));
                            arr_13 [i_1] = ((/* implicit */unsigned short) max((((((/* implicit */int) arr_1 [i_3])) == (((/* implicit */int) arr_1 [i_0])))), ((!(((/* implicit */_Bool) ((arr_7 [i_1] [13U]) ? (((/* implicit */int) (signed char)-47)) : (((/* implicit */int) arr_3 [i_1] [i_1] [i_3])))))))));
                            arr_14 [i_1] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_8 [i_3] [i_3] [i_3]))))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned short i_4 = 2; i_4 < 14; i_4 += 2) 
                            {
                                var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) var_6))));
                                arr_18 [i_1] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                                arr_19 [i_4] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) (!(arr_15 [i_4] [i_4 - 2] [i_4 + 1] [i_4 - 2] [(short)10])));
                                arr_20 [i_1] [i_1] [i_2] [i_3] = ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((arr_15 [i_0] [i_0] [i_0] [(unsigned char)9] [i_4 - 1]) ? (6563959970883392401LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-46)) && (((/* implicit */_Bool) (unsigned short)65519)))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_12 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) min((3124517947138050259LL), (((/* implicit */long long int) ((((/* implicit */int) (signed char)-46)) != (((/* implicit */int) (signed char)-69)))))))) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_3), (var_2))))) & (((var_6) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)48)))))))));
}
