/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226838
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
    var_20 = ((/* implicit */int) var_3);
    var_21 -= ((/* implicit */unsigned int) -208049023);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    var_22 = ((/* implicit */unsigned short) ((unsigned char) (~(((/* implicit */int) var_5)))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((8404118678209585437LL) / (((/* implicit */long long int) 4294967293U)))))));
                                arr_11 [i_1] = ((/* implicit */short) 431228875U);
                            }
                        } 
                    } 
                    arr_12 [i_0] [i_0] = ((/* implicit */short) ((unsigned int) (!(((/* implicit */_Bool) 2288392253U)))));
                    var_24 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) max((1080863910568919040LL), (((/* implicit */long long int) 2694946068U))))) ? (((/* implicit */unsigned long long int) ((12U) * (((/* implicit */unsigned int) ((/* implicit */int) (short)-31453)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) | (var_9))))));
                    var_25 *= ((/* implicit */unsigned int) (-(arr_0 [i_1] [6ULL])));
                }
                for (unsigned int i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 15; i_6 += 2) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned int) arr_20 [7U] [i_1] [14U] [i_6] [i_1]);
                                var_27 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_19))));
                            }
                        } 
                    } 
                    arr_21 [i_0] [i_1] = ((/* implicit */unsigned short) max((max((var_1), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_5])))), (((/* implicit */unsigned long long int) (~(var_0))))));
                    var_28 ^= ((/* implicit */int) (((+(386995114078382224LL))) / (((long long int) arr_4 [i_5]))));
                }
                arr_22 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */short) arr_13 [i_0] [i_1] [i_1])), (var_6)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_1] [i_0] [i_0])) ? (((/* implicit */int) arr_13 [i_1] [(short)10] [i_0])) : (((/* implicit */int) arr_13 [i_0] [i_1] [i_0])))))));
            }
        } 
    } 
}
