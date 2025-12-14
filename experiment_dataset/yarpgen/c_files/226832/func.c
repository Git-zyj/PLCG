/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226832
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
    var_20 = ((((((/* implicit */int) var_10)) | (min((var_18), (((/* implicit */int) var_10)))))) / (((((/* implicit */int) max((((/* implicit */short) (signed char)123)), ((short)13557)))) - (((/* implicit */int) var_9)))));
    var_21 = min((16957235564138808820ULL), (16957235564138808815ULL));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_22 |= ((/* implicit */signed char) min((((/* implicit */int) arr_0 [i_1])), (((int) (unsigned short)62573))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                arr_13 [i_3] [i_0] [i_3] [16LL] [i_1] [i_0] [i_3] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) >= (min((((/* implicit */unsigned long long int) -6520405699515095004LL)), (16957235564138808829ULL)))));
                                var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_2] [i_4])) - (((/* implicit */int) (signed char)50)))))))));
                                var_24 = ((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0]);
                            }
                        } 
                    } 
                } 
                var_25 += ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-83)) | (((/* implicit */int) (signed char)29))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) (signed char)-40))));
}
