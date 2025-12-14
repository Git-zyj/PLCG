/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33081
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
    var_10 = ((/* implicit */unsigned char) max((var_4), (((/* implicit */unsigned long long int) var_7))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_1 [i_0]))));
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 24; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_1 - 1])) ? (18446744073709551611ULL) : (arr_6 [i_1 - 1] [i_1 - 1] [i_1 - 1])));
                    var_12 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2]))) <= (((arr_1 [i_1]) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767)))))));
                }
            } 
        } 
    }
    for (short i_3 = 4; i_3 < 11; i_3 += 3) 
    {
        var_13 |= ((/* implicit */int) (short)-32767);
        var_14 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) <= (var_4))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_13 [i_3 + 1]) > (arr_13 [i_3 - 3]))))) : ((+(arr_13 [i_3 - 3])))));
        arr_14 [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_12 [i_3 - 1]), (arr_12 [i_3 - 1])))) ? (((((/* implicit */int) arr_4 [i_3 - 2])) - (((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) var_1))))))) : ((-(((/* implicit */int) arr_1 [i_3 - 3]))))));
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 22; i_4 += 1) 
    {
        arr_17 [i_4] = ((/* implicit */long long int) var_0);
        var_15 = ((((/* implicit */int) arr_5 [i_4] [(_Bool)1] [i_4])) + (((/* implicit */int) arr_5 [i_4] [0ULL] [i_4])));
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (+(var_5))))));
        var_17 = ((/* implicit */long long int) arr_5 [i_4] [(unsigned short)4] [(unsigned short)4]);
    }
    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) var_9))));
    var_19 = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_8)), (min((max((var_4), (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) var_1))))));
}
