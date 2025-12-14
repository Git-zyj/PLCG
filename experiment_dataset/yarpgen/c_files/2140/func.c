/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2140
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((+(var_10)))))) ? (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (var_4)))), (((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))) : (((/* implicit */unsigned int) -1418163746))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */short) arr_0 [i_0]);
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 11; i_2 += 3) 
            {
                {
                    var_13 = (((-(((/* implicit */int) ((((/* implicit */int) var_5)) == (((/* implicit */int) var_5))))))) == (((/* implicit */int) arr_2 [i_2] [i_2 + 1] [i_2 - 1])));
                    var_14 = ((/* implicit */unsigned short) min(((+(arr_0 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) + (((((/* implicit */int) var_8)) & (((/* implicit */int) var_1)))))))));
                }
            } 
        } 
        var_15 = ((/* implicit */unsigned short) 4259821700U);
    }
    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 4) 
    {
        var_16 = ((/* implicit */short) min((((arr_8 [i_3]) ? (((/* implicit */int) arr_7 [i_3] [i_3])) : (((/* implicit */int) arr_6 [i_3])))), (((/* implicit */int) ((max((((/* implicit */int) var_2)), (var_10))) < (((/* implicit */int) ((((/* implicit */int) arr_8 [i_3])) <= (((/* implicit */int) var_3))))))))));
        var_17 = ((/* implicit */unsigned char) (+(min((((/* implicit */unsigned int) arr_7 [i_3] [i_3])), (35145596U)))));
    }
    var_18 = ((4259821687U) % (2851604578U));
    var_19 = ((/* implicit */_Bool) (+(var_6)));
    /* LoopNest 2 */
    for (short i_4 = 0; i_4 < 21; i_4 += 4) 
    {
        for (unsigned int i_5 = 0; i_5 < 21; i_5 += 4) 
        {
            {
                var_20 -= ((/* implicit */unsigned short) ((((/* implicit */int) ((short) max((((/* implicit */short) arr_12 [(signed char)2] [i_4] [10])), (arr_13 [i_4] [i_5] [i_5]))))) | ((((+(((/* implicit */int) var_2)))) * (((/* implicit */int) ((var_4) > (((/* implicit */int) arr_10 [i_5])))))))));
                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((((/* implicit */int) arr_10 [i_4])) << (((((/* implicit */int) arr_10 [i_4])) - (62498))))) | ((+(((/* implicit */int) arr_10 [i_4])))))))));
            }
        } 
    } 
}
