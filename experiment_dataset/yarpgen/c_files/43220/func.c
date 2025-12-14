/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43220
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
    var_13 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_6)), (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_0)) : (7906827735736522860ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)-89), (((/* implicit */signed char) (_Bool)1))))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] = ((((/* implicit */int) min((max((((/* implicit */unsigned char) (signed char)-51)), ((unsigned char)61))), (min((((/* implicit */unsigned char) (_Bool)1)), (var_6)))))) < (((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (((/* implicit */int) arr_0 [i_1 + 1])) : (((/* implicit */int) arr_0 [i_1 - 2])))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        var_14 = min((((((/* implicit */_Bool) 1971327482)) ? (((/* implicit */int) (short)-14854)) : (((/* implicit */int) (_Bool)1)))), (-1472772686));
                        var_15 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_3] [i_2] [i_1] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_5 [i_1 - 1] [i_1 - 1]))), (((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (unsigned char)33)) - (28)))))) / (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (-848109759082346689LL)))))));
                        var_16 += ((/* implicit */unsigned short) (~(((arr_3 [i_0] [i_1 - 2]) | (arr_3 [i_0] [i_1 - 1])))));
                        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) (+(var_4)))) ? (min((507521962), (((/* implicit */int) (unsigned char)66)))) : (((/* implicit */int) min((arr_1 [i_0]), (((/* implicit */short) (unsigned char)125))))))))))));
                    }
                    var_18 ^= ((/* implicit */int) (((!(((/* implicit */_Bool) max((arr_7 [i_0] [i_1] [i_2] [i_2]), (((/* implicit */int) var_3))))))) ? (((((/* implicit */_Bool) min((((/* implicit */int) var_9)), (arr_10 [i_0] [i_0] [i_1 + 1] [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (((((arr_5 [i_2] [i_2]) + (9223372036854775807LL))) << (((((arr_9 [i_0] [i_0]) + (211576821))) - (36))))))) : (((/* implicit */long long int) -1698187497))));
                }
            } 
        } 
    } 
}
