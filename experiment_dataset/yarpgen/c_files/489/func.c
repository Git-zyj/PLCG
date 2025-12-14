/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/489
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
    var_17 = ((/* implicit */short) var_5);
    var_18 = ((/* implicit */unsigned short) ((max((((/* implicit */int) (unsigned short)0)), (var_2))) >> (((((((/* implicit */_Bool) (signed char)26)) ? (var_16) : (((/* implicit */int) (unsigned short)17722)))) + (1928932025)))));
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_10))) == (var_4)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */int) arr_1 [i_0 + 2])) : (((/* implicit */int) var_3))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_0 [i_0]))));
    }
    for (long long int i_1 = 2; i_1 < 20; i_1 += 3) 
    {
        var_21 ^= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)26))) : (max((8388607LL), (((/* implicit */long long int) (signed char)44)))))))));
        var_22 *= ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)77))));
    }
    for (unsigned char i_2 = 2; i_2 < 19; i_2 += 3) 
    {
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)27)) >> (((/* implicit */int) (unsigned short)8))));
        var_24 = ((/* implicit */int) max((var_24), (((((/* implicit */_Bool) arr_5 [i_2] [i_2])) ? (((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-70)), (arr_8 [i_2])))) >> (((min((((/* implicit */long long int) var_10)), (var_6))) + (4001978020111482662LL))))) : (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) < ((+(((/* implicit */int) var_3)))))))))));
        arr_9 [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_8 [i_2 + 2])) || (((/* implicit */_Bool) arr_8 [i_2 + 1])))) && (((((/* implicit */_Bool) (unsigned short)17713)) && (((/* implicit */_Bool) (signed char)51))))));
        /* LoopNest 2 */
        for (unsigned short i_3 = 3; i_3 < 20; i_3 += 3) 
        {
            for (unsigned short i_4 = 1; i_4 < 20; i_4 += 2) 
            {
                {
                    arr_14 [i_2] [i_3 - 1] [(unsigned char)10] [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */int) min(((short)(-32767 - 1)), (((/* implicit */short) (signed char)-37))))) == (((/* implicit */int) (unsigned short)24449)))) ? (1308261372) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) ((((/* implicit */int) (signed char)26)) >= (((/* implicit */int) var_11))))) : (((/* implicit */int) var_15))))));
                    var_25 = ((/* implicit */long long int) max((((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)41249)) && (((/* implicit */_Bool) var_0))))) > (((/* implicit */int) ((((/* implicit */int) arr_13 [(short)2] [i_3] [(short)2] [i_3])) >= (((/* implicit */int) arr_12 [i_2] [i_2] [i_2])))))))), ((unsigned short)65535)));
                    arr_15 [(unsigned short)20] [i_2] [(unsigned short)9] = ((/* implicit */long long int) max(((~(((/* implicit */int) (unsigned short)55659)))), (max(((+(((/* implicit */int) var_12)))), (((/* implicit */int) arr_4 [i_3]))))));
                }
            } 
        } 
    }
}
