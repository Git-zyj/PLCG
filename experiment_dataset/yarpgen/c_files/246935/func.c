/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246935
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
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 4; i_3 < 8; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0 + 1] [i_2] [i_2] [i_3 - 2] [i_4] = ((/* implicit */long long int) min(((_Bool)1), (((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) (_Bool)0))))));
                                arr_13 [(unsigned char)3] [(unsigned char)3] [i_2] [(unsigned char)3] [(_Bool)0] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    arr_14 [3ULL] [(unsigned short)8] [i_2] = ((/* implicit */signed char) (~(((/* implicit */int) arr_8 [i_0] [i_1] [(short)8] [i_2] [9] [1LL]))));
                    arr_15 [i_1] [i_1] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0 - 1] [i_0 + 2] [i_0] [i_0 + 2] [i_0] [i_0 + 1]))));
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 6; i_5 += 4) 
                    {
                        for (long long int i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            {
                                arr_21 [i_0] [(_Bool)1] [i_1] [i_2] [i_5 - 4] [i_5 + 2] [i_6] = ((/* implicit */unsigned char) ((short) (!(((/* implicit */_Bool) 739698875)))));
                                arr_22 [i_2] [1] [i_2] [i_5] [i_6] [7U] = ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), (var_7))))) : (((((/* implicit */_Bool) var_2)) ? ((~(0ULL))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) 562229779)) : (var_13))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_7 = 3; i_7 < 12; i_7 += 4) 
    {
        for (int i_8 = 3; i_8 < 12; i_8 += 4) 
        {
            for (int i_9 = 0; i_9 < 14; i_9 += 4) 
            {
                {
                    arr_31 [i_7 + 2] [i_7] [i_8 + 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned int) (_Bool)1)), (var_12))), (((/* implicit */unsigned int) (((_Bool)1) && (((/* implicit */_Bool) arr_23 [3LL])))))))) ? (((/* implicit */unsigned long long int) -240141345)) : ((-(var_13)))));
                    arr_32 [i_7 - 3] [i_7] [i_7] [i_9] = ((/* implicit */int) max((((/* implicit */long long int) (_Bool)0)), (-6328949876602356646LL)));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_10 = 0; i_10 < 21; i_10 += 4) 
    {
        for (unsigned int i_11 = 0; i_11 < 21; i_11 += 4) 
        {
            for (long long int i_12 = 2; i_12 < 18; i_12 += 4) 
            {
                {
                    arr_40 [(unsigned short)15] [i_10] [i_10] [i_10] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (arr_39 [i_10] [i_11] [14U] [i_12]))))));
                    arr_41 [i_10] [i_11] [i_11] [i_12] = ((/* implicit */unsigned int) arr_37 [i_10] [i_11] [i_12]);
                }
            } 
        } 
    } 
}
