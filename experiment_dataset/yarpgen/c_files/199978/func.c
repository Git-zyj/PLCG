/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199978
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
    var_20 = ((((/* implicit */int) var_17)) >= (((/* implicit */int) var_19)));
    var_21 = ((/* implicit */_Bool) max((var_3), (((/* implicit */long long int) ((short) -6371534993527227391LL)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_22 ^= ((/* implicit */_Bool) max((((4116436132U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)168))))), (((((/* implicit */_Bool) arr_11 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_3 - 1])) ? (arr_11 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_3 - 1]) : (arr_11 [i_2 + 1] [i_2 + 1] [i_3] [i_3 - 1])))));
                            var_23 = min((((/* implicit */unsigned int) ((((/* implicit */int) ((var_12) >= (((/* implicit */int) var_13))))) * (((((/* implicit */int) var_4)) - (((/* implicit */int) var_11))))))), ((((-(arr_1 [i_0]))) >> (((536870911U) - (536870882U))))));
                            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_3 - 1] [i_2 + 1] [i_2] [i_2 + 1])) ? (((/* implicit */int) arr_10 [i_3 - 1] [i_2 + 1] [(unsigned short)16] [i_2 + 1])) : (((/* implicit */int) (signed char)-57))))) : (min((((/* implicit */unsigned int) var_9)), (arr_5 [i_2 + 1])))));
                            var_25 &= ((/* implicit */unsigned short) ((min((((/* implicit */unsigned int) ((arr_5 [i_2]) < (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))), (arr_5 [i_0]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (((~(4294967292U))) < (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_3 - 1] [i_3 - 1] [0ULL])))))))));
                            arr_13 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_1 [i_3 - 1])), (var_3)))) ? (((/* implicit */unsigned int) max(((-(var_12))), (((/* implicit */int) min((((/* implicit */unsigned short) var_17)), (var_10))))))) : (178531186U)));
                        }
                    } 
                } 
                arr_14 [(unsigned short)0] [i_0] [(unsigned short)0] &= ((/* implicit */int) (!(((/* implicit */_Bool) var_8))));
                var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((min((((/* implicit */unsigned int) arr_8 [i_0])), (arr_11 [i_1] [i_1] [i_1] [i_0]))), (((/* implicit */unsigned int) arr_0 [(_Bool)0]))))))))));
            }
        } 
    } 
    var_27 = ((/* implicit */short) (~(((/* implicit */int) var_16))));
}
