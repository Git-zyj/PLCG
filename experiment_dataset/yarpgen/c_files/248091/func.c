/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248091
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
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) ((_Bool) var_11)))) << (((/* implicit */int) ((((((/* implicit */_Bool) 1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4)))) == (((/* implicit */int) (unsigned char)128))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = arr_1 [i_0];
        var_15 += ((/* implicit */_Bool) 853142611);
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((_Bool) arr_1 [i_0]));
    }
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_11)), (var_6)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)64))));
    /* LoopSeq 2 */
    for (unsigned char i_1 = 1; i_1 < 18; i_1 += 1) 
    {
        var_17 = ((/* implicit */signed char) (_Bool)1);
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 22; i_3 += 3) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                {
                    {
                        var_18 = ((/* implicit */unsigned long long int) (unsigned char)102);
                        arr_13 [i_4] [i_4] [i_2] [i_1] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_10 [(unsigned short)2] [i_4] [17ULL] [(unsigned char)1]))));
                        var_19 = ((/* implicit */unsigned long long int) arr_6 [(short)10]);
                        var_20 = ((/* implicit */signed char) min((var_20), ((signed char)32)));
                    }
                } 
            } 
        } 
        var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [(signed char)8]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) & (arr_4 [(short)0] [i_1 + 1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_1 + 2] [i_1 - 1] [i_1] [0ULL])) / (((/* implicit */int) (signed char)109)))))));
    }
    for (signed char i_5 = 3; i_5 < 15; i_5 += 4) 
    {
        arr_18 [i_5] [i_5] = ((/* implicit */_Bool) max((4621784466943350974ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_5 - 3])) - (((/* implicit */int) var_4)))))));
        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [14LL]))) > (7068358275953577619ULL))))));
        var_23 = ((unsigned long long int) (((!(((/* implicit */_Bool) (unsigned char)81)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-65)) ? (((/* implicit */int) arr_8 [6LL])) : (((/* implicit */int) arr_6 [i_5]))))) : (((unsigned long long int) var_1))));
        var_24 ^= ((/* implicit */unsigned short) var_10);
    }
}
