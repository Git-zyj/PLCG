/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216752
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
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    var_11 = ((/* implicit */unsigned short) (-(var_9)));
                    /* LoopSeq 2 */
                    for (short i_3 = 1; i_3 < 18; i_3 += 4) 
                    {
                        var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)55314)) ? (((/* implicit */int) (unsigned short)18311)) : (((/* implicit */int) (unsigned short)10241))));
                        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)55295)) ? (((/* implicit */int) (unsigned short)30463)) : (((/* implicit */int) (unsigned short)55286))));
                        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_1] [i_1 - 1] [i_1 + 3] [i_2])) ? (((/* implicit */int) (unsigned short)55275)) : (arr_11 [i_0] [i_1 - 1] [i_2] [i_3])));
                    }
                    for (int i_4 = 2; i_4 < 18; i_4 += 4) 
                    {
                        var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(var_9))))));
                        arr_15 [i_4] [i_2] [i_2] [i_0] |= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)31034)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_4 - 1]))) : (arr_10 [i_4 + 2] [i_4 + 2])));
                    }
                    var_16 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) arr_9 [i_0])) ? (((/* implicit */unsigned long long int) var_10)) : (10499078579030883421ULL))));
                }
                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) min(((~(((/* implicit */int) max(((unsigned short)24190), (((/* implicit */unsigned short) (_Bool)1))))))), (((((/* implicit */_Bool) (short)-4)) ? (((/* implicit */int) (short)24757)) : (((/* implicit */int) arr_3 [i_0] [i_1 + 1] [i_0])))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_7))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) max((var_9), (var_9)))) : (var_10)))));
    var_19 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)65535)))));
}
