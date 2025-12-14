/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41218
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
    var_11 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 21; i_2 += 3) 
            {
                {
                    var_12 *= ((/* implicit */signed char) max((((576460752301326336ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))))), (((/* implicit */unsigned long long int) (signed char)-5))));
                    arr_7 [i_0] [i_0] [i_2] = 9223372036854775807LL;
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */signed char) ((long long int) (_Bool)1));
                                var_14 -= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)111)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned char)144))))) & (max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11945))) : (var_3))), (((/* implicit */unsigned long long int) (unsigned char)153))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_5 = 2; i_5 < 17; i_5 += 1) 
    {
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) (short)-11191);
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 1) 
                    {
                        for (signed char i_9 = 0; i_9 < 19; i_9 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) (-2147483647 - 1));
                                arr_30 [(unsigned short)8] [(short)3] [5] [i_8] [(short)3] &= ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */int) (signed char)10)))) + (2147483647))) << ((((((-(1332349011))) + (1332349033))) - (20)))));
                                var_17 += ((/* implicit */signed char) (-((+(((/* implicit */int) ((unsigned short) var_4)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 += ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (var_6) : (((/* implicit */int) (unsigned short)21560)))) <= (((/* implicit */int) var_2))))) > (max((-1332349012), ((+(((/* implicit */int) var_8))))))));
    var_19 = ((/* implicit */unsigned char) 6693694433422902545ULL);
}
