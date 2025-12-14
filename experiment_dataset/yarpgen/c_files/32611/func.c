/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32611
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
    var_12 = ((short) max(((short)32767), ((short)-16955)));
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_6 [i_2] = ((/* implicit */short) ((((((/* implicit */int) var_11)) == (((/* implicit */int) (short)30947)))) ? (((/* implicit */int) arr_3 [i_0] [i_2])) : (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0])) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) arr_3 [i_1] [i_2]))))));
                    /* LoopSeq 2 */
                    for (short i_3 = 1; i_3 < 21; i_3 += 2) /* same iter space */
                    {
                        var_13 += ((short) ((((/* implicit */int) (short)256)) > (((/* implicit */int) (short)32767))));
                        arr_11 [i_3] [i_1] = arr_2 [(short)6] [i_1] [i_3];
                        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_2 [i_3 + 1] [i_2 - 1] [(short)4])) : (((/* implicit */int) arr_2 [i_3 + 1] [i_2 + 4] [(short)1])))))));
                    }
                    for (short i_4 = 1; i_4 < 21; i_4 += 2) /* same iter space */
                    {
                        arr_14 [i_0] [i_1] [i_2] [i_2] [i_4 + 1] = ((short) arr_13 [i_0] [i_1] [i_2] [i_2 - 2] [i_1] [i_4]);
                        arr_15 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_7 [i_2 - 1] [i_2 + 4] [i_2 - 2] [i_4 - 1])) > (((((/* implicit */int) arr_12 [(short)20] [(short)14] [i_2] [i_2] [i_2] [i_2])) - (((/* implicit */int) var_0))))));
                        var_15 = ((/* implicit */short) min((var_15), (var_2)));
                        var_16 = ((/* implicit */short) (((~(((/* implicit */int) (short)32767)))) | (((/* implicit */int) var_8))));
                    }
                }
            } 
        } 
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-32756)) - (((/* implicit */int) var_8))))) ? (((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) arr_1 [i_0])))) : ((-(((/* implicit */int) (short)-8147))))));
    }
    for (short i_5 = 3; i_5 < 16; i_5 += 2) /* same iter space */
    {
        arr_19 [i_5] [(short)14] = ((/* implicit */short) max((((((/* implicit */_Bool) max(((short)0), (arr_4 [i_5] [i_5 + 1] [(short)17])))) ? (((((/* implicit */_Bool) arr_2 [i_5] [i_5 - 2] [i_5])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_5 [i_5] [i_5] [i_5] [(short)10])))) : (((/* implicit */int) min((arr_17 [i_5]), (arr_18 [i_5] [i_5])))))), (((((/* implicit */_Bool) arr_3 [i_5] [i_5 + 2])) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) arr_3 [i_5] [i_5 + 3]))))));
        var_18 = ((/* implicit */short) ((((/* implicit */int) (short)-1)) & (((/* implicit */int) (short)0))));
        var_19 = ((/* implicit */short) max((var_19), (max((var_0), (((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_5 + 3])) || (((/* implicit */_Bool) arr_0 [i_5 + 3])))))))));
    }
    for (short i_6 = 3; i_6 < 16; i_6 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */short) ((((((/* implicit */_Bool) max((arr_2 [i_6] [i_6] [i_6]), (var_11)))) ? (((/* implicit */int) ((((/* implicit */int) arr_21 [i_6] [i_6])) != (((/* implicit */int) (short)32767))))) : (((/* implicit */int) min(((short)-11458), (arr_5 [i_6] [i_6] [i_6 - 2] [i_6])))))) >> (((((/* implicit */int) arr_7 [i_6] [(short)5] [i_6 - 3] [i_6 - 1])) + (1535)))));
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_6])) ? (((/* implicit */int) arr_9 [(short)2])) : (((/* implicit */int) arr_12 [i_6] [i_6] [i_6] [i_6] [i_6 - 3] [i_6]))))) ? (((((/* implicit */_Bool) arr_3 [i_6] [(short)20])) ? (((/* implicit */int) arr_8 [i_6 - 2] [i_6 - 2])) : (((/* implicit */int) var_4)))) : ((~(((/* implicit */int) var_9))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-3)) ? (((/* implicit */int) (short)512)) : (((/* implicit */int) (short)-10))))) ? (((/* implicit */int) max((var_6), (var_0)))) : (((/* implicit */int) ((short) arr_16 [i_6 + 2]))))) : (((/* implicit */int) arr_5 [i_6] [i_6] [(short)0] [i_6])))))));
        var_22 = arr_9 [(short)8];
        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((((((/* implicit */int) arr_10 [i_6 + 3] [i_6] [i_6] [i_6])) - (((/* implicit */int) (short)32757)))) - (((/* implicit */int) (short)1122)))) + (((/* implicit */int) (short)-30321)))))));
    }
    for (short i_7 = 3; i_7 < 16; i_7 += 2) /* same iter space */
    {
        var_24 = ((/* implicit */short) (~(((/* implicit */int) var_4))));
        var_25 = ((/* implicit */short) ((((/* implicit */int) ((short) var_8))) < (min((((/* implicit */int) ((short) var_7))), ((~(((/* implicit */int) (short)8653))))))));
    }
    /* LoopNest 2 */
    for (short i_8 = 0; i_8 < 12; i_8 += 1) 
    {
        for (short i_9 = 3; i_9 < 11; i_9 += 3) 
        {
            {
                arr_28 [i_9] [i_9] = ((short) ((short) arr_20 [i_8] [i_9 + 1]));
                var_26 = ((/* implicit */short) min(((((+(((/* implicit */int) var_6)))) - (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_13 [(short)7] [(short)7] [i_8] [(short)2] [(short)7] [i_9 - 2])) : (((/* implicit */int) var_2)))))), (((((/* implicit */_Bool) min((arr_24 [i_8]), ((short)-8142)))) ? (((/* implicit */int) arr_25 [i_9 - 3])) : (((/* implicit */int) max((var_4), (arr_7 [(short)16] [i_8] [i_8] [i_9]))))))));
            }
        } 
    } 
    var_27 = ((/* implicit */short) (~(((/* implicit */int) var_8))));
    var_28 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) * (((/* implicit */int) (short)8129))))) ? (((/* implicit */int) max((var_0), (var_9)))) : (((/* implicit */int) max(((short)-30638), ((short)-16313)))))))));
}
