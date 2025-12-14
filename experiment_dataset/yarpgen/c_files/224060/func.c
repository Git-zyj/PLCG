/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224060
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
    var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((short) min((var_13), (((/* implicit */unsigned long long int) (unsigned short)55682))))))));
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) var_3))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 3; i_2 < 13; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        {
                            arr_12 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (!((!(((/* implicit */_Bool) var_3))))))) + (2052486423)));
                            arr_13 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned int) 16989687030436814384ULL));
                            arr_14 [12U] [i_2] [12U] [i_0] [15U] = ((/* implicit */int) var_5);
                        }
                    } 
                } 
                var_19 += ((/* implicit */signed char) var_3);
            }
        } 
    } 
}
