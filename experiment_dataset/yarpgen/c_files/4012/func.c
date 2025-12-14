/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4012
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
    var_14 = ((/* implicit */unsigned int) (!(((((/* implicit */long long int) ((/* implicit */int) (!(var_10))))) == (((long long int) var_3))))));
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_15 &= ((/* implicit */int) (unsigned char)128);
                    arr_7 [i_2] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_2 [i_0] [i_1] [(unsigned char)9])))), (((int) var_7))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-14532)) ? (((/* implicit */int) (short)126)) : (((/* implicit */int) (short)14531))))))))) : (((((/* implicit */_Bool) (short)-14547)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0)))))) : (((var_4) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : (4294967278U)))))));
                    arr_8 [10U] [i_1] = ((/* implicit */signed char) (((((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)14560))) : (17U))) <= (((/* implicit */unsigned int) ((/* implicit */int) min((arr_5 [i_2] [i_2] [i_2] [i_2]), (((/* implicit */unsigned short) (signed char)127)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-14574))) : (4294967278U)))) ? (((var_2) ? (((/* implicit */int) arr_5 [(_Bool)1] [i_1] [i_2] [i_1])) : (((/* implicit */int) arr_5 [(unsigned char)11] [i_1] [i_1] [(unsigned char)11])))) : (((/* implicit */int) arr_2 [i_0 - 4] [i_0] [i_0 - 4])))) : (min((((var_10) ? (arr_1 [i_0 - 3]) : (arr_1 [i_0]))), (((/* implicit */int) arr_5 [i_2] [i_2] [(_Bool)1] [i_0 - 1]))))));
                    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) 939653047))));
                    arr_9 [i_2] [i_1] [i_0] = ((/* implicit */short) ((min((((/* implicit */unsigned int) var_3)), (((unsigned int) arr_4 [i_0] [i_1] [4] [i_2])))) / (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (arr_3 [(signed char)13] [i_0 - 3] [i_1])))))));
                }
            } 
        } 
    } 
}
