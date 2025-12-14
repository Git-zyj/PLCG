/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204595
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
    var_12 = ((/* implicit */unsigned char) var_7);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        {
                            arr_9 [i_0] [i_3] [i_2] [i_3] = (!(((/* implicit */_Bool) arr_8 [i_0] [i_1 + 2] [i_2] [i_3] [i_3])));
                            arr_10 [i_3] = (~(max((((/* implicit */unsigned long long int) ((3082175947761922256ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(short)8])))))), (((((/* implicit */_Bool) 11908737276460816717ULL)) ? (((/* implicit */unsigned long long int) -1581052952)) : (4854132976172792443ULL))))));
                            var_13 &= ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_2 [i_1] [i_1 + 2])) ? (arr_2 [(_Bool)0] [i_1 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) (signed char)-7))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */long long int) max((1587724797), (((/* implicit */int) (signed char)8))));
            }
        } 
    } 
}
