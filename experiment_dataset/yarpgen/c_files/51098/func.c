/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51098
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
    var_16 = ((short) (+(((/* implicit */int) ((unsigned char) var_10)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            {
                arr_6 [(short)6] [i_0] &= ((/* implicit */unsigned int) ((unsigned long long int) (+(arr_4 [(signed char)8] [i_1 - 2]))));
                arr_7 [i_0] [5LL] [i_1] = (i_0 % 2 == 0) ? (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((long long int) var_15)) << (((arr_0 [i_0] [i_1]) - (6198622761172194072ULL)))))) * (min((((/* implicit */unsigned long long int) 251658240U)), (14686304797064164729ULL)))))) : (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((long long int) var_15)) << (((((arr_0 [i_0] [i_1]) - (6198622761172194072ULL))) - (1138207624876697561ULL)))))) * (min((((/* implicit */unsigned long long int) 251658240U)), (14686304797064164729ULL))))));
                arr_8 [i_0] = ((/* implicit */short) (((+((+(17986967906534453675ULL))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 18; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        {
                            arr_15 [i_0] = ((/* implicit */unsigned char) ((signed char) (_Bool)0));
                            arr_16 [(signed char)3] [i_2] [i_2] [i_0] = ((/* implicit */int) (short)31117);
                            arr_17 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */int) (+((+(arr_11 [i_2 - 1] [i_3] [i_0])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1400)) ? ((+(((/* implicit */int) (unsigned short)54670)))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (short)31117))))) ? (((/* implicit */int) ((short) (unsigned char)253))) : (var_0))))))));
    var_18 = ((/* implicit */unsigned int) min((var_9), (((/* implicit */unsigned long long int) 3319015519142845759LL))));
}
