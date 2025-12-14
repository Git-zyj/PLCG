/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28604
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
    var_13 = ((/* implicit */unsigned int) var_2);
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) var_9);
        arr_3 [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((arr_1 [i_0 - 1]) >= (arr_1 [i_0 + 1])))), (max((((/* implicit */unsigned int) var_8)), (((arr_0 [i_0]) & (var_4)))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_14 = ((/* implicit */_Bool) min(((short)-32766), (((/* implicit */short) (!(((/* implicit */_Bool) min(((short)2548), (((/* implicit */short) var_3))))))))));
        var_15 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((var_1) ? (424053447U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) << (((((((/* implicit */int) var_8)) - (((/* implicit */int) var_6)))) - (53))))))));
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) max((arr_1 [i_1]), (((/* implicit */unsigned int) ((arr_4 [i_1] [i_1]) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) (_Bool)1))))))))));
        var_17 = ((/* implicit */_Bool) var_11);
    }
    /* LoopNest 2 */
    for (short i_2 = 1; i_2 < 12; i_2 += 1) 
    {
        for (short i_3 = 1; i_3 < 11; i_3 += 2) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_4 = 1; i_4 < 12; i_4 += 3) 
                {
                    for (signed char i_5 = 1; i_5 < 12; i_5 += 3) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_20 [i_6] [i_2] [i_4] [i_2] [i_2] = ((/* implicit */signed char) (!(((_Bool) arr_12 [i_4 + 1] [(signed char)3] [i_4]))));
                                var_18 = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_2 - 1] [(_Bool)1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_7 [4U]))))) && (((/* implicit */_Bool) ((((/* implicit */int) (short)127)) + (((/* implicit */int) (_Bool)1))))))), ((_Bool)1));
                                arr_21 [i_2 - 1] [i_4 + 1] [i_5 - 1] [5U] = ((/* implicit */short) min(((((_Bool)0) ? (max((arr_19 [i_2] [i_2]), (arr_0 [i_2]))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_2] [i_2] [(short)7])) / (((/* implicit */int) (short)-1))))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((var_8), (arr_8 [i_2])))))))));
                                arr_22 [(_Bool)1] [i_5] [(short)2] [i_3] [(_Bool)1] = (((~(424053447U))) >= (((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) arr_16 [i_5 + 1]))) + (((/* implicit */int) arr_15 [i_3 + 2] [i_4 - 1] [i_5] [5U] [i_5 + 1] [i_5]))))));
                            }
                        } 
                    } 
                } 
                arr_23 [i_2] [i_2] [i_2] = ((/* implicit */short) (+(((/* implicit */int) var_6))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) ((unsigned int) (short)-10296));
    /* LoopSeq 2 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        arr_27 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_2)))))))) ? (((((/* implicit */_Bool) arr_25 [i_7] [i_7])) ? (((/* implicit */int) arr_25 [i_7] [i_7])) : (((/* implicit */int) (signed char)0)))) : (((/* implicit */int) arr_25 [i_7] [i_7]))));
        arr_28 [i_7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_24 [i_7]) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-95)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)1))))))))));
    }
    for (unsigned int i_8 = 3; i_8 < 18; i_8 += 1) 
    {
        /* LoopNest 3 */
        for (short i_9 = 1; i_9 < 15; i_9 += 2) 
        {
            for (unsigned int i_10 = 1; i_10 < 17; i_10 += 3) 
            {
                for (signed char i_11 = 0; i_11 < 19; i_11 += 3) 
                {
                    {
                        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((_Bool) (~(((/* implicit */int) arr_30 [i_8 + 1]))))))));
                        arr_37 [i_11] [i_10] [i_10] [i_10] [(signed char)0] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */short) var_6)), (arr_35 [i_10] [(short)7] [i_10 + 1] [i_10 - 1] [i_10 - 1] [i_10 + 1])))) - (((/* implicit */int) var_10))));
                    }
                } 
            } 
        } 
        arr_38 [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */int) (short)29282)) & (((/* implicit */int) (short)-32766))))))) ? (((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) var_6))))) : (((min((var_7), ((_Bool)1))) ? ((-(((/* implicit */int) (short)6747)))) : (((/* implicit */int) min((((/* implicit */short) (signed char)-74)), ((short)16383))))))));
    }
}
