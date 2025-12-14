/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206320
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
    var_10 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)931)) ? (-474931831) : (474931831)));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                for (unsigned char i_3 = 1; i_3 < 20; i_3 += 4) 
                {
                    {
                        var_11 ^= ((/* implicit */int) (unsigned char)255);
                        var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_3 - 1] [i_1 - 1])) || (((/* implicit */_Bool) arr_3 [i_2] [i_1] [i_3]))));
                        var_13 *= ((/* implicit */unsigned char) max((arr_3 [i_0] [8] [i_3 + 3]), (((/* implicit */short) (unsigned char)255))));
                    }
                } 
            } 
        } 
        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) var_3))));
    }
    for (long long int i_4 = 0; i_4 < 15; i_4 += 3) 
    {
        var_15 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (unsigned char)3)), ((unsigned short)29476)));
        var_16 = ((/* implicit */unsigned long long int) arr_12 [i_4]);
        var_17 *= var_8;
    }
    var_18 = ((/* implicit */int) 6490001969508459665ULL);
}
