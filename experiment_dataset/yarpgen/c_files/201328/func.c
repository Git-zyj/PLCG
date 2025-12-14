/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201328
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
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (~((-(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))));
                var_12 = arr_2 [i_0] [i_1];
            }
        } 
    } 
    /* LoopSeq 3 */
    for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_7 [i_2]))));
        var_14 = ((/* implicit */short) (((+(var_0))) | (max((var_3), (((/* implicit */unsigned int) arr_6 [i_2] [i_2]))))));
    }
    for (signed char i_3 = 4; i_3 < 22; i_3 += 1) 
    {
        arr_12 [i_3] = ((/* implicit */unsigned int) (signed char)106);
        var_15 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_8 [i_3])) || (((/* implicit */_Bool) 2311206466U)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_0) : (var_9)))))) || (((/* implicit */_Bool) ((unsigned int) (short)-2048)))));
        arr_13 [(signed char)6] &= ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) max((arr_9 [(short)20]), (((/* implicit */unsigned int) arr_8 [i_3]))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_10 [i_3]))))) : (arr_9 [(signed char)4]))));
        var_16 -= ((/* implicit */signed char) ((unsigned int) (signed char)69));
        arr_14 [i_3] = ((/* implicit */signed char) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3 - 4]))) & (var_9))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1983760812U)) ? (((/* implicit */int) (signed char)-112)) : (((/* implicit */int) (short)-12195))))) ? (((/* implicit */int) max(((short)-5554), (((/* implicit */short) (signed char)-84))))) : (((((/* implicit */_Bool) (signed char)4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10)))))))));
    }
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 15; i_4 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_5 = 0; i_5 < 15; i_5 += 4) 
        {
            /* LoopNest 3 */
            for (signed char i_6 = 1; i_6 < 14; i_6 += 1) 
            {
                for (signed char i_7 = 2; i_7 < 11; i_7 += 2) 
                {
                    for (short i_8 = 1; i_8 < 12; i_8 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) var_3))));
                            var_18 += ((/* implicit */short) (-(((/* implicit */int) arr_22 [i_8 + 2] [i_8 + 2] [i_6 + 1]))));
                            var_19 = ((/* implicit */signed char) (-(var_3)));
                        }
                    } 
                } 
            } 
            arr_30 [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) var_1)) > (((/* implicit */int) ((signed char) arr_24 [i_4] [i_4] [i_4] [(signed char)14])))));
            arr_31 [13U] [13U] = ((/* implicit */signed char) arr_23 [i_4] [i_5] [(short)9] [i_5]);
        }
        arr_32 [i_4] = ((/* implicit */signed char) ((4294967295U) > (3198463539U)));
        var_20 = ((/* implicit */short) min((var_20), (arr_27 [i_4] [2U] [2U] [i_4] [i_4] [i_4] [i_4])));
    }
    var_21 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned int) var_6))))) ? (min((((/* implicit */unsigned int) (short)32741)), (var_5))) : (var_0)))) ? (var_3) : (1983760829U));
    var_22 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (var_7) : (min((var_5), (((/* implicit */unsigned int) (-(((/* implicit */int) var_1)))))))));
}
