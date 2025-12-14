/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4514
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
    var_18 = ((/* implicit */unsigned char) var_3);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 += ((/* implicit */short) arr_3 [10LL]);
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (-(arr_1 [i_0] [i_1])))))) ^ (((((/* implicit */_Bool) (short)14700)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0])))))) : (1204633522U)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 1; i_2 < 22; i_2 += 4) 
    {
        for (unsigned short i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned int) min(((+(((/* implicit */int) arr_10 [i_2 - 1] [i_3])))), ((~(min((43600781), (((/* implicit */int) var_16))))))));
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (+(max((43600782), (((/* implicit */int) (unsigned short)256)))))))));
                /* LoopSeq 1 */
                for (unsigned short i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    var_22 = ((/* implicit */signed char) arr_8 [i_3]);
                    var_23 -= ((/* implicit */short) max(((~(max((var_5), (var_2))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (-43600781) : (790657357))))));
                    var_24 = ((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), ((~(((/* implicit */int) var_15))))));
                    var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) 856505860))));
                    arr_13 [i_2 - 1] [i_2 - 1] [i_4] = ((/* implicit */unsigned short) 12647194876434635107ULL);
                }
                arr_14 [(_Bool)1] [i_3] = ((/* implicit */short) (((!(((/* implicit */_Bool) max((-856505861), (((/* implicit */int) var_15))))))) ? (((/* implicit */int) arr_7 [i_3] [i_2])) : (min(((-(((/* implicit */int) arr_7 [i_2 + 2] [i_3])))), (((/* implicit */int) ((((/* implicit */int) (short)-30283)) <= (((/* implicit */int) (unsigned short)48213)))))))));
            }
        } 
    } 
    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_8)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (short)-14697))))), (((/* implicit */long long int) (-(((/* implicit */int) var_9)))))))) ? ((~((~(var_2))))) : (((/* implicit */long long int) (-(((/* implicit */int) min((((/* implicit */short) var_16)), (var_8)))))))));
}
