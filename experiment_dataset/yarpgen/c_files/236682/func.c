/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236682
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
    var_19 = ((/* implicit */long long int) min(((-((~(var_14))))), (((((/* implicit */int) (unsigned char)242)) | (((/* implicit */int) var_3))))));
    var_20 = ((/* implicit */short) min((5077472429579529903ULL), (((/* implicit */unsigned long long int) ((var_4) | (((/* implicit */long long int) ((/* implicit */int) min(((short)32767), ((short)32760))))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) max((((arr_0 [i_0 - 1]) >> (((arr_3 [i_0 + 2]) + (1076883205))))), (arr_0 [i_0])));
        arr_5 [i_0] = ((/* implicit */unsigned char) max((max((((((/* implicit */int) (short)32747)) >> (((arr_0 [i_0]) - (100846869U))))), (((/* implicit */int) arr_1 [i_0] [i_0])))), (max((max((arr_3 [i_0]), (arr_2 [i_0]))), (((/* implicit */int) ((var_16) < (((/* implicit */int) var_12)))))))));
        arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) arr_3 [i_0]);
        var_21 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)6363)) < (((/* implicit */int) (short)-32765))));
    }
    /* LoopNest 3 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
            {
                {
                    var_22 *= (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_1] [i_1]))))));
                    arr_16 [i_1] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (short)-32748)), (365097814U)));
                    arr_17 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) arr_14 [i_1] [i_2] [i_3] [i_3]);
                }
            } 
        } 
    } 
}
