/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22154
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((unsigned long long int) var_3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14275))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (short)14268))) : (var_12)))) | (var_17)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) (+(((((/* implicit */int) max((((/* implicit */short) arr_0 [i_1] [2U])), (arr_1 [i_1])))) & (((/* implicit */int) arr_0 [i_0] [i_1]))))));
                var_20 = ((/* implicit */long long int) (!(((((/* implicit */int) (short)-14237)) == (((/* implicit */int) (short)14274))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -4889945188428807000LL)) ? (var_8) : (((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (var_7)))) ? (max((-4889945188428807000LL), (((/* implicit */long long int) (short)-14237)))) : (((/* implicit */long long int) ((((/* implicit */int) var_2)) - (var_7))))))));
    /* LoopSeq 3 */
    for (int i_2 = 2; i_2 < 15; i_2 += 3) 
    {
        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (short)-14275))));
        var_23 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (short)11331)), (max((arr_6 [i_2]), (((/* implicit */unsigned long long int) ((arr_4 [i_2 + 1]) < (var_6))))))));
    }
    for (unsigned short i_3 = 1; i_3 < 17; i_3 += 4) /* same iter space */
    {
        var_24 -= ((/* implicit */int) var_11);
        arr_11 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_3 + 1]))))) ? (((/* implicit */int) ((unsigned short) arr_1 [i_3 + 2]))) : (((/* implicit */int) (short)-6299))));
    }
    for (unsigned short i_4 = 1; i_4 < 17; i_4 += 4) /* same iter space */
    {
        arr_15 [i_4] = ((/* implicit */unsigned char) (short)14254);
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)22148)) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? ((-(((/* implicit */int) arr_3 [i_4] [i_4])))) : (((((/* implicit */_Bool) arr_4 [(signed char)19])) ? (((/* implicit */int) (short)14275)) : (((/* implicit */int) (short)-14275))))))));
        arr_16 [i_4] [i_4] = ((/* implicit */_Bool) arr_10 [i_4]);
        arr_17 [i_4] = (-(max((arr_13 [i_4]), (((/* implicit */long long int) (unsigned short)4)))));
    }
    var_26 = ((/* implicit */signed char) var_17);
}
