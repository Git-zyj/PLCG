/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28519
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
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */int) max((arr_0 [i_0 - 1]), (((/* implicit */unsigned short) arr_6 [i_0] [i_1]))))), (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (signed char)-27)) ? (min((1984335001688091428LL), (-1984335001688091428LL))) : (((/* implicit */long long int) var_11))))));
                            /* LoopSeq 1 */
                            for (signed char i_4 = 1; i_4 < 16; i_4 += 3) 
                            {
                                var_16 = ((/* implicit */unsigned long long int) max((var_16), (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-10))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) -1984335001688091442LL)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_4 - 1]))))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (signed char)15)), (var_5))))))) : (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-17))))), (min((((/* implicit */unsigned long long int) var_2)), (arr_9 [i_1] [i_1] [i_3] [i_4 + 1])))))))));
                                var_17 = ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)191))) - (-1984335001688091428LL));
                                var_18 = ((/* implicit */short) arr_8 [i_0] [i_1] [i_1] [i_0]);
                                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) ((signed char) max((var_13), (((/* implicit */unsigned short) var_7)))))) ? ((~(((140737488354304LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 1984335001688091422LL)) ? (((((/* implicit */_Bool) arr_14 [i_1] [i_1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4)))) : (((((/* implicit */int) var_1)) / (((/* implicit */int) var_13))))))))))));
                            }
                            var_20 += var_3;
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_5 = 0; i_5 < 17; i_5 += 2) 
                {
                    var_21 = ((/* implicit */unsigned char) min((max(((~(arr_9 [i_0] [i_5] [i_1] [9ULL]))), (arr_12 [(unsigned short)10] [i_1] [i_0 - 2] [i_0 - 2]))), (((/* implicit */unsigned long long int) (unsigned short)26613))));
                    arr_19 [i_0] [i_1] [i_5] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_0 [i_0])))))) ? (((((/* implicit */_Bool) ((signed char) (unsigned char)251))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_12))))) : (((/* implicit */int) min((((/* implicit */short) arr_3 [i_1])), (var_3)))))) : (((((((/* implicit */_Bool) -2375868309765356747LL)) && (((/* implicit */_Bool) (short)-18811)))) ? (((/* implicit */int) arr_18 [i_0] [(unsigned short)0] [i_5] [i_0 - 2])) : (((/* implicit */int) (unsigned short)34336))))));
                }
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) var_13);
    var_23 = ((/* implicit */unsigned char) var_6);
}
