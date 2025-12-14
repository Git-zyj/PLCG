/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39340
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned short i_3 = 1; i_3 < 11; i_3 += 4) 
                {
                    for (unsigned int i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        {
                            var_17 &= ((((/* implicit */_Bool) arr_4 [(unsigned char)12] [i_4] [i_4] [(unsigned short)12])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_4] [i_3 - 1] [i_3 + 2] [i_3 + 1])) ? (((/* implicit */int) arr_6 [i_4] [i_3 - 1] [i_3 - 1] [i_3 + 1])) : (((/* implicit */int) arr_6 [i_4] [i_3 + 1] [i_3 + 2] [i_3 - 1]))))) : (min((((/* implicit */unsigned long long int) 0U)), (0ULL))));
                            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (~(((min((0ULL), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_1] [i_1] [i_4] [i_4])))) & (((/* implicit */unsigned long long int) ((6618535321801341116LL) | (((/* implicit */long long int) ((/* implicit */int) var_14)))))))))))));
                            arr_12 [i_4] [10LL] [i_0] [i_0] [i_4] |= ((/* implicit */long long int) 16ULL);
                            var_19 = ((/* implicit */signed char) (unsigned short)16400);
                            var_20 = ((/* implicit */_Bool) (-(max((((((/* implicit */_Bool) (unsigned char)213)) ? (arr_4 [i_3 - 1] [i_1] [i_1] [i_0]) : (var_0))), (((/* implicit */long long int) var_14))))));
                        }
                    } 
                } 
            } 
            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (0U)))) ? (max((min((4294967295U), (0U))), (((/* implicit */unsigned int) var_11)))) : (4294967295U)));
            /* LoopNest 3 */
            for (unsigned short i_5 = 0; i_5 < 13; i_5 += 3) 
            {
                for (long long int i_6 = 0; i_6 < 13; i_6 += 4) 
                {
                    for (unsigned short i_7 = 0; i_7 < 13; i_7 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */long long int) var_4);
                            var_23 = ((/* implicit */long long int) max((var_23), (((((/* implicit */_Bool) 2U)) ? (((/* implicit */long long int) 4294967271U)) : (7696779764538793767LL)))));
                            var_24 = ((/* implicit */long long int) ((((/* implicit */long long int) var_5)) >= (max((((long long int) (unsigned char)60)), (((/* implicit */long long int) (signed char)114))))));
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [(unsigned char)7] [i_1] [(signed char)9] [0LL])) ? (((((/* implicit */_Bool) max((18012199486226432LL), (((/* implicit */long long int) arr_9 [i_0] [i_0] [i_0] [(unsigned char)9] [i_7]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 7830497719158871631ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967293U)))) : ((-9223372036854775807LL - 1LL)))) : (max((((((/* implicit */_Bool) arr_0 [i_6] [i_0])) ? (4908010680024793785LL) : (var_2))), (((/* implicit */long long int) arr_6 [i_1] [i_1] [i_1] [i_1]))))));
                        }
                    } 
                } 
            } 
        }
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [5U])), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_21 [(unsigned char)2] [i_0] [(unsigned char)2] [(signed char)4] [i_0])) : (((/* implicit */int) var_13))))))) ? (((((15U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34060))))) ? (((/* implicit */unsigned long long int) var_10)) : (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned short)58049)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_14), (((/* implicit */unsigned char) var_11))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_1)))))));
    }
    var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) min((var_0), (-8899833296788523884LL))))));
}
