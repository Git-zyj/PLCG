/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32741
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_11 = ((long long int) ((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
        var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))) : (var_10)));
    }
    /* LoopNest 3 */
    for (short i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        for (unsigned int i_2 = 4; i_2 < 11; i_2 += 3) 
        {
            for (int i_3 = 0; i_3 < 14; i_3 += 3) 
            {
                {
                    var_13 *= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_1)) ? (-1094644961262310459LL) : (arr_6 [i_1] [i_1] [(signed char)12]))) & (((/* implicit */long long int) ((/* implicit */int) ((arr_6 [i_1] [i_1] [2U]) != (-1094644961262310479LL)))))));
                    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) 1094644961262310453LL)) ? (((/* implicit */int) min((arr_9 [(short)10] [i_2] [i_2]), (((/* implicit */unsigned char) var_5))))) : (((/* implicit */int) var_5))))), (((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */int) var_9))))) | (arr_2 [i_2 - 2] [i_2 + 2]))))))));
                    var_15 = ((/* implicit */signed char) ((unsigned long long int) var_1));
                    /* LoopNest 2 */
                    for (signed char i_4 = 1; i_4 < 12; i_4 += 3) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 14; i_5 += 3) 
                        {
                            {
                                arr_16 [8ULL] [i_2] [(short)11] [i_2] [i_2] [8ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_10)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (min((((/* implicit */int) (signed char)-102)), (1351697408))) : (((var_7) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6))))))) : (min((((/* implicit */unsigned long long int) (unsigned char)210)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) | (var_3)))))));
                                var_16 -= ((/* implicit */long long int) ((_Bool) min((((var_0) ^ (((/* implicit */int) var_4)))), (((/* implicit */int) arr_14 [i_4] [(_Bool)1] [i_4 + 2] [(signed char)1] [i_4 + 2])))));
                                var_17 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_10 [i_4 + 2] [i_4] [i_4 - 1] [i_2])), ((~(var_10)))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max((arr_10 [i_2] [(short)2] [i_2 - 3] [i_2]), ((unsigned char)154))))) == (arr_6 [i_3] [i_4] [i_2])))));
                                arr_17 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) min(((unsigned char)46), ((unsigned char)37)))) >= (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_2])) && (var_5))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
