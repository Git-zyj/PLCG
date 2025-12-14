/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49152
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)26018)) ^ (((((/* implicit */int) (unsigned short)26018)) / (((/* implicit */int) arr_0 [(short)10]))))));
        /* LoopSeq 2 */
        for (signed char i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */short) arr_0 [(signed char)7]);
            var_19 = ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_4 [i_0] [i_1 + 3] [i_1])))) - ((+(((/* implicit */int) (signed char)105))))));
        }
        for (short i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            var_20 = ((/* implicit */long long int) (~(((/* implicit */int) var_1))));
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (short i_4 = 0; i_4 < 14; i_4 += 4) 
                {
                    {
                        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [(_Bool)1] [i_2] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) ((((var_13) << (((var_13) - (833258765U))))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0]))))))) : (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (var_15)))) ? (arr_13 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)60)) ? (((/* implicit */int) (signed char)-105)) : (((/* implicit */int) var_1)))))))));
                        arr_15 [i_0] [i_2] [5] [(signed char)7] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)64)) : (1510759738)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))) : (((/* implicit */int) var_12)))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned char i_5 = 0; i_5 < 14; i_5 += 3) 
            {
                for (unsigned char i_6 = 0; i_6 < 14; i_6 += 4) 
                {
                    for (signed char i_7 = 1; i_7 < 12; i_7 += 4) 
                    {
                        {
                            arr_23 [i_6] = ((/* implicit */signed char) max((((((/* implicit */_Bool) (unsigned short)39527)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)26018))))) : ((+(var_8))))), (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_18))) % (-7013825116828943163LL)))) ? (max((((/* implicit */unsigned int) var_18)), (var_13))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))))));
                            arr_24 [(signed char)7] [i_5] [i_5] [(unsigned char)2] [i_0] [i_0] [i_0] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) -1842140514708073826LL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)-95))));
                            var_22 |= ((/* implicit */unsigned int) arr_5 [i_7 - 1] [i_0]);
                            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (unsigned char)199))));
                        }
                    } 
                } 
            } 
            arr_25 [i_0] [i_2] [i_2] = ((/* implicit */short) (unsigned short)52176);
        }
        var_24 += ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_16), (((/* implicit */unsigned short) (signed char)-124))))) ? (((((/* implicit */_Bool) (signed char)46)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39535))) : (var_14))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-8)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)127)))))))), (10839379519889090397ULL)));
    }
    /* LoopNest 2 */
    for (unsigned short i_8 = 0; i_8 < 16; i_8 += 2) 
    {
        for (short i_9 = 1; i_9 < 15; i_9 += 3) 
        {
            {
                arr_30 [i_8] = ((/* implicit */unsigned char) (~(((/* implicit */int) max((arr_28 [i_9 + 1] [i_8]), ((signed char)-79))))));
                var_25 += ((/* implicit */short) var_4);
            }
        } 
    } 
}
