/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222390
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
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */int) (short)2050)) > (((/* implicit */int) (short)18340)))))));
                    var_16 = ((/* implicit */short) ((((/* implicit */int) ((short) var_8))) > (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0]))));
                    arr_7 [i_1] [i_0] [i_0] = ((short) arr_4 [i_0] [i_1]);
                }
                /* vectorizable */
                for (short i_3 = 0; i_3 < 13; i_3 += 4) 
                {
                    arr_11 [i_1] [i_1] [i_0] [i_1] |= ((/* implicit */short) (-(((/* implicit */int) arr_0 [i_3]))));
                    var_17 ^= ((short) arr_0 [i_3]);
                    /* LoopNest 2 */
                    for (short i_4 = 1; i_4 < 11; i_4 += 1) 
                    {
                        for (short i_5 = 0; i_5 < 13; i_5 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */int) (short)-18323)) < (((/* implicit */int) arr_12 [i_4] [i_1] [i_4 + 1] [i_4 + 2] [i_4])))))));
                                arr_18 [i_5] [i_1] [i_1] [i_1] [i_0] |= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)21784)) && (((/* implicit */_Bool) arr_13 [i_0] [i_5]))))) : (((((/* implicit */_Bool) (short)-6424)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (short)-30316))))));
                                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_4] [i_4 + 1] [i_4 + 2] [i_4] [i_4] [i_4 - 1] [i_4])) ? (((/* implicit */int) ((((/* implicit */int) arr_6 [i_3] [i_4 + 1] [i_5])) < (((/* implicit */int) (short)-325))))) : (((((/* implicit */_Bool) (short)-17678)) ? (((/* implicit */int) (short)-32755)) : (((/* implicit */int) arr_1 [i_0]))))));
                                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)11915)) ? (((/* implicit */int) (short)32154)) : (((/* implicit */int) (short)-25354))))) ? (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (short)-9742)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) arr_6 [i_4 + 2] [i_4 + 1] [i_4 + 1])))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (short i_6 = 0; i_6 < 13; i_6 += 1) /* same iter space */
                    {
                        var_21 = (short)25651;
                        var_22 = ((/* implicit */short) ((((/* implicit */int) (short)316)) / (((/* implicit */int) arr_4 [i_0] [i_3]))));
                    }
                    for (short i_7 = 0; i_7 < 13; i_7 += 1) /* same iter space */
                    {
                        var_23 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_1] [i_3] [i_7] [i_7])) ? (((/* implicit */int) ((((/* implicit */int) (short)-18340)) != (((/* implicit */int) arr_13 [i_0] [i_1]))))) : (((/* implicit */int) arr_23 [i_3] [i_3]))));
                        var_24 ^= ((/* implicit */short) ((((/* implicit */int) ((short) (short)-21445))) % (((/* implicit */int) (short)28363))));
                    }
                    var_25 *= ((/* implicit */short) ((((/* implicit */int) (short)15088)) | (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_1] [i_3] [i_0] [i_3]))));
                }
                /* LoopNest 2 */
                for (short i_8 = 2; i_8 < 12; i_8 += 4) 
                {
                    for (short i_9 = 1; i_9 < 12; i_9 += 2) 
                    {
                        {
                            arr_29 [i_0] [i_9] [i_9] [i_9] = (short)2043;
                            var_26 = ((/* implicit */short) (-(((((/* implicit */int) arr_21 [i_9] [i_9 - 1] [i_9] [i_9 + 1] [i_9])) ^ (((/* implicit */int) arr_22 [i_0] [i_0] [i_8 + 1] [i_8 + 1] [i_9 + 1]))))));
                            arr_30 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) (short)12429)) ? (((/* implicit */int) (short)15056)) : (((/* implicit */int) (short)-28361)))) > (((/* implicit */int) max((max(((short)7595), (var_13))), (((short) (short)22021)))))));
                            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) min((((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_8 + 1] [i_8])) || (((/* implicit */_Bool) (short)17570))))), (((((/* implicit */_Bool) (short)32757)) ? (((/* implicit */int) (short)-28363)) : (((/* implicit */int) (short)-4651)))))))));
                        }
                    } 
                } 
                var_28 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_28 [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_3 [i_1]))))) ? (((((/* implicit */_Bool) (short)15088)) ? ((-(((/* implicit */int) var_13)))) : (((/* implicit */int) var_5)))) : (((/* implicit */int) ((((/* implicit */_Bool) ((short) (short)-18472))) || (((/* implicit */_Bool) (short)-2223)))))));
                var_29 = min((((short) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0])), (((/* implicit */short) ((((/* implicit */int) var_6)) <= (((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) var_2)))))))));
            }
        } 
    } 
    var_30 = ((/* implicit */short) ((max((((/* implicit */int) var_12)), ((-(((/* implicit */int) (short)32753)))))) | (((/* implicit */int) (short)-23433))));
}
