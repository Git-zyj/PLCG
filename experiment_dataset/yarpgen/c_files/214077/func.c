/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214077
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
    var_18 = var_8;
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)177))) ^ (arr_1 [i_0])));
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((int) arr_2 [i_0] [i_1]));
            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_0 [i_0]) : (((((/* implicit */_Bool) var_17)) ? (0LL) : (var_4)))));
            var_21 = ((/* implicit */int) min((var_21), (((arr_3 [i_0]) << (((arr_1 [i_0]) - (7504741889675206458ULL)))))));
        }
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_2]))) : (arr_8 [i_0] [i_2] [i_0])));
            arr_10 [i_0] [i_2] = ((/* implicit */unsigned long long int) (-((+(var_4)))));
        }
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 20; i_3 += 1) 
        {
            for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) 
            {
                for (signed char i_5 = 0; i_5 < 21; i_5 += 1) 
                {
                    {
                        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */int) arr_16 [i_3 + 1] [i_3] [i_3] [i_5])) * (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned char)164)) : (-1449183642))))))));
                        arr_20 [i_5] [i_3] [i_3] [i_5] [i_5] [i_5] = (~((~(((/* implicit */int) arr_2 [i_0] [i_3])))));
                    }
                } 
            } 
        } 
        arr_21 [i_0] [i_0] = ((/* implicit */signed char) (+(var_15)));
    }
    var_24 = ((/* implicit */unsigned char) (~(((var_3) << ((((~(((/* implicit */int) var_12)))) + (136)))))));
    var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) var_17))));
    var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_3)))))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) - (16511663482175695642ULL))))) < (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (unsigned char)73)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)108)))), ((~(((/* implicit */int) var_1))))))))))));
}
