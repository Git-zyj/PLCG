/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192915
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
    var_15 = ((/* implicit */short) var_7);
    var_16 = ((/* implicit */signed char) min((min((max((9223372036854775807LL), (-9223372036854775807LL))), (((/* implicit */long long int) ((unsigned int) (_Bool)1))))), (((/* implicit */long long int) min((min((var_8), (((/* implicit */unsigned int) var_3)))), (((/* implicit */unsigned int) (signed char)24)))))));
    var_17 ^= ((/* implicit */signed char) (unsigned char)120);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 3; i_2 < 10; i_2 += 3) 
                {
                    var_18 = ((/* implicit */long long int) (unsigned char)255);
                    arr_7 [i_0] = ((((9223372036854775804LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) >> (((/* implicit */int) (_Bool)1)));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */short) var_8);
                                arr_13 [i_1] [i_0] [i_2 + 1] [i_0] [i_0] = ((/* implicit */_Bool) 15U);
                            }
                        } 
                    } 
                    var_20 |= (((_Bool)1) && (((/* implicit */_Bool) -9223372036854775807LL)));
                }
                /* LoopNest 2 */
                for (unsigned char i_5 = 3; i_5 < 10; i_5 += 1) 
                {
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        {
                            arr_18 [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned int) max((((/* implicit */short) var_7)), (min(((short)3554), (((/* implicit */short) (_Bool)1))))))), (var_0)));
                            var_21 = ((/* implicit */long long int) max((var_21), (max((((/* implicit */long long int) var_13)), (min((max((var_5), (((/* implicit */long long int) var_14)))), (((/* implicit */long long int) max(((short)32766), (((/* implicit */short) (_Bool)1)))))))))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned char i_7 = 0; i_7 < 11; i_7 += 3) /* same iter space */
                            {
                                arr_22 [i_0] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)-25)) || (((/* implicit */_Bool) 9223372036854775807LL)))));
                                var_22 |= ((/* implicit */_Bool) 9223372036854775807LL);
                                var_23 *= ((/* implicit */unsigned int) (short)32750);
                            }
                            for (unsigned char i_8 = 0; i_8 < 11; i_8 += 3) /* same iter space */
                            {
                                var_24 += ((/* implicit */long long int) 1940782326U);
                                arr_27 [i_0] [3LL] [i_5] [i_6] [i_5] [i_5] [i_6] = ((/* implicit */unsigned short) 9223372036854775807LL);
                            }
                            var_25 = ((/* implicit */_Bool) ((unsigned int) ((9223372036854775807LL) < (min((-9223372036854775794LL), (((/* implicit */long long int) (_Bool)1)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
