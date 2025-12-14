/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212655
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
    var_16 = (~(min((14720245588248989332ULL), (min((((/* implicit */unsigned long long int) (unsigned short)0)), (1248188749771946910ULL))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_9)) || (var_11))) ? (((/* implicit */unsigned long long int) arr_3 [4LL] [i_1] [i_1])) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) << (((((/* implicit */int) arr_1 [(unsigned short)7] [i_1 - 2])) - (2258)))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (~(((unsigned long long int) var_7))));
                    arr_11 [i_0] [(unsigned short)9] [i_0] [i_2] = ((/* implicit */short) ((unsigned long long int) (unsigned char)91));
                    var_17 *= ((/* implicit */unsigned short) ((unsigned char) (!(((/* implicit */_Bool) arr_6 [i_0] [10LL] [(short)2])))));
                }
                /* vectorizable */
                for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    arr_14 [i_0] [i_1 - 1] [i_0] [i_1] = ((((/* implicit */_Bool) ((unsigned char) (_Bool)0))) ? (var_4) : (((/* implicit */unsigned long long int) var_1)));
                    var_18 = ((/* implicit */unsigned int) ((signed char) arr_3 [i_1 - 2] [i_1 + 1] [i_1 - 1]));
                    var_19 -= ((/* implicit */unsigned long long int) (short)11441);
                }
                var_20 &= ((/* implicit */short) arr_12 [i_1] [6] [i_0]);
            }
        } 
    } 
}
