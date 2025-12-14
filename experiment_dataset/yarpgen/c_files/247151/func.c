/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247151
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
    var_15 = ((/* implicit */int) (~(max((((2305843009213693951LL) << (((/* implicit */int) var_2)))), (((/* implicit */long long int) ((1702075206) > (((/* implicit */int) (unsigned char)188)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) (((~(((((/* implicit */int) arr_2 [i_0])) >> (((/* implicit */int) var_2)))))) > (((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_7))))))));
                var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_1 [i_1]))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1])) && (((/* implicit */_Bool) arr_1 [i_1]))))) : (((((/* implicit */int) (_Bool)1)) << (((var_4) + (646328364))))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        arr_8 [i_2] [i_2] = ((/* implicit */signed char) (((+(arr_7 [i_2]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_2))))));
        var_17 = ((/* implicit */int) (-((~(min((((/* implicit */unsigned long long int) (unsigned short)0)), (arr_7 [i_2])))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 15; i_3 += 2) 
    {
        var_18 = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))));
        var_19 *= ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_1)))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 2) 
        {
            arr_16 [i_3] [i_4] = (+(((/* implicit */int) ((((/* implicit */_Bool) var_13)) && ((_Bool)1)))));
            arr_17 [i_4] = ((/* implicit */unsigned int) ((int) var_0));
        }
        for (signed char i_5 = 0; i_5 < 15; i_5 += 2) 
        {
            arr_21 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_13) : (((/* implicit */int) (short)-1))))) ? (((((/* implicit */_Bool) 2749303811U)) ? (((/* implicit */unsigned long long int) var_0)) : (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 1433136364))))));
            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_0 [i_5])))))));
        }
    }
}
