/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210260
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
    var_11 -= ((/* implicit */unsigned char) ((((((/* implicit */int) var_5)) - (((((/* implicit */int) var_9)) - (((/* implicit */int) var_1)))))) - ((((-(((/* implicit */int) var_8)))) - (((((/* implicit */_Bool) 6890583157323659293LL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)71))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 24; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 23; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_3] [i_2] [i_3] = ((/* implicit */short) ((((arr_6 [i_0] [(short)20]) <= (var_7))) || (((/* implicit */_Bool) 274877905920LL))));
                        var_12 = ((/* implicit */_Bool) arr_0 [i_0]);
                    }
                    /* vectorizable */
                    for (unsigned int i_4 = 0; i_4 < 25; i_4 += 2) 
                    {
                        arr_14 [i_1 + 1] = ((/* implicit */_Bool) var_9);
                        var_13 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)28432)) % (((/* implicit */int) var_2))));
                        var_14 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)196))));
                        arr_15 [(short)9] = ((/* implicit */_Bool) ((arr_0 [i_2 - 1]) - (arr_3 [i_1 - 1] [i_2 - 1] [i_2])));
                    }
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        var_15 = ((/* implicit */int) var_0);
                        arr_19 [i_0] [i_1] [(short)19] [i_5 + 1] = ((/* implicit */long long int) (((+(((/* implicit */int) (_Bool)0)))) > (((/* implicit */int) var_8))));
                    }
                    arr_20 [i_0] [(_Bool)1] [i_2] = ((/* implicit */short) (~((((~(((/* implicit */int) arr_5 [(unsigned short)12])))) + (((/* implicit */int) ((var_6) < (var_6))))))));
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (long long int i_7 = 0; i_7 < 25; i_7 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) var_8);
                                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_27 [i_7] [i_2] [i_2 - 1] [(_Bool)1] [4] [i_2] [i_0])))) & (((unsigned long long int) arr_21 [i_7] [20] [i_2] [i_0]))))))));
                                var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) > (((/* implicit */int) ((unsigned char) var_7)))));
                                var_19 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_2] [i_0] [i_2] [i_0] [(unsigned short)2] [i_1] [i_7])) ? (((/* implicit */long long int) (~(((0U) << (((var_7) + (2716675939034562507LL)))))))) : (max((((/* implicit */long long int) 0U)), (min((((/* implicit */long long int) var_2)), (var_6)))))));
                                arr_28 [i_2] &= ((/* implicit */signed char) (+((-(((/* implicit */int) arr_16 [i_7] [i_6] [i_2] [i_1]))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((_Bool) ((2449227914U) != (arr_25 [i_0] [i_1] [i_2] [(signed char)15] [i_1 + 1]))))), (((long long int) (-(((/* implicit */int) var_3)))))));
                    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (+(max((arr_27 [i_0] [i_2] [i_2 - 2] [14U] [i_1 - 1] [i_2] [12U]), (arr_27 [i_0] [i_0] [i_2 + 1] [i_0] [i_1 - 1] [i_2] [i_1]))))))));
                }
            } 
        } 
    } 
}
