/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216815
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
    var_15 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_1)), (((((/* implicit */_Bool) ((short) var_7))) ? ((-(var_14))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned int) ((((((arr_0 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) : (arr_5 [i_0]))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])))))))) << (((((/* implicit */_Bool) ((short) arr_3 [i_0]))) ? (((/* implicit */int) max((((/* implicit */short) arr_1 [i_0])), ((short)3)))) : (max((((/* implicit */int) var_3)), (arr_3 [i_1])))))));
                var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_0 [i_1])), ((+(((/* implicit */int) (signed char)-118)))))))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    var_18 = ((/* implicit */unsigned char) min((max((max((arr_5 [(unsigned short)13]), (((/* implicit */long long int) (signed char)-91)))), (((/* implicit */long long int) arr_6 [i_2] [i_1] [i_1] [i_1 + 1])))), (((/* implicit */long long int) (signed char)-72))));
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) < ((-(min((var_2), (((/* implicit */long long int) arr_6 [i_0] [i_2] [i_2] [i_1]))))))));
                    arr_9 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) var_8);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) var_11);
                                var_21 = ((/* implicit */short) max(((unsigned short)25223), (((/* implicit */unsigned short) min((((signed char) arr_2 [i_0])), (arr_13 [i_0]))))));
                            }
                        } 
                    } 
                    arr_14 [i_1 - 3] &= ((/* implicit */unsigned long long int) max(((~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)126)) : (((/* implicit */int) var_6)))))), (var_9)));
                }
                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? ((-(((/* implicit */int) arr_1 [i_1])))) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_1]))))) ? (max(((-(((/* implicit */int) arr_0 [(signed char)12])))), (((/* implicit */int) (unsigned short)25223)))) : (((/* implicit */int) ((short) arr_6 [i_0] [i_0] [i_1] [i_1 - 2])))));
            }
        } 
    } 
    var_23 = var_7;
    var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) var_2))));
}
