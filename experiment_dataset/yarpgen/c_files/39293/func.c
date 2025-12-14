/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39293
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
    var_18 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (unsigned short)16383)), (min((((/* implicit */unsigned int) min(((unsigned short)16383), ((unsigned short)2048)))), (min((((/* implicit */unsigned int) (unsigned short)49152)), (1097575770U)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [(_Bool)1] [i_1] [i_1] = ((/* implicit */_Bool) (unsigned short)63488);
                    arr_8 [(_Bool)1] [i_1] [i_2] = ((/* implicit */unsigned int) (_Bool)1);
                }
            } 
        } 
    } 
    var_19 = max((4146709659U), (min((3197391525U), (((/* implicit */unsigned int) max(((unsigned short)49152), (((/* implicit */unsigned short) (_Bool)1))))))));
    var_20 = ((/* implicit */_Bool) 4294967295U);
    var_21 = (_Bool)1;
}
