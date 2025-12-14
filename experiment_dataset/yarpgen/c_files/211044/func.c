/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211044
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 10; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) var_9);
                                arr_15 [i_0] [7ULL] [i_2 - 1] [i_3] [i_4] [i_4] [i_0] = ((/* implicit */unsigned int) ((int) ((short) (+(-2133609307)))));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */unsigned char) (((_Bool)0) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)31)) ? (-3226388823533876337LL) : (((/* implicit */long long int) 131071U))))) ? (((/* implicit */int) (((-2147483647 - 1)) < ((-2147483647 - 1))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)210))))))))));
                arr_16 [i_0] [i_1] [(unsigned char)8] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_0])) ? (((var_5) + (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1])))))) ? ((~(((/* implicit */int) ((_Bool) 2073473668))))) : (((/* implicit */int) (_Bool)1)));
            }
        } 
    } 
    var_17 = ((/* implicit */short) (+(((unsigned int) var_7))));
}
