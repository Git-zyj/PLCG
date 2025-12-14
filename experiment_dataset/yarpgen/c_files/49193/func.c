/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49193
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
    var_18 = var_9;
    var_19 = ((/* implicit */short) min((var_19), (var_1)));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 24; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            {
                var_20 &= ((/* implicit */short) (-(((/* implicit */int) (short)16869))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        {
                            var_21 &= ((/* implicit */short) (+(((((/* implicit */int) arr_7 [i_0 - 3] [i_0 - 2] [i_0] [i_3])) - (((/* implicit */int) (short)(-32767 - 1)))))));
                            arr_9 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */short) max(((~(((/* implicit */int) var_17)))), (min(((~(((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_3])))), (((((/* implicit */int) arr_5 [i_3] [i_2] [i_1] [(short)22])) % (((/* implicit */int) var_8))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_4 = 0; i_4 < 15; i_4 += 3) 
    {
        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_10 [i_4]))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_5 [i_4] [(short)12] [i_4] [i_4])) : (((/* implicit */int) (short)12483)))) : (((/* implicit */int) ((((/* implicit */int) var_1)) != (((/* implicit */int) var_15))))))))));
        /* LoopNest 2 */
        for (short i_5 = 1; i_5 < 13; i_5 += 3) 
        {
            for (short i_6 = 1; i_6 < 14; i_6 += 3) 
            {
                {
                    var_23 = ((/* implicit */short) ((((/* implicit */int) var_15)) >= (((/* implicit */int) (short)16474))));
                    var_24 *= ((short) arr_4 [i_6 - 1] [(short)14] [(short)14] [i_5]);
                    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_13 [i_6]))) ? (((((/* implicit */_Bool) (short)12493)) ? (((/* implicit */int) arr_7 [i_4] [i_6 - 1] [(short)2] [i_6])) : (((/* implicit */int) (short)-27819)))) : (((/* implicit */int) var_15))));
                }
            } 
        } 
        var_26 = ((/* implicit */short) (!((!(((/* implicit */_Bool) var_0))))));
    }
    for (short i_7 = 0; i_7 < 23; i_7 += 3) 
    {
        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) max(((~(((((/* implicit */_Bool) (short)-9281)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)4175)))))), (((/* implicit */int) ((short) (short)-4548))))))));
        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((short) var_8)))))) ? (((((/* implicit */int) (short)17316)) ^ (((/* implicit */int) (short)-21990)))) : (((/* implicit */int) ((((/* implicit */int) (short)-19909)) >= (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10))))))))))));
    }
    for (short i_8 = 0; i_8 < 14; i_8 += 2) 
    {
        arr_21 [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((((((/* implicit */int) var_11)) + (2147483647))) << (((((/* implicit */int) (short)29367)) - (29367)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)21228)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_17)))))))) : (((/* implicit */int) var_14))));
        arr_22 [i_8] = ((/* implicit */short) min((min(((-(((/* implicit */int) arr_16 [i_8])))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)29866)))))), (min((((((/* implicit */int) arr_13 [i_8])) * (((/* implicit */int) var_1)))), (((/* implicit */int) arr_20 [i_8]))))));
        arr_23 [i_8] = ((/* implicit */short) max((min((((/* implicit */int) ((short) (short)32767))), (((((/* implicit */_Bool) (short)-10045)) ? (((/* implicit */int) (short)-19909)) : (((/* implicit */int) (short)-29368)))))), (((/* implicit */int) max((arr_10 [i_8]), (arr_1 [i_8] [i_8]))))));
    }
    var_29 = (short)4543;
}
