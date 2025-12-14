/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22890
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
    var_10 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)226)) : (var_2)))) && ((!(((/* implicit */_Bool) 253952U))))))), (var_3)));
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((7371184471446039481LL) / (((/* implicit */long long int) 253952U)))), (((/* implicit */long long int) (unsigned short)23685))))) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_7 [i_2] [i_0] [i_0] [i_0] &= ((/* implicit */int) max((((/* implicit */unsigned long long int) max((arr_2 [i_2 + 1]), (arr_2 [i_2 + 1])))), (max((var_9), (((/* implicit */unsigned long long int) (short)-1))))));
                    arr_8 [i_2] [i_1] [i_2] = max((((unsigned short) (unsigned char)102)), (((unsigned short) arr_2 [i_2 + 1])));
                    arr_9 [i_0] [i_2] [i_2] = ((/* implicit */long long int) max(((-(((/* implicit */int) (unsigned short)33542)))), (((int) (unsigned short)33545))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        arr_13 [(_Bool)1] [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((max((var_0), ((unsigned short)54767))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)41847)) && (((/* implicit */_Bool) (signed char)25)))))))) ? (((((/* implicit */_Bool) (+(16739582)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) var_7)) < (var_4)))) : (((/* implicit */int) (unsigned short)41844)))) : (arr_6 [i_0] [i_0] [i_2])));
                        arr_14 [i_2] [i_2] [i_3] = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-1))))), (max((var_4), (((/* implicit */unsigned long long int) arr_5 [i_2] [i_2] [i_3])))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_4 [i_1] [(unsigned short)23])))) - (((arr_11 [i_3] [i_3] [(unsigned char)21] [i_2] [i_1] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33545))))))))));
                        var_12 *= ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_0] [i_1] [i_2 + 1])) << (((((/* implicit */int) arr_5 [i_0] [i_1] [i_2 + 1])) - (56094)))))), (max((15630746269247300115ULL), (((/* implicit */unsigned long long int) ((signed char) -1355284899136357723LL)))))));
                    }
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned int) var_4);
    /* LoopNest 2 */
    for (signed char i_4 = 2; i_4 < 14; i_4 += 3) 
    {
        for (unsigned short i_5 = 1; i_5 < 13; i_5 += 2) 
        {
            {
                arr_19 [i_5] [i_4] [i_4] = ((/* implicit */unsigned long long int) max((arr_4 [i_5 - 1] [(unsigned short)11]), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)234)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 2347823536406845853ULL)) ? (7378868245649283936LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)21214)))))))))));
                var_14 -= ((/* implicit */signed char) max(((+(((((/* implicit */_Bool) var_2)) ? (268304384LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-14881))))))), (((/* implicit */long long int) arr_16 [i_5]))));
                arr_20 [i_4] [i_4] [i_4 - 1] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_17 [i_4 + 1])) ? (((/* implicit */unsigned long long int) arr_17 [i_4 + 1])) : (var_5)))));
            }
        } 
    } 
}
