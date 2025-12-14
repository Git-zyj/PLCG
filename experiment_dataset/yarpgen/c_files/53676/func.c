/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53676
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
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) ((((-1956790418) + (((/* implicit */int) var_19)))) <= (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_13))))))) : (2143289344))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_8 [i_1] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) : (11810277397313361836ULL)))) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) var_15)))));
                    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) + (var_5)))) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) arr_7 [8] [(signed char)2] [i_2 - 1] [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (arr_1 [i_1]) : (((/* implicit */int) (signed char)-103))))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_14))) | (((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */unsigned int) var_11)) : (3048595259U)))))));
                    arr_9 [i_1] [i_2 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((0ULL) << (((-81096509878087016LL) + (81096509878087070LL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-2230))) : (var_6)))) ? (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) (signed char)-118)) : (((/* implicit */int) (signed char)0))))) : (arr_3 [i_1]))) : (((/* implicit */unsigned int) (~(min((((/* implicit */int) arr_7 [i_0] [15U] [13ULL] [i_1])), (var_4))))))));
                    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_4 [i_0 - 1] [i_1]))))) || (((/* implicit */_Bool) 0ULL))));
                }
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            arr_12 [i_0] [i_0] [i_0] = -2143289345;
            arr_13 [18ULL] = ((/* implicit */short) (+(-6384616876292831996LL)));
            arr_14 [i_0] = ((/* implicit */long long int) (short)-2220);
        }
        for (long long int i_4 = 0; i_4 < 19; i_4 += 4) 
        {
            arr_19 [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_18))));
            /* LoopSeq 1 */
            for (unsigned char i_5 = 3; i_5 < 18; i_5 += 4) 
            {
                arr_24 [i_5] [i_4] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_15)) : (var_4)))) ? (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) var_12)) : (2143289344))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)2317)) : (((/* implicit */int) arr_23 [i_5 - 3] [i_5 - 1] [i_5]))))))));
                arr_25 [i_5] = (~(var_7));
            }
        }
    }
    /* vectorizable */
    for (unsigned long long int i_6 = 1; i_6 < 18; i_6 += 4) /* same iter space */
    {
        var_23 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)104)) ? (((/* implicit */long long int) var_11)) : (-2685475762720487970LL)))) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4))) | (var_5)))));
        var_24 -= ((/* implicit */short) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (signed char)103))))));
    }
}
