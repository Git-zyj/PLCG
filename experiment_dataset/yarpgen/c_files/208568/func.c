/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208568
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
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)6))) | (var_1)));
    var_13 = var_8;
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) ((min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_4 [i_0] [1U] [i_2 - 1])))), (((/* implicit */int) ((arr_1 [i_0] [i_1]) != (((/* implicit */int) (unsigned char)16))))))) == (((/* implicit */int) arr_4 [i_2] [i_1 - 1] [i_0]))));
                    arr_7 [i_0] [i_2] [i_2] [i_2 - 1] = ((((12627236231904068655ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1919))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 1; i_3 < 21; i_3 += 2) 
                    {
                        arr_11 [i_2] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_1 [i_3] [i_2 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (70368743129088ULL)))));
                        arr_12 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) (short)18427);
                    }
                    var_15 = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
                    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) min(((short)-1919), (((/* implicit */short) (unsigned char)16)))))));
                }
            } 
        } 
    } 
}
