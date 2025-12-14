/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249949
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
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_7 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_4 [i_0] [i_0])) >= (((/* implicit */int) (signed char)-17)))) ? (((/* implicit */int) ((signed char) var_12))) : (((/* implicit */int) ((_Bool) (short)4864)))))) ? (((/* implicit */long long int) ((((/* implicit */int) max(((short)-7242), (((/* implicit */short) (signed char)-127))))) - (((/* implicit */int) arr_5 [i_0]))))) : (((((/* implicit */_Bool) ((int) arr_1 [i_0]))) ? (((/* implicit */long long int) min((1123555439U), (((/* implicit */unsigned int) 32767))))) : (((var_3) % (var_16)))))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 22; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) arr_14 [(short)14] [(short)14] [i_2] [i_0] [(signed char)13])) % (((/* implicit */int) (signed char)33))));
                                var_17 = ((/* implicit */signed char) max((((((/* implicit */int) arr_1 [i_3 + 2])) - (((/* implicit */int) ((signed char) var_0))))), ((+(((/* implicit */int) var_9))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) var_7);
    var_19 = ((/* implicit */int) 19ULL);
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((968298719061667118ULL), (862335278374724690ULL)))) ? (((((/* implicit */long long int) ((/* implicit */int) var_15))) / (var_3))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_4)), ((unsigned short)65517)))))))) ? (((((/* implicit */int) min((var_4), (var_4)))) ^ ((-(((/* implicit */int) var_5)))))) : (((/* implicit */int) (signed char)18))));
}
