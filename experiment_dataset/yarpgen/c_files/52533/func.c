/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52533
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_13 -= ((/* implicit */unsigned long long int) ((_Bool) (unsigned char)23));
        var_14 = ((/* implicit */_Bool) arr_2 [i_0] [i_0]);
        var_15 = arr_2 [i_0] [i_0];
        var_16 = ((/* implicit */unsigned long long int) ((_Bool) (!(arr_1 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 18; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) arr_0 [i_3] [i_4]);
                                var_18 = arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_0] [i_0];
                                var_19 = ((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 20; i_6 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) min((((((_Bool) arr_7 [i_0] [i_6])) ? (((/* implicit */int) arr_10 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0] [i_0 - 1])) : (((/* implicit */int) arr_8 [i_2] [i_2] [i_2] [i_2])))), (((/* implicit */int) min((max((arr_2 [i_0] [i_1]), (((/* implicit */unsigned short) (_Bool)1)))), (((/* implicit */unsigned short) arr_7 [i_0 - 1] [i_0 - 1])))))));
                                var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_7 [i_0] [i_0 - 1])) : (((/* implicit */int) var_4)))))));
                                var_22 = ((/* implicit */_Bool) (~(max((((/* implicit */int) (unsigned char)232)), (((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (_Bool)1))))))));
                                var_23 = ((/* implicit */unsigned short) ((signed char) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)233))));
                                var_24 &= ((/* implicit */_Bool) ((unsigned short) arr_1 [i_1] [i_6]));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */short) max((((/* implicit */int) ((unsigned short) var_1))), (min(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_9 [i_2] [i_2] [i_2] [i_1] [i_0] [i_0]))))));
                    var_26 = ((/* implicit */unsigned char) ((short) ((unsigned long long int) var_5)));
                }
            } 
        } 
    }
    var_27 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((/* implicit */int) max((var_2), (((/* implicit */unsigned short) var_6))))) : (((/* implicit */int) var_12))))));
}
