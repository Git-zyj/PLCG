/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228867
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
    var_16 = ((/* implicit */unsigned int) min(((-(((((/* implicit */_Bool) 575210732U)) ? (-1LL) : (((/* implicit */long long int) 3719756574U)))))), (((/* implicit */long long int) max((min((var_8), (((/* implicit */int) var_11)))), ((+(((/* implicit */int) (short)30932)))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        var_17 = ((/* implicit */int) (((!(((/* implicit */_Bool) (short)6)))) ? (min((((/* implicit */unsigned int) 562987093)), (575210702U))) : (511U)));
        /* LoopNest 2 */
        for (short i_1 = 4; i_1 < 16; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_2] [i_2 + 2] = ((/* implicit */unsigned char) var_13);
                    var_18 = ((unsigned char) ((((/* implicit */_Bool) (short)16)) ? (((/* implicit */int) (unsigned char)145)) : (-1735748218)));
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 19; i_3 += 3) /* same iter space */
                    {
                        var_19 = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_6 [i_0 - 2] [i_0 + 1] [i_0 - 1] [i_0 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 106060731U)))))) : ((+(1721590773U)))))));
                        var_20 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_7 [i_2 - 1] [i_2 + 1])) ? (((/* implicit */int) (unsigned char)248)) : (arr_7 [i_2 - 1] [i_2 + 3]))), (((/* implicit */int) (unsigned char)234))));
                        var_21 = ((/* implicit */int) max((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-6658)) ? (((/* implicit */int) (unsigned char)122)) : (((/* implicit */int) (short)6657))))), (max((((/* implicit */unsigned int) (unsigned char)145)), (575210737U))))), (((/* implicit */unsigned int) arr_0 [i_0 + 1] [i_1 + 2]))));
                        var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-31298))));
                    }
                    for (int i_4 = 0; i_4 < 19; i_4 += 3) /* same iter space */
                    {
                        arr_13 [i_1 - 2] [i_2] [i_1] [i_1 - 2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (341610549U) : (((/* implicit */unsigned int) -1646890537))));
                        var_23 *= ((/* implicit */short) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)115))) : (3719756564U))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 3953356756U))))));
                    }
                }
            } 
        } 
        var_24 ^= ((/* implicit */short) (~(max((max((((/* implicit */unsigned int) (short)-30932)), (var_3))), (3248950614U)))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 17; i_5 += 4) 
    {
        arr_18 [i_5] = ((/* implicit */_Bool) arr_16 [i_5]);
        var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((unsigned char) var_3)))));
        var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_5]))));
    }
    var_27 = ((/* implicit */unsigned char) var_10);
    var_28 = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) (~(var_12)))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)200)) * (((/* implicit */int) (unsigned char)129))))) : (((unsigned long long int) var_11))))));
    var_29 = ((/* implicit */_Bool) var_5);
}
