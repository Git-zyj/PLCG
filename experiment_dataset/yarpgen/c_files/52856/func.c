/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52856
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
    for (unsigned short i_0 = 4; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (int i_3 = 1; i_3 < 22; i_3 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */int) (((+(15706623792774538254ULL))) ^ (((((/* implicit */_Bool) min((arr_4 [i_3]), (var_6)))) ? (((var_14) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32148))))) : (15706623792774538273ULL)))));
                            arr_11 [i_3] [(_Bool)1] [i_2] [i_1] [i_2] [(_Bool)1] = var_8;
                        }
                    } 
                } 
                var_18 *= ((/* implicit */unsigned char) min((((((/* implicit */int) (unsigned short)33387)) % (((/* implicit */int) arr_3 [i_0 - 3])))), (min((var_12), (arr_7 [i_0 + 2] [(unsigned char)14] [i_0 - 3] [i_0])))));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) min((((((/* implicit */_Bool) max((-777284188), (((/* implicit */int) var_2))))) ? (var_8) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) - (var_14))))), (((/* implicit */unsigned long long int) max((1870570297), (609932348))))));
}
