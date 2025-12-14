/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217089
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
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_12 &= ((/* implicit */short) (+(2915594208U)));
        arr_4 [i_0] = ((/* implicit */_Bool) 2915594201U);
        arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_2)))))) ? (arr_3 [i_0] [i_0]) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */long long int) var_1)) : (((((/* implicit */_Bool) 3520815484536324443LL)) ? (((/* implicit */long long int) var_10)) : (arr_3 [i_0] [i_0])))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (12975523906648877750ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((1379373094U), (2915594206U))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 1379373094U))))))))));
        var_14 = ((/* implicit */_Bool) var_10);
        arr_8 [i_1] = ((/* implicit */short) arr_2 [i_1]);
        var_15 = ((/* implicit */unsigned short) arr_2 [i_1]);
        var_16 -= ((/* implicit */unsigned short) var_1);
    }
    for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) /* same iter space */
    {
        var_17 -= ((/* implicit */unsigned long long int) (+(arr_9 [i_2])));
        var_18 = ((/* implicit */long long int) var_6);
        arr_12 [i_2] = ((/* implicit */int) var_5);
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            for (long long int i_4 = 1; i_4 < 15; i_4 += 2) 
            {
                {
                    var_19 = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_17 [i_4] [i_4] [i_4] [i_2])) ? (var_6) : (((/* implicit */unsigned long long int) 8806219212301166593LL)))), (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) 1969700861220637166LL)) > (var_6))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [8ULL])) ? (((/* implicit */unsigned long long int) var_5)) : (var_2)))))))));
                    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_10 [(_Bool)1]) * (((/* implicit */unsigned long long int) var_5))))) ? (((((arr_1 [i_2]) || (((/* implicit */_Bool) var_3)))) ? (1379373087U) : (max((((/* implicit */unsigned int) var_9)), (1379373094U))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((2915594201U), (2915594193U)))) ? (((/* implicit */int) ((short) 2915594201U))) : (((/* implicit */int) var_0)))))));
                }
            } 
        } 
        arr_18 [i_2] [i_2] = ((/* implicit */unsigned long long int) var_8);
    }
    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_4)) << (((arr_9 [i_5]) - (22284475U))))) / (((/* implicit */int) arr_17 [i_5] [i_5] [i_5] [i_5]))));
        arr_22 [0U] |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */long long int) 2915594181U)), (((((/* implicit */_Bool) arr_10 [i_5])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))))));
        arr_23 [i_5] = ((/* implicit */unsigned int) arr_16 [i_5]);
        var_22 &= ((/* implicit */unsigned char) ((short) (+(((/* implicit */int) ((((/* implicit */_Bool) 2915594201U)) && (((/* implicit */_Bool) var_4))))))));
        var_23 ^= ((/* implicit */short) var_6);
    }
    var_24 = ((/* implicit */unsigned long long int) var_5);
    var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
    var_26 = ((/* implicit */int) var_9);
    var_27 = ((/* implicit */signed char) 2921587424U);
}
