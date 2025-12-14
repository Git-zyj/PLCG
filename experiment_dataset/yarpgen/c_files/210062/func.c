/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210062
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
    var_10 = ((/* implicit */short) var_4);
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 18; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 1) 
                    {
                        {
                            arr_10 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 6506410593406376707LL)) ? (((/* implicit */int) (short)31549)) : (((/* implicit */int) (short)31556))));
                            var_11 = ((/* implicit */unsigned int) (short)-23106);
                        }
                    } 
                } 
                var_12 *= ((/* implicit */signed char) (((-(5100760288437883897ULL))) >> ((((-(max((var_4), (((/* implicit */int) (short)14473)))))) + (14504)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 3) 
    {
        for (unsigned short i_5 = 1; i_5 < 23; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 2) 
            {
                {
                    var_13 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_5 - 1] [i_5 + 1] [i_5 - 1])))))));
                    var_14 += ((/* implicit */unsigned short) ((short) (+((-(1101970106U))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_7 = 1; i_7 < 21; i_7 += 2) 
    {
        for (int i_8 = 0; i_8 < 22; i_8 += 4) 
        {
            for (short i_9 = 0; i_9 < 22; i_9 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) var_7);
                    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) (-(13345983785271667686ULL)))) ? (3822792898467542983LL) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_7] [i_8] [i_9]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 13345983785271667718ULL)) ? (((/* implicit */int) (unsigned char)220)) : (((/* implicit */int) var_3))))) ? (((((/* implicit */int) arr_15 [i_8])) ^ (((/* implicit */int) arr_14 [i_7])))) : (((/* implicit */int) arr_15 [i_9]))))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_4)) ^ (min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (17930158455829351930ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */int) var_3)))))))));
}
