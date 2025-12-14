/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43393
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
    var_10 = ((/* implicit */unsigned long long int) var_2);
    var_11 = ((/* implicit */short) var_1);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned char i_3 = 1; i_3 < 19; i_3 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned int) max(((+(arr_6 [i_0] [i_1 + 2]))), (((/* implicit */long long int) (unsigned char)161))));
                            var_13 -= ((/* implicit */signed char) max((((/* implicit */unsigned int) ((4202300194U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)110)))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_2 [3U])))) : (((unsigned int) var_7))))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                arr_12 [i_4] [i_1 + 3] [4LL] [i_2 - 1] [(_Bool)1] [i_2 - 1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) | (arr_1 [i_0])));
                                arr_13 [i_3] [i_3] [(unsigned short)13] [i_3] [(signed char)14] [i_3] [(unsigned short)13] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)146))));
                            }
                            var_14 = ((/* implicit */short) ((((/* implicit */_Bool) 6825975002374332719ULL)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2644962152675708160ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)149))) : (var_5)))) ? (((unsigned int) var_5)) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (min((((/* implicit */unsigned int) arr_9 [i_3] [i_3] [i_2] [(signed char)15] [i_0] [i_0])), (506373602U)))));
                        }
                    } 
                } 
                var_15 = (-((~(arr_6 [i_1 + 3] [i_1 + 3]))));
            }
        } 
    } 
}
