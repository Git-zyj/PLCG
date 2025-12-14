/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233438
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
    var_12 = ((/* implicit */unsigned long long int) (short)16320);
    var_13 = ((/* implicit */unsigned short) 8415836785002861126LL);
    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (((~(8415836785002861133LL))) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)243))))) || (((/* implicit */_Bool) -8415836785002861112LL)))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 8415836785002861130LL)) - ((+(max((((/* implicit */unsigned long long int) arr_3 [i_0])), (var_6)))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            arr_11 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) ((((/* implicit */_Bool) -8415836785002861136LL)) || (((/* implicit */_Bool) (unsigned short)34207))))) : (((/* implicit */int) (unsigned char)0)))))));
                            var_16 = (_Bool)1;
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) (short)-3406)))))) > (var_5)));
            }
        } 
    } 
}
