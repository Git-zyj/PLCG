/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3293
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
    var_12 = ((/* implicit */int) var_4);
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_13 = ((((/* implicit */_Bool) ((int) (~(9223372036854775795LL))))) ? (max((max((-9223372036854775783LL), (-9223372036854775796LL))), (((/* implicit */long long int) (-(((/* implicit */int) arr_5 [i_0] [i_0] [(short)4] [i_4]))))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_0 [i_2 + 3])))));
                                var_14 = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) arr_5 [i_0] [i_1] [i_2 - 1] [i_1])), (arr_3 [i_0])))), (arr_4 [i_2 + 1] [i_0 - 1]))), (((/* implicit */unsigned long long int) ((short) arr_8 [i_0] [i_0] [i_3] [i_0])))));
                                var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) min((max((4294967295U), (((/* implicit */unsigned int) arr_8 [i_0 + 2] [i_0 - 1] [i_1 - 2] [i_2 + 2])))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) -9223372036854775795LL))))))))));
                            }
                        } 
                    } 
                    arr_13 [i_2] = ((/* implicit */unsigned int) ((unsigned short) max((((/* implicit */long long int) arr_12 [i_0 - 2] [i_0 + 2] [i_0 - 2] [i_0] [i_0])), (min((9223372036854775795LL), (((/* implicit */long long int) arr_7 [i_0] [i_0] [i_1 - 2] [i_0])))))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 2; i_6 < 23; i_6 += 4) 
                        {
                            {
                                var_16 += ((/* implicit */short) arr_0 [i_2]);
                                var_17 &= arr_16 [i_0] [i_1 - 2];
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned long long int) max((((long long int) ((signed char) arr_19 [i_0] [i_0] [i_0 - 2]))), (((/* implicit */long long int) ((signed char) min((arr_0 [i_2]), (((/* implicit */unsigned long long int) 59251999))))))));
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 24; i_7 += 3) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 24; i_8 += 1) 
                        {
                            {
                                arr_26 [i_0] [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) ((unsigned int) arr_3 [i_0 + 1]))))));
                                arr_27 [i_2] = ((/* implicit */int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) 9223372036854775795LL)) : (18446744073709551615ULL))))))), ((~(arr_21 [i_0] [i_1] [(_Bool)1] [i_7] [i_8])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 |= ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) ((_Bool) var_0))), (min((((/* implicit */unsigned short) var_10)), (var_0)))))))));
    /* LoopNest 2 */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        for (short i_10 = 2; i_10 < 16; i_10 += 2) 
        {
            {
                arr_32 [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_31 [i_10 + 1] [i_10 + 1] [i_10 - 2])), (min((-9223372036854775778LL), (((/* implicit */long long int) arr_20 [i_9] [i_10]))))))) ? (((/* implicit */long long int) (~((~(-59252001)))))) : (arr_29 [(signed char)10])));
                /* LoopNest 2 */
                for (unsigned char i_11 = 0; i_11 < 17; i_11 += 4) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            arr_38 [i_9] [i_9] [i_11] [i_9] [i_12] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_19 [i_9] [i_9] [i_9]))));
                            var_20 = ((/* implicit */unsigned long long int) (+(((unsigned int) arr_31 [i_10 - 1] [i_10 - 2] [i_10 - 1]))));
                        }
                    } 
                } 
                var_21 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((~(-196983091))), (((/* implicit */int) (short)32761))))) ? (((/* implicit */int) ((signed char) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)15))) : (-9223372036854775795LL))))) : (((/* implicit */int) arr_3 [i_9]))));
                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (-(((/* implicit */int) min((arr_30 [i_9]), (arr_30 [i_10])))))))));
            }
        } 
    } 
}
