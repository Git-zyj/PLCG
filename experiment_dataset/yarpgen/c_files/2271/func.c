/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2271
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_1] [i_0] [i_0] [i_2])) || (((/* implicit */_Bool) var_3))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (short i_4 = 2; i_4 < 9; i_4 += 3) 
                        {
                            {
                                var_12 -= (!(((/* implicit */_Bool) arr_10 [6ULL] [i_4 + 1])));
                                var_13 *= ((/* implicit */signed char) (+(-317263668194546702LL)));
                                var_14 = ((/* implicit */unsigned int) ((arr_1 [i_4 - 1]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_4 - 2] [i_1])))));
                            }
                        } 
                    } 
                    var_15 -= ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_2])) || (arr_6 [i_0] [i_1] [(unsigned char)4] [i_2])));
                    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((var_11) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3)))) <= (((/* implicit */int) ((_Bool) (short)7575))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 10; i_5 += 1) 
        {
            for (signed char i_6 = 0; i_6 < 10; i_6 += 3) 
            {
                {
                    arr_21 [i_6] [i_5] [i_5] [i_6] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) -5726637260904251138LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-7571))) : (-5726637260904251145LL)))));
                    arr_22 [i_0] [i_5] [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_0]))));
                    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((_Bool) var_8)))));
                    arr_23 [i_6] [i_5] [i_6] [i_6] = ((/* implicit */short) ((_Bool) arr_2 [i_6]));
                }
            } 
        } 
        var_18 = ((/* implicit */short) arr_6 [i_0] [2ULL] [2ULL] [i_0]);
    }
    for (int i_7 = 0; i_7 < 15; i_7 += 4) 
    {
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((((-5726637260904251145LL) ^ (((/* implicit */long long int) ((/* implicit */int) (short)-7587))))) < (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_7]))))) ? (-5726637260904251151LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)-30305)) == (((/* implicit */int) (signed char)-27)))))))))));
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (-(((/* implicit */int) (((+(9223372036854775807LL))) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) arr_25 [i_7]))))))))))))));
    }
    var_21 = ((/* implicit */signed char) ((unsigned int) min((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))))), (((-5726637260904251137LL) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
}
