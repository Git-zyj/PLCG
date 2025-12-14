/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229645
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
    var_15 = ((/* implicit */unsigned short) var_6);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_16 += ((/* implicit */signed char) arr_2 [i_0]);
                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [8ULL] [14]))))) & (((/* implicit */int) min((((/* implicit */unsigned short) var_3)), (var_7)))))))));
                var_18 -= ((((/* implicit */_Bool) (unsigned short)45494)) ? (((/* implicit */long long int) (+(((/* implicit */int) var_11))))) : (((var_2) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_6))));
                /* LoopNest 3 */
                for (long long int i_2 = 2; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                arr_17 [i_1] = min((((/* implicit */long long int) -1778182070)), (5414916843987470098LL));
                                arr_18 [i_4] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (-(min((((/* implicit */long long int) arr_7 [i_0] [i_0])), (-4602851284873132995LL)))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((var_8) ? (((/* implicit */int) (short)32747)) : (((/* implicit */int) var_3))))) : (var_5)))));
                            }
                        } 
                    } 
                } 
                arr_19 [i_1] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) min((var_8), (var_2))))) ? (((/* implicit */int) arr_16 [i_0] [(_Bool)0] [(_Bool)0] [9U] [i_0])) : ((-(((/* implicit */int) var_11))))));
            }
        } 
    } 
}
