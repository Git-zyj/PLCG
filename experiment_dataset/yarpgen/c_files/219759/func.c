/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219759
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
    var_17 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((+(((/* implicit */int) var_9)))), (((/* implicit */int) var_5))))) ? ((+(1963896108))) : (var_4)));
    var_18 = ((/* implicit */short) var_4);
    /* LoopNest 3 */
    for (unsigned char i_0 = 4; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_19 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)88)) * (((/* implicit */int) (unsigned char)6))))) ? ((+(min((28U), (((/* implicit */unsigned int) var_13)))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))));
                    arr_8 [i_0] [i_0] &= ((unsigned char) (+(min((-1873240422665960696LL), (8458788157838943658LL)))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */_Bool) max((((/* implicit */int) var_13)), ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))));
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 14; i_3 += 2) 
    {
        for (unsigned int i_4 = 1; i_4 < 12; i_4 += 4) 
        {
            {
                arr_14 [i_3] [i_4] = ((/* implicit */signed char) max((((unsigned long long int) (~(4294967267U)))), (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) (unsigned char)170)))), ((-(((/* implicit */int) var_12)))))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 1; i_5 < 12; i_5 += 3) 
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 14; i_6 += 1) 
                    {
                        for (long long int i_7 = 2; i_7 < 12; i_7 += 1) 
                        {
                            {
                                arr_23 [i_4] [i_5 + 2] [i_7] = ((/* implicit */int) max((((((/* implicit */long long int) (~(((/* implicit */int) var_6))))) ^ (min((1249034041441107624LL), (((/* implicit */long long int) var_8)))))), (((/* implicit */long long int) max((((((/* implicit */_Bool) 4294967272U)) ? (0U) : (25685631U))), (((/* implicit */unsigned int) ((_Bool) 4294967272U))))))));
                                var_21 *= ((/* implicit */signed char) max((((/* implicit */int) (short)-4558)), ((+(((/* implicit */int) (unsigned char)96))))));
                                arr_24 [i_3] [i_3] [i_7] [i_6] [i_4] = ((/* implicit */_Bool) (+(((long long int) var_6))));
                            }
                        } 
                    } 
                    arr_25 [i_3] [i_4] [i_4] = ((/* implicit */unsigned char) ((unsigned int) max((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)15872))))), (max((((/* implicit */unsigned int) (short)-1)), (4294967272U))))));
                }
                arr_26 [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) (-(-1564588066)))))));
            }
        } 
    } 
}
