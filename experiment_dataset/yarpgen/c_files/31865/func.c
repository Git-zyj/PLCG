/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31865
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
    var_17 = ((/* implicit */short) var_4);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)65523)) % (((/* implicit */int) (unsigned short)2))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        {
                            var_18 ^= ((/* implicit */unsigned short) var_4);
                            arr_14 [i_2] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((-8171421759611949124LL) | (((/* implicit */long long int) ((/* implicit */int) (short)21243)))));
                        }
                    } 
                } 
                arr_15 [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) max(((short)22056), (((/* implicit */short) (signed char)-82)))))));
            }
        } 
    } 
}
