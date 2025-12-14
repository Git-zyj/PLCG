/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231035
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) (-(((/* implicit */int) var_4)))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0] [i_0]))));
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) arr_4 [i_1] [i_0]);
                    arr_8 [i_0] [(_Bool)1] [i_2] [i_2] = ((/* implicit */unsigned char) ((_Bool) 2933977230U));
                }
            } 
        } 
    }
    for (unsigned char i_3 = 2; i_3 < 10; i_3 += 3) 
    {
        var_16 = ((/* implicit */_Bool) max(((-(((/* implicit */int) var_4)))), (((/* implicit */int) min((var_4), (((/* implicit */unsigned char) arr_10 [i_3])))))));
        arr_11 [i_3] = ((/* implicit */_Bool) (~(((/* implicit */int) min((arr_10 [i_3]), (arr_10 [i_3]))))));
        var_17 = ((/* implicit */_Bool) ((((((/* implicit */int) min((arr_9 [i_3]), (arr_9 [i_3])))) / (((/* implicit */int) arr_10 [i_3])))) % (-1251962979)));
    }
    for (unsigned char i_4 = 2; i_4 < 11; i_4 += 1) 
    {
        var_18 = (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_4] [i_4 + 3]))))));
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 14; i_5 += 1) 
        {
            for (unsigned char i_6 = 0; i_6 < 14; i_6 += 2) 
            {
                {
                    arr_22 [i_4] [i_4] = ((/* implicit */unsigned char) ((((2933977230U) != (((/* implicit */unsigned int) 25165824)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_3)), (var_10)))) ? (((/* implicit */unsigned int) (~(4)))) : (max((4294967292U), (((/* implicit */unsigned int) (unsigned char)6)))))))));
                    arr_23 [i_4] [(_Bool)1] [i_4] = ((/* implicit */unsigned int) arr_21 [i_4] [i_4] [i_6]);
                }
            } 
        } 
    }
    var_19 = ((_Bool) var_12);
    var_20 = ((/* implicit */int) var_12);
    /* LoopNest 2 */
    for (int i_7 = 3; i_7 < 22; i_7 += 1) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_9 = 3; i_9 < 22; i_9 += 1) 
                {
                    for (int i_10 = 0; i_10 < 24; i_10 += 2) 
                    {
                        {
                            arr_36 [i_7] [i_7] [i_7] [i_7] = max((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (((((/* implicit */_Bool) (unsigned char)159)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_8] [i_10]))) : (4294967295U))))), (((/* implicit */unsigned int) (((+(arr_34 [i_7] [i_8]))) != (((/* implicit */unsigned int) -1251962998))))));
                            /* LoopSeq 1 */
                            for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                            {
                                var_21 = ((/* implicit */_Bool) max(((-(min((1965163751U), (((/* implicit */unsigned int) -1251963001)))))), (((/* implicit */unsigned int) ((arr_37 [i_7] [i_11] [i_11] [i_11] [i_7]) % (((/* implicit */int) arr_38 [i_11 + 1] [i_11] [i_10] [i_11] [i_10] [i_7] [i_7])))))));
                                var_22 = ((/* implicit */int) ((((/* implicit */unsigned int) min((((/* implicit */int) ((1251962995) != (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_38 [i_8] [i_11 + 1] [i_11 + 1] [i_8] [(_Bool)1] [9] [i_9])) : (((/* implicit */int) (_Bool)1))))))) + (3202704829U)));
                            }
                        }
                    } 
                } 
                var_23 -= ((/* implicit */unsigned int) ((int) 1219885220U));
            }
        } 
    } 
    var_24 = ((/* implicit */_Bool) ((((_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) % ((~(4294967292U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_10))))))));
}
