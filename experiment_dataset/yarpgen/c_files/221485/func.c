/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221485
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_7))))), ((~(((/* implicit */int) var_5))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) var_6))));
    var_19 = ((/* implicit */unsigned short) ((unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) * (2107125686U))) * (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)246)) / (817265003)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 4; i_0 < 14; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) var_12)))) & ((~(((/* implicit */int) (short)32740))))))) ^ (((arr_2 [i_0 + 1]) + (arr_2 [i_0 - 1])))));
        var_21 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 1]))) / ((+(arr_2 [i_0 - 2])))));
        arr_4 [i_0] [3U] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)16368)) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) - (((var_12) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0 - 3]))))))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)11))) / (arr_2 [i_0 - 1])))));
        var_22 = ((/* implicit */_Bool) ((((/* implicit */long long int) (+(((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (short)-1))))))) * (((min((arr_3 [i_0 - 2]), (((/* implicit */long long int) -1971226322)))) / (((/* implicit */long long int) ((/* implicit */int) ((short) 5585755174266770292ULL))))))));
    }
    /* LoopNest 3 */
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        for (int i_2 = 2; i_2 < 9; i_2 += 2) 
        {
            for (unsigned short i_3 = 1; i_3 < 9; i_3 += 4) 
            {
                {
                    var_23 = ((/* implicit */int) arr_0 [i_1]);
                    var_24 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_10 [i_2] [i_2 + 1] [i_3 - 1] [i_3 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_7))) << (((((/* implicit */_Bool) arr_10 [i_1] [i_2 + 1] [i_3 - 1] [i_3 + 3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_15))))));
                    arr_12 [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) var_13);
                    /* LoopNest 2 */
                    for (long long int i_4 = 4; i_4 < 11; i_4 += 4) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_25 = arr_5 [i_1];
                                var_26 = ((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_5 [i_2 + 3])))) || ((!(((/* implicit */_Bool) 817265003)))));
                                arr_18 [i_2] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((_Bool) (_Bool)0))), (var_4)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_13 [i_1] [i_5]) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_5] [i_5])))))) ? ((~(var_2))) : (((/* implicit */int) var_15)))))));
                                var_27 = ((/* implicit */int) (_Bool)1);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
