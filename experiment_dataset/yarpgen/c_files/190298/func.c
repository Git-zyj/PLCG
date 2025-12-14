/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190298
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 4; i_3 < 19; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_10 &= ((/* implicit */unsigned short) (~(((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), (min((arr_3 [i_0]), (((/* implicit */unsigned char) (_Bool)1)))))))));
                                arr_12 [i_0] [i_1] [i_3] [i_2] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (~(((/* implicit */int) var_8))))), (max((((long long int) (_Bool)1)), (((/* implicit */long long int) (_Bool)1))))));
                                var_11 += ((/* implicit */long long int) min(((((-(((/* implicit */int) (unsigned char)23)))) / (((/* implicit */int) (!(var_7)))))), (min(((~(((/* implicit */int) var_5)))), ((~(((/* implicit */int) (unsigned short)30467))))))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [9] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-((+(((/* implicit */int) var_7))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (_Bool)1))))) : ((+(((long long int) (unsigned char)90))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) 0LL);
    var_13 = max(((unsigned char)101), (max(((unsigned char)180), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 8LL))))))));
}
