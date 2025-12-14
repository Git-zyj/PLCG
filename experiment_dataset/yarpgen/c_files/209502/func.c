/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209502
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
    var_11 &= var_5;
    var_12 &= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_3)) ? (((int) var_0)) : (((((/* implicit */int) var_3)) * (((/* implicit */int) (unsigned char)193))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_13 = ((int) arr_0 [i_0 - 1] [i_0 - 1]);
                                arr_15 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [(_Bool)1] = ((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) (_Bool)1)))));
                                arr_16 [i_2] [i_1 - 2] &= ((/* implicit */unsigned int) (-(min((arr_13 [i_0] [i_0 - 1] [i_0 - 1] [i_1 + 1] [i_1 - 2]), ((+(((/* implicit */int) (_Bool)1))))))));
                                var_14 = ((((/* implicit */int) (unsigned char)77)) > (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)188)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)36))))) && (arr_10 [i_0 - 1] [i_1 + 1])))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_1] [i_1] [(unsigned char)4] = ((/* implicit */_Bool) ((((/* implicit */int) var_5)) >> (((((/* implicit */int) (signed char)-18)) + (44)))));
                    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (min((((((/* implicit */int) var_10)) * (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) arr_13 [i_2] [i_0 - 1] [i_0] [i_0 - 1] [i_0])) ? (((/* implicit */int) arr_10 [i_1 - 1] [i_1 + 1])) : (((/* implicit */int) arr_6 [i_0])))))) : ((-(((/* implicit */int) arr_0 [i_0] [i_2]))))));
                    arr_18 [i_0] [i_1 - 2] [i_0] = ((/* implicit */int) ((unsigned char) max((((1251384297) + (((/* implicit */int) var_4)))), ((+(arr_13 [i_0] [i_0] [i_0] [i_2] [i_2]))))));
                    var_16 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)-16)), (arr_14 [i_0] [7U] [i_2])))) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)201)) << (((/* implicit */int) (unsigned char)15))))))) ? (((/* implicit */int) ((_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)-17)) : (((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */int) ((signed char) -1251384297))) >> (((/* implicit */int) var_10))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    arr_25 [(signed char)2] [i_6] |= ((/* implicit */signed char) ((int) max((((((/* implicit */_Bool) arr_2 [i_7])) ? (((/* implicit */unsigned int) var_2)) : (arr_1 [i_5]))), (((/* implicit */unsigned int) ((int) var_10))))));
                    arr_26 [i_5] [i_5] [i_7] [8] = var_3;
                    arr_27 [i_5] [i_5] [6] [i_7] &= ((/* implicit */signed char) (-(((/* implicit */int) ((_Bool) arr_8 [i_6 - 1] [i_6 - 1])))));
                }
            } 
        } 
    } 
}
