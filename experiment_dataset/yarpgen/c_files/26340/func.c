/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26340
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
    for (int i_0 = 1; i_0 < 13; i_0 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) (((+(((((/* implicit */_Bool) (unsigned char)217)) ? (arr_1 [4U] [i_0]) : (arr_1 [(signed char)0] [(signed char)0]))))) + (((/* implicit */unsigned int) ((/* implicit */int) min((((unsigned char) (_Bool)1)), ((unsigned char)235))))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 3; i_1 < 14; i_1 += 2) 
        {
            var_15 ^= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_2)) ? (var_9) : (var_13)))));
            var_16 = ((/* implicit */unsigned char) ((arr_2 [i_0] [i_0] [i_1]) - (arr_2 [i_0] [i_0] [i_0])));
            /* LoopNest 3 */
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    for (long long int i_4 = 1; i_4 < 14; i_4 += 4) 
                    {
                        {
                            arr_13 [i_0] [i_0 + 2] [i_0] [i_0 + 1] [(signed char)1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0] [3U]))));
                            arr_14 [(unsigned char)4] [i_0] [(unsigned char)4] [i_0] [i_0] = arr_12 [7ULL] [9U] [(short)12] [i_3] [i_4 + 1] [i_4];
                        }
                    } 
                } 
            } 
            arr_15 [i_0] = ((/* implicit */unsigned char) (+(arr_11 [i_1] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] [i_0])));
            arr_16 [i_0] [i_1] = ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
        }
        for (long long int i_5 = 0; i_5 < 15; i_5 += 4) 
        {
            var_17 ^= ((/* implicit */int) ((short) arr_12 [i_0 + 1] [i_0] [i_0] [12U] [i_0 + 2] [i_0]));
            arr_20 [i_0] = ((/* implicit */unsigned long long int) var_12);
            arr_21 [i_0] [i_5] = ((/* implicit */unsigned int) ((unsigned char) ((unsigned int) ((((/* implicit */_Bool) 17118105609856762740ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7))))));
        }
        arr_22 [i_0] = ((/* implicit */int) (((+(((((/* implicit */_Bool) arr_17 [(unsigned char)5] [i_0 + 1] [i_0 + 1])) ? (3424773644U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)32))))))) > (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (0U)))));
        var_18 = ((/* implicit */_Bool) arr_9 [i_0 + 1] [i_0] [i_0]);
        arr_23 [i_0] [i_0 - 1] = ((/* implicit */unsigned int) ((_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) var_7)) / (((/* implicit */int) var_7))))), ((((_Bool)1) ? (4294967289U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0]))))))));
    }
    for (int i_6 = 1; i_6 < 13; i_6 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_7 = 0; i_7 < 15; i_7 += 2) 
        {
            arr_28 [i_7] = ((/* implicit */short) (~(((((arr_6 [i_7] [i_6] [i_6 + 2]) + (2147483647))) >> (((var_10) + (416673449)))))));
            var_19 -= ((/* implicit */short) arr_4 [7]);
            /* LoopNest 3 */
            for (unsigned int i_8 = 0; i_8 < 15; i_8 += 2) 
            {
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 4) 
                    {
                        {
                            arr_37 [i_6] [i_6 + 2] [i_6] [i_6] [i_6 - 1] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_8 [i_6] [i_7] [i_9] [i_10] [7ULL])), (max((((/* implicit */unsigned long long int) arr_27 [i_10])), ((~(12808760783613804919ULL)))))));
                            arr_38 [i_8] [i_7] [i_8] [i_9] [3U] = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) (unsigned char)235)), (3461653244U))) | (((/* implicit */unsigned int) max((((/* implicit */int) arr_33 [i_6 + 2] [i_7] [(short)5] [i_9 - 1] [i_10] [i_7])), ((+(var_8))))))));
                        }
                    } 
                } 
            } 
            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) var_5))));
        }
        for (unsigned int i_11 = 0; i_11 < 15; i_11 += 4) 
        {
            var_21 = ((/* implicit */unsigned int) max((var_21), (min((3154942752U), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-11492))) > (58881566U))))))));
            arr_42 [6ULL] [i_11] [i_11] = ((/* implicit */unsigned long long int) ((short) (+(1328638463852788880ULL))));
            arr_43 [(unsigned char)0] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((~(arr_2 [i_11] [i_11] [i_6 + 2])))))) ? ((+((+(0ULL))))) : (((/* implicit */unsigned long long int) max((arr_40 [i_11] [i_11] [i_11]), (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_10 [i_11])) : (((/* implicit */int) (unsigned char)58))))))))));
            arr_44 [7U] [7U] [i_6] = ((/* implicit */unsigned long long int) arr_9 [i_6 - 1] [i_11] [i_6]);
        }
        var_22 &= ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) == (1U));
    }
    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) min((((/* implicit */unsigned int) (((((+(((/* implicit */int) var_3)))) + (2147483647))) << (((((/* implicit */int) ((short) (_Bool)1))) - (1)))))), (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) 255)) : (var_11))) / (((/* implicit */unsigned int) ((/* implicit */int) ((825594328) != (((/* implicit */int) (short)(-32767 - 1))))))))))))));
    var_24 = ((/* implicit */_Bool) (-(12584188016530162154ULL)));
}
