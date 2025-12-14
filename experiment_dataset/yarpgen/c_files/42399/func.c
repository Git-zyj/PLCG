/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42399
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
    var_12 = ((/* implicit */unsigned long long int) (-(((((((/* implicit */int) var_1)) < (var_10))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (min((var_4), (((/* implicit */long long int) var_9))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 4; i_1 < 9; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned char i_3 = 2; i_3 < 8; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_3] [i_2] [i_2] [i_1] [i_1] &= ((/* implicit */_Bool) (~(((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)160))) < (-6122234019672192636LL))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) - (arr_7 [i_0] [i_1] [i_1] [i_3]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_9 [i_0] [i_0] [i_0])))))))));
                            /* LoopSeq 2 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                arr_15 [i_2] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((long long int) arr_4 [i_2] [i_3] [i_2]))))) ? (((var_4) / (((((/* implicit */_Bool) arr_4 [i_2] [i_1] [i_1])) ? (-6122234019672192636LL) : (6122234019672192646LL))))) : (-9223372036854775786LL)));
                                arr_16 [i_1] [i_2] [i_2] [i_1] [i_2] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2] [i_2 - 2] [i_2]))) != (var_4))))));
                                var_13 &= ((/* implicit */unsigned short) ((max(((~(var_10))), (((/* implicit */int) arr_9 [i_1] [i_1] [i_0])))) != ((((((~(0))) + (2147483647))) >> (((((/* implicit */int) ((unsigned char) arr_7 [i_0] [i_0] [i_1] [i_4]))) - (239)))))));
                            }
                            for (unsigned short i_5 = 2; i_5 < 9; i_5 += 4) 
                            {
                                arr_19 [i_0] [i_1] [i_0] [i_0] [i_5] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((unsigned long long int) arr_4 [i_2] [i_2 - 2] [i_2])) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))));
                                arr_20 [i_0] [i_0] [i_0] [i_2] [i_0] = ((/* implicit */int) var_6);
                                var_14 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) ((var_1) || (((/* implicit */_Bool) -3)))))))));
                            }
                        }
                    } 
                } 
                var_15 = ((/* implicit */signed char) ((unsigned char) (~(14))));
                /* LoopSeq 1 */
                for (signed char i_6 = 0; i_6 < 11; i_6 += 4) 
                {
                    var_16 = ((/* implicit */unsigned short) var_8);
                    var_17 = ((/* implicit */int) ((signed char) arr_7 [i_0] [i_0] [i_0] [i_0]));
                    arr_23 [i_6] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_1 - 4] [i_1 - 4] [i_1 - 4] [i_1])) / (((/* implicit */int) arr_10 [i_1 - 4] [i_1 - 4] [i_1 - 4] [i_1]))))) | (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1 - 4] [i_1 - 4] [i_1 - 4] [i_6]))) : (6122234019672192635LL)))));
                }
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned char i_8 = 0; i_8 < 11; i_8 += 3) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (signed char i_9 = 2; i_9 < 9; i_9 += 2) 
                            {
                                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (~(((/* implicit */int) var_1)))))));
                                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) max((((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_9 - 2] [i_9] [i_9])) || (((/* implicit */_Bool) arr_13 [i_8] [i_9] [i_9 - 2] [i_9] [i_8]))))), (((((/* implicit */_Bool) ((long long int) 3118809744U))) ? (0) : ((-(((/* implicit */int) arr_24 [i_0] [i_1] [i_9])))))))))));
                            }
                            for (signed char i_10 = 2; i_10 < 8; i_10 += 2) 
                            {
                                var_20 -= ((/* implicit */unsigned short) 65535U);
                                var_21 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_10])) ? (((/* implicit */unsigned long long int) arr_28 [i_10] [i_10] [i_7] [i_10 + 2] [i_7] [i_1 - 4])) : (arr_22 [i_0] [i_1] [i_7] [i_10 + 2]))));
                                arr_33 [i_7] = ((/* implicit */_Bool) (signed char)(-127 - 1));
                            }
                            var_22 *= ((/* implicit */signed char) var_2);
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) var_9))));
    var_24 = ((/* implicit */signed char) ((4294967287U) == (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((var_5) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8))))) : (3118809744U)))));
}
