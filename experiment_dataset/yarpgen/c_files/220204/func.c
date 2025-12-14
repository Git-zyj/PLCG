/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220204
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) var_12)))));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) arr_1 [(unsigned short)4]))))) / (((/* implicit */int) ((signed char) (signed char)-108)))));
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) var_15))));
    }
    /* LoopSeq 3 */
    for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        var_19 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */int) arr_4 [i_1])) == (((/* implicit */int) arr_0 [(unsigned short)0] [i_1])))));
        arr_5 [i_1] [i_1] = ((/* implicit */_Bool) min(((~(((/* implicit */int) ((unsigned short) (_Bool)0))))), (((((/* implicit */_Bool) ((unsigned short) (_Bool)0))) ? ((~(((/* implicit */int) (signed char)2)))) : (((/* implicit */int) (_Bool)1))))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        var_20 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_7 [(_Bool)1])) : (((/* implicit */int) (unsigned short)26063))))) ? (((/* implicit */int) arr_6 [i_2] [i_2])) : (((/* implicit */int) ((signed char) var_0)))));
        arr_8 [i_2] [(signed char)0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32767)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65519))));
        var_21 &= ((/* implicit */unsigned short) ((_Bool) (signed char)-90));
    }
    for (unsigned short i_3 = 1; i_3 < 18; i_3 += 3) 
    {
        var_22 = ((/* implicit */unsigned short) (-((~(((/* implicit */int) var_3))))));
        var_23 -= ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)57220)) ? (((/* implicit */int) arr_1 [i_3])) : (((/* implicit */int) arr_6 [i_3] [i_3 - 1]))))) || (((arr_0 [(unsigned short)4] [i_3]) && (arr_7 [i_3]))))))));
        var_24 = ((/* implicit */_Bool) ((signed char) (unsigned short)34379));
        /* LoopNest 3 */
        for (signed char i_4 = 3; i_4 < 16; i_4 += 2) 
        {
            for (signed char i_5 = 0; i_5 < 20; i_5 += 3) 
            {
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    {
                        var_25 = ((/* implicit */_Bool) (+(((((/* implicit */int) var_12)) * (((/* implicit */int) var_5))))));
                        var_26 = ((/* implicit */unsigned short) ((signed char) var_15));
                        arr_19 [(_Bool)1] [i_4] = arr_17 [i_4] [i_4 - 1] [i_5] [i_3];
                    }
                } 
            } 
        } 
    }
}
