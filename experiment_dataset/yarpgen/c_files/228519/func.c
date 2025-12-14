/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228519
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)61705)) ? (((/* implicit */int) (short)-31359)) : (((/* implicit */int) (short)-2048))));
        var_11 = ((/* implicit */_Bool) (-(((/* implicit */int) max(((unsigned short)10697), (((/* implicit */unsigned short) (short)2056)))))));
        var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) min((min((((/* implicit */short) arr_1 [i_0])), ((short)2081))), (((/* implicit */short) arr_1 [i_0])))))));
        arr_2 [i_0] [i_0] = ((((/* implicit */_Bool) ((((_Bool) arr_1 [i_0])) ? (((unsigned long long int) arr_0 [i_0])) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (527765581332480ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (((unsigned int) ((short) arr_1 [i_0]))));
    }
    for (unsigned short i_1 = 3; i_1 < 21; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_2 = 2; i_2 < 22; i_2 += 3) 
        {
            var_13 *= ((/* implicit */unsigned short) ((unsigned int) var_1));
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_14 = max((max((arr_10 [i_1] [i_2 + 2] [i_1]), (arr_10 [i_1] [i_2 + 2] [i_1]))), (((((/* implicit */_Bool) (short)-2027)) ? (arr_10 [i_3] [i_2 + 1] [i_1]) : (arr_10 [i_1 - 2] [i_2 + 3] [i_1]))));
                        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) arr_7 [i_2 + 3] [i_3] [i_4])))))))));
                        arr_13 [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)19351)) * (((/* implicit */int) var_9))))) ? (((var_5) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12463))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 + 2] [i_1 - 2])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)166))) : (arr_6 [i_3] [i_3] [10U])));
                        arr_14 [i_1] [17U] [(signed char)4] [i_3] [i_1] = ((/* implicit */unsigned char) ((((_Bool) 20U)) ? (((/* implicit */int) (signed char)0)) : ((~(((/* implicit */int) ((var_1) && (((/* implicit */_Bool) 1292204489)))))))));
                    }
                } 
            } 
            arr_15 [14ULL] [i_1] [i_2] = (short)2081;
            var_16 ^= ((/* implicit */signed char) ((short) (signed char)71));
            /* LoopSeq 2 */
            for (unsigned char i_5 = 3; i_5 < 22; i_5 += 4) 
            {
                arr_19 [i_1] [i_5 + 2] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_9 [i_2] [i_1])), (var_6)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_1] [i_2] [i_5])) / (((/* implicit */int) (unsigned char)143))))) : (((18402412822286807491ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2057))))))));
                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) ((short) (_Bool)1))) ? ((-(2250396250453729493ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_9 [i_1] [(short)12]), (((/* implicit */unsigned int) (unsigned short)17493))))) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned short)10697))))))))));
            }
            /* vectorizable */
            for (signed char i_6 = 2; i_6 < 24; i_6 += 2) 
            {
                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)10697)) ? (((/* implicit */int) (unsigned short)4096)) : (((/* implicit */int) (short)-2034))));
                arr_23 [i_1] [i_6] [i_6] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807ULL)) ? (((/* implicit */int) arr_17 [i_1] [i_6] [i_1] [i_1])) : (((/* implicit */int) arr_17 [i_1] [i_6] [i_1] [i_1]))))) || (((/* implicit */_Bool) -695534765))));
                arr_24 [i_6] |= ((/* implicit */short) var_3);
            }
        }
        /* vectorizable */
        for (unsigned long long int i_7 = 1; i_7 < 24; i_7 += 3) 
        {
            arr_28 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_1] [i_1 - 2] [i_1])) || (((/* implicit */_Bool) arr_10 [i_1] [i_1 - 2] [i_1]))));
            arr_29 [i_1] [i_1] [(short)10] = ((/* implicit */short) ((((/* implicit */_Bool) (+(1292204489)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_22 [i_1 - 1]))));
            arr_30 [i_7] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) arr_3 [i_1] [i_1]))))) ? (arr_12 [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((short) ((unsigned int) var_1))))));
        }
        arr_31 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned int) arr_26 [i_1])))));
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) arr_8 [i_1] [i_1])) + (4053868955U))) - (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_10 [i_1] [i_1] [4]))))))), (((((/* implicit */_Bool) ((arr_27 [(unsigned short)22]) ? (((/* implicit */long long int) var_7)) : (arr_18 [i_1] [i_1] [(signed char)12])))) ? (arr_26 [12U]) : (((/* implicit */unsigned long long int) ((long long int) arr_11 [i_1] [8U] [8U] [i_1]))))))))));
    }
    for (unsigned char i_8 = 4; i_8 < 19; i_8 += 2) 
    {
        var_21 = ((/* implicit */signed char) ((var_5) - (((/* implicit */unsigned long long int) ((int) var_9)))));
        arr_35 [(_Bool)1] = ((/* implicit */long long int) min((arr_11 [i_8 - 1] [i_8] [i_8] [i_8]), (((/* implicit */unsigned int) max(((short)-2081), (((/* implicit */short) arr_7 [i_8] [i_8] [i_8 + 2])))))));
        var_22 = (signed char)0;
    }
    for (signed char i_9 = 3; i_9 < 13; i_9 += 4) 
    {
        var_23 = ((/* implicit */unsigned long long int) ((short) ((unsigned char) arr_36 [i_9 + 2])));
        /* LoopNest 2 */
        for (unsigned char i_10 = 0; i_10 < 15; i_10 += 2) 
        {
            for (unsigned int i_11 = 1; i_11 < 12; i_11 += 2) 
            {
                {
                    var_24 = ((/* implicit */unsigned long long int) var_3);
                    var_25 = ((/* implicit */int) ((_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)2081))) - (4169844517238114938ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))))));
                }
            } 
        } 
        arr_43 [i_9] [i_9] = ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_9] [i_9] [(short)8])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_21 [i_9] [i_9 - 3]))))) ? (((/* implicit */int) arr_16 [(unsigned short)0])) : (((arr_41 [i_9] [i_9]) ? (1239011340) : (arr_8 [i_9] [i_9])))));
    }
    var_26 -= ((/* implicit */unsigned char) var_4);
    var_27 = var_1;
    var_28 = ((/* implicit */unsigned short) min((((/* implicit */int) (short)2098)), ((+(((((/* implicit */_Bool) 2097151ULL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8))))))));
    var_29 = ((/* implicit */int) ((_Bool) ((((/* implicit */int) ((_Bool) var_7))) + (((/* implicit */int) var_8)))));
}
