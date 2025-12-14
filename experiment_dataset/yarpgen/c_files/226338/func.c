/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226338
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
    var_19 = ((/* implicit */signed char) var_3);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_20 = ((/* implicit */int) (!((!(((/* implicit */_Bool) var_6))))));
        arr_2 [(unsigned char)2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -1268036138)) ^ (18118533355490430537ULL)))) ? (-128) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_4)) : (arr_0 [i_0])))))) ? (((/* implicit */int) (unsigned char)255)) : (((((/* implicit */_Bool) (~(-659883581)))) ? ((~(((/* implicit */int) arr_1 [5])))) : ((~(arr_0 [i_0]))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)88)) ? (var_10) : (var_14)))) ? (((arr_0 [i_2]) >> (((((/* implicit */int) var_18)) - (84))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned short)1267))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (arr_4 [i_2] [i_1]));
                    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)111))) : (9985322242329154051ULL)))) ? (((/* implicit */int) (unsigned short)0)) : (-128)))));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_2] [i_1])) ? (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-37))) >= (7528896510244299564ULL))) ? ((-(((/* implicit */int) (unsigned char)145)))) : (2125878248)))) : (((((/* implicit */_Bool) 2147483647)) ? ((+(18118533355490430541ULL))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1]))) & (var_2)))))));
                        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))))) ? (((328210718219121075ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26017))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) 11)) : (((((/* implicit */_Bool) (unsigned char)13)) ? (var_3) : (((/* implicit */unsigned long long int) var_10))))))));
                        var_25 |= ((/* implicit */int) (((~(((((/* implicit */_Bool) (unsigned char)158)) ? (1185103263) : (((/* implicit */int) (unsigned short)34810)))))) >= (-543714467)));
                        var_26 = (-(var_15));
                    }
                }
            } 
        } 
        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)2032)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */unsigned long long int) ((var_1) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_7))))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_11)))));
    }
    var_28 = ((/* implicit */_Bool) var_9);
}
