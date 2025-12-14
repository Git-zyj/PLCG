/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192963
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
    var_11 = ((/* implicit */unsigned long long int) (-(var_1)));
    var_12 = ((/* implicit */unsigned char) var_4);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-29054)) ? (((/* implicit */int) arr_7 [i_1] [i_3] [i_1] [i_1])) : (var_9)))) ? ((~(((/* implicit */int) var_8)))) : (((int) 991155952600662011LL))));
                                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) -991155952600662030LL)) ? (-684662023) : (758759068)));
                                var_15 = ((/* implicit */unsigned int) (+((+(var_2)))));
                                var_16 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */unsigned int) -684662005)) <= (arr_9 [i_4] [i_4] [i_3] [i_2] [i_1] [i_0])))), (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_2] [0ULL] [i_4])) ? (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */signed char) 684662041);
                }
            } 
        } 
    } 
    var_18 ^= ((/* implicit */signed char) ((unsigned char) min((((/* implicit */int) var_8)), (-684662020))));
}
