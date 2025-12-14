/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47646
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)62105)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0 + 2])))) % (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)-8044))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            arr_5 [i_0 - 1] [i_0 - 1] = ((/* implicit */short) (!(((/* implicit */_Bool) (short)(-32767 - 1)))));
            arr_6 [i_0] [i_0 - 1] [i_0 + 2] = ((/* implicit */short) arr_3 [i_0 - 2] [(unsigned short)5]);
        }
    }
    for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        var_16 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)32756)) : (((/* implicit */int) min(((unsigned short)43682), (((/* implicit */unsigned short) arr_0 [i_2] [(unsigned short)6]))))))), (((/* implicit */int) (unsigned short)21851))));
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)27098)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_3 [i_2] [i_2]))))) ? ((-(((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) (unsigned short)21838)))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_2] [i_2])) && (((/* implicit */_Bool) arr_3 [i_2] [i_2]))))) : (((((/* implicit */_Bool) arr_3 [i_2] [i_2])) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_2 [(unsigned short)0])) : (((/* implicit */int) (unsigned short)43680))))))));
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            for (short i_4 = 1; i_4 < 10; i_4 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_5 = 1; i_5 < 8; i_5 += 4) 
                    {
                        var_18 = ((/* implicit */short) (~((+(((/* implicit */int) var_13))))));
                        arr_19 [i_4 + 1] [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (short)-13616)) : (((/* implicit */int) (unsigned short)1498)))) / (((((((/* implicit */int) arr_9 [i_3])) * (((/* implicit */int) var_10)))) / (((((/* implicit */_Bool) arr_4 [i_2] [i_3] [i_4 - 1])) ? (((/* implicit */int) arr_11 [i_3] [i_3] [i_5])) : (((/* implicit */int) (unsigned short)59134))))))));
                    }
                    arr_20 [i_2] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */int) min((min((var_7), (var_1))), ((short)29721)))) ^ (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)32763)), (var_6)))))))));
                }
            } 
        } 
        var_19 = arr_8 [(short)10];
    }
    var_20 = ((/* implicit */short) max((((((/* implicit */int) max(((unsigned short)48010), ((unsigned short)43698)))) / (((/* implicit */int) var_12)))), (((/* implicit */int) (((!(((/* implicit */_Bool) var_12)))) && ((!(((/* implicit */_Bool) (short)6242)))))))));
    /* LoopNest 2 */
    for (unsigned short i_6 = 1; i_6 < 13; i_6 += 3) 
    {
        for (short i_7 = 0; i_7 < 14; i_7 += 1) 
        {
            {
                arr_27 [i_6] [i_6] [i_7] = ((/* implicit */short) (((-(((/* implicit */int) (unsigned short)3566)))) <= ((~(((/* implicit */int) (short)-32755))))));
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)21854)) : (((/* implicit */int) (short)(-32767 - 1)))));
                arr_28 [i_6] = ((/* implicit */short) max((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_24 [i_6])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)32740)))))), (((((/* implicit */int) min((arr_21 [i_6]), (((/* implicit */unsigned short) (short)-1165))))) | (((/* implicit */int) ((unsigned short) (unsigned short)43682)))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) var_0)))));
}
