/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208867
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
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) min((0LL), (((/* implicit */long long int) (unsigned short)8355)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 11; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) (-(arr_5 [i_0] [i_1] [i_1] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_2 [i_1])) < (((/* implicit */int) (unsigned char)22)))))) : (((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_3 [i_0] [i_0] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8246)))))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_19 = ((-5270726360971916963LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9396))));
                                var_20 *= ((/* implicit */unsigned int) ((long long int) max((((/* implicit */unsigned char) ((_Bool) (unsigned char)62))), (arr_4 [i_4] [i_3]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) (~(var_0)));
}
