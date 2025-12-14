/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30629
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
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775800LL)) ? (((/* implicit */int) (unsigned char)27)) : ((-(((502397637) << (((((/* implicit */int) (signed char)118)) - (116)))))))));
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [(_Bool)1] = ((/* implicit */unsigned long long int) -2147483627);
                    arr_11 [i_0] [i_0] [i_2 - 1] = (((((~(((/* implicit */int) arr_9 [i_0] [i_0])))) + (2147483647))) >> (((((((/* implicit */_Bool) arr_6 [i_2] [i_1 + 1])) ? (((/* implicit */unsigned long long int) (~(15U)))) : (max((var_1), (((/* implicit */unsigned long long int) 16U)))))) - (4294967271ULL))));
                    arr_12 [i_0] = ((/* implicit */unsigned long long int) min(((-(16U))), (((/* implicit */unsigned int) arr_3 [13LL]))));
                }
            } 
        } 
    }
    var_11 = ((/* implicit */signed char) min((((/* implicit */long long int) (-(var_3)))), (9223372036854775800LL)));
    var_12 += ((/* implicit */unsigned char) (+(min((((((/* implicit */_Bool) 4294967272U)) ? (((/* implicit */unsigned long long int) 122581100573743017LL)) : (var_1))), (((((/* implicit */_Bool) 9223372036854775807LL)) ? (574208952489738240ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 3; i_3 < 15; i_3 += 3) 
    {
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 1; i_6 < 15; i_6 += 3) 
                    {
                        for (int i_7 = 1; i_7 < 12; i_7 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 8551686308039708194ULL)) ? (9895057765669843437ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_5] [i_5]))))))));
                                arr_23 [i_3] [i_3] [i_5] [i_6] [i_5] [i_3] = ((/* implicit */_Bool) (~((+(arr_22 [i_6] [i_7 - 1] [i_6] [i_5] [i_6] [i_4] [i_3])))));
                                arr_24 [i_6] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_19 [i_6] [15LL] [i_5] [i_3] [i_6])) + (954623282U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_7] [i_6 - 1] [i_4 - 1]))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3] [i_3]))) : (arr_6 [i_5] [i_7]))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned char) ((_Bool) arr_18 [i_4 - 1] [i_4 - 1] [i_3 - 1] [i_3 + 1]));
                    arr_25 [i_3] [i_4] [i_4] [i_4] = ((/* implicit */long long int) (+(((/* implicit */int) var_6))));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                {
                    arr_29 [i_3] [(unsigned short)9] [i_8] = ((/* implicit */int) ((arr_22 [i_4] [i_4 - 1] [8LL] [i_8] [i_4 - 1] [i_8] [2U]) | (((/* implicit */long long int) ((/* implicit */int) (((~(arr_6 [i_4] [i_4]))) == (((/* implicit */unsigned long long int) (-(arr_18 [i_4 - 1] [i_8] [i_8] [i_8]))))))))));
                    var_15 ^= ((/* implicit */_Bool) arr_6 [i_4] [i_8]);
                    var_16 = ((/* implicit */short) (-(((/* implicit */int) ((unsigned short) ((signed char) 8747722793034969855LL))))));
                    arr_30 [i_8] [(short)1] = ((/* implicit */unsigned short) ((((((_Bool) 0ULL)) ? (((/* implicit */int) (unsigned char)36)) : (((/* implicit */int) arr_7 [i_3])))) >> (((max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-1))))), (((15599236827170457978ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) - (15599236827170457974ULL)))));
                }
                /* LoopNest 3 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 1) 
                    {
                        for (unsigned int i_11 = 0; i_11 < 16; i_11 += 2) 
                        {
                            {
                                arr_39 [i_3] [i_10] [i_10] [i_10] [i_10] [i_9] = ((/* implicit */int) min((((4294967279U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_3 + 1] [i_3 - 1] [i_4 - 1]))))), (((/* implicit */unsigned int) ((var_7) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                                arr_40 [(_Bool)1] [i_4] [i_9] [i_10] [(unsigned short)13] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)93)), (15888457641929064967ULL)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_17 ^= ((/* implicit */unsigned short) var_6);
}
