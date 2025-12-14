/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232258
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
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 4; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        {
                            arr_10 [i_3] [i_3] [i_1] [i_3] [(short)7] = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) ((unsigned int) var_1)))) | (((/* implicit */int) var_6))));
                            /* LoopSeq 4 */
                            /* vectorizable */
                            for (signed char i_4 = 0; i_4 < 23; i_4 += 1) 
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_3] = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_9 [i_3] [i_3] [i_4])))) + (2147483647))) >> ((((~(((/* implicit */int) (signed char)-104)))) - (102)))));
                                var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-30612))))) || (((/* implicit */_Bool) ((((/* implicit */int) (signed char)-1)) / (((/* implicit */int) arr_0 [i_0])))))));
                            }
                            /* vectorizable */
                            for (signed char i_5 = 4; i_5 < 22; i_5 += 1) 
                            {
                                arr_17 [i_3] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)-18648))));
                                var_11 -= ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_5])) ? (((/* implicit */int) arr_15 [i_0] [i_2] [i_3] [i_5])) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_0]))))) ^ (((var_7) * (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_2]))))));
                                var_12 &= ((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_0 + 1] [i_1 - 1])) / (((/* implicit */int) arr_11 [i_0 - 1] [i_1 - 1]))));
                                arr_18 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3] [i_1] [i_1])) ? (arr_5 [i_1 - 1] [(unsigned short)16] [i_3] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((/* implicit */int) arr_9 [i_3] [i_5 - 2] [i_5])) : ((-(((/* implicit */int) var_2))))));
                            }
                            /* vectorizable */
                            for (long long int i_6 = 0; i_6 < 23; i_6 += 1) 
                            {
                                arr_21 [i_3] [i_3] [i_2] [21] [i_3] = (signed char)(-127 - 1);
                                var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_3] [i_1 - 1] [i_2] [i_2 - 1])) ? (((/* implicit */int) arr_15 [i_3] [i_1 - 1] [i_1 - 1] [i_2 - 3])) : (((/* implicit */int) (unsigned short)2291))));
                            }
                            for (long long int i_7 = 0; i_7 < 23; i_7 += 2) 
                            {
                                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((max((((((/* implicit */int) (signed char)(-127 - 1))) - (var_9))), ((-(((/* implicit */int) arr_11 [i_1] [i_2])))))) + (2147483647))) >> ((((+(((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) arr_3 [i_0] [i_3] [i_7])))))) - (23344))))))));
                                var_15 = ((/* implicit */short) (~(((/* implicit */int) ((short) arr_8 [i_0] [i_1 - 1] [i_1 - 1] [i_0 + 1])))));
                                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((unsigned short) ((((var_6) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)12774)))) | (((((/* implicit */int) arr_6 [i_3] [(unsigned short)11] [i_3])) ^ (((/* implicit */int) (unsigned short)25751))))))))));
                            }
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)4081)))))));
                var_18 ^= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((/* implicit */int) arr_20 [i_0] [i_0] [i_0 + 1] [i_0] [(unsigned short)20])) : (var_9)))));
                arr_24 [i_0] [i_0] [i_0 + 2] = ((/* implicit */unsigned short) arr_11 [i_0] [i_0]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_8 = 0; i_8 < 23; i_8 += 4) 
    {
        for (unsigned char i_9 = 0; i_9 < 23; i_9 += 3) 
        {
            {
                var_19 = ((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned short)25751)) - (((/* implicit */int) arr_0 [i_8]))))));
                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_9) : ((+(((/* implicit */int) arr_8 [i_8] [i_8] [i_9] [i_9]))))))) ? (((long long int) (signed char)(-127 - 1))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_22 [i_9] [i_8] [i_8])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_10 = 0; i_10 < 14; i_10 += 2) 
    {
        for (short i_11 = 2; i_11 < 12; i_11 += 2) 
        {
            {
                arr_35 [i_10] [i_11 + 1] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)39775))) ? (((/* implicit */int) ((signed char) arr_1 [i_11 + 1] [i_11]))) : (((/* implicit */int) (!(((/* implicit */_Bool) 16777088U)))))));
                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)17)))))));
                var_22 = ((/* implicit */unsigned int) max(((!(((/* implicit */_Bool) arr_28 [i_11] [i_11 + 2] [i_11 + 2])))), (((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) != (3233448789U)))) >= (((/* implicit */int) arr_14 [i_10] [i_11] [16U] [16U] [i_10]))))));
                var_23 = ((/* implicit */short) arr_33 [i_10] [i_11]);
            }
        } 
    } 
    var_24 = ((/* implicit */short) var_3);
}
