/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228113
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
    var_10 = ((/* implicit */unsigned short) ((unsigned long long int) 10830670037408951822ULL));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_11 *= ((/* implicit */unsigned char) var_5);
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) var_1))) || (((/* implicit */_Bool) ((int) arr_0 [i_0] [i_0])))));
        arr_3 [i_0] = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
    }
    for (unsigned short i_1 = 1; i_1 < 18; i_1 += 2) 
    {
        var_12 = ((/* implicit */int) (((+(((/* implicit */int) arr_1 [i_1 + 1])))) > (((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (((/* implicit */int) arr_4 [i_1 - 1])) : (((/* implicit */int) arr_4 [i_1 + 1]))))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 4) 
            {
                {
                    arr_13 [i_3] = ((/* implicit */unsigned short) min((((((/* implicit */int) ((unsigned short) arr_11 [i_1] [i_1] [i_1]))) - (((((/* implicit */int) (unsigned char)243)) + (((/* implicit */int) (unsigned char)12)))))), (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)65529)) : (((/* implicit */int) (unsigned char)243))))));
                    arr_14 [i_1] [i_1] [i_3] = ((/* implicit */unsigned short) ((int) (unsigned short)29204));
                    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) var_4))) > (((/* implicit */int) ((arr_0 [i_1 - 1] [i_1 + 1]) >= (((/* implicit */int) arr_9 [i_1 + 1] [i_1 + 1] [i_3 - 1]))))))))));
                    var_14 -= ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) (unsigned short)4095))) != (((((/* implicit */_Bool) 10830670037408951821ULL)) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned short)30892))))));
                }
            } 
        } 
    }
    for (unsigned char i_4 = 0; i_4 < 11; i_4 += 4) 
    {
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) var_3))));
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (11350814533794670758ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))));
        var_17 = ((/* implicit */unsigned short) arr_8 [i_4] [i_4] [i_4]);
        arr_18 [i_4] = ((/* implicit */unsigned long long int) ((int) (short)-24650));
    }
}
