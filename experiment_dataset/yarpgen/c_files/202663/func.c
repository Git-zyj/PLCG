/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202663
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
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) ((var_8) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
    var_16 *= ((/* implicit */long long int) var_3);
    /* LoopSeq 3 */
    for (signed char i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            var_17 |= ((/* implicit */short) arr_3 [12LL]);
            arr_6 [2ULL] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-9641)) ? (1822717480U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)74)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)9636)) || (((/* implicit */_Bool) (short)-21014)))))) : (((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 - 2] [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 2]))) : (arr_4 [i_1 - 2] [i_1 + 3] [i_0 - 3])))));
            arr_7 [i_0 + 1] [i_0] [i_1 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-9641)) ? (((/* implicit */int) (short)-9657)) : (((/* implicit */int) (short)-6257))));
        }
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)6252)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-8885))) : (2782340291879128313LL)));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_19 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_10 [(unsigned char)2])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) arr_9 [i_2])) : (((/* implicit */int) (signed char)84))))) : (arr_4 [i_2] [i_2] [i_2]))) * (((/* implicit */long long int) arr_5 [i_2] [i_2] [i_2]))));
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 2; i_3 < 8; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 10; i_4 += 4) 
            {
                for (short i_5 = 0; i_5 < 10; i_5 += 4) 
                {
                    {
                        var_20 = ((/* implicit */unsigned short) (~(1508347234U)));
                        var_21 = ((/* implicit */short) min((((unsigned int) arr_5 [i_3 + 2] [i_5] [i_5])), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_4])))))));
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_8 [i_2] [i_2])))) ? (max((arr_8 [i_2] [i_2]), (arr_8 [i_2] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_0))))))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */short) arr_11 [i_2] [i_2] [i_2]);
    }
    for (unsigned int i_6 = 4; i_6 < 17; i_6 += 4) 
    {
        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */int) (short)9641)) * (((/* implicit */int) (short)6256)))))));
        arr_25 [i_6] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) var_1)))));
    }
}
