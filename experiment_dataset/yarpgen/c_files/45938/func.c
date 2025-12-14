/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45938
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
    var_10 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) max((var_2), (var_2)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16854250009753403758ULL)) ? (((/* implicit */int) (unsigned short)8041)) : (((/* implicit */int) (unsigned short)31))))) : ((+(var_5))))), (((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned short) var_9)), ((unsigned short)31))), (((/* implicit */unsigned short) min((var_9), (((/* implicit */signed char) var_7))))))))));
    var_11 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? ((+(1657784543))) : (((/* implicit */int) var_0)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        var_12 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_0 - 2])) : (arr_1 [i_0])))));
        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (arr_1 [i_0]) : (((/* implicit */int) arr_0 [i_0 + 1]))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    {
                        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)31))))) ? (arr_6 [i_2] [i_2] [i_1] [i_3]) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1] [(unsigned char)13])))))));
                        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (~(arr_6 [i_0 - 2] [i_1 + 1] [i_2] [i_0 - 1]))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 3; i_4 < 19; i_4 += 2) 
                        {
                            arr_14 [i_1] [i_1 + 2] = ((/* implicit */long long int) (short)-3173);
                            var_16 = ((/* implicit */unsigned char) arr_11 [i_4 - 1] [i_1 + 1] [i_0] [i_0] [i_1 + 1] [i_0]);
                            var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) var_3))));
                            var_18 = ((/* implicit */long long int) ((unsigned int) arr_2 [i_0]));
                        }
                    }
                } 
            } 
        } 
    }
}
