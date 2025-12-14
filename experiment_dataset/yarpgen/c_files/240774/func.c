/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240774
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 4; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) var_2);
                                var_18 = ((/* implicit */short) arr_6 [(unsigned char)17] [(_Bool)1] [(_Bool)1]);
                                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) arr_4 [i_0 - 2] [14U]))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) (((_Bool)1) && (((/* implicit */_Bool) min((arr_10 [i_0] [(signed char)12] [8ULL] [i_1] [i_2] [14ULL]), (((/* implicit */unsigned long long int) ((arr_10 [(short)3] [(short)3] [(_Bool)1] [(_Bool)1] [i_0] [i_0]) <= (2147483392ULL)))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) ((unsigned long long int) var_12));
}
