/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246352
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
    var_18 *= ((/* implicit */_Bool) var_17);
    var_19 = ((/* implicit */int) var_17);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1644715393)) ? (((int) arr_2 [i_0] [i_1])) : (((((/* implicit */_Bool) -1885940445)) ? (((/* implicit */int) (unsigned char)246)) : (((/* implicit */int) (unsigned char)8))))));
            var_20 = (!(((/* implicit */_Bool) -1644715369)));
            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) arr_3 [i_1 - 1])))))));
            var_22 = ((/* implicit */long long int) min((var_22), ((~(((((/* implicit */long long int) var_13)) + (5804246324219057674LL)))))));
        }
        var_23 *= ((/* implicit */unsigned char) max((min((((/* implicit */long long int) arr_3 [i_0])), (var_7))), ((+(var_3)))));
        var_24 = ((/* implicit */signed char) min((max((arr_4 [i_0]), (((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_0])))), (((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_0]))));
        var_25 -= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (+(((/* implicit */int) min(((signed char)15), (var_16))))))), (((((/* implicit */_Bool) ((long long int) -1362363649304412055LL))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18903))) : (var_1))) : (((/* implicit */long long int) ((/* implicit */int) var_17)))))));
    }
    /* LoopSeq 2 */
    for (unsigned int i_2 = 1; i_2 < 15; i_2 += 4) 
    {
        arr_9 [i_2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) max((((/* implicit */unsigned short) arr_7 [i_2 + 2])), ((unsigned short)65535))))));
        /* LoopSeq 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_26 ^= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) 1141588519U)) ? (((((/* implicit */_Bool) (short)21855)) ? (arr_10 [(_Bool)1] [(_Bool)1]) : (8692311508844182348LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [2U] [i_2 - 1] [i_2 + 2]))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) -1644715369)), (arr_8 [i_3]))))));
            var_27 = ((/* implicit */_Bool) 3153378798U);
            arr_12 [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)-105)), (((((/* implicit */unsigned long long int) var_15)) & (5544249513909073051ULL)))))) ? (((/* implicit */int) min((var_16), (((/* implicit */signed char) ((_Bool) (signed char)-83)))))) : (((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_3]))))) - (((int) (signed char)-119))))));
        }
        /* vectorizable */
        for (short i_4 = 3; i_4 < 16; i_4 += 2) 
        {
            arr_15 [i_2 + 1] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) 10760068993343888677ULL)) ? (((/* implicit */int) arr_7 [i_2 + 1])) : (((/* implicit */int) (signed char)49))));
            arr_16 [i_4] [i_4] = ((((/* implicit */long long int) ((/* implicit */int) (signed char)15))) < (var_9));
            arr_17 [i_2] [i_4] [i_2] = ((/* implicit */short) 806958172);
        }
        arr_18 [i_2] = ((/* implicit */unsigned int) arr_13 [i_2 + 1] [(unsigned char)0] [16LL]);
        var_28 = ((min((18066442793109684967ULL), (((/* implicit */unsigned long long int) min((var_1), (((/* implicit */long long int) arr_13 [6ULL] [(_Bool)1] [i_2]))))))) < (((/* implicit */unsigned long long int) ((((_Bool) arr_13 [i_2] [8U] [i_2 - 1])) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (short)22988)), (4294967280U)))) : (min((arr_10 [(unsigned char)0] [i_2]), (var_1)))))));
        var_29 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))) % (var_12)));
    }
    for (long long int i_5 = 2; i_5 < 13; i_5 += 1) 
    {
        var_30 = ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) 14822212082567365875ULL))))), (((((/* implicit */_Bool) 2040159319)) ? (((/* implicit */int) (short)32767)) : (arr_19 [i_5 - 1] [i_5 - 1])))));
        arr_21 [(_Bool)1] &= ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)-105)), (((-1644715369) - (((/* implicit */int) (signed char)83))))))) ? (-1362363649304412057LL) : (((/* implicit */long long int) arr_8 [i_5 + 1])));
        var_31 *= ((/* implicit */unsigned int) 1389763835);
    }
    var_32 = ((/* implicit */unsigned long long int) min((max((min((((/* implicit */long long int) var_5)), (var_9))), (var_1))), (min((((/* implicit */long long int) var_13)), (var_3)))));
}
