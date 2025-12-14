/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198789
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
    var_13 = ((/* implicit */signed char) (((+(((/* implicit */int) var_4)))) - (((max((((/* implicit */int) var_3)), (var_5))) << (((((/* implicit */int) ((short) 2776543943165053152LL))) + (30516)))))));
    var_14 = ((/* implicit */unsigned int) ((var_10) - (((/* implicit */long long int) ((((/* implicit */int) var_12)) << (((max((((/* implicit */long long int) var_6)), (var_10))) + (12589LL))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_3 [10U] [i_0] = ((/* implicit */long long int) 18446744073709551615ULL);
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)-16)) : (((/* implicit */int) arr_1 [i_0]))))) - (((((/* implicit */_Bool) (unsigned short)24)) ? (30ULL) : (((/* implicit */unsigned long long int) 3418451198837639674LL))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    {
                        arr_13 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */_Bool) max((max((((((/* implicit */_Bool) (unsigned short)38680)) ? (18446744073709551585ULL) : (((/* implicit */unsigned long long int) arr_9 [i_0] [i_2])))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) - (-6758763843239149479LL)))))), (((/* implicit */unsigned long long int) (short)-2035))));
                        var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((3ULL) + (var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [(signed char)21] [i_3] [(unsigned char)17] [i_3]))) : (((var_10) - (((/* implicit */long long int) ((/* implicit */int) (short)31585)))))))) ? ((-(((/* implicit */int) min(((short)-31564), ((short)-31599)))))) : (max((arr_9 [i_0] [i_0]), (arr_9 [i_1] [i_2]))));
                        var_16 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_0] [i_1]))));
                        var_17 = ((/* implicit */int) arr_12 [i_0] [i_1] [i_3] [i_3]);
                        arr_14 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) var_11))) || (((((/* implicit */_Bool) -588659992)) && (((/* implicit */_Bool) (short)-31620))))));
                    }
                } 
            } 
        } 
        var_18 = ((((((((/* implicit */int) arr_6 [i_0] [i_0])) << (((((/* implicit */int) var_7)) - (1667))))) << ((((~(((/* implicit */int) var_6)))) - (12577))))) - (((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)32))) - (45ULL))))));
    }
    for (unsigned char i_4 = 2; i_4 < 23; i_4 += 2) 
    {
        var_19 = ((/* implicit */unsigned long long int) arr_17 [(signed char)5]);
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) - ((-(min((((/* implicit */unsigned int) var_7)), (arr_18 [i_4])))))));
        var_21 = ((/* implicit */int) var_11);
        var_22 = ((((/* implicit */_Bool) ((signed char) arr_17 [i_4 + 1]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_4 - 1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_17 [i_4 - 1]))))) : ((-(((((/* implicit */long long int) ((/* implicit */int) var_1))) / (var_10))))));
    }
    var_23 = ((/* implicit */long long int) (short)-31599);
    var_24 = ((/* implicit */short) ((((/* implicit */int) var_11)) << (((((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? ((+(var_5))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7)))))) + (1837675692)))));
}
