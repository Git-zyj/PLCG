/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23323
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned short) var_1);
                arr_6 [i_0] [i_1] = (+(((long long int) (_Bool)1)));
                var_15 = -1LL;
                arr_7 [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_4 [16LL])) : (var_12))) : (var_2))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        var_16 = ((/* implicit */long long int) arr_3 [i_2]);
        arr_10 [16LL] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */unsigned long long int) var_11)) : (arr_5 [i_2]))));
    }
    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
    {
        arr_13 [i_3] = ((/* implicit */long long int) ((((_Bool) arr_2 [i_3] [i_3])) ? (arr_4 [i_3]) : (((/* implicit */unsigned int) min((((((/* implicit */int) arr_3 [i_3])) & (((/* implicit */int) arr_3 [11LL])))), (((/* implicit */int) arr_2 [i_3] [i_3])))))));
        var_17 = ((/* implicit */long long int) (+(((/* implicit */int) arr_0 [14LL] [i_3]))));
        arr_14 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_3]))))) ? (arr_8 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3] [i_3])))))) ? (((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_3]))))) - (min((arr_5 [18LL]), (var_12))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3] [i_3])))));
        var_18 = ((/* implicit */long long int) (~(var_5)));
    }
}
