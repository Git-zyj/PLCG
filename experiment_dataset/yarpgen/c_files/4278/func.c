/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4278
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
    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) (!(((/* implicit */_Bool) max((var_0), (((/* implicit */int) (unsigned char)242))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned short) max(((short)-1), ((short)-18426)));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (signed char i_4 = 0; i_4 < 14; i_4 += 1) 
                            {
                                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])) ? (arr_12 [i_0] [i_0] [i_2] [i_1] [i_3] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */int) var_11)) : (0))), (((/* implicit */int) arr_0 [i_0])))))));
                                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_7)) ? (arr_6 [i_0] [i_1 + 1] [i_3]) : (arr_6 [i_1] [i_1] [i_3])))))))))));
                                arr_13 [i_3] [i_3] [i_2] [i_3] [i_0] = ((/* implicit */int) min((((/* implicit */long long int) arr_8 [i_0] [i_0] [i_0] [i_0])), (((long long int) max((((/* implicit */unsigned long long int) arr_7 [i_0] [i_3] [i_0])), (arr_4 [i_1] [(short)11]))))));
                            }
                            arr_14 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_6 [i_1 - 2] [i_1 - 2] [i_2]) & (arr_9 [i_1 + 1] [i_1 - 1] [i_1 - 2] [i_3])))) || (((/* implicit */_Bool) arr_4 [i_0] [i_2]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 14; i_5 += 3) 
                {
                    for (unsigned char i_6 = 0; i_6 < 14; i_6 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)8822)) || (((/* implicit */_Bool) arr_10 [i_5] [i_1] [(unsigned char)3] [i_6])))))) : (max((((/* implicit */long long int) arr_8 [i_1 + 1] [i_1 - 2] [i_1] [i_1 + 1])), (min((((/* implicit */long long int) arr_1 [i_0] [i_1])), (144115188075855871LL)))))));
                            var_18 = ((/* implicit */_Bool) (~(0ULL)));
                            arr_22 [i_0] [(unsigned char)8] [i_5] [i_0] [i_0] [i_0] = (i_5 % 2 == zero) ? (((/* implicit */unsigned char) (((~(arr_10 [i_5] [i_1 - 2] [i_1 + 1] [i_1 + 1]))) << (((((((((arr_20 [i_0] [(unsigned char)10] [i_1] [i_5] [i_6]) + (((/* implicit */int) (short)1)))) + ((+(((/* implicit */int) arr_19 [i_1] [i_1] [i_5])))))) + (31890285))) - (27)))))) : (((/* implicit */unsigned char) (((~(arr_10 [i_5] [i_1 - 2] [i_1 + 1] [i_1 + 1]))) << (((((((((((((arr_20 [i_0] [(unsigned char)10] [i_1] [i_5] [i_6]) + (((/* implicit */int) (short)1)))) + ((+(((/* implicit */int) arr_19 [i_1] [i_1] [i_5])))))) + (31890285))) - (27))) + (21))) - (18))))));
                            var_19 += ((signed char) ((min((((/* implicit */unsigned long long int) var_4)), (arr_21 [i_0] [i_1] [i_0] [(_Bool)0]))) / (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_8)), (arr_10 [i_1] [i_1] [i_1 - 2] [i_1]))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) max((((int) (short)8840)), (((((/* implicit */_Bool) arr_20 [i_1 - 2] [i_1] [i_1 - 2] [i_1 - 2] [i_1 + 1])) ? (arr_20 [i_1 + 1] [i_1 + 1] [i_1 - 2] [i_1] [i_1 + 1]) : (arr_20 [i_1 + 1] [i_1] [i_1 - 2] [i_1] [i_1 - 2]))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) 88813279);
}
