/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49371
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
    for (short i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            {
                arr_6 [(unsigned short)12] [5] [(unsigned short)12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_1 [i_0 - 2]), (((/* implicit */long long int) 1670790154))))) || (((/* implicit */_Bool) arr_1 [i_0 - 3]))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    arr_9 [i_0 - 3] [(signed char)7] [i_2] = ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_7 [i_2] [i_1] [i_0] [15])) || (((/* implicit */_Bool) arr_1 [i_0])))))) && (((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned short)33328)))) ? (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63499))) : (arr_1 [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) (short)32742)))))));
                    arr_10 [i_0 + 1] [i_1] [i_1 - 2] [i_0 + 1] = ((/* implicit */unsigned char) arr_1 [i_2]);
                    var_19 = ((/* implicit */unsigned short) (~(-1695195069)));
                }
                var_20 = ((((/* implicit */_Bool) max((((/* implicit */int) (short)-32742)), (-148123646)))) ? ((-(arr_1 [i_0 + 3]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)41062))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) 
    {
        for (unsigned short i_4 = 3; i_4 < 14; i_4 += 1) 
        {
            {
                arr_16 [i_3] [(_Bool)1] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_3] [(unsigned char)18] [17])) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_4 [6LL] [6LL] [i_3])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)218)))) <= (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)203)))))))) : (((((/* implicit */_Bool) max((((/* implicit */int) (signed char)110)), (arr_0 [i_3])))) ? (arr_5 [i_3] [i_3] [i_4]) : (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (var_14))))))));
                arr_17 [i_4 - 1] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) min((((/* implicit */int) (signed char)86)), (arr_5 [i_3] [i_3] [i_3])))))) ? (var_15) : (((/* implicit */unsigned int) (~(arr_0 [i_3]))))));
                /* LoopSeq 1 */
                for (short i_5 = 0; i_5 < 15; i_5 += 4) 
                {
                    arr_22 [i_5] [i_4] [i_3] = (!(((/* implicit */_Bool) max((arr_3 [i_3]), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [(short)11])) || (((/* implicit */_Bool) 17232535102431398973ULL)))))))));
                    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((min((max((((/* implicit */int) arr_8 [i_3] [i_3] [12])), (924244700))), (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_11 [i_3] [i_3])) : (((/* implicit */int) arr_3 [i_4])))))) * (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_5] [(signed char)1] [i_5])) || (((/* implicit */_Bool) 477136114))))) == (arr_0 [i_3])))))))));
                }
            }
        } 
    } 
}
