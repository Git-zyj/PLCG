/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239623
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 24; i_1 += 4) 
        {
            {
                arr_8 [18U] [i_1 - 1] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((unsigned int) arr_1 [i_1 + 1] [i_0]))), ((~(arr_1 [i_0] [i_1 - 2])))));
                arr_9 [i_0] [i_1] [i_0] = min((((unsigned int) ((arr_5 [16LL]) / (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))), (((/* implicit */unsigned int) (~(((/* implicit */int) max(((unsigned short)65535), ((unsigned short)896))))))));
                var_19 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_1 [i_0] [i_1])) < (((((/* implicit */unsigned long long int) 3149613375010765696LL)) * (2199023255536ULL))))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (long long int i_4 = 1; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) ((unsigned short) (unsigned short)40825));
                                arr_19 [i_0] [i_1] [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18981))) | (4194303ULL));
                                arr_20 [i_0] [i_1 - 1] [4LL] [i_3] = ((105553116266496LL) + (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)0))))));
                                var_21 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) 6494281153694144424ULL)) || (((/* implicit */_Bool) arr_2 [(unsigned short)0])))))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) + (2270514369313507894ULL)))) ? (3953969792U) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_16)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) var_13);
}
