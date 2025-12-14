/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193013
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
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? ((+(((/* implicit */int) var_10)))) : ((+(((/* implicit */int) (unsigned char)44))))));
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0)) ? ((((!(((/* implicit */_Bool) (unsigned short)0)))) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)1)))) : (((/* implicit */int) (unsigned char)44))));
    var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) - (1247186405)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_5)))))) ? (((/* implicit */long long int) var_4)) : (min((7040914568291244968LL), (((/* implicit */long long int) var_0)))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)-72)), ((unsigned short)65519))))))), (6630346249889976914ULL)));
        var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) var_8))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65521)) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))));
    }
    for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((9223372036854775807LL) & (((/* implicit */long long int) arr_5 [i_1]))))))) ? (((((/* implicit */_Bool) ((arr_5 [i_1]) + (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */int) var_10)) : ((~(((/* implicit */int) (unsigned short)51328)))))) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 3)) ? (((/* implicit */int) (unsigned char)118)) : (3)))))));
        arr_7 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(arr_4 [i_1]))))));
        arr_8 [i_1] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1])) && (((/* implicit */_Bool) var_4))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (signed char)-72))));
        var_16 = ((/* implicit */unsigned int) (-(arr_1 [i_2])));
        arr_12 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (arr_1 [i_2]) : (arr_1 [i_2])));
        arr_13 [i_2] [i_2] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)195))));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 1) 
    {
        var_17 *= ((/* implicit */unsigned int) ((((/* implicit */int) (short)0)) > (((/* implicit */int) (signed char)25))));
        /* LoopSeq 2 */
        for (short i_4 = 0; i_4 < 15; i_4 += 1) 
        {
            var_18 *= ((/* implicit */unsigned char) var_9);
            arr_20 [i_3] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) var_0))));
            arr_21 [i_4] = ((/* implicit */signed char) 17968410906266044022ULL);
        }
        for (unsigned short i_5 = 0; i_5 < 15; i_5 += 1) 
        {
            arr_24 [i_5] = ((/* implicit */unsigned short) (((_Bool)0) || (((/* implicit */_Bool) 1183600667U))));
            arr_25 [i_5] [i_5] [i_5] = ((/* implicit */int) 9775045169210891248ULL);
        }
        var_19 ^= ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65535)) + (var_7)));
    }
    var_20 += ((/* implicit */unsigned long long int) var_0);
}
