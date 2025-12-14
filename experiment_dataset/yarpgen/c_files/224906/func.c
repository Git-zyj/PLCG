/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224906
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 23; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 22; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */unsigned short) (+(min((((/* implicit */unsigned int) arr_4 [i_0] [i_3] [i_3] [i_0])), (min((((/* implicit */unsigned int) var_0)), (536649456U)))))));
                                arr_14 [i_0] [i_0] [i_2] [i_3] [i_4] [i_2] [(unsigned short)17] = ((/* implicit */unsigned char) ((_Bool) 991000000277222223ULL));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_9 [i_0] [i_0] [i_2] [i_2])), (var_17)))) < (var_4))))));
                }
            } 
        } 
    } 
    var_19 |= ((/* implicit */_Bool) var_1);
    var_20 = ((/* implicit */unsigned int) var_3);
}
