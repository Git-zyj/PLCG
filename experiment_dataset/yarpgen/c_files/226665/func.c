/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226665
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
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */signed char) min((var_4), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_5 [i_0])), ((unsigned short)25289))))) >= (min((var_5), (((/* implicit */unsigned long long int) (short)430)))))))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) min(((short)430), (((/* implicit */short) ((signed char) 9661285325539358810ULL)))))) % (((/* implicit */int) var_1))));
                arr_7 [i_0] [(unsigned short)8] = ((/* implicit */unsigned short) var_2);
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 19; i_2 += 3) 
    {
        for (unsigned char i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            for (long long int i_4 = 1; i_4 < 16; i_4 += 2) 
            {
                {
                    var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) ((((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) 6171897549797803036LL)))) || (((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (short)22990)) || (((/* implicit */_Bool) 10419808978529165788ULL)))) && (((/* implicit */_Bool) 1ULL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 2; i_5 < 15; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 3) 
                        {
                            {
                                arr_24 [i_4] [i_4 + 3] [i_4] [i_4 + 3] [i_2] = max((max((18446744073709551614ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_6] [i_2] [i_4] [i_3] [i_2] [i_2])) && (((/* implicit */_Bool) arr_9 [i_2] [i_2]))))))), (min((((/* implicit */unsigned long long int) arr_22 [(short)11] [i_5 + 2] [i_2] [4ULL] [i_5 - 1] [i_5 + 4])), (((((/* implicit */_Bool) (short)-32761)) ? (576459652791795712ULL) : (((/* implicit */unsigned long long int) 6171897549797803040LL)))))));
                                arr_25 [i_2] [i_2] = var_7;
                                var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) max(((unsigned char)109), (((/* implicit */unsigned char) var_7))))), (min((var_8), (var_8)))))) && (((((((/* implicit */_Bool) 15322979085140943627ULL)) && (((/* implicit */_Bool) 576459652791795712ULL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)22990))))))))))));
                            }
                        } 
                    } 
                    var_13 -= ((/* implicit */short) 562949951324160LL);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) (short)14782);
}
