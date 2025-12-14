/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197408
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
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        var_13 = ((/* implicit */int) ((((/* implicit */int) min(((unsigned short)61472), (((/* implicit */unsigned short) arr_1 [i_0] [i_0]))))) == ((+(((((((/* implicit */int) (signed char)-122)) + (2147483647))) >> (((((/* implicit */int) var_4)) - (1278)))))))));
        var_14 = ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */int) (unsigned short)19551)) >= (((/* implicit */int) ((unsigned short) arr_2 [i_0 + 1])))))), (((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) min(((unsigned short)61461), (((/* implicit */unsigned short) (signed char)3)))))))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 3; i_1 < 16; i_1 += 3) 
    {
        for (signed char i_2 = 1; i_2 < 18; i_2 += 4) 
        {
            {
                arr_8 [i_1] = ((((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_6 [i_1])), (var_11))))) == (max((((/* implicit */unsigned long long int) arr_2 [0])), (var_2))))) ? (((((/* implicit */_Bool) ((short) arr_6 [i_1]))) ? (max((((/* implicit */unsigned int) (unsigned short)62077)), (arr_7 [i_1] [i_2 + 1] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-23))) < (arr_3 [i_1]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-85)) ? (((/* implicit */int) arr_2 [i_2 + 1])) : (((/* implicit */int) var_12))))) != ((~(var_2))))))));
                var_15 ^= max((((/* implicit */unsigned short) ((unsigned char) arr_7 [4U] [i_1 - 1] [i_2 + 1]))), (min((var_0), (var_4))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (-1392017227) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) ((signed char) (signed char)-82))) : ((+(((/* implicit */int) var_7))))));
                    var_17 = ((/* implicit */int) ((var_5) > (var_8)));
                    var_18 = arr_11 [i_1] [i_2 - 1] [i_1];
                }
            }
        } 
    } 
}
