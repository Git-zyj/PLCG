/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41059
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                {
                    var_11 += ((/* implicit */unsigned int) (-((-(1426381494)))));
                    var_12 += ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) ((int) arr_8 [i_0] [11] [i_2 - 1])))) / (((/* implicit */int) ((_Bool) min((((/* implicit */int) arr_3 [i_2])), (1426381483)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) ((unsigned short) 1426381494)))) ? (min((min((((/* implicit */int) arr_8 [6ULL] [i_3] [i_3])), (arr_0 [i_3]))), (min((1426381495), (((/* implicit */int) arr_3 [i_3])))))) : ((((_Bool)1) ? (-1426381477) : (((/* implicit */int) arr_3 [i_3]))))));
        var_14 |= ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */int) arr_1 [(_Bool)1] [i_3])) | (1426381479))), ((+(arr_0 [i_3])))))) ? (((/* implicit */unsigned int) (-(-511661992)))) : (((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [6ULL]))))) ? (arr_7 [i_3] [(_Bool)1] [i_3] [i_3]) : (((/* implicit */unsigned int) (~(-1426381495))))))));
        var_15 = ((/* implicit */unsigned long long int) min((-1426381471), (((/* implicit */int) min((arr_11 [i_3]), (arr_2 [i_3] [i_3]))))));
        /* LoopNest 2 */
        for (short i_4 = 1; i_4 < 10; i_4 += 2) 
        {
            for (signed char i_5 = 2; i_5 < 9; i_5 += 3) 
            {
                {
                    arr_17 [i_3] [i_3] = max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)28060))))), (((((/* implicit */_Bool) arr_5 [i_3])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_3] [(signed char)0])))))))), ((-(min((arr_16 [i_3] [i_3] [(signed char)7] [i_5 + 2]), (((/* implicit */unsigned long long int) (signed char)-4)))))));
                    arr_18 [i_3] [10U] [i_4] [i_5] |= ((/* implicit */int) arr_3 [i_5]);
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 13; i_6 += 2) 
    {
        for (unsigned short i_7 = 0; i_7 < 13; i_7 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_8 = 0; i_8 < 13; i_8 += 4) 
                {
                    for (signed char i_9 = 0; i_9 < 13; i_9 += 3) 
                    {
                        {
                            arr_29 [i_9] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)0))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) ((short) arr_26 [i_6] [i_7] [(short)10] [i_9])))))) : (((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), (arr_28 [i_8] [i_9])))) ? (((1775022059U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [11U] [i_8]))))) : ((+(1526586631U)))))));
                            /* LoopSeq 1 */
                            for (unsigned short i_10 = 4; i_10 < 10; i_10 += 2) 
                            {
                                arr_32 [i_6] [i_7] [i_7] [i_8] [i_9] [(short)4] [i_8] |= ((/* implicit */short) (-(((/* implicit */int) (signed char)-5))));
                                var_16 &= ((/* implicit */signed char) (~((((!(((/* implicit */_Bool) arr_21 [i_6] [i_9])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_8])))))) : (arr_31 [i_10] [i_10] [i_10 + 3] [i_10 - 2] [i_10] [i_10] [i_10 + 1])))));
                            }
                            var_17 *= ((/* implicit */signed char) ((int) min((arr_25 [i_7] [i_9]), (((/* implicit */int) arr_19 [i_8] [i_9])))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned int) arr_26 [i_6] [i_7] [i_7] [(unsigned short)5]);
                arr_33 [i_6] = ((/* implicit */signed char) (((((_Bool)1) ? (((/* implicit */unsigned long long int) 3697860031U)) : (8477248398949912025ULL))) % (9969495674759639590ULL)));
            }
        } 
    } 
}
