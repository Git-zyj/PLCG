/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228895
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
    var_15 = ((/* implicit */short) ((((((((/* implicit */_Bool) var_7)) ? ((-(((/* implicit */int) var_7)))) : (((/* implicit */int) ((short) (short)-16514))))) + (2147483647))) >> (((((/* implicit */int) var_11)) + (24165)))));
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (short)14232)) ? (((/* implicit */int) (short)-16514)) : (((/* implicit */int) var_5))));
    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (+(((/* implicit */int) ((((((/* implicit */int) var_12)) - (((/* implicit */int) var_13)))) < (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)-4873)) : (((/* implicit */int) (short)12226))))))))))));
    var_18 = ((/* implicit */short) min((((((/* implicit */_Bool) min(((short)-4873), (var_3)))) ? (((/* implicit */int) min(((short)32757), (var_2)))) : (((((/* implicit */_Bool) (short)13730)) ? (((/* implicit */int) (short)-4261)) : (((/* implicit */int) var_6)))))), (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) var_14))))));
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (short i_4 = 1; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) min((((((((/* implicit */int) arr_11 [i_0] [i_1 - 2] [i_1 - 2] [i_2] [i_1 - 2] [i_1 - 2])) == (((/* implicit */int) (short)-32757)))) ? (((/* implicit */int) (short)32767)) : (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (short)-9604)) : (((/* implicit */int) var_3)))))), ((((!(((/* implicit */_Bool) (short)0)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-17559)) : (((/* implicit */int) (short)-16514)))) : (((/* implicit */int) var_14)))))))));
                                arr_13 [i_0 - 3] [(short)12] [i_2] [i_3] [i_4] = ((short) max((((((/* implicit */int) arr_4 [i_0])) * (((/* implicit */int) var_10)))), ((+(((/* implicit */int) arr_6 [i_2] [i_3]))))));
                                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) min(((short)-32767), (arr_3 [i_0 - 3]))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (short)-9525))))) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_2] [i_2] [i_4 + 2])) : (((((/* implicit */_Bool) (short)10)) ? (((/* implicit */int) (short)-8854)) : (((/* implicit */int) (short)-424)))))) : ((+(((/* implicit */int) min((var_8), (arr_5 [i_0 - 2] [i_1] [i_2] [i_4 - 1]))))))));
                            }
                        } 
                    } 
                    arr_14 [i_0 + 1] [i_0 + 1] [(short)10] [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) (short)-15245)) ? (((((/* implicit */int) (short)1092)) - (((/* implicit */int) arr_10 [i_2] [(short)11] [i_0 - 2] [(short)3])))) : ((-(((/* implicit */int) var_12)))))), (((((/* implicit */_Bool) min(((short)1984), (arr_10 [i_0] [(short)4] [i_1] [i_2])))) ? (((((/* implicit */_Bool) (short)32744)) ? (((/* implicit */int) arr_6 [i_1] [i_0])) : (((/* implicit */int) (short)-21096)))) : (((/* implicit */int) arr_9 [i_1 + 1] [i_0 - 3] [i_0 - 2] [i_0 - 1] [i_0 + 1] [i_0 - 1]))))));
                }
            } 
        } 
    } 
}
