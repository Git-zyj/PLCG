/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26620
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_11 = ((/* implicit */signed char) (((!((!(((/* implicit */_Bool) arr_1 [i_0] [i_1])))))) ? (((/* implicit */int) ((3ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [(unsigned short)4] [i_0])))))) : (((/* implicit */int) ((signed char) ((arr_0 [i_0] [i_2]) & (((/* implicit */long long int) arr_4 [i_0]))))))));
                        arr_11 [i_0] [i_2] [i_3] = ((/* implicit */unsigned char) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_0])))))) * (((unsigned long long int) var_7))))));
                    }
                } 
            } 
        } 
        var_12 = (!(((/* implicit */_Bool) var_7)));
    }
    var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_8)) + (1978978900U)))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) 1978978899U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10))))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) & (((/* implicit */int) var_1))))) : (((unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) var_6)), (2315988388U))) >> (((var_0) - (7703983620374057003ULL)))))))))));
}
