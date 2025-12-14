/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220493
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
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        var_11 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (var_3))) : (((/* implicit */unsigned long long int) ((arr_0 [i_0 + 1] [i_0 + 1]) * (arr_0 [i_0 + 2] [i_0]))))));
        var_12 = ((/* implicit */signed char) (_Bool)0);
        arr_2 [i_0] = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0 - 2])) || (((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0 - 1])))))) <= ((-(arr_0 [i_0 + 2] [i_0 - 2]))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_8 [(_Bool)1] &= ((/* implicit */signed char) min((min((min((((/* implicit */unsigned long long int) var_5)), (var_3))), (((/* implicit */unsigned long long int) (_Bool)0)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_0 - 2])) ? (((long long int) (short)(-32767 - 1))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-32760)) ? (-1942025694) : (((/* implicit */int) (short)-29126))))))))));
                    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) ((((((/* implicit */_Bool) var_1)) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_1]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1942025694)))))))))));
                    var_14 &= ((/* implicit */unsigned long long int) arr_0 [i_0] [i_2]);
                    var_15 &= ((/* implicit */short) (-((-(-1942025694)))));
                }
            } 
        } 
    }
    var_16 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)(-32767 - 1)))))) : ((-(var_4)))))) ^ (11691144478797157582ULL)));
}
