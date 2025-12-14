/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221734
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
    var_15 = ((/* implicit */signed char) (-(min((((/* implicit */unsigned long long int) ((-1800874656) & (((/* implicit */int) (unsigned char)0))))), (((((/* implicit */_Bool) -5LL)) ? (6180737060903400620ULL) : (6180737060903400620ULL)))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_16 = ((/* implicit */int) (_Bool)1);
        var_17 = ((/* implicit */long long int) var_0);
        var_18 = ((/* implicit */int) min((((/* implicit */unsigned int) arr_2 [i_0] [i_0])), (((unsigned int) (((_Bool)1) ? (4294967295U) : (1U))))));
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            arr_7 [i_0] = ((/* implicit */_Bool) (~(min((6180737060903400620ULL), (((/* implicit */unsigned long long int) arr_6 [i_1]))))));
            var_19 = (~(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (arr_5 [i_0] [i_0]))))));
        }
        for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            arr_10 [i_0] = ((/* implicit */unsigned char) (-(((((var_3) ? (181802797U) : (var_10))) / (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) var_12)))))))));
            var_20 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)115))));
            var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned char)64))));
        }
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_22 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (((_Bool)1) ? (1108305893U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-17)))))) & (arr_13 [i_0] [i_0] [i_3])));
            arr_14 [i_0] = ((/* implicit */_Bool) (-((+(4294967272U)))));
            var_23 = ((/* implicit */short) (unsigned char)33);
            var_24 = ((/* implicit */unsigned char) ((3850829046U) << (((/* implicit */int) (unsigned short)0))));
            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)78)) ? (((/* implicit */int) (unsigned short)28727)) : (((/* implicit */int) (unsigned char)78))));
        }
        for (signed char i_4 = 0; i_4 < 19; i_4 += 4) 
        {
            var_26 = ((/* implicit */unsigned short) 16536861651638073512ULL);
            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((((arr_11 [i_0] [i_4] [i_4]) + (arr_11 [i_0] [i_0] [i_4]))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) (unsigned short)2776)) : (((/* implicit */int) (unsigned short)0))))))))));
        }
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_19 [i_5] [i_5] = ((/* implicit */unsigned char) ((unsigned short) (_Bool)0));
        var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-11996)) == (((/* implicit */int) (unsigned short)36774))));
        var_29 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 1288868900U)), (arr_5 [i_5] [i_5])))) ? (((/* implicit */int) arr_8 [i_5] [i_5])) : (((/* implicit */int) min((var_0), (((/* implicit */unsigned short) var_5)))))))) & (11227868853823508973ULL)));
    }
    var_30 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_0)) ? (((unsigned int) var_14)) : (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) + (((/* implicit */int) (unsigned short)35249))))))) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 0U)) && ((_Bool)1)))))));
    var_31 = ((/* implicit */unsigned short) (_Bool)1);
}
