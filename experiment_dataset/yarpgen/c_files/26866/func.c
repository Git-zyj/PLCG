/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26866
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
    var_19 = ((/* implicit */unsigned char) max((((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_16)), (1104466016733844507ULL))))))), (var_12)));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned int i_2 = 4; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_5 [i_2 - 1] [i_2 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_5 [i_2 - 4] [i_2 - 2])))) : (((((/* implicit */_Bool) 17342278056975707096ULL)) ? (10227469393312619687ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2 - 3] [i_2 - 2])))))));
                    arr_10 [i_0] [i_0] = max((((unsigned long long int) (~(((/* implicit */int) (signed char)-108))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)-2509))))) ? ((~(((/* implicit */int) var_17)))) : (((/* implicit */int) arr_6 [i_2 - 4] [i_2 + 1] [i_2 - 3]))))));
                }
            } 
        } 
        arr_11 [i_0] = ((/* implicit */unsigned int) arr_4 [i_0]);
        arr_12 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) arr_4 [i_0]))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) var_14)) : (9700251753732882289ULL))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_18)), (2718551752U))))));
    }
}
