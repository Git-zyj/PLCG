/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208768
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
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 3; i_3 < 12; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_11 = (~(((/* implicit */int) arr_0 [i_0] [5LL])));
                                var_12 = ((/* implicit */int) 334136011472079338LL);
                                var_13 = ((/* implicit */unsigned long long int) (signed char)49);
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                for (signed char i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    var_14 &= ((/* implicit */long long int) (~(((((/* implicit */int) (unsigned char)81)) / (((/* implicit */int) (unsigned short)10614))))));
                    arr_17 [i_0] [i_1] [i_1] = ((/* implicit */int) max(((unsigned short)54938), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)51)) <= ((-(((/* implicit */int) (signed char)(-127 - 1))))))))));
                    arr_18 [i_0] [i_5] [i_0] |= ((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) arr_5 [i_0])) - (((/* implicit */int) arr_6 [i_0] [i_0])))));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 15; i_6 += 3) 
                {
                    arr_21 [i_0] [i_1] [i_0] = arr_9 [i_0] [i_1] [i_6];
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 15; i_7 += 1) 
                    {
                        for (signed char i_8 = 0; i_8 < 15; i_8 += 4) 
                        {
                            {
                                var_15 = (-(arr_19 [i_6] [i_6] [i_6] [i_6]));
                                var_16 ^= ((/* implicit */signed char) (-(((/* implicit */int) ((arr_4 [i_8]) == (((/* implicit */int) var_8)))))));
                                arr_27 [i_8] [i_1] [i_6] [i_1] [i_0] = ((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */long long int) -820134704)) : (-334136011472079327LL));
                                arr_28 [i_8] [i_1] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_6])) / (((/* implicit */int) arr_2 [i_1]))));
                            }
                        } 
                    } 
                    arr_29 [i_0] [i_0] [i_1] [i_0] = var_9;
                }
            }
        } 
    } 
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((var_10) & (((/* implicit */long long int) ((/* implicit */int) (signed char)-124))))) : (((/* implicit */long long int) min((((/* implicit */int) var_4)), (((int) var_4)))))));
}
