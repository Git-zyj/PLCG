/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27876
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
    var_10 = (short)18007;
    var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) var_9))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_12 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((2190433320960ULL) != (5ULL)))) * (((/* implicit */int) (unsigned short)11179))));
                                arr_16 [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)88)) ? (((/* implicit */int) (_Bool)1)) : (arr_12 [i_0] [i_0] [i_2])))) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (((((/* implicit */_Bool) 288230376151711743LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)20))))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_1] [i_2] [i_2] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)34)) | (((/* implicit */int) var_9))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (short)29892))))) : (((((/* implicit */_Bool) 4227858432ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (1157958046403980023LL)))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */short) ((_Bool) 2305843009213693951ULL));
}
