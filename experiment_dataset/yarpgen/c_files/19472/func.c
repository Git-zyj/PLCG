/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19472
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
    for (int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_1 + 1] [i_0 - 1])) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_1 [i_1 - 1] [i_0 - 1])) ? (((/* implicit */int) (unsigned short)22064)) : (((/* implicit */int) arr_1 [i_1 - 2] [i_0 + 1])))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)-37)) : (((/* implicit */int) arr_1 [i_1 - 2] [i_0 + 1]))))));
                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_4 [i_1 - 2]) ? (((/* implicit */int) arr_4 [i_1 - 1])) : (((/* implicit */int) arr_4 [i_1 + 1]))))) ? (((arr_4 [i_1 - 2]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)43471)))) : (((arr_4 [i_1 + 1]) ? (((/* implicit */int) arr_4 [i_1 - 2])) : (((/* implicit */int) arr_4 [i_1 - 1]))))));
                arr_5 [i_0] [i_1 + 1] [i_1] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_1 - 1])) ? (((/* implicit */int) (short)-28477)) : (((/* implicit */int) arr_2 [i_0 + 1] [i_1 - 1]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)39)) ? (((/* implicit */int) (signed char)60)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) (signed char)39)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 1] [2U]))) : (781706315U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(unsigned char)1] [i_1 + 1]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)12789))))));
                arr_6 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_1 + 1])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_1]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3161266834U)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_1]))))) : (var_1)))) ? (((((/* implicit */_Bool) (signed char)62)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (signed char)8))))) : (((/* implicit */long long int) ((arr_4 [i_0 - 1]) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)14))) : (3161266834U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 - 2]))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) var_8);
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (3450904082U)))) : (var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) var_5)) ? (1092518476U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)93)))))))));
}
