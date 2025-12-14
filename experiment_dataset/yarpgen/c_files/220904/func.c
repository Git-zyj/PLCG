/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220904
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
    var_12 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)55460)) && (((/* implicit */_Bool) var_5)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned char) var_5)))))))) : ((~(((/* implicit */int) var_9))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (-(arr_2 [i_0])))) ? (((/* implicit */int) ((((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_0] [i_0])) <= (var_7)))) : ((+(((/* implicit */int) (unsigned short)61264)))))), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) var_9))))) < (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)55460))))))))));
                    var_13 = ((/* implicit */_Bool) (-(min(((+(((/* implicit */int) arr_3 [i_0] [i_1])))), ((+(((/* implicit */int) arr_3 [i_0] [i_2]))))))));
                    arr_10 [i_1] [(signed char)14] &= ((/* implicit */_Bool) (~(min(((-(((/* implicit */int) var_9)))), (((/* implicit */int) ((_Bool) var_9)))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (short i_5 = 0; i_5 < 13; i_5 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_6 = 2; i_6 < 11; i_6 += 4) 
                    {
                        arr_24 [i_5] [i_4] [i_5] [i_5] [i_5] [1U] = ((/* implicit */unsigned int) (+((~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (arr_6 [i_3] [i_4] [i_5] [i_6 - 2])))))));
                        arr_25 [(short)8] [i_4] [i_4] [i_4] [i_4] = max(((~(((/* implicit */int) (unsigned short)55460)))), ((-(((((/* implicit */int) (signed char)-83)) - (((/* implicit */int) arr_7 [i_3] [i_4])))))));
                        arr_26 [i_3] [(_Bool)1] [(short)12] [i_6] |= ((/* implicit */signed char) (-(((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)15289)) : (var_2))) ^ (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_8)))))))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_14 = ((((((/* implicit */_Bool) arr_22 [i_3 - 1] [i_3 - 1])) ? (((/* implicit */int) arr_21 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1])) : (((/* implicit */int) arr_3 [i_4] [i_3 - 1])))) == (((((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_9))))) | ((-(((/* implicit */int) var_8)))))));
                        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) var_3))));
                        var_16 = (!(((/* implicit */_Bool) ((short) min((var_8), (var_5))))));
                    }
                    arr_30 [i_4] [i_4] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_3 - 1] [i_4] [i_5]))));
                }
            } 
        } 
    } 
}
