/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35013
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
    var_17 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((_Bool) var_16))), (max((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))), (var_15)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) max((var_6), (((/* implicit */unsigned char) (!((_Bool)1))))));
                arr_5 [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (540544471) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) : (min((8309564710325895487ULL), (((/* implicit */unsigned long long int) (_Bool)1))))));
                var_19 = ((/* implicit */_Bool) max((max((((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0])) || (((/* implicit */_Bool) var_8))))), (arr_0 [i_1 + 1] [i_1 - 1]))), (((/* implicit */unsigned char) (_Bool)1))));
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) max(((-(((((/* implicit */_Bool) (unsigned short)13918)) ? (arr_3 [i_1]) : (var_9))))), (((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) < (6454882936283193630LL)))), (arr_0 [i_1 + 1] [i_1 + 1])))))))));
                    arr_10 [i_1] &= ((/* implicit */unsigned char) var_3);
                    var_21 = ((/* implicit */unsigned char) 540544486);
                    var_22 = ((/* implicit */signed char) min(((_Bool)1), (var_4)));
                }
                for (unsigned char i_3 = 2; i_3 < 11; i_3 += 4) 
                {
                    arr_15 [8U] [i_0] &= ((/* implicit */unsigned char) ((((max((((/* implicit */int) (signed char)0)), (-540544465))) < (((/* implicit */int) arr_1 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (max((max((9003156366114753277ULL), (((/* implicit */unsigned long long int) var_13)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_3] [i_1])) ? (((/* implicit */int) (unsigned short)42882)) : (((/* implicit */int) var_4)))))))));
                    var_23 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_3 + 2] [i_3 - 2] [i_1] [i_0])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) arr_14 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_0])) ? (((/* implicit */int) var_4)) : (540544479))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_3] [(unsigned char)4] [(unsigned char)4]))))))) > (arr_3 [i_1])));
                    arr_16 [10U] |= ((/* implicit */int) ((((/* implicit */_Bool) ((arr_6 [i_3 + 1] [i_3 - 2] [i_1 + 1]) ? (((/* implicit */int) arr_6 [i_3 + 1] [i_3 + 2] [i_1 - 1])) : (((/* implicit */int) arr_6 [i_3 - 1] [i_3 - 2] [i_1 + 1]))))) ? (((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_14 [i_3 + 2] [i_1 - 1] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-3497)))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) min((arr_0 [(_Bool)1] [i_0]), (((/* implicit */unsigned char) var_14))))))))));
                    arr_17 [i_3] [i_1 + 1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_3 + 1] [i_1 - 1] [i_0]))))) & (min((((/* implicit */int) arr_2 [i_1 + 1])), (2147483647)))));
                }
            }
        } 
    } 
    var_24 = ((/* implicit */int) var_11);
}
