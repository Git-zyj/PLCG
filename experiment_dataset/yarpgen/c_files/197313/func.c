/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197313
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 14; i_2 += 4) 
            {
                {
                    var_12 = ((arr_3 [i_0] [i_1]) ? ((+(((var_3) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)69))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_0 [i_0 + 1]), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) < (arr_2 [i_2] [i_0])))))))));
                    var_13 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)57284)))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((((((((/* implicit */_Bool) var_10)) ? (var_7) : (13024482082249085795ULL))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-72)) ? (((/* implicit */int) (signed char)72)) : (((/* implicit */int) (short)-14542))))))) / (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)69))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_11)), (var_5))))) : (min((((/* implicit */unsigned long long int) var_4)), (var_7)))))))));
    /* LoopSeq 1 */
    for (short i_3 = 0; i_3 < 20; i_3 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_4 = 3; i_4 < 19; i_4 += 4) 
        {
            var_15 = ((/* implicit */long long int) min((var_15), (arr_12 [i_3] [i_3] [i_3])));
            arr_14 [i_4] = ((/* implicit */signed char) arr_8 [(unsigned short)19] [i_3]);
            /* LoopSeq 1 */
            for (unsigned long long int i_5 = 1; i_5 < 19; i_5 += 3) 
            {
                arr_17 [i_5] [i_3] [i_3] [i_5] = ((/* implicit */unsigned char) ((unsigned short) (+(arr_8 [i_4] [i_4 - 3]))));
                var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_10 [i_4 - 2] [i_5 - 1]) ^ (arr_10 [i_4 - 1] [i_5 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_16 [(unsigned char)6] [i_3] [i_5])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_5] [i_4]))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)71))))))) : (arr_15 [i_3]))))));
                /* LoopNest 2 */
                for (unsigned short i_6 = 2; i_6 < 18; i_6 += 4) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */signed char) max((var_9), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_5 + 1])) ? (((/* implicit */int) (short)-4427)) : (((/* implicit */int) arr_13 [i_4 - 3] [i_5 - 1])))))));
                            var_18 ^= ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_22 [i_7] [i_7] [12U])), (arr_21 [i_6] [i_4] [i_4] [i_6] [i_7])))) ? (((/* implicit */int) max(((unsigned short)17533), ((unsigned short)20155)))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_23 [i_4] [i_4] [i_5 + 1] [i_3] [i_7])), (arr_9 [8ULL] [0]))))))) - (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_3] [i_4 - 1] [i_5] [i_6] [i_6])) ? (((/* implicit */int) arr_23 [10ULL] [i_4] [i_4] [i_4] [i_7])) : (((/* implicit */int) arr_23 [i_3] [i_5] [i_5] [i_6] [i_6]))))), (arr_16 [i_4] [i_7] [i_5 - 1]))));
                            arr_24 [19LL] [i_4] [i_5] [19LL] [19LL] = min((max((arr_20 [i_5 + 1] [i_5] [i_5] [i_5 - 1]), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (short)4095)), ((unsigned short)20160)))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-122))))));
                            arr_25 [i_3] [i_3] [i_5] [i_3] [i_3] [i_5] [i_3] = ((/* implicit */unsigned short) arr_23 [8ULL] [(signed char)5] [15U] [i_7] [i_5]);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_8 = 0; i_8 < 20; i_8 += 2) 
                {
                    arr_28 [i_3] [17U] [(_Bool)1] [i_5] [2] = ((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_4 - 3] [i_5 - 1])) - (((/* implicit */int) arr_13 [i_4 - 3] [i_5 + 1]))));
                    var_19 = ((/* implicit */unsigned long long int) ((short) arr_16 [i_4 - 1] [i_5] [i_5 + 1]));
                    var_20 = ((/* implicit */short) ((((/* implicit */int) arr_22 [i_5 - 1] [(unsigned short)17] [1ULL])) | (((/* implicit */int) arr_22 [i_5 - 1] [i_3] [i_3]))));
                }
            }
        }
        /* LoopNest 2 */
        for (long long int i_9 = 1; i_9 < 18; i_9 += 4) 
        {
            for (int i_10 = 1; i_10 < 17; i_10 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) (~(((((/* implicit */int) arr_23 [i_3] [(signed char)10] [i_9] [i_10] [i_3])) | (((/* implicit */int) arr_23 [i_3] [i_3] [i_10 + 2] [i_10] [i_3]))))));
                    /* LoopNest 2 */
                    for (signed char i_11 = 2; i_11 < 18; i_11 += 2) 
                    {
                        for (short i_12 = 1; i_12 < 19; i_12 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) arr_26 [12U] [i_12 - 1] [i_11] [i_9 + 1] [i_3] [i_3]);
                                var_23 ^= ((((((/* implicit */_Bool) arr_11 [i_9 + 1])) ? (arr_11 [i_9 + 1]) : (arr_11 [i_9 + 2]))) / (arr_11 [i_9 + 1]));
                                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)5453)) ? (((/* implicit */int) (signed char)76)) : (((/* implicit */int) (signed char)-70))));
                                arr_38 [i_3] [i_9] [i_10] [i_11] [i_11] [i_9] [i_11] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)47988))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_39 [i_3] = ((/* implicit */short) (+(min((min((((/* implicit */unsigned long long int) arr_27 [i_3] [i_3] [(_Bool)1] [i_3])), (var_9))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4)))))))));
    }
    var_25 = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((min((((/* implicit */long long int) var_1)), (1800078702465311402LL))) >> (((((/* implicit */int) (short)-15764)) + (15816))))));
}
