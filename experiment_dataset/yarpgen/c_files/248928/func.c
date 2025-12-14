/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248928
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
    var_16 = ((/* implicit */unsigned char) var_10);
    var_17 -= var_4;
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_18 = ((/* implicit */long long int) max((arr_0 [11U]), (((/* implicit */unsigned short) ((signed char) arr_1 [i_0])))));
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2147483647)) || (((/* implicit */_Bool) arr_1 [i_0]))));
        arr_2 [6U] &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0]))))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_1])));
            var_20 = ((/* implicit */_Bool) min((min(((~(((/* implicit */int) var_3)))), (min((((/* implicit */int) (unsigned short)5012)), (2147483647))))), (((int) arr_1 [i_0]))));
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_0 [0U])) : (((/* implicit */int) arr_0 [i_0]))))))) > (((((/* implicit */_Bool) min((arr_0 [i_1]), (((/* implicit */unsigned short) arr_4 [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_13)) < (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))))) : (((unsigned long long int) 2147483621))))));
        }
    }
    /* LoopSeq 3 */
    for (unsigned short i_2 = 2; i_2 < 16; i_2 += 2) 
    {
        var_22 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-2147483647 - 1)))));
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) -7127406372022968449LL)))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_7 [(signed char)17] [i_2]))))) ? (((long long int) (_Bool)1)) : (((/* implicit */long long int) min((((/* implicit */int) arr_7 [i_2] [i_2 - 2])), (arr_6 [i_2 + 1]))))));
    }
    for (signed char i_3 = 1; i_3 < 16; i_3 += 2) 
    {
        var_24 -= ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_3 + 1] [i_3]))))) ? (((/* implicit */int) arr_7 [i_3 + 1] [i_3 - 1])) : (((/* implicit */int) arr_8 [i_3 + 1]))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_7 [i_3 - 1] [(_Bool)1]))))), (17227535291384549969ULL)))));
        var_25 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_6 [i_3 + 1]))));
        var_26 += ((/* implicit */unsigned short) arr_9 [i_3]);
        var_27 -= ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) arr_8 [i_3 - 1])) == (((/* implicit */int) var_10)))))));
        var_28 = ((/* implicit */long long int) (+(arr_6 [i_3 - 1])));
    }
    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 2) 
    {
        var_29 = ((signed char) ((var_11) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_4] [i_4])))));
        var_30 -= ((/* implicit */_Bool) min((((/* implicit */int) max((min((var_4), (arr_7 [i_4] [i_4]))), (((/* implicit */short) arr_10 [0U] [6ULL]))))), ((+(((((/* implicit */int) (signed char)-8)) % (var_6)))))));
    }
}
