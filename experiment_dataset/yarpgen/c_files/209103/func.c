/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209103
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) 
                            {
                                arr_15 [i_1] [i_3] [i_4] |= ((/* implicit */unsigned int) (+(2121187866599929568LL)));
                                arr_16 [i_0] [2] [i_0] [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)7)) ? (((/* implicit */int) (unsigned char)86)) : (-62032682)));
                                var_13 = ((/* implicit */unsigned long long int) -8124380188512021677LL);
                                arr_17 [i_4] [8LL] [i_3] [i_3] [i_3] [i_1] [12] &= ((/* implicit */signed char) var_10);
                            }
                            for (signed char i_5 = 2; i_5 < 18; i_5 += 3) 
                            {
                                var_14 &= ((/* implicit */signed char) min((-8124380188512021695LL), (3640202313102768022LL)));
                                var_15 = ((/* implicit */unsigned long long int) min((var_15), (((((((/* implicit */int) (unsigned char)62)) <= (((((/* implicit */_Bool) -8124380188512021677LL)) ? (((/* implicit */int) (unsigned char)74)) : (((/* implicit */int) (_Bool)1)))))) ? ((~(min((755165733828914273ULL), (((/* implicit */unsigned long long int) (short)13590)))))) : (((/* implicit */unsigned long long int) (+(min((((/* implicit */long long int) (signed char)-119)), (1559263220790579130LL))))))))));
                                arr_20 [i_0] [i_0] [i_1] [i_2] [i_2] [i_5] = ((/* implicit */unsigned char) min((var_8), (((/* implicit */unsigned long long int) min((1725519522), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)102))) > (15242209164944911254ULL)))))))));
                            }
                            arr_21 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_5)) || ((!(((/* implicit */_Bool) (unsigned char)223)))))) ? ((~(((/* implicit */int) ((unsigned short) var_4))))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-13587)) : (((/* implicit */int) (short)21494))))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */signed char) (~(((/* implicit */int) ((((long long int) (signed char)99)) != (((/* implicit */long long int) ((/* implicit */int) (signed char)54))))))));
                var_17 &= ((short) var_8);
                arr_22 [i_1] [i_1] [i_0] = ((/* implicit */_Bool) var_2);
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)70)))))));
    var_19 = ((/* implicit */signed char) min((var_11), (((/* implicit */short) var_9))));
}
