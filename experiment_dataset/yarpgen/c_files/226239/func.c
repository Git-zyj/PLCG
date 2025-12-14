/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226239
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 10; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_2))) ? ((~(((/* implicit */int) (unsigned char)0)))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [(_Bool)1])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) && (((/* implicit */_Bool) min((0ULL), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1]))))))))) : ((~(((((/* implicit */long long int) ((/* implicit */int) (short)0))) & (var_3)))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) /* same iter space */
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] = ((unsigned long long int) max((max((arr_1 [i_0]), (((/* implicit */unsigned long long int) (short)0)))), (((/* implicit */unsigned long long int) ((arr_4 [i_1]) ^ (((/* implicit */long long int) var_8)))))));
                        arr_11 [i_0] [i_1] [i_2] [i_3] |= ((/* implicit */unsigned long long int) ((short) (~(((/* implicit */int) var_7)))));
                        arr_12 [i_0] [(short)10] [i_0] [i_0] = ((/* implicit */short) ((((((2977408333U) >= (((/* implicit */unsigned int) var_8)))) ? (((((/* implicit */int) var_5)) - (((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_0] [i_3] [i_0])))) : (((/* implicit */int) ((15) != (((/* implicit */int) var_2))))))) - (((/* implicit */int) (!(((/* implicit */_Bool) 2977408333U)))))));
                        arr_13 [i_0] [i_1] [i_2 + 1] [i_3] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((_Bool) var_5)))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 0; i_4 < 13; i_4 += 3) /* same iter space */
                    {
                        var_12 = ((/* implicit */_Bool) var_0);
                        arr_16 [i_0] [i_1] [i_0] [i_4] = ((/* implicit */long long int) var_1);
                    }
                    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 3) /* same iter space */
                    {
                        arr_19 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */unsigned long long int) arr_18 [i_0] [i_0] [i_0] [i_2] [i_5]);
                        var_13 = ((/* implicit */int) ((_Bool) ((_Bool) min((((/* implicit */short) (unsigned char)6)), (arr_5 [i_0])))));
                    }
                }
            } 
        } 
    } 
    var_14 ^= ((/* implicit */int) (((!(((/* implicit */_Bool) var_2)))) ? (((unsigned int) min((((/* implicit */long long int) var_7)), (var_3)))) : (((/* implicit */unsigned int) (+((-(((/* implicit */int) var_1)))))))));
}
