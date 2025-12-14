/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23179
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
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */unsigned short) ((((((int) 1482190072)) | (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)34311)) && (((/* implicit */_Bool) (unsigned short)31227))))))) * (((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)31227))))) <= (((arr_3 [i_0] [i_0]) / (7440978574224831789LL))))))));
                    var_12 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) max(((unsigned short)31236), (((/* implicit */unsigned short) (unsigned char)177))))) ? (((((/* implicit */_Bool) (unsigned char)177)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)108))))) : (((/* implicit */unsigned long long int) ((arr_6 [i_0] [i_0] [i_0] [i_1]) * (((/* implicit */int) arr_0 [i_0]))))))), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
                    var_13 = ((/* implicit */short) ((unsigned short) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)31235)) ? (((/* implicit */int) (unsigned short)34309)) : (1013882119)))));
                    arr_7 [i_2] [i_0] [i_0] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) -1013882113)), (3896382427238998947LL)))) ? (((6ULL) - (1907285839063991062ULL))) : (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0])))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */signed char) (unsigned char)0);
}
