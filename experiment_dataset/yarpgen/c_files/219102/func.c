/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219102
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
    for (unsigned long long int i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((arr_3 [i_1] [i_0] [i_1]), (arr_3 [i_0 - 3] [i_1] [i_1])))))))));
                var_12 = ((/* implicit */short) arr_2 [i_0] [6] [i_1]);
                arr_4 [i_0] [(unsigned char)4] [(unsigned char)4] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 - 2] [i_0 - 2])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 - 2] [i_0 + 1] [i_0 - 3])))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        arr_8 [i_2] [i_2] = arr_6 [i_2];
        /* LoopNest 3 */
        for (long long int i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 1) 
                {
                    {
                        var_13 ^= ((/* implicit */int) arr_13 [i_2] [i_2]);
                        var_14 = ((/* implicit */short) var_10);
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_15 = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_2])) ? (arr_7 [i_5]) : (arr_7 [i_2])));
                            var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */long long int) (~(197016318)))) : (arr_18 [i_2])));
                            arr_19 [i_4] [i_5] [i_5] = (~(arr_18 [i_4]));
                        }
                    }
                } 
            } 
        } 
        arr_20 [i_2] [i_2] = ((/* implicit */short) arr_14 [i_2] [i_2] [i_2] [i_2] [i_2]);
    }
    /* LoopNest 3 */
    for (long long int i_7 = 0; i_7 < 13; i_7 += 4) 
    {
        for (unsigned long long int i_8 = 4; i_8 < 11; i_8 += 4) 
        {
            for (short i_9 = 1; i_9 < 9; i_9 += 1) 
            {
                {
                    var_17 -= ((/* implicit */short) arr_7 [i_9 + 2]);
                    /* LoopNest 2 */
                    for (signed char i_10 = 0; i_10 < 13; i_10 += 4) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) arr_32 [i_7] [i_8] [10U] [i_10] [(signed char)7]);
                                var_19 = ((/* implicit */long long int) min((var_19), (var_9)));
                                var_20 = ((/* implicit */long long int) (-((+(((/* implicit */int) arr_30 [i_7] [i_9] [i_7] [i_11]))))));
                                var_21 = ((/* implicit */short) (-(((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_24 [i_8] [i_9] [i_11])), (arr_10 [i_7] [i_10])))) ? (arr_7 [i_9 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_7))))))));
                                var_22 -= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (+(max((-4177058594013438534LL), (((/* implicit */long long int) arr_24 [i_7] [i_7] [i_11]))))))), (min((arr_7 [i_9 + 4]), (((/* implicit */unsigned long long int) 1741468723U))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */short) min(((!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_1 [i_7] [i_9])), (1741468723U)))))), (arr_5 [i_8])));
                    var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) min((max((10292140974090996243ULL), (((/* implicit */unsigned long long int) (short)-3)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_24 [i_9] [i_9 - 1] [i_8 + 2]))))))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) var_4)), (var_2)))) : (max((var_6), (((/* implicit */long long int) var_10)))))), (var_6)));
    var_26 = ((/* implicit */signed char) (~((+(((((/* implicit */_Bool) 1741468731U)) ? (((/* implicit */unsigned int) 107172404)) : (2553498572U)))))));
}
