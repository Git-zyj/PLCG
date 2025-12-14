/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22907
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 2; i_3 < 14; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) var_16);
                                arr_14 [(unsigned char)10] [(unsigned char)10] [i_2] [i_2] [(short)12] [i_2] [i_2] = ((/* implicit */short) ((((16398031083196800846ULL) % (((/* implicit */unsigned long long int) var_10)))) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_16)))))));
                            }
                        } 
                    } 
                } 
                arr_15 [1] = ((/* implicit */_Bool) ((2048712990512750789ULL) - ((~(2048712990512750780ULL)))));
                arr_16 [i_0] [8LL] [(unsigned char)1] = ((/* implicit */long long int) var_13);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_5 = 0; i_5 < 25; i_5 += 3) 
    {
        var_18 = ((/* implicit */long long int) var_5);
        var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned int) min(((+(((/* implicit */int) var_4)))), ((-(((/* implicit */int) (unsigned char)202))))))) != (var_8)));
    }
}
