/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49385
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_0 [i_1]) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (short)1360))))) : (((arr_3 [i_0] [i_1] [i_0]) - (arr_3 [i_0] [i_1] [i_1])))))) ? (arr_3 [i_0] [i_1] [i_1]) : (((/* implicit */unsigned int) min(((+(((/* implicit */int) var_15)))), (((/* implicit */int) var_3)))))));
                var_18 = ((/* implicit */long long int) (+((-(1791370972772147930ULL)))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) var_7);
    /* LoopNest 3 */
    for (short i_2 = 0; i_2 < 20; i_2 += 1) 
    {
        for (unsigned short i_3 = 3; i_3 < 18; i_3 += 2) 
        {
            for (long long int i_4 = 4; i_4 < 19; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (signed char i_6 = 2; i_6 < 19; i_6 += 1) 
                        {
                            {
                                var_20 = (unsigned char)252;
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_12 [(unsigned char)15] [10ULL] [i_3] [i_5] [1ULL] [(_Bool)1])) >> ((((+(399529133))) - (399529121)))));
                            }
                        } 
                    } 
                    arr_14 [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [(_Bool)1] [6ULL] [i_4 - 3] [(_Bool)1] [i_3 - 2] [3LL])) ? (((/* implicit */int) arr_12 [i_2] [(unsigned char)5] [i_4 - 3] [(signed char)3] [i_3 + 2] [i_4 - 4])) : (((/* implicit */int) arr_12 [(unsigned char)9] [(unsigned char)6] [i_4 - 2] [11U] [i_3 + 2] [i_3]))))) ? ((+(((/* implicit */int) var_1)))) : (((/* implicit */int) ((3120326265U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [14U] [14U] [i_4 - 4] [(signed char)19] [i_3 + 2] [i_3 - 3]))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */_Bool) var_6);
    var_23 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((short)-1360), (((/* implicit */short) var_8))))) ? (((/* implicit */int) (short)1355)) : (((/* implicit */int) ((unsigned char) (signed char)86)))))), ((-(((unsigned int) (unsigned short)62053))))));
}
