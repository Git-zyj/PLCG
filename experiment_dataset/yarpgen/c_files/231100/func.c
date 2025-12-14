/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231100
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */_Bool) 1537177233);
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 4; i_2 < 23; i_2 += 3) 
                {
                    for (unsigned char i_3 = 1; i_3 < 24; i_3 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) max(((short)7583), (((/* implicit */short) (unsigned char)28)))))));
                            arr_11 [i_3] [i_3] [i_2] = 124520937668045988ULL;
                            var_21 &= ((/* implicit */signed char) ((12871557507847198728ULL) <= (5575186565862352895ULL)));
                        }
                    } 
                } 
                arr_12 [i_1] [i_1] = ((/* implicit */short) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) > (var_2))));
            }
        } 
    } 
    var_22 |= ((/* implicit */_Bool) (+(((/* implicit */int) (((+(-8338103759791313884LL))) <= (((9014123307732255800LL) % (((/* implicit */long long int) ((/* implicit */int) var_3))))))))));
}
