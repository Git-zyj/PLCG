/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197455
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
    var_11 += ((/* implicit */short) var_1);
    var_12 = ((/* implicit */short) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_6)), (((2153975326U) % (2359307468U)))))) / ((~(max((var_3), (((/* implicit */unsigned long long int) var_6))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_13 -= ((/* implicit */int) (short)-32742);
            arr_6 [i_0] = ((/* implicit */unsigned char) ((((arr_2 [i_1 - 1] [i_1]) << (((/* implicit */int) var_10)))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_0 [i_0] [i_1 - 1])) : (((/* implicit */int) var_10))))) ? (min((var_2), (((/* implicit */unsigned int) arr_3 [7LL])))) : (max((0U), (((/* implicit */unsigned int) (_Bool)0)))))))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 14; i_3 += 2) 
                {
                    for (unsigned short i_4 = 2; i_4 < 12; i_4 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */int) var_9)) - (((((/* implicit */_Bool) arr_11 [i_0] [i_1 - 1] [i_0] [5U] [i_4] [i_4])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10)))))));
                            var_15 *= ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_0))) - (var_1))) : ((~(var_1))))));
                            arr_15 [i_1] [i_2] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((1032336485) * (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */unsigned long long int) var_1)) * (arr_1 [(unsigned char)4]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)145))) : (4294967286U))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((var_4) ? (((/* implicit */int) arr_10 [i_0])) : (((/* implicit */int) (signed char)117)))) <= (((/* implicit */int) var_0)))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)57145))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)5)) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) (unsigned short)57129))))) : (max((((/* implicit */unsigned int) var_10)), (150369527U)))))));
                        }
                    } 
                } 
            } 
            arr_16 [i_0] [i_0] = ((/* implicit */int) (unsigned short)8398);
        }
        for (unsigned int i_5 = 0; i_5 < 14; i_5 += 1) 
        {
            var_16 ^= ((/* implicit */unsigned short) (+(((arr_5 [i_0] [i_5] [i_0]) / (arr_5 [(unsigned char)13] [i_5] [i_0])))));
            arr_20 [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) 9U);
        }
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_19 [i_0]))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_11 [i_0] [i_0] [i_0] [(unsigned char)10] [(signed char)8] [9LL]) > (((/* implicit */long long int) var_2)))))) : (((((/* implicit */_Bool) min((((/* implicit */signed char) var_4)), ((signed char)125)))) ? (max((((/* implicit */long long int) var_6)), (var_1))) : (((long long int) (unsigned short)8390)))))))));
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) 150369525U)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))) ? (min((((var_3) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned long long int) var_10)))) : (((unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)57163)))))));
        arr_21 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)35769))) + ((((-(var_1))) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
    }
}
