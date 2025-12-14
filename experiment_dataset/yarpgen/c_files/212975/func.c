/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212975
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
    var_15 = ((/* implicit */unsigned short) var_5);
    /* LoopSeq 1 */
    for (short i_0 = 4; i_0 < 21; i_0 += 2) 
    {
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-47))) : (1932245952U)));
        var_17 &= ((/* implicit */unsigned int) ((int) ((var_6) ? (((/* implicit */int) arr_1 [i_0 - 4])) : (((/* implicit */int) arr_0 [i_0 + 3] [i_0 + 3])))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    {
                        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_5 [i_1] [i_0 - 1])), (min((((/* implicit */long long int) var_1)), (arr_6 [i_0] [i_0] [i_2] [i_0])))))) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) var_1))))) && (((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_7 [i_0 - 4] [i_2]))))))))));
                        var_19 = ((/* implicit */unsigned int) arr_1 [i_0]);
                        var_20 = ((/* implicit */signed char) (+(((((/* implicit */unsigned long long int) max((var_7), (((/* implicit */unsigned int) (unsigned short)19316))))) % (6049318183418353255ULL)))));
                    }
                } 
            } 
        } 
    }
}
