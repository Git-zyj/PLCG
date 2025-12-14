/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197319
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
    var_16 -= ((/* implicit */short) (signed char)2);
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */short) max((9218486250656129318ULL), (9228257823053422305ULL)));
                    arr_8 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((unsigned long long int) ((((((/* implicit */_Bool) 9228257823053422300ULL)) ? (3519861169024821492ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61837))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned short)512)))))));
                    var_18 &= ((/* implicit */unsigned short) arr_7 [i_0] [i_0]);
                    arr_9 [i_2] [i_1] [i_1] = (-(((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_7)), (arr_5 [i_0] [i_0] [i_0]))))) * (min((arr_7 [i_0] [i_0]), (((/* implicit */unsigned int) (unsigned short)9735)))))));
                    arr_10 [i_0] [(unsigned char)10] [18] [(unsigned char)1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) & (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) (unsigned short)46864)))))))) < (((((/* implicit */_Bool) ((unsigned int) arr_7 [i_0] [i_1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) || (((/* implicit */_Bool) (signed char)72)))))) : (arr_4 [i_0] [i_0])))));
                }
            } 
        } 
    } 
}
