/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25031
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
    var_20 = ((/* implicit */long long int) var_17);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_7)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1] [i_0])) ? (((/* implicit */int) (signed char)111)) : (((/* implicit */int) arr_4 [i_0] [i_1]))))))))));
            arr_6 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 2961558564U)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0])))));
        }
        arr_7 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((int) (signed char)-111))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_4 [i_0] [i_0]) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) (signed char)-118)) ? (((/* implicit */int) (signed char)111)) : (-2041603288))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))) : (((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned int) -1)) : (var_10))) >> (((((/* implicit */int) min((((/* implicit */signed char) var_14)), (arr_5 [i_0])))) + (38)))))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                {
                    var_22 = ((/* implicit */unsigned int) arr_10 [i_2]);
                    arr_14 [i_0] = ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? ((~(((((/* implicit */_Bool) arr_13 [i_0] [i_2] [i_3])) ? (var_0) : (((/* implicit */int) arr_5 [i_2])))))) : (((((/* implicit */_Bool) ((var_7) + (((/* implicit */unsigned long long int) var_9))))) ? (((((/* implicit */int) var_12)) + (((/* implicit */int) (_Bool)0)))) : ((-(((/* implicit */int) (signed char)-118)))))));
                }
            } 
        } 
        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((int) (+(((/* implicit */int) (short)-1))))))));
    }
    var_24 += ((/* implicit */unsigned char) (+(max((((3562641579U) * (((/* implicit */unsigned int) var_0)))), (((/* implicit */unsigned int) var_15))))));
    var_25 = ((/* implicit */int) var_14);
}
