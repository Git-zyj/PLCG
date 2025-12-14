/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195639
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
    var_14 = ((/* implicit */signed char) (+((~(((/* implicit */int) var_4))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 += ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)231)) : (((/* implicit */int) var_3))))) ? (min((var_8), (((/* implicit */unsigned int) (short)18414)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)231)) ? (var_10) : (((/* implicit */int) (short)-15109)))))))));
                    var_16 = ((/* implicit */signed char) ((int) ((((var_0) + (9223372036854775807LL))) << (((((/* implicit */int) arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 1])) - (7193))))));
                    var_17 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_0] [5U]))));
                    arr_8 [i_2] [i_2] [i_2 - 1] = ((/* implicit */short) var_1);
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        arr_12 [i_2] [i_1] [i_1] [i_2] [i_1] [i_1] = ((((/* implicit */int) (short)-15109)) == (min((((/* implicit */int) min(((unsigned char)25), (((/* implicit */unsigned char) var_4))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)25)))))));
                        arr_13 [i_0] [(signed char)11] [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) arr_5 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2])) ? (arr_5 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1475413930U))))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 24; i_4 += 2) 
                    {
                        arr_16 [i_0] [i_1] [i_0] [i_2] [i_0] = ((/* implicit */signed char) var_4);
                        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2 - 1] [i_1] [i_2] [i_2] [i_2])))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (short i_6 = 1; i_6 < 12; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) (~(var_12))))) ? (((((/* implicit */_Bool) 4025841940393226786LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)24))) : (-4025841940393226786LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_11)))) ? (min((var_6), (((/* implicit */long long int) arr_3 [i_5] [i_5])))) : (((/* implicit */long long int) arr_22 [i_5] [i_6 + 2] [i_7]))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_17 [i_6 + 1])) / (arr_0 [i_6 - 1] [9LL])))) : (var_6))))));
                }
            } 
        } 
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_8)))) ? (((/* implicit */int) ((-4025841940393226787LL) > (2569458359723952598LL)))) : (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) ((((/* implicit */int) var_5)) % (var_10)))))))));
        arr_24 [i_5] = ((/* implicit */int) (short)16376);
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */_Bool) arr_18 [i_5])) ? (4025841940393226786LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (-3343244718103755209LL)))) ? (((/* implicit */int) var_2)) : (-1309742172)));
    }
}
