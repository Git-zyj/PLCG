/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191686
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    var_14 = ((((/* implicit */_Bool) 7213437058807127058ULL)) ? (((/* implicit */unsigned long long int) (-(((int) var_2))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16929))) / (9846356789975820043ULL))));
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */short) ((signed char) (!(((/* implicit */_Bool) -1036048424)))));
                }
                var_15 = ((/* implicit */unsigned char) (unsigned short)16945);
                var_16 *= ((/* implicit */short) max((((/* implicit */int) ((unsigned short) (unsigned short)16929))), (((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (unsigned char)255))))));
                var_17 = ((/* implicit */int) min((var_17), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_7 [i_1] [i_1] [i_1])), (arr_1 [i_1])))) ? (((/* implicit */int) (unsigned short)0)) : (((int) arr_9 [i_0]))))));
                var_18 = ((/* implicit */unsigned char) ((int) (~(((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_1])))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) var_3);
    var_20 = ((/* implicit */unsigned char) 8485200611536890999ULL);
}
