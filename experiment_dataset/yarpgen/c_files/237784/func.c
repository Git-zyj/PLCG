/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237784
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
    var_10 = ((/* implicit */_Bool) min((var_10), (var_3)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_11 *= ((/* implicit */unsigned int) var_8);
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) /* same iter space */
        {
            arr_4 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((var_7) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)10915))) : (arr_1 [i_0] [i_1])));
            var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) ((signed char) (short)10894)))));
        }
        for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) /* same iter space */
        {
            var_13 = ((/* implicit */_Bool) ((((/* implicit */int) (!(var_3)))) | (((/* implicit */int) (short)-10930))));
            arr_7 [20U] [i_2] &= ((/* implicit */int) (~(3172377381U)));
            arr_8 [i_0] [24ULL] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_2])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_3 [i_0] [i_2]))));
        }
        for (int i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            var_14 = ((var_7) ? (-2955540527551388844LL) : (((/* implicit */long long int) var_1)));
            arr_11 [14LL] = ((/* implicit */_Bool) 2681152746U);
        }
        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (~(var_5))))));
    }
    for (unsigned short i_4 = 2; i_4 < 8; i_4 += 4) 
    {
        var_16 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((short) var_7)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)10915))))) : (0ULL)));
        var_17 -= ((/* implicit */long long int) ((signed char) 3172377381U));
    }
    /* vectorizable */
    for (unsigned int i_5 = 3; i_5 < 10; i_5 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_6 = 0; i_6 < 12; i_6 += 2) 
        {
            var_18 -= (_Bool)1;
            var_19 = ((/* implicit */int) max((var_19), (((((/* implicit */int) (unsigned char)128)) ^ (((/* implicit */int) var_3))))));
        }
        arr_19 [i_5] = ((/* implicit */int) ((arr_0 [i_5 - 3]) > (((((/* implicit */_Bool) (signed char)-1)) ? (2681152723U) : (((/* implicit */unsigned int) arr_15 [i_5] [i_5]))))));
        arr_20 [i_5] [i_5] = ((/* implicit */long long int) 29643177U);
    }
    /* LoopNest 2 */
    for (short i_7 = 0; i_7 < 23; i_7 += 4) 
    {
        for (signed char i_8 = 3; i_8 < 21; i_8 += 3) 
        {
            {
                arr_25 [i_7] [6U] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_7)), (3172377372U)));
                arr_26 [i_7] [i_7] [i_7] = ((/* implicit */_Bool) max(((signed char)-1), (((/* implicit */signed char) var_3))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (signed char)0)) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) + (var_2))) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)12)) - (((/* implicit */int) (signed char)(-127 - 1)))))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)67)))));
}
