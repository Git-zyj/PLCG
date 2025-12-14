/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206647
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
    var_11 += ((/* implicit */unsigned long long int) var_10);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */_Bool) arr_0 [i_0 - 1]);
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (unsigned short i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */signed char) max((min(((((_Bool)0) ? (12387433526192741475ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)105))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) var_5)), (var_10)))))), (min((12387433526192741475ULL), (((/* implicit */unsigned long long int) (_Bool)1))))));
                                arr_15 [i_0] [i_1] [i_0] [i_3] [i_3] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_0 [i_0 + 1]), (((/* implicit */unsigned short) var_5))))) ? (((arr_10 [i_0 + 2] [(unsigned char)4] [i_3] [i_3]) / (((/* implicit */unsigned long long int) min((var_8), (((/* implicit */long long int) var_5))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_14 [i_3] [i_1] [i_0 + 2] [i_3 + 2]), (((/* implicit */unsigned short) var_6))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 1) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            arr_22 [i_5] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_19 [4ULL] [i_0 - 1] [i_0] [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 1]))) : (max((((/* implicit */long long int) var_9)), (var_8))))), (((/* implicit */long long int) arr_20 [0U] [i_1] [(signed char)4] [i_6]))));
                            var_14 = ((/* implicit */_Bool) arr_3 [i_0 + 2]);
                        }
                    } 
                } 
            }
        } 
    } 
}
