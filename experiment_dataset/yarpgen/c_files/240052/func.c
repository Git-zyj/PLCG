/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240052
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
    var_20 = ((/* implicit */unsigned char) max((var_20), ((unsigned char)180)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            for (long long int i_2 = 4; i_2 < 18; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */short) ((((/* implicit */long long int) max((0U), (((/* implicit */unsigned int) (unsigned char)190))))) / (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)255))) ^ (((7652858902884246446LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)180)))))))));
                    var_22 = ((/* implicit */long long int) (unsigned char)239);
                    arr_6 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)222)) ^ (((/* implicit */int) max(((unsigned char)48), ((unsigned char)74))))));
                    arr_7 [i_0] [(unsigned char)10] [i_0] [i_0] = ((((/* implicit */int) (unsigned char)87)) ^ (((/* implicit */int) (unsigned short)64493)));
                    arr_8 [i_0] [(short)0] [i_0] [i_0] = ((/* implicit */unsigned char) (short)9932);
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) (unsigned char)199))));
}
