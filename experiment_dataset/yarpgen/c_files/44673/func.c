/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44673
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
    var_16 = ((/* implicit */short) 18446744073709551615ULL);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) (~((-((-(((/* implicit */int) arr_10 [i_3] [i_3] [i_2] [i_3] [(_Bool)0]))))))));
                                var_18 = ((/* implicit */int) (-(min((((/* implicit */unsigned long long int) var_8)), (var_0)))));
                                arr_14 [i_0] [i_0] [(unsigned char)2] [i_2] [13] [(signed char)7] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((_Bool) -1))) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_6))))))));
                                var_19 -= ((/* implicit */int) max(((unsigned char)220), ((unsigned char)37)));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_6 = 1; i_6 < 11; i_6 += 4) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 15; i_7 += 3) 
                        {
                            {
                                arr_24 [i_0] [i_0] [i_0] [i_6] = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) min((var_5), (((/* implicit */unsigned short) var_8))))), (((unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) var_3))));
                                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((var_8) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_12))))), (var_7)))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_15)))))) : (((/* implicit */int) var_10))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */_Bool) arr_18 [i_5 + 1] [i_5 + 1]);
                }
                var_22 = arr_0 [i_0] [i_0];
                var_23 = ((/* implicit */unsigned int) (((-(((/* implicit */int) var_5)))) != ((+(((/* implicit */int) (unsigned char)0))))));
            }
        } 
    } 
    var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) var_6))));
}
