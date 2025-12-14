/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239683
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
    var_15 = ((/* implicit */unsigned long long int) var_1);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */short) min((arr_4 [i_1] [i_0] [i_0 + 3]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)1353)) ? (((/* implicit */int) (short)18769)) : (-1488990071))))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-15169)) ? (((/* implicit */int) (short)10973)) : (((/* implicit */int) (unsigned char)130))));
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) 428529484)) ? (2147483647) : (((/* implicit */int) (short)-29154)))))) ? (((arr_4 [i_0 - 1] [i_0] [i_1]) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_2 [i_0 + 3] [i_1] [9U]), (arr_2 [(_Bool)1] [i_0 + 3] [i_1])))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (signed char i_2 = 1; i_2 < 11; i_2 += 1) 
    {
        arr_9 [i_2] |= ((/* implicit */signed char) min((arr_4 [2] [(unsigned char)8] [i_2 - 1]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_2] [i_2 + 2] [i_2 + 2])) ? (((/* implicit */int) (short)-2091)) : (((/* implicit */int) arr_2 [i_2 - 1] [i_2 + 1] [i_2 - 1])))))));
        arr_10 [i_2] = ((/* implicit */unsigned long long int) arr_4 [i_2] [(short)8] [i_2 + 1]);
        arr_11 [i_2] = ((/* implicit */signed char) arr_2 [i_2] [i_2] [i_2]);
    }
    /* vectorizable */
    for (unsigned char i_3 = 1; i_3 < 12; i_3 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */short) arr_12 [i_3 + 4]);
        var_18 = ((/* implicit */int) min((var_18), (((((/* implicit */int) arr_13 [i_3 + 2])) * (((/* implicit */int) arr_13 [i_3 + 3]))))));
    }
    for (unsigned char i_4 = 1; i_4 < 12; i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_5 = 2; i_5 < 13; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 4; i_6 < 15; i_6 += 4) 
            {
                {
                    arr_23 [i_4 + 1] [i_5] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) ((((/* implicit */int) arr_15 [i_5] [i_6 - 3])) > (((/* implicit */int) (short)-13009))))), (var_6)))) ? (max((((((/* implicit */_Bool) arr_19 [i_4 + 3] [i_4 + 3])) ? (((/* implicit */int) arr_21 [i_4 - 1] [i_4 - 1] [(unsigned char)2])) : (((/* implicit */int) arr_21 [i_4] [i_4] [i_6])))), (((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) arr_19 [i_6] [i_4])) ? (((/* implicit */int) arr_14 [i_4 - 1])) : (((/* implicit */int) arr_14 [i_5 + 1]))))));
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) 1488990070))) ? (((/* implicit */int) (unsigned char)60)) : (((/* implicit */int) (signed char)72)))))));
                    arr_24 [i_4] [i_4 + 1] [i_5] [i_6 - 2] = ((/* implicit */unsigned short) max((max((min((((/* implicit */short) var_4)), (arr_14 [i_4]))), (((/* implicit */short) ((((/* implicit */int) arr_14 [i_5])) <= (((/* implicit */int) var_0))))))), (min(((short)4018), ((short)12988)))));
                }
            } 
        } 
        arr_25 [i_4] [i_4 + 3] = ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) arr_21 [i_4 + 1] [(_Bool)1] [i_4 - 1])))), (min((((/* implicit */int) arr_19 [i_4 + 3] [i_4 + 4])), ((+(((/* implicit */int) (unsigned short)65535))))))));
    }
    var_20 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (signed char)14)), (33554431U)));
    var_21 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)31))))));
}
