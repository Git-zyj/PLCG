/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2167
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
    var_11 = ((/* implicit */unsigned int) (-(max((-8927801278187909669LL), (((/* implicit */long long int) 2621798445U))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (int i_2 = 3; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */long long int) ((((arr_4 [i_0 - 1] [i_0 + 1]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)38300))))) > (((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 + 2])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (short)19718)))))));
                                var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)57626)) | (((/* implicit */int) (signed char)17)))))));
                            }
                        } 
                    } 
                    arr_14 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-19719)) ? (((/* implicit */int) (short)5075)) : (((/* implicit */int) (short)-19720))));
                    arr_15 [i_0] [i_1] [i_2] = ((/* implicit */int) var_5);
                    var_14 = ((/* implicit */int) ((921771406794551828ULL) & (((/* implicit */unsigned long long int) ((int) var_7)))));
                }
            } 
        } 
    } 
}
