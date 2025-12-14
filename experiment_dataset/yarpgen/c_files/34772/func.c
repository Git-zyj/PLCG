/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34772
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
    var_10 = -1648636191;
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned int) max((((/* implicit */int) ((arr_2 [i_0] [i_1]) != (arr_2 [i_0] [i_0])))), ((~(-641018523)))));
                    var_12 |= ((/* implicit */long long int) ((max((((/* implicit */long long int) arr_3 [i_0])), (var_4))) >= (((/* implicit */long long int) min((-641018523), (((/* implicit */int) arr_3 [i_0])))))));
                    arr_9 [i_0] = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (arr_2 [i_0] [i_2]) : (arr_2 [i_0] [i_0])))));
                    arr_10 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_5 [i_0] [i_1]))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (0ULL) : (18446744073709551598ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_2 [i_0] [(short)8]))))));
                }
            } 
        } 
        var_13 |= ((short) arr_6 [i_0] [i_0] [i_0]);
    }
    var_14 = ((/* implicit */unsigned short) ((((767864523356710695ULL) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2))))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))));
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)114)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) min(((signed char)29), ((signed char)79)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_5))))) : (((unsigned int) 1929931796091488674LL))))));
    var_16 = ((/* implicit */unsigned int) var_2);
}
