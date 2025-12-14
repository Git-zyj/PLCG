/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222221
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
    for (unsigned int i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_10 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min(((-(((/* implicit */int) var_0)))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5))))))) ? (((/* implicit */unsigned long long int) -1669538978907747501LL)) : (arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 2])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned long long int) ((unsigned short) ((signed char) 1669538978907747506LL)));
                                arr_16 [i_0] [i_1] [i_0] [i_3] [(unsigned char)3] [i_1] = ((/* implicit */int) (_Bool)0);
                                var_13 = (!(((((/* implicit */long long int) ((/* implicit */int) var_4))) >= (arr_0 [i_4 - 4] [i_1]))));
                                arr_17 [i_4] [i_1] [i_3] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) arr_4 [i_4 - 3]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned char) ((short) min((1669538978907747514LL), (((/* implicit */long long int) (_Bool)1)))));
    var_15 = ((/* implicit */unsigned int) (_Bool)0);
    var_16 = ((/* implicit */int) var_10);
    var_17 = ((/* implicit */unsigned short) var_10);
}
