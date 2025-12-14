/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235347
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
    var_13 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(2097151U)))) ? (((unsigned int) ((((/* implicit */_Bool) var_7)) ? (6442496233299973941ULL) : (((/* implicit */unsigned long long int) var_2))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (-(((/* implicit */int) (signed char)115)))))))));
    var_14 = ((/* implicit */unsigned char) ((var_11) & (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (short)21507))))));
    var_15 = ((/* implicit */int) ((((((/* implicit */_Bool) (short)-11804)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)0), (((/* implicit */unsigned char) (signed char)117)))))))) / (((/* implicit */unsigned int) 449383382))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 4; i_0 < 24; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) ((signed char) arr_3 [i_0 + 1]));
                                var_17 -= ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) arr_14 [(_Bool)1] [(_Bool)1] [i_4 - 2] [i_4 - 2] [i_4 + 1]))) & (arr_14 [10] [10] [i_4 - 2] [i_4 - 2] [i_4 + 1])));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned short) ((((18014261070528512LL) - (((/* implicit */long long int) ((/* implicit */int) (short)-26510))))) != (((/* implicit */long long int) ((/* implicit */int) var_12)))));
                }
            } 
        } 
    } 
    var_19 = (~(9223301668110598144ULL));
}
