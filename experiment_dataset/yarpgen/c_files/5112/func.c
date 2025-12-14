/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5112
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_2 [i_0] |= ((/* implicit */int) (!(((/* implicit */_Bool) var_0))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            var_13 -= ((/* implicit */unsigned short) arr_1 [i_0]);
            arr_5 [i_1] [i_0 + 1] |= 0ULL;
        }
        arr_6 [i_0] [i_0] = ((/* implicit */signed char) (+((+(-2071920675238225003LL)))));
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                for (int i_4 = 3; i_4 < 10; i_4 += 4) 
                {
                    {
                        var_14 |= ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_2)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) arr_3 [i_2] [i_4] [i_4 - 1]))))));
                        arr_17 [i_0] = ((/* implicit */short) 18446744073709551610ULL);
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_5 = 2; i_5 < 14; i_5 += 3) 
    {
        arr_20 [i_5] [i_5] |= ((/* implicit */unsigned int) 5ULL);
        var_15 = ((/* implicit */unsigned long long int) var_7);
        var_16 = ((/* implicit */unsigned int) var_3);
        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) arr_19 [i_5] [i_5]))));
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        arr_23 [i_6] |= ((/* implicit */long long int) ((((/* implicit */_Bool) 1ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) -2328756779077718348LL))));
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_6])) || (((/* implicit */_Bool) 18446744073709551615ULL)))))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 14; i_7 += 3) 
    {
        var_19 = ((18446744073709551596ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))));
        var_20 &= arr_25 [i_7] [i_7];
    }
    var_21 = ((/* implicit */short) ((((((/* implicit */_Bool) var_1)) ? (((16ULL) / (((/* implicit */unsigned long long int) 1850629059162451681LL)))) : (((/* implicit */unsigned long long int) (~(-1850629059162451681LL)))))) == (((/* implicit */unsigned long long int) ((((-1850629059162451681LL) + (9223372036854775807LL))) << (((1850629059162451681LL) - (1850629059162451681LL))))))));
    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)62823)) << (((((/* implicit */int) var_9)) - (45))))))));
    var_23 = ((/* implicit */unsigned int) 15762598695796736LL);
}
