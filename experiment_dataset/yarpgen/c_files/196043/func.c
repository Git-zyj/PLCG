/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196043
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) 4016664766U);
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 18; i_3 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)120))) - ((+((+(3642934451846548433LL)))))));
                            var_15 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_0 [i_0])) <= ((~(((((/* implicit */_Bool) var_0)) ? (1365033955578347309ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
                            arr_10 [i_3] = ((/* implicit */unsigned char) 0ULL);
                            arr_11 [i_3] [i_3] [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) ((min((14599682948086287647ULL), (3847061125623263969ULL))) >= (((/* implicit */unsigned long long int) (-(1335176409))))));
                        }
                    } 
                } 
                var_16 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned int) arr_9 [i_0]))))) ? (min((((/* implicit */unsigned long long int) (_Bool)0)), (arr_4 [i_0] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))))) ? (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) 14599682948086287646ULL)) || (((/* implicit */_Bool) var_1)))))))) : (arr_3 [i_1] [i_1] [i_0])));
                arr_12 [i_1] [i_1] [i_1] = ((/* implicit */int) ((unsigned long long int) (~(-1335176427))));
                var_17 = var_6;
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) var_10);
    var_19 = ((/* implicit */unsigned char) var_8);
}
