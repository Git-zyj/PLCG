/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34871
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] [11U] = min((3529491144U), (941792209U));
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned char) arr_5 [i_2] [(_Bool)0] [8U] [(short)6]);
                    var_12 = ((/* implicit */long long int) min((((/* implicit */unsigned int) var_6)), (((arr_1 [(_Bool)1] [i_1]) ? ((+(var_9))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_2])))))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) var_10)) : ((((_Bool)1) ? ((-(((/* implicit */int) var_11)))) : (((740690465) / (((/* implicit */int) (_Bool)1))))))));
}
