/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219238
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) (((-(((/* implicit */int) var_14)))) + (((/* implicit */int) (unsigned char)120))));
        var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) var_0)) ? (576460752303423487LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-39))))) / (arr_1 [i_0])));
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) arr_1 [i_0]))));
    }
    /* LoopNest 3 */
    for (short i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        for (unsigned short i_2 = 1; i_2 < 23; i_2 += 4) 
        {
            for (signed char i_3 = 0; i_3 < 24; i_3 += 2) 
            {
                {
                    var_21 |= ((/* implicit */unsigned char) ((((unsigned long long int) (-(arr_3 [i_1])))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1)))));
                    var_22 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 18446744073709551615ULL))));
                }
            } 
        } 
    } 
    var_23 &= ((/* implicit */signed char) (((-(((/* implicit */int) (signed char)-68)))) - (((/* implicit */int) ((unsigned short) var_11)))));
    /* LoopSeq 1 */
    for (unsigned short i_4 = 0; i_4 < 24; i_4 += 2) 
    {
        var_24 = ((/* implicit */long long int) (+(((/* implicit */int) var_15))));
        var_25 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -285204795)) ? (-1448313771) : (((/* implicit */int) (signed char)-39))))) ? (4ULL) : (((/* implicit */unsigned long long int) (-(408928134820736239LL)))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1)))));
        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_11 [i_4]) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) * (1622716734U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))))));
        var_27 |= ((/* implicit */short) (signed char)43);
    }
}
