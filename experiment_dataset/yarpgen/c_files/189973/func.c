/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189973
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
    var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (_Bool)1))))) ? (min((var_2), (var_5))) : (max((((/* implicit */int) var_14)), (2097151)))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) ((var_5) < (var_5)))), (var_7)))) : (var_5));
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) var_13)))))) : (((((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_12)))) : (((/* implicit */int) max((arr_1 [i_0]), (var_4))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))))) ? (-1338583256) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) (~(320182126)))) ? (((var_4) ? (-320182134) : (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) var_0))))));
    }
    for (unsigned char i_1 = 2; i_1 < 18; i_1 += 4) 
    {
        var_17 = ((/* implicit */int) var_0);
        arr_6 [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)95)) * (((/* implicit */int) var_0))))))))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 22; i_4 += 1) 
                    {
                        for (int i_5 = 3; i_5 < 21; i_5 += 2) 
                        {
                            {
                                arr_17 [i_2] [i_2] [i_4] [i_2] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) -320182127)) ? (2147483647) : (((/* implicit */int) var_14))))) ? ((+(var_5))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))))));
                                arr_18 [i_1] [i_2] [i_2] [i_3 + 1] [i_3 + 1] [i_5] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_14 [i_2] [i_3 + 1] [i_5 - 1])) ? (arr_8 [i_5] [i_3 + 1] [i_5 - 3]) : (((/* implicit */int) arr_13 [i_1 - 2] [i_3 + 1] [i_5 - 3])))) != (((/* implicit */int) ((unsigned char) arr_14 [i_2] [i_3 + 1] [i_5 + 1])))));
                                arr_19 [i_2] [i_2] [i_3 + 1] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -320182123)) ? (var_2) : (-161439992)))) ? (max((arr_8 [i_4] [i_1] [i_1]), (-779163094))) : (((arr_15 [i_1] [i_2] [i_3] [i_4] [i_2]) ? (((/* implicit */int) arr_15 [i_2] [i_2] [i_3 + 1] [i_3 + 1] [i_2])) : (var_10)))))) ? (var_13) : (var_13)));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */int) max((var_18), (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_12 [i_1] [11] [18] [i_3 + 1] [i_1])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */int) var_6)) != (848005240)))))) : (((/* implicit */int) arr_4 [i_1]))))));
                    arr_20 [i_2] = ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) ((unsigned char) (unsigned char)107))) : (((((/* implicit */int) (_Bool)1)) % (848005257)))));
                }
            } 
        } 
    }
}
