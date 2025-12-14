/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220363
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
    for (signed char i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        {
                            arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] [(_Bool)1] = ((/* implicit */short) max((((((/* implicit */long long int) ((/* implicit */int) ((576179277326712832LL) != (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_1]))))))) - (3246167351342703902LL))), (arr_2 [10LL])));
                            var_13 = ((/* implicit */unsigned int) ((var_7) % (var_7)));
                        }
                    } 
                } 
                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)-32759)) : (((/* implicit */int) (unsigned short)13))))) && (((/* implicit */_Bool) ((unsigned short) (_Bool)1)))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 16775168ULL)) || (((/* implicit */_Bool) (unsigned char)22)))))) < (max((3246167351342703895LL), (((/* implicit */long long int) var_4)))))))) : ((-(max((18014398492704768ULL), (((/* implicit */unsigned long long int) 1756060509U))))))));
    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) var_11))));
    var_17 = ((/* implicit */_Bool) var_1);
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24592))) : (-4006992188742153809LL)));
}
