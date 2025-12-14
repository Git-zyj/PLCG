/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218871
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
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (short i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    {
                        var_14 = ((/* implicit */short) min((var_14), (arr_3 [i_3] [(short)12] [i_1])));
                        arr_8 [i_0] [i_1] [i_2] [i_1] [i_0] [i_3] = (short)18433;
                        arr_9 [i_1] [i_1 + 1] [i_1] [i_1] [i_1] = max((max((arr_7 [i_1 - 1] [i_1 + 3] [i_1 + 1] [i_1] [i_1 - 1]), (min((arr_1 [i_0]), ((short)-2119))))), (((/* implicit */short) (!(((/* implicit */_Bool) max(((short)6517), (arr_0 [i_1] [i_1]))))))));
                    }
                } 
            } 
        } 
        arr_10 [i_0] [i_0] = var_3;
    }
    var_15 |= ((/* implicit */short) (~(((/* implicit */int) max(((short)-13104), (((short) var_0)))))));
    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-13113)) : (((/* implicit */int) var_4))))) ? (((((/* implicit */int) (short)-13132)) % (((/* implicit */int) var_12)))) : (((/* implicit */int) ((short) (short)-13104))))))))));
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-7908)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)13088)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) (short)-2)) : (((/* implicit */int) (short)-13089))))));
    /* LoopNest 2 */
    for (short i_4 = 0; i_4 < 11; i_4 += 1) 
    {
        for (short i_5 = 1; i_5 < 9; i_5 += 3) 
        {
            {
                arr_17 [i_5] [i_4] [i_4] = var_2;
                var_18 = ((/* implicit */short) ((((((/* implicit */int) min(((short)-8818), ((short)6892)))) ^ (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_2 [i_4])) : (((/* implicit */int) (short)7908)))))) * ((-(((((/* implicit */int) (short)-20047)) / (((/* implicit */int) var_7))))))));
                arr_18 [i_4] = ((/* implicit */short) max((((/* implicit */int) min((arr_3 [i_5] [i_4] [i_5 + 2]), (arr_13 [i_5] [i_5 + 1])))), (((((/* implicit */_Bool) arr_15 [i_4] [i_4])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_13 [i_5] [i_5 + 2]))))));
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [(short)2])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_3 [i_5 - 1] [(short)4] [i_4]))))) && (((/* implicit */_Bool) (short)-21006)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)4359)))))));
                arr_19 [i_4] = ((/* implicit */short) ((min((((((/* implicit */int) (short)27099)) - (((/* implicit */int) arr_13 [i_4] [i_4])))), (((/* implicit */int) (short)-13089)))) <= (((/* implicit */int) ((short) (short)-1)))));
            }
        } 
    } 
}
