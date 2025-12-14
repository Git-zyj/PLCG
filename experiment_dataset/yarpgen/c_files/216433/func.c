/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216433
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
    var_12 = ((/* implicit */_Bool) var_7);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned short i_2 = 4; i_2 < 21; i_2 += 3) 
            {
                for (unsigned short i_3 = 2; i_3 < 20; i_3 += 1) 
                {
                    {
                        arr_10 [i_3] [i_1] [i_2] [i_3] = arr_0 [i_1] [i_2 - 1];
                        var_13 = arr_9 [i_0] [i_1] [i_2] [i_2] [i_2] [i_3];
                    }
                } 
            } 
        } 
        var_14 = var_4;
        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [(unsigned short)0] [(unsigned short)8] [i_0] [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(unsigned short)0] [i_0] [(unsigned short)20])) ? (((/* implicit */int) arr_9 [(unsigned short)20] [i_0] [i_0] [i_0] [i_0] [(unsigned short)2])) : (((/* implicit */int) arr_8 [(_Bool)1] [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) ((_Bool) var_9))) : (((((/* implicit */_Bool) arr_7 [i_0] [(_Bool)1] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) var_11)))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_9)) * (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))));
    }
    /* LoopSeq 3 */
    for (unsigned short i_4 = 3; i_4 < 10; i_4 += 4) /* same iter space */
    {
        var_16 |= (_Bool)0;
        arr_13 [(_Bool)1] |= ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_4 [i_4 - 3])) ? (((/* implicit */int) (unsigned short)12)) : (((/* implicit */int) arr_4 [i_4 + 1])))), (((/* implicit */int) ((unsigned short) arr_4 [i_4 - 3])))));
        var_17 ^= max(((unsigned short)15260), (max((arr_0 [i_4] [i_4]), (((/* implicit */unsigned short) (!(arr_1 [i_4])))))));
    }
    for (unsigned short i_5 = 3; i_5 < 10; i_5 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */_Bool) max((((((/* implicit */int) (unsigned short)8)) + (((/* implicit */int) (_Bool)1)))), (((((((/* implicit */int) (unsigned short)8)) + (((/* implicit */int) arr_16 [i_5] [i_5])))) - (((/* implicit */int) (unsigned short)0))))));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)36233)) ? (((/* implicit */int) (unsigned short)21340)) : (((/* implicit */int) (unsigned short)0))))) ? (((((/* implicit */_Bool) arr_7 [i_5] [i_5] [i_5 - 1] [i_5 + 1] [i_5] [(_Bool)1])) ? (((((/* implicit */_Bool) arr_14 [i_5] [i_5])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_9 [i_5] [i_5] [(unsigned short)12] [i_5] [i_5] [i_5])))) : (((/* implicit */int) arr_12 [i_5 - 2])))) : (((/* implicit */int) arr_1 [i_5]))));
        arr_17 [i_5] = ((/* implicit */_Bool) max(((unsigned short)15260), (((/* implicit */unsigned short) (_Bool)1))));
        arr_18 [i_5] = ((/* implicit */unsigned short) (+((~(((/* implicit */int) arr_14 [i_5] [i_5]))))));
    }
    /* vectorizable */
    for (unsigned short i_6 = 3; i_6 < 10; i_6 += 4) /* same iter space */
    {
        var_20 ^= ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65528))));
        arr_23 [i_6] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_11))));
    }
}
