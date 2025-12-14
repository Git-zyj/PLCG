/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216050
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
    for (int i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 75562060)) ? (-75562083) : (((/* implicit */int) (signed char)-32))))) ? (max((arr_4 [i_0] [i_1]), (var_3))) : ((-(((/* implicit */int) (_Bool)1)))))), ((((-(((/* implicit */int) var_17)))) + (((/* implicit */int) ((signed char) arr_0 [i_0 + 1])))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 75562061)) ? (75562083) : (((/* implicit */int) (_Bool)1))))) ? (arr_6 [i_0] [i_0] [i_2]) : (min((arr_9 [i_0 + 1] [i_0] [i_0 + 2]), (arr_9 [i_0 + 2] [i_0] [i_0 + 2]))));
                                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) 75562083))));
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) min((min((((int) arr_6 [i_1] [(signed char)6] [i_1])), (((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_0] [i_1])) ? (arr_6 [i_1] [(_Bool)1] [(signed char)8]) : (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) (signed char)(-127 - 1))))))));
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (int i_6 = 4; i_6 < 8; i_6 += 3) 
                    {
                        {
                            var_23 -= ((/* implicit */signed char) ((((/* implicit */_Bool) min((46871533), (((/* implicit */int) (_Bool)0))))) ? ((-(((/* implicit */int) (signed char)4)))) : (((75562072) % (837132876)))));
                            var_24 = ((/* implicit */signed char) arr_19 [i_0] [i_1] [i_5] [5]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (max((max((var_2), (((/* implicit */int) var_17)))), (((var_12) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))))) : (((/* implicit */int) ((_Bool) var_12)))));
    var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) (+(((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)25))))) ? ((-(((/* implicit */int) (signed char)26)))) : (((/* implicit */int) (signed char)-93)))))))));
    /* LoopSeq 3 */
    for (int i_7 = 0; i_7 < 13; i_7 += 2) 
    {
        var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) arr_21 [i_7]))));
        arr_23 [i_7] [i_7] = min((min((((/* implicit */int) arr_22 [i_7])), (arr_21 [i_7]))), (((((/* implicit */_Bool) (signed char)-8)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)-8)))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 14; i_8 += 2) 
    {
        var_28 = (!(((/* implicit */_Bool) arr_24 [i_8])));
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                {
                    var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) ((((/* implicit */int) arr_25 [i_9] [i_10])) * (((/* implicit */int) (_Bool)0)))))));
                    var_30 = ((/* implicit */signed char) arr_24 [i_8]);
                }
            } 
        } 
        var_31 = ((((/* implicit */_Bool) ((signed char) arr_28 [i_8] [i_8]))) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) arr_27 [i_8] [i_8])));
    }
    for (int i_11 = 1; i_11 < 11; i_11 += 4) 
    {
        var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) min((max((((arr_34 [i_11]) / (arr_34 [i_11]))), (((/* implicit */int) (signed char)-42)))), ((~(-78768770))))))));
        var_33 = ((/* implicit */signed char) (+(((((/* implicit */int) arr_35 [i_11] [i_11 - 1])) & ((-(arr_34 [i_11])))))));
    }
    var_34 = ((((/* implicit */_Bool) min((max((2049771095), (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_10))))) ? (max((max((-75562073), (-75562068))), (((/* implicit */int) ((signed char) (signed char)4))))) : (((((((/* implicit */int) var_14)) + (2147483647))) << (((((/* implicit */int) var_4)) - (94))))));
}
