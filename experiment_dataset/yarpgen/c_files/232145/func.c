/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232145
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
    var_11 -= var_0;
    var_12 = 9223372036854775807LL;
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_0))));
                var_14 &= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (((+(-9223372036854775795LL))) != (((/* implicit */long long int) ((/* implicit */int) ((_Bool) -1802081136833427655LL)))))))) >= (max((((/* implicit */long long int) (-(var_8)))), (((((/* implicit */long long int) ((/* implicit */int) var_5))) + (arr_4 [(_Bool)1])))))));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) ((min(((-(((/* implicit */int) var_7)))), (((((/* implicit */int) var_5)) + (((/* implicit */int) var_10)))))) > (((/* implicit */int) (short)9058))));
    /* LoopSeq 3 */
    for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) /* same iter space */
    {
        arr_8 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (+(-1802081136833427655LL)))) ? (((/* implicit */int) ((min((var_8), (((/* implicit */int) var_6)))) <= (((/* implicit */int) arr_6 [i_2]))))) : ((-(((((/* implicit */int) var_10)) + (((/* implicit */int) var_6))))))));
        arr_9 [(_Bool)1] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)58699))));
        var_16 += ((/* implicit */unsigned long long int) arr_7 [i_2]);
        var_17 = ((/* implicit */unsigned short) (((-(2277486492245159828LL))) == (min((((/* implicit */long long int) ((1802081136833427654LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50561)))))), (-1802081136833427655LL)))));
    }
    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 4) /* same iter space */
    {
        arr_13 [i_3] = (signed char)-1;
        var_18 -= ((/* implicit */long long int) min((((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) 1967374856U)) : (var_3))) | (((/* implicit */unsigned long long int) -1985294023)))), (((/* implicit */unsigned long long int) var_9))));
    }
    for (unsigned int i_4 = 0; i_4 < 19; i_4 += 4) /* same iter space */
    {
        var_19 |= ((/* implicit */unsigned short) min((((/* implicit */long long int) (-(((/* implicit */int) var_10))))), ((~(15LL)))));
        arr_16 [i_4] [i_4] = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7))))) : (arr_15 [i_4] [(unsigned short)18]));
    }
}
