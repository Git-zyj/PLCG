/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239101
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
    var_14 = ((/* implicit */_Bool) var_2);
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((long long int) ((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)255))))) - (-2310253724274578474LL)))))));
    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) var_12))));
    var_17 = (-(((/* implicit */int) var_13)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_18 += ((/* implicit */unsigned char) var_10);
                arr_5 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((~(var_12))) ^ (((/* implicit */long long int) ((unsigned int) arr_2 [i_0]))))))));
                var_19 = ((/* implicit */short) (((-(arr_1 [i_0] [i_1]))) < (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1] [i_1])))));
                arr_6 [i_1] [i_1] = ((/* implicit */_Bool) max((((((/* implicit */int) (unsigned char)0)) & ((-(((/* implicit */int) arr_4 [i_0] [12LL])))))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (unsigned short)54324)) : (((/* implicit */int) (short)19119))))));
                var_20 += ((/* implicit */_Bool) ((((/* implicit */int) (short)-19121)) & (((/* implicit */int) (unsigned char)141))));
            }
        } 
    } 
}
