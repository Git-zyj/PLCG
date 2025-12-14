/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228311
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
    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1)))))));
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (_Bool)1))) ? (max((var_13), (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1)))))))) ? (((((/* implicit */_Bool) min((((/* implicit */short) var_10)), (var_3)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_11)))) : ((~(((/* implicit */int) (unsigned short)63488))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (signed char i_2 = 2; i_2 < 12; i_2 += 3) 
            {
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (arr_4 [i_0] [i_0]) : (arr_4 [i_0] [i_0])));
                arr_7 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_3 [i_0] [i_2 - 2] [i_0]) : (arr_0 [(_Bool)1] [(_Bool)1])));
                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)63488)) ? (arr_4 [i_1] [i_0]) : (arr_4 [i_0] [i_0])));
            }
            /* vectorizable */
            for (short i_3 = 2; i_3 < 13; i_3 += 2) 
            {
                var_20 = ((/* implicit */unsigned long long int) 2262581403U);
                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-112)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) var_9)) : (arr_9 [i_3] [i_3] [i_3] [i_3 - 2])));
                arr_10 [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_5);
                /* LoopSeq 1 */
                for (short i_4 = 2; i_4 < 12; i_4 += 1) 
                {
                    arr_14 [i_0] [i_1] [i_0] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_3 + 1] [i_3 - 1] [i_3 + 1])) ? (((/* implicit */int) arr_12 [i_0] [i_3 - 1] [i_3] [i_4 + 1])) : (((/* implicit */int) arr_6 [i_3] [i_3 + 1] [i_4 + 1]))));
                    arr_15 [i_0] [i_0] [i_0] [i_1] [i_0] &= ((/* implicit */_Bool) ((unsigned int) (unsigned short)63485));
                    arr_16 [i_0] [i_0] [7ULL] [(short)9] [i_0] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */unsigned long long int) 971731274)) : (2219357894127918916ULL)));
                    var_22 -= ((/* implicit */int) (unsigned char)180);
                }
                /* LoopSeq 2 */
                for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 1) 
                {
                    var_23 += ((/* implicit */signed char) arr_12 [i_3] [i_3] [i_3] [i_3]);
                    arr_19 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))));
                    var_24 = ((/* implicit */unsigned long long int) var_3);
                }
                for (unsigned int i_6 = 0; i_6 < 14; i_6 += 4) 
                {
                    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) && (((/* implicit */_Bool) (signed char)37))));
                    arr_22 [i_0] [i_0] [i_3] [i_0] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_1] [i_6])) ? (arr_17 [(short)13] [i_1] [i_3] [(short)13]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                    arr_23 [i_0] [i_0] [i_3 - 2] = ((/* implicit */unsigned char) (((_Bool)1) ? (16227386179581632700ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)96)))));
                }
            }
            for (int i_7 = 0; i_7 < 14; i_7 += 4) 
            {
                var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((unsigned int) ((arr_17 [i_0] [i_1] [i_1] [i_7]) >> (((3045027173239157125ULL) - (3045027173239157123ULL)))))))));
                arr_27 [i_0] [i_0] = ((/* implicit */signed char) ((0) << (((((/* implicit */int) (short)-1)) + (8)))));
                arr_28 [i_0] [i_0] = ((/* implicit */short) (~(max((((((/* implicit */unsigned int) ((/* implicit */int) var_7))) / (arr_0 [i_0] [i_0]))), (((/* implicit */unsigned int) (_Bool)1))))));
            }
            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((/* implicit */_Bool) (short)-28759)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0] [i_0])) ? (((/* implicit */int) arr_6 [(_Bool)1] [i_1] [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1] [i_1])))))))))))));
            var_28 = ((/* implicit */short) min((5888958101103989205ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551612ULL)) ? (((/* implicit */int) (unsigned short)63470)) : (15))))));
            var_29 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) ((signed char) var_11))), (max(((unsigned char)192), (((/* implicit */unsigned char) (_Bool)1)))))))));
        }
        var_30 = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0] [i_0]);
        var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) 0ULL)) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) == (((/* implicit */int) (_Bool)1)))))));
        arr_29 [i_0] = ((/* implicit */unsigned short) ((max((-5144949998328960866LL), (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (arr_5 [i_0] [i_0] [i_0] [i_0]) : (var_6)))))) >> (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-1329)))))) == (arr_5 [i_0] [i_0] [i_0] [i_0]))))));
    }
    var_32 = ((/* implicit */int) var_6);
}
