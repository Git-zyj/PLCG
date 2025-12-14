/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192530
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
    var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) max((min((((/* implicit */int) min((((/* implicit */short) var_1)), (var_2)))), ((-(((/* implicit */int) var_1)))))), (max((((/* implicit */int) var_11)), (min((((/* implicit */int) var_11)), (0))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            arr_5 [i_0] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) var_0)))));
            var_13 = ((/* implicit */int) (unsigned char)142);
            arr_6 [i_0] = ((var_8) || (((/* implicit */_Bool) ((var_5) | (((/* implicit */int) arr_3 [i_0] [i_1]))))));
        }
        /* LoopSeq 2 */
        for (unsigned char i_2 = 1; i_2 < 20; i_2 += 1) 
        {
            var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) 20))));
            var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_1 [i_2 + 2] [i_2 - 1])))))));
            /* LoopSeq 1 */
            for (int i_3 = 0; i_3 < 23; i_3 += 1) 
            {
                var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) var_0))));
                var_17 = ((/* implicit */long long int) ((1873619591191535612ULL) / (((/* implicit */unsigned long long int) 2510733338U))));
                var_18 |= ((/* implicit */unsigned char) arr_4 [i_2 - 1] [i_2 + 1] [i_2 + 2]);
            }
            var_19 |= ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_1)))));
        }
        for (unsigned char i_4 = 4; i_4 < 19; i_4 += 4) 
        {
            arr_16 [i_0] |= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(1560682529)))) ? ((-(((/* implicit */int) var_2)))) : (((/* implicit */int) arr_7 [i_0] [i_4]))));
            /* LoopNest 2 */
            for (unsigned char i_5 = 0; i_5 < 23; i_5 += 2) 
            {
                for (int i_6 = 0; i_6 < 23; i_6 += 4) 
                {
                    {
                        arr_21 [i_0] [i_4 + 4] [i_4 + 4] = ((/* implicit */short) ((((/* implicit */int) arr_4 [i_4 - 2] [i_4 - 2] [i_4 + 2])) >> (((/* implicit */int) arr_4 [i_4 - 2] [i_4 - 2] [i_4 + 1]))));
                        var_20 -= ((/* implicit */long long int) (-(((/* implicit */int) ((_Bool) (unsigned char)77)))));
                        var_21 = ((/* implicit */long long int) (-(1873619591191535612ULL)));
                        arr_22 [i_0] [i_0] [i_4] [i_5] [i_6] = ((/* implicit */_Bool) (-((-(((/* implicit */int) (_Bool)1))))));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (unsigned char i_7 = 0; i_7 < 23; i_7 += 1) 
        {
            for (unsigned int i_8 = 0; i_8 < 23; i_8 += 2) 
            {
                {
                    arr_28 [(unsigned char)16] [(unsigned char)16] [i_8] [(_Bool)1] |= ((/* implicit */short) (unsigned char)143);
                    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((signed char) arr_23 [i_0] [i_7])))));
                    var_23 += ((/* implicit */int) ((arr_15 [8ULL] [i_8]) && (((/* implicit */_Bool) arr_26 [i_0] [i_7]))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_9 = 0; i_9 < 24; i_9 += 2) 
    {
        arr_32 [i_9] &= ((/* implicit */long long int) (unsigned char)16);
        var_24 += ((/* implicit */unsigned long long int) arr_29 [i_9] [i_9]);
        var_25 ^= ((/* implicit */int) 6583856871936714599LL);
    }
}
