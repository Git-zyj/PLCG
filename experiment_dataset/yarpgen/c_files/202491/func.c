/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202491
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
    var_14 = ((/* implicit */short) ((399726126) == (((/* implicit */int) (short)16320))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_11 [i_2] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_4 [i_2] [i_3])), ((+((~(var_11)))))));
                            arr_12 [i_1] [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) (-(arr_9 [i_1 + 1] [i_2])));
                        }
                    } 
                } 
                var_15 -= ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (signed char)-1)) == ((((_Bool)1) ? (((/* implicit */int) (short)-16317)) : (((/* implicit */int) (unsigned char)255))))))) - (((/* implicit */int) (unsigned short)13))));
                arr_13 [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (+((((_Bool)0) ? (((/* implicit */int) (signed char)54)) : (-1882992186)))))), (min((((/* implicit */unsigned int) max((arr_7 [i_0] [i_1 + 1] [i_1 + 1] [i_0]), (((/* implicit */unsigned short) arr_4 [i_0] [i_1]))))), (((((/* implicit */_Bool) arr_3 [i_1])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))))));
            }
        } 
    } 
}
