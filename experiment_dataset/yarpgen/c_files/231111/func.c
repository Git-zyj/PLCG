/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231111
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
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (var_1) : (var_1)))), ((-(var_7))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */int) var_3)))))))))));
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8)))) <= (((/* implicit */int) ((short) max((var_9), (((/* implicit */long long int) var_3)))))))))));
        arr_3 [i_0 + 1] = ((/* implicit */int) ((short) max(((-(var_6))), (var_10))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 4) 
    {
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (int i_3 = 3; i_3 < 15; i_3 += 3) 
            {
                for (long long int i_4 = 0; i_4 < 18; i_4 += 2) 
                {
                    {
                        var_13 = ((/* implicit */unsigned long long int) ((((_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)-111)) : (((/* implicit */int) (signed char)110))));
                        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) var_10))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 1) 
        {
            arr_16 [i_1] [i_1] = ((/* implicit */unsigned char) ((signed char) (!(((/* implicit */_Bool) arr_6 [i_1])))));
            var_15 ^= ((/* implicit */unsigned int) ((int) arr_15 [i_5] [i_1 + 3]));
        }
        /* vectorizable */
        for (unsigned short i_6 = 1; i_6 < 14; i_6 += 1) 
        {
            var_16 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */long long int) var_1))))));
            var_17 = ((((/* implicit */_Bool) arr_9 [i_1] [i_1 + 2] [i_1] [i_6])) ? (arr_9 [i_1] [i_1 + 1] [0U] [0U]) : (arr_9 [i_1 + 2] [i_1 + 3] [i_1 + 2] [i_1 + 3]));
            var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_1])) << (((var_7) - (1097677010U)))))) <= (arr_15 [i_1] [i_6 + 2]))))));
            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_1 + 2] [i_1 + 3] [i_1 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) var_0)))))) : (((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
        }
    }
    for (unsigned char i_7 = 4; i_7 < 22; i_7 += 4) 
    {
        var_20 *= ((/* implicit */unsigned short) ((((((/* implicit */int) arr_21 [i_7 + 1])) <= (((/* implicit */int) var_3)))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) (unsigned char)197)) ? (-2147483638) : (((/* implicit */int) (signed char)-106))))));
        var_21 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) <= (3741490201U))))));
    }
}
