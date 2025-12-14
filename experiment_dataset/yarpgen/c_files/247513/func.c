/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247513
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
    var_10 = ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-12128))) : (((((/* implicit */_Bool) (short)12127)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49559))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        {
                            var_11 = ((3279480948U) / (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_4 [i_1 - 1])))));
                            arr_10 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned short) (~(((/* implicit */int) (short)12127))));
                        }
                    } 
                } 
                arr_11 [i_0] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) arr_3 [i_1]))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */int) var_5))))) : (1917342876U)))) % ((+(((((/* implicit */_Bool) (unsigned short)48284)) ? (14357656173945110808ULL) : (((/* implicit */unsigned long long int) 3755575914U))))))));
                var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) arr_3 [i_1]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_4 = 1; i_4 < 13; i_4 += 4) 
    {
        for (unsigned int i_5 = 0; i_5 < 16; i_5 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_6 = 0; i_6 < 16; i_6 += 2) 
                {
                    for (unsigned char i_7 = 0; i_7 < 16; i_7 += 4) 
                    {
                        {
                            arr_20 [i_5] [i_5] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((unsigned short) arr_14 [(_Bool)1]))) ? (((/* implicit */unsigned long long int) var_9)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_7]))) : (arr_18 [i_7] [i_7] [(unsigned short)13] [(unsigned short)13]))))) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)26)))))));
                            var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((unsigned char) (-(arr_16 [i_4 + 1] [i_5] [i_7])))))));
                            var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-21419)) & (((/* implicit */int) arr_15 [i_5] [i_4 + 3] [i_5]))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) var_7))));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 16; i_8 += 1) 
                {
                    for (int i_9 = 3; i_9 < 14; i_9 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */long long int) var_0);
                            var_17 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_16 [i_4 - 1] [i_4 + 2] [i_4 - 1])))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_5] [i_5] [i_9]))))) + (((((/* implicit */int) arr_14 [i_4])) >> (((((/* implicit */int) var_0)) + (52))))))) : (((((/* implicit */_Bool) var_5)) ? (2068020985) : (((((/* implicit */int) arr_13 [9LL])) >> (((var_9) - (1955585171)))))))));
                            arr_27 [(short)7] [(short)7] [i_5] [i_5] [i_9] = ((/* implicit */int) (unsigned short)36874);
                            arr_28 [i_4] [i_5] [i_8] [i_5] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-4437)) ? (5246035941356724087LL) : (((/* implicit */long long int) 138673108U))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) ((arr_18 [i_4] [15] [(signed char)6] [i_4]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (var_7) : (((/* implicit */unsigned int) ((-77800501) + (((/* implicit */int) var_4))))))));
                var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) 3755575908U)) ? (arr_18 [i_4] [i_4] [i_5] [(short)11]) : (((/* implicit */unsigned long long int) 539391382U)))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))))))))));
            }
        } 
    } 
}
