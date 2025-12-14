/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52423
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
    var_10 -= ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */int) min((((/* implicit */unsigned short) var_7)), ((unsigned short)0)))) >> (((((/* implicit */int) ((unsigned short) var_0))) - (13324))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (((((/* implicit */_Bool) (unsigned short)60810)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 *= arr_8 [i_0] [i_1];
                    var_12 = ((/* implicit */unsigned short) (_Bool)1);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_2] [i_0] [i_1] [i_1] = ((unsigned short) var_6);
                                arr_15 [(unsigned short)22] [(unsigned short)22] [i_2] [i_2] = ((/* implicit */unsigned short) ((_Bool) arr_9 [i_1]));
                                arr_16 [i_1] = var_9;
                                arr_17 [i_2 - 1] [i_2] [i_2] [i_2] [i_2] = (unsigned short)29296;
                                var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) + (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */int) (unsigned short)11894)) : (((arr_4 [i_3]) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_2 - 1])) / (((/* implicit */int) arr_3 [i_2 - 1]))));
                }
            } 
        } 
        var_14 = ((arr_4 [i_0]) && (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)31642)) : (((/* implicit */int) (unsigned short)0))))));
        /* LoopNest 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned short i_6 = 0; i_6 < 23; i_6 += 1) 
            {
                for (unsigned short i_7 = 0; i_7 < 23; i_7 += 1) 
                {
                    {
                        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_5)) == (((/* implicit */int) (_Bool)1))))) / (((/* implicit */int) arr_19 [i_7])))))));
                        arr_30 [i_7] [i_5] [i_6] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_27 [(unsigned short)7] [i_7] [i_7])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((_Bool) arr_24 [i_0] [i_0] [i_0])))));
                        var_16 ^= arr_27 [(unsigned short)20] [(_Bool)0] [i_6];
                    }
                } 
            } 
        } 
    }
}
