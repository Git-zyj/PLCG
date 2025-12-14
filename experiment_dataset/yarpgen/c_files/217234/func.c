/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217234
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
    for (short i_0 = 0; i_0 < 23; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_2 = 3; i_2 < 19; i_2 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_3 = 2; i_3 < 21; i_3 += 2) 
                {
                    for (unsigned short i_4 = 2; i_4 < 20; i_4 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned char) ((unsigned short) ((unsigned short) var_5)));
                            var_15 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0] [i_0]))));
                        }
                    } 
                } 
                var_16 = ((((1542715517) >= (((/* implicit */int) (_Bool)1)))) ? (((var_6) * (((/* implicit */int) (_Bool)0)))) : (((((/* implicit */int) arr_8 [i_0])) >> (16ULL))));
                /* LoopSeq 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_17 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_11 [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2 + 3] [i_2]))));
                    var_18 = ((/* implicit */short) (((_Bool)1) ? (arr_13 [i_2 - 1] [i_2] [i_2] [i_0]) : (arr_13 [i_2 - 1] [i_1] [i_1] [i_1])));
                }
                for (int i_6 = 1; i_6 < 21; i_6 += 2) 
                {
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2233948276U)) ? (((/* implicit */int) arr_12 [i_6] [i_6] [i_0] [i_6 + 2])) : (-2107060957)));
                    arr_16 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) (signed char)-75)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [7U] [0ULL] [i_6] [i_1 + 2] [i_6])) ? (((/* implicit */int) (_Bool)1)) : (-1542715525)))));
                    var_20 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_0 [i_0])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11))));
                }
            }
            arr_17 [i_0] [i_0] = max((((/* implicit */unsigned long long int) (!((_Bool)1)))), (arr_3 [i_0] [i_1 + 3]));
        }
        arr_18 [i_0] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (short)-28024)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)64))))));
    }
    for (short i_7 = 0; i_7 < 23; i_7 += 1) /* same iter space */
    {
        var_21 = arr_6 [i_7] [7] [i_7] [i_7] [i_7] [i_7];
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) (unsigned short)65535))) ? (((/* implicit */long long int) var_3)) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) % (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)37070))) & (-1LL)))))));
    }
    var_23 = ((short) (_Bool)1);
    var_24 += ((/* implicit */_Bool) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) (_Bool)0))));
    var_25 -= (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-3))) == (4294967295U)))));
}
