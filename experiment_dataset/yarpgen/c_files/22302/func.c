/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22302
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
    var_13 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))), (var_12)));
    var_14 = ((/* implicit */signed char) ((((/* implicit */long long int) var_6)) ^ (max((((/* implicit */long long int) ((signed char) var_9))), (var_11)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                arr_14 [i_4] [i_3] [i_0] [i_1] [i_0] = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))) : (18446744073709551615ULL)))) ? (min((936432225071788904ULL), (((/* implicit */unsigned long long int) 6U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -5620488566836500415LL)))))))) < (arr_6 [i_0] [i_2] [1ULL] [i_4]));
                                var_15 = ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]);
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((5475329285443853845ULL), (((/* implicit */unsigned long long int) (short)23969))))) ? (((((/* implicit */_Bool) arr_13 [i_2] [i_1] [i_1] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [9ULL])) : (((/* implicit */int) arr_7 [(_Bool)1] [i_1] [i_1] [i_1])))) : (((int) arr_13 [i_0] [i_0] [i_0] [i_0]))))), (min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_1] [i_1]))))), (((((/* implicit */_Bool) (short)-27683)) ? (15U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                    arr_15 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_10);
                }
            } 
        } 
    } 
}
