/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192047
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
    var_14 = ((unsigned short) var_2);
    var_15 = var_12;
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 24; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */short) max((((/* implicit */long long int) (((~(((/* implicit */int) var_6)))) | ((+(((/* implicit */int) (unsigned char)0))))))), (((((/* implicit */long long int) arr_2 [i_1 - 1] [i_1 - 1] [i_1 - 1])) | (max((arr_5 [i_1]), (((/* implicit */long long int) (unsigned short)5836))))))));
                    arr_8 [i_1] [i_1] [(unsigned short)21] = ((/* implicit */short) (unsigned short)5836);
                    var_17 = ((/* implicit */unsigned long long int) ((unsigned char) ((unsigned char) ((((/* implicit */int) (unsigned short)5836)) + (((/* implicit */int) (unsigned short)59700))))));
                    arr_9 [i_1] = ((/* implicit */unsigned char) arr_6 [i_0] [i_0] [(signed char)14] [i_1]);
                }
            } 
        } 
    } 
    var_18 -= ((/* implicit */signed char) var_6);
}
