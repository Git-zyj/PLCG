/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211272
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
    for (signed char i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 16; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    {
                        var_11 = ((/* implicit */long long int) arr_6 [i_0] [i_0] [i_3]);
                        var_12 |= ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) -9093730567842946939LL)) >= (arr_7 [i_1])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) & (18446744073709551602ULL)))));
                        var_13 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_2]))));
                        var_14 ^= ((/* implicit */signed char) ((int) max((((/* implicit */long long int) max(((short)26342), (((/* implicit */short) var_9))))), (-4814058989751514372LL))));
                    }
                } 
            } 
        } 
        var_15 -= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (-(9093730567842946938LL)))), (max((arr_5 [i_0 + 1]), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (signed char)-37)), (arr_4 [i_0 - 1] [i_0]))))))));
        var_16 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_7 [i_0]) : (arr_7 [i_0])))) || (((/* implicit */_Bool) min((15ULL), (var_3)))))));
    }
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 23; i_4 += 1) 
    {
        var_17 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -9093730567842946942LL))));
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((18446744073709551609ULL) < (var_3))))) >= ((-(arr_12 [i_4] [i_4])))));
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 19; i_5 += 1) 
    {
        for (long long int i_6 = 0; i_6 < 19; i_6 += 1) 
        {
            for (long long int i_7 = 0; i_7 < 19; i_7 += 3) 
            {
                {
                    arr_19 [i_5] [i_5] [i_6] [i_7] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)5)), (10161962868459608524ULL)))) && (((/* implicit */_Bool) max((arr_11 [i_5]), (12721346840630028020ULL)))))));
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 19; i_8 += 1) 
                    {
                        for (signed char i_9 = 2; i_9 < 18; i_9 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) 18446744073709551604ULL))));
                                var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_18 [i_8] [i_6] [i_7] [i_5])) >= (((((/* implicit */_Bool) (-(((/* implicit */int) arr_23 [i_5]))))) ? (((/* implicit */unsigned long long int) ((arr_12 [i_6] [i_8]) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23153)))))) : (((((/* implicit */_Bool) arr_23 [i_5])) ? (var_10) : (((/* implicit */unsigned long long int) var_1))))))));
                                var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) var_5))))))))));
                                var_22 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) arr_12 [i_9 + 1] [i_9 - 2]))) ? ((~(var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23156)))));
                                var_23 = ((/* implicit */short) max((((/* implicit */long long int) (+(((/* implicit */int) arr_22 [i_9 - 1] [i_9 + 1] [i_9 - 1] [i_9 - 2] [i_9] [i_9]))))), (min((((/* implicit */long long int) arr_22 [i_9 + 1] [i_9 - 2] [i_9 - 1] [i_9 + 1] [i_9] [i_9 - 2])), (var_1)))));
                            }
                        } 
                    } 
                    arr_24 [i_5] [i_6] = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) 6ULL))) >> (((min((((/* implicit */long long int) ((16390349537914224943ULL) >= (((/* implicit */unsigned long long int) -9093730567842946939LL))))), (var_6))) + (4965642363735740262LL)))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 9ULL)) ? (((/* implicit */int) (short)-31809)) : (((/* implicit */int) (unsigned short)42374))))))))) ^ (((long long int) min((((/* implicit */long long int) 32767)), (-7672224970997532908LL)))))))));
}
