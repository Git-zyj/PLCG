/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238829
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
    var_12 = ((/* implicit */_Bool) (~(((int) var_2))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] &= ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_0 [i_0])))) <= ((-(((/* implicit */int) arr_1 [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_13 = arr_6 [i_0] [i_0] [i_1] [i_2];
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-3086))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_5 [i_2] [i_0] [i_0]))));
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        var_15 *= ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_1])) & (((((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_3])) & (((/* implicit */int) var_10))))));
                        arr_10 [i_2] |= ((/* implicit */unsigned char) (~(((/* implicit */int) var_10))));
                        var_16 -= ((/* implicit */signed char) ((((arr_6 [i_0] [i_1] [i_1] [i_3]) - (arr_6 [i_0] [(short)1] [(short)1] [i_0]))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_2 [i_2] [i_0]))))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 11; i_4 += 2) 
                    {
                        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (-(((/* implicit */int) var_6)))))));
                        arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1))))));
                    }
                    for (signed char i_5 = 2; i_5 < 8; i_5 += 2) 
                    {
                        var_18 = arr_9 [i_5] [i_0] [i_0] [i_0];
                        arr_17 [i_0] [i_0] = ((/* implicit */unsigned short) ((-5360168986615918224LL) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        arr_18 [i_1] [i_5] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned short)65522))));
                        var_19 *= ((signed char) arr_13 [i_0] [(_Bool)1] [i_2] [i_2]);
                    }
                }
            } 
        } 
        var_20 += ((/* implicit */unsigned long long int) (((+(arr_15 [i_0] [i_0] [i_0]))) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0]))))))));
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_7 [i_0]))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_7)))))))));
    }
    for (unsigned short i_6 = 0; i_6 < 11; i_6 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned char) var_11);
        var_23 ^= ((/* implicit */long long int) ((unsigned int) min(((+(((/* implicit */int) arr_7 [i_6])))), (((/* implicit */int) arr_20 [i_6] [i_6])))));
        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) arr_5 [i_6] [i_6] [i_6])) <= (((/* implicit */int) min((var_9), (var_2))))))))))));
        var_25 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)11)) ? (-5360168986615918216LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
        var_26 = ((/* implicit */int) arr_19 [i_6]);
    }
}
