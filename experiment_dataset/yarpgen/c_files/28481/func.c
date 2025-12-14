/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28481
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
    var_12 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)25236)) / (((/* implicit */int) var_0))))) ? (((/* implicit */int) ((unsigned short) var_5))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_11)), ((unsigned short)21911))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            var_13 &= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) max(((unsigned short)18280), (((/* implicit */unsigned short) var_0))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_4), (((/* implicit */long long int) var_6))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1]))))) : ((~(((/* implicit */int) var_9)))))))));
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_3 [i_0]);
        }
        for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 24; i_3 += 2) 
            {
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) arr_8 [i_0] [i_0] [i_0]))));
                        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((long long int) ((((/* implicit */_Bool) arr_4 [i_4 - 1] [i_4] [i_4 - 1])) ? (arr_4 [i_4 - 1] [i_4 - 1] [i_4 - 1]) : (arr_4 [i_4 - 1] [i_4 - 1] [i_4 - 1])))))));
                        var_16 ^= ((/* implicit */_Bool) min(((~(((/* implicit */int) arr_3 [i_4 - 1])))), (((/* implicit */int) max(((unsigned short)21886), (arr_3 [i_4 - 1]))))));
                    }
                } 
            } 
            arr_14 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((var_6) ? (arr_2 [i_0]) : (((/* implicit */int) (unsigned short)43632))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_2])))))))));
        }
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) /* same iter space */
        {
            var_17 = ((/* implicit */long long int) ((signed char) (-(var_4))));
            arr_17 [i_0] [i_0] [i_5] = ((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) (~(var_10)))), (max((((/* implicit */unsigned long long int) arr_9 [i_5])), (arr_1 [i_5])))))));
            var_18 = arr_4 [i_0] [i_0] [i_5 + 1];
            var_19 = ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)47249))) >= ((-((~(var_4))))));
        }
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) /* same iter space */
        {
            arr_22 [i_6] [i_6] = ((/* implicit */_Bool) (+(min((((/* implicit */unsigned long long int) (unsigned short)18287)), (9896694106609130965ULL)))));
            arr_23 [i_0] &= ((((/* implicit */_Bool) (short)-25212)) || (((/* implicit */_Bool) 8275894522706502258ULL)));
            var_20 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) ((unsigned long long int) var_7)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_6 + 1] [i_6] [i_6])))))));
        }
        arr_24 [i_0] = ((/* implicit */unsigned char) (-((-(((/* implicit */int) arr_11 [i_0] [i_0]))))));
        var_21 = ((/* implicit */unsigned short) ((_Bool) (!(((/* implicit */_Bool) (unsigned short)21904)))));
        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) arr_2 [i_0]))));
    }
}
