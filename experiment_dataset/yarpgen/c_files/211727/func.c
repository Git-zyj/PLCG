/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211727
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) var_5))));
        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned char) ((((/* implicit */int) var_7)) == (var_9))))))) ? ((-((+(((/* implicit */int) var_7)))))) : (((/* implicit */int) ((((/* implicit */int) (short)-8446)) >= (((/* implicit */int) (unsigned char)10))))))))));
    }
    for (signed char i_1 = 0; i_1 < 14; i_1 += 4) /* same iter space */
    {
        arr_7 [7] = ((/* implicit */_Bool) (~((~(((/* implicit */int) (short)-28116))))));
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 2; i_3 < 13; i_3 += 2) 
            {
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    {
                        var_15 = ((/* implicit */_Bool) min(((~(((((/* implicit */_Bool) 484081712U)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (-1382928225567120860LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (min((((/* implicit */int) var_10)), (var_5))) : (arr_8 [i_2]))))));
                        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) var_9))));
                        arr_16 [6] [8LL] |= ((/* implicit */unsigned int) -468535440);
                        arr_17 [8ULL] [(unsigned short)6] [(short)10] [i_2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)0))))) ? (((((/* implicit */_Bool) ((long long int) arr_11 [i_1] [5ULL] [i_3]))) ? ((~(((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) 1382928225567120843LL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)13901)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) -468535437)))))));
                    }
                } 
            } 
        } 
        arr_18 [i_1] = ((/* implicit */long long int) max((((/* implicit */int) arr_4 [5LL])), (((((/* implicit */_Bool) (unsigned char)0)) ? (((((/* implicit */int) var_11)) * (((/* implicit */int) (_Bool)0)))) : (var_5)))));
    }
    for (signed char i_5 = 0; i_5 < 14; i_5 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */int) var_8);
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((-(((/* implicit */int) var_10)))) + (max((((/* implicit */int) var_0)), (var_5)))))) ? (min(((+(var_2))), (((/* implicit */long long int) ((468535440) - (((/* implicit */int) var_10))))))) : (((/* implicit */long long int) min((((/* implicit */int) arr_6 [i_5])), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)84)) : (((/* implicit */int) (_Bool)1)))))))));
        arr_22 [i_5] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) max(((unsigned char)76), (((/* implicit */unsigned char) (_Bool)1)))))));
        var_19 *= ((/* implicit */short) arr_12 [i_5] [i_5] [i_5]);
    }
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8)))))));
    var_21 &= ((/* implicit */unsigned long long int) ((min(((!(((/* implicit */_Bool) var_9)))), (((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_3)))))) ? (((((/* implicit */_Bool) (unsigned char)183)) ? (((/* implicit */long long int) 1910834699U)) : (3992563212069802631LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7)))))));
}
