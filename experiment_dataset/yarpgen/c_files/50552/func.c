/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50552
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
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (short)31685))));
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (_Bool)1))));
        var_16 &= ((/* implicit */signed char) (unsigned char)76);
        /* LoopNest 3 */
        for (short i_1 = 1; i_1 < 24; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    {
                        arr_8 [i_1] [i_1 + 1] [i_2] [i_1] = ((/* implicit */signed char) 76838569U);
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            arr_13 [i_4] [i_3] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) (_Bool)1);
                            var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) 13443810167395363130ULL))));
                        }
                        for (long long int i_5 = 0; i_5 < 25; i_5 += 3) 
                        {
                            arr_17 [i_0] [i_1] [(unsigned char)11] [i_3] [i_0] = ((/* implicit */unsigned char) (unsigned short)65535);
                            arr_18 [i_1] [i_1] [(short)22] [(_Bool)1] [(_Bool)1] [i_1] [(_Bool)1] = ((/* implicit */unsigned char) (signed char)1);
                        }
                        var_18 = ((/* implicit */long long int) (_Bool)1);
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_6 = 0; i_6 < 21; i_6 += 2) 
    {
        var_19 = ((/* implicit */unsigned int) (_Bool)1);
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (_Bool)1))));
    }
    var_21 = ((/* implicit */unsigned short) var_4);
}
