/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50911
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
    var_11 = ((/* implicit */short) 678431179U);
    var_12 = ((min((((/* implicit */long long int) ((((/* implicit */int) (signed char)108)) <= (((/* implicit */int) (signed char)122))))), (((long long int) var_9)))) % (((/* implicit */long long int) ((/* implicit */int) var_3))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 3; i_2 < 9; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] = ((/* implicit */unsigned char) min((((unsigned short) (signed char)108)), (((/* implicit */unsigned short) ((((((/* implicit */int) arr_0 [i_0])) >> (((var_7) - (7355278093406658355LL))))) > (89438877))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 1; i_3 < 9; i_3 += 4) 
                    {
                        var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((unsigned short) var_1))) ? (-7671969792221577678LL) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (signed char)28)))))))))));
                        arr_12 [i_0] [i_1] [i_2] [i_3 - 1] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_10 [i_3] [i_3 + 2] [i_1] [i_1] [i_2 + 1] [i_2])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned int) ((unsigned short) (signed char)-108)))));
                        arr_13 [i_1] [i_1] [i_0] = ((/* implicit */signed char) (-((~(max((7671969792221577677LL), (-7671969792221577685LL)))))));
                        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_11 [i_1] [i_2 - 2] [i_3 + 1] [i_3] [(unsigned char)8])) : (((/* implicit */int) (unsigned char)238))))) ? (((/* implicit */long long int) ((arr_11 [i_1] [i_2 + 2] [i_3 + 2] [i_3] [i_2]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_11 [i_1] [i_2 - 2] [i_3 - 1] [i_1] [i_2 - 2]))))) : (((long long int) (_Bool)1))));
                        var_15 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_3 [i_2 - 1])) ? (var_7) : (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_2 [i_1])), (var_9)))))), (((/* implicit */long long int) var_9))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        arr_17 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) (short)4514)) && (((/* implicit */_Bool) (signed char)-13)))));
                        var_16 += ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_14 [i_2 - 1] [i_2 + 2] [i_2 - 2] [i_2 - 2]))));
                    }
                    arr_18 [i_0] [i_1] [i_2] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */_Bool) (-(min((((/* implicit */unsigned int) var_2)), (var_9)))))) ? (((((/* implicit */long long int) (~(((/* implicit */int) var_5))))) % (((long long int) var_6)))) : (((/* implicit */long long int) var_1))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-108)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) min(((unsigned short)15), (((/* implicit */unsigned short) (short)14934)))))));
}
