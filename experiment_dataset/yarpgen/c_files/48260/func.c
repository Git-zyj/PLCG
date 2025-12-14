/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48260
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
    var_13 = ((/* implicit */short) ((unsigned short) ((var_10) / (min((1838778115U), (1838778134U))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) arr_6 [i_0] [i_0] [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                arr_15 [i_1] [i_3] [(short)12] [i_1 + 3] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_0 + 1] [(_Bool)1] [(_Bool)1] [(_Bool)1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned short)21214)))) : (arr_13 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1]))) >= (((unsigned long long int) (!(((/* implicit */_Bool) (short)-4112)))))));
                                arr_16 [i_0 + 1] [i_1 + 1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned short) var_8);
                                var_14 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1])))) ? (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_9)) ? (arr_5 [i_1 + 1]) : (2419627517628933281ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((13301050707635838913ULL) > (2419627517628933269ULL))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 1])))));
                            }
                        } 
                    } 
                    arr_17 [i_1] [i_1 + 4] [i_1] = ((/* implicit */unsigned char) min(((-(((((/* implicit */_Bool) var_10)) ? (2456189181U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))), (((/* implicit */unsigned int) -1005583851))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned short) 9223372036854775807LL);
    var_16 = ((/* implicit */unsigned short) 2456189174U);
    /* LoopNest 3 */
    for (short i_5 = 1; i_5 < 18; i_5 += 1) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 4) 
        {
            for (short i_7 = 0; i_7 < 19; i_7 += 4) 
            {
                {
                    arr_24 [i_7] [i_6] [i_5 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(1005583861)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_12)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_4 [i_5])) : (((/* implicit */int) var_5))))))) ? ((+(arr_19 [i_5 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                    arr_25 [i_5] [i_5] [i_5] = ((/* implicit */_Bool) var_10);
                }
            } 
        } 
    } 
}
