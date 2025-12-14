/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215282
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
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 2; i_2 < 14; i_2 += 4) 
                {
                    arr_8 [i_0] [i_1] [8LL] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967271U)) ? (((/* implicit */long long int) 2147483647)) : (max((((/* implicit */long long int) -1)), (min((((/* implicit */long long int) (unsigned short)65535)), (-8836756586119156838LL)))))));
                    arr_9 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */int) arr_1 [i_0]);
                    var_19 = ((/* implicit */signed char) arr_7 [i_2 - 1]);
                }
                /* LoopNest 3 */
                for (signed char i_3 = 1; i_3 < 14; i_3 += 1) 
                {
                    for (int i_4 = 0; i_4 < 16; i_4 += 1) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 16; i_5 += 2) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_5] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)55916))) & (0LL)));
                                var_20 = ((/* implicit */long long int) ((int) 2147483636));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((-2147483637) % (((/* implicit */int) (unsigned char)3))));
    /* LoopNest 2 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            {
                arr_23 [i_7] [i_7] [i_6] = ((/* implicit */short) min((((/* implicit */int) (unsigned char)232)), ((((_Bool)1) ? (134217727) : (2147483647)))));
                var_22 = ((/* implicit */unsigned char) ((583952206U) % (((/* implicit */unsigned int) 1640151855))));
                var_23 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15))) & (28U)));
                var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)511)) & (2147483647)));
                arr_24 [i_7] = max((min((((/* implicit */unsigned int) (unsigned char)0)), (3145728U))), (((/* implicit */unsigned int) (unsigned char)255)));
            }
        } 
    } 
}
