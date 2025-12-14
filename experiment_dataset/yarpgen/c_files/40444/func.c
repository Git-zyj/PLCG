/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40444
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((long long int) max((4021244528955360694ULL), (((/* implicit */unsigned long long int) (unsigned short)2884))))))));
                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((unsigned char) (short)16631)))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 1; i_2 < 17; i_2 += 4) 
                {
                    var_18 ^= ((/* implicit */int) ((unsigned long long int) var_13));
                    arr_8 [4U] [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((short) ((long long int) var_0)));
                    arr_9 [i_2] [(_Bool)1] [i_2] = ((/* implicit */int) var_6);
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        arr_12 [10LL] [(signed char)9] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) ((((unsigned long long int) var_11)) >= (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_1) < (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))) - (((((/* implicit */_Bool) var_6)) ? (var_1) : (var_13))))))));
                        arr_13 [i_0] [i_2] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((short) ((unsigned long long int) var_13)));
                        var_19 ^= ((/* implicit */signed char) var_14);
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 1; i_4 < 18; i_4 += 2) 
                    {
                        arr_18 [i_2] [(signed char)19] [8U] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) var_6)) != (var_14)));
                        var_20 = ((/* implicit */unsigned int) var_8);
                        var_21 = ((/* implicit */signed char) ((unsigned char) var_3));
                    }
                }
            }
        } 
    } 
    var_22 -= ((/* implicit */unsigned char) var_13);
    var_23 = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) ((short) var_5)))) << (((((((/* implicit */_Bool) (unsigned short)62644)) ? (var_6) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)2884)) % (((/* implicit */int) (unsigned short)2891))))))) - (2070730707U)))));
    /* LoopSeq 1 */
    for (long long int i_5 = 0; i_5 < 17; i_5 += 2) 
    {
        arr_21 [i_5] [15ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((unsigned int) var_10))) != (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) var_0)))))) | (((var_12) / (((/* implicit */long long int) var_13))))))));
        var_24 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */unsigned int) var_3)) == (var_4))));
        arr_22 [8LL] = ((((/* implicit */long long int) var_6)) <= (((long long int) (short)16631)));
    }
}
