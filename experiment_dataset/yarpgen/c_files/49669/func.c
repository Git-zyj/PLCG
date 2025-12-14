/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49669
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
    var_16 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned int) var_12))))) ? (min((var_5), (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) / (((/* implicit */unsigned long long int) (-(var_9))))));
    var_17 = ((/* implicit */unsigned long long int) max((((_Bool) (!(((/* implicit */_Bool) var_3))))), (((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) ((unsigned long long int) 9223372036854775807LL)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_18 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_6 [i_0] [i_1] [i_1] [i_0]), (((/* implicit */unsigned short) var_2))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_11))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) max((var_19), (arr_3 [i_3] [i_4 + 2])));
                                var_20 ^= ((/* implicit */_Bool) var_1);
                                var_21 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_6 [i_0] [i_0 - 1] [i_3 + 1] [i_4 - 3])) || (((/* implicit */_Bool) -5059641346345881622LL)))) ? (var_10) : (((/* implicit */int) var_15))));
                                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? ((-(((/* implicit */int) arr_4 [i_0 - 1] [i_3 + 1] [i_4 + 1])))) : (((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) var_0))))) >= (((((/* implicit */_Bool) var_1)) ? (-5059641346345881622LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_4] [i_2]))))))))));
                                var_23 = ((unsigned short) ((-5059641346345881622LL) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_5 = 4; i_5 < 16; i_5 += 1) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned long long int) var_1);
                        arr_15 [i_1] [i_5] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1] [i_5] [i_2] [i_5])) ? (arr_13 [i_0] [i_5] [i_2] [i_5 - 3]) : (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */long long int) ((unsigned int) var_11))) : (5059641346345881619LL)));
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_5 - 4] [i_2] [i_1])) ^ (((/* implicit */int) arr_5 [i_1] [i_2] [i_5]))));
                    }
                    for (unsigned int i_6 = 4; i_6 < 16; i_6 += 1) /* same iter space */
                    {
                        arr_18 [i_6 + 1] [i_6] [i_2] [i_6 - 4] [i_0 - 1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((unsigned long long int) arr_10 [i_0] [i_0] [i_0 - 1] [i_6] [i_0] [i_0 - 1]))) ? ((~(-5059641346345881619LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -5059641346345881626LL)))))))) ^ (((/* implicit */long long int) ((arr_10 [i_0 - 1] [i_0] [i_0 - 1] [i_6] [i_0 - 1] [i_6 + 1]) / (15))))));
                        arr_19 [i_0 - 1] [i_6] [i_2] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((var_10) < (((/* implicit */int) arr_6 [i_6 - 2] [i_6] [i_0 - 1] [i_0])))))) % (((((/* implicit */_Bool) arr_6 [i_6 + 1] [i_6] [i_0 - 1] [i_0])) ? (((/* implicit */long long int) var_8)) : (-5059641346345881638LL)))));
                        var_26 *= ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_13)), (((var_3) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))) ? (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (short)-463))))))) : (((((/* implicit */_Bool) arr_1 [i_6 - 1] [i_0 - 1])) ? (((var_3) + (((/* implicit */unsigned long long int) arr_0 [i_0 - 1])))) : (((/* implicit */unsigned long long int) arr_17 [i_0] [i_0] [i_2] [i_6] [i_1] [i_0])))));
                    }
                    for (unsigned short i_7 = 4; i_7 < 15; i_7 += 4) 
                    {
                        arr_22 [i_0] [i_1] [i_2] [i_7 + 1] = var_12;
                        /* LoopSeq 1 */
                        for (unsigned int i_8 = 0; i_8 < 17; i_8 += 2) 
                        {
                            var_27 ^= ((/* implicit */signed char) (unsigned short)8);
                            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)64))))) ? (((/* implicit */int) ((signed char) arr_4 [i_2] [i_7] [i_8]))) : (var_10)));
                            var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 - 1])) ? (1344426192U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) ((unsigned short) arr_13 [i_0 - 1] [i_2] [i_0 - 1] [i_0 - 1]))) : ((~(((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1]))))));
                        }
                    }
                }
            } 
        } 
    } 
}
