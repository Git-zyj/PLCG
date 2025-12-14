/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244754
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
    var_17 = ((/* implicit */_Bool) 13714644623009447318ULL);
    var_18 -= ((/* implicit */unsigned char) var_8);
    var_19 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((+(709450637))), (max((1799777912), (((/* implicit */int) (short)-26662))))))) ? (((((/* implicit */_Bool) min((10695836563448597618ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (max((7750907510260953987ULL), (((/* implicit */unsigned long long int) 427303054)))))) : (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) - (7750907510260953985ULL))) : (((((/* implicit */_Bool) 874898087905992155ULL)) ? (var_6) : (((/* implicit */unsigned long long int) var_12))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_20 -= ((/* implicit */short) ((((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((int) (_Bool)1)))) * (((/* implicit */int) ((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) 7750907510260953977ULL)))) && (var_0))))));
                arr_5 [i_0] = ((/* implicit */unsigned long long int) var_8);
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        {
                            var_21 -= ((/* implicit */long long int) min((10695836563448597612ULL), (((unsigned long long int) arr_0 [i_1]))));
                            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((~(10695836563448597642ULL))), (((((/* implicit */_Bool) 7750907510260953988ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (103661610043946362ULL)))))) ? (max((7750907510260953944ULL), (var_6))) : (arr_4 [i_0] [i_1] [i_3])));
                            var_23 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)95)) != (((/* implicit */int) (unsigned char)82)))))) > (var_16))))) & (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10010))) : (min((((/* implicit */unsigned long long int) (unsigned char)150)), (arr_4 [i_0] [5ULL] [i_2])))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */_Bool) var_4);
                var_25 |= ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (-4997159187647326931LL) : (((/* implicit */long long int) (~(((/* implicit */int) var_1)))))));
            }
        } 
    } 
}
