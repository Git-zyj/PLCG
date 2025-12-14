/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38454
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
    for (unsigned int i_0 = 4; i_0 < 23; i_0 += 3) 
    {
        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((970827532U) | (((((/* implicit */_Bool) -1667158730)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (3324139764U)))))), (17554540390532510846ULL))))));
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            arr_5 [i_0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) 970827532U)), (17554540390532510846ULL)));
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    {
                        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((unsigned short) 3324139764U)))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 3; i_4 < 23; i_4 += 4) 
                        {
                            arr_14 [i_2] [i_1] [i_1 + 2] = ((/* implicit */_Bool) -408498645);
                            var_16 = ((/* implicit */long long int) var_6);
                            var_17 -= ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) - (892203683177040770ULL))) * (((/* implicit */unsigned long long int) arr_11 [(unsigned char)16] [i_1] [(unsigned char)16] [i_2] [i_2] [i_4])));
                        }
                    }
                } 
            } 
        }
        arr_15 [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))))) >= (((5283475560187794467ULL) * (((/* implicit */unsigned long long int) arr_12 [5ULL] [(_Bool)1])))))))) | (min((3006776638U), (3324139763U)))));
    }
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) var_11))));
}
