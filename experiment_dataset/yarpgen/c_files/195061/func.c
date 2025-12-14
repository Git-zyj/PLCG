/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195061
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
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */_Bool) ((signed char) ((unsigned int) var_4)));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 ^= ((/* implicit */int) ((signed char) ((int) var_13)));
                                arr_15 [(signed char)9] [i_4] [i_4] [(signed char)9] [i_4] [i_4] = ((/* implicit */_Bool) ((signed char) (+(var_11))));
                                arr_16 [i_0] [(short)15] [i_2] [i_3] [i_4] = ((/* implicit */short) min((((int) var_9)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_15 ^= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_6), (((/* implicit */int) var_4))))) ? ((-(((/* implicit */int) var_8)))) : (((var_3) - (((/* implicit */int) var_9))))))), (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_0))) % (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
    /* LoopNest 3 */
    for (unsigned short i_5 = 0; i_5 < 15; i_5 += 4) 
    {
        for (long long int i_6 = 0; i_6 < 15; i_6 += 1) 
        {
            for (long long int i_7 = 1; i_7 < 13; i_7 += 3) 
            {
                {
                    arr_27 [i_6] [i_7] [i_6] [i_5] = (-(((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_7)), (var_0)))) ? (max((var_2), (((/* implicit */int) var_1)))) : (var_7))));
                    arr_28 [i_5] [i_6] [i_5] |= ((/* implicit */unsigned short) max((((unsigned int) max((var_0), (((/* implicit */unsigned int) var_12))))), (((((_Bool) var_7)) ? (min((var_0), (((/* implicit */unsigned int) var_10)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_3))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 15; i_8 += 2) 
                    {
                        for (int i_9 = 0; i_9 < 15; i_9 += 2) 
                        {
                            {
                                arr_36 [i_6] = ((/* implicit */short) var_6);
                                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((var_8) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_0)))))) ? ((-(((/* implicit */int) ((unsigned short) var_7))))) : (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)26149))))));
                                arr_37 [i_5] [i_8] [i_7] [i_6] [i_5] |= ((/* implicit */_Bool) var_13);
                                var_17 -= ((/* implicit */unsigned char) var_0);
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned short) ((int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)38226)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-21236))))));
                }
            } 
        } 
    } 
}
