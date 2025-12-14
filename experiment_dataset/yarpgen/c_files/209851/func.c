/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209851
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
    var_13 = ((/* implicit */signed char) var_4);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (short)22693))));
                var_15 += ((/* implicit */short) (~(max((10460770355694979587ULL), (((/* implicit */unsigned long long int) (short)511))))));
                /* LoopNest 3 */
                for (long long int i_2 = 4; i_2 < 13; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (int i_4 = 3; i_4 < 15; i_4 += 3) 
                        {
                            {
                                arr_14 [i_4] [i_4] [i_1] [i_1] [i_1] [3] = ((/* implicit */unsigned int) 405190236187471160ULL);
                                arr_15 [i_1] [i_3] [i_2 - 1] [(signed char)12] [(signed char)12] [i_1] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) (short)-22698)))) * ((~(((((/* implicit */_Bool) (short)-22707)) ? (((/* implicit */int) (short)-22693)) : (((/* implicit */int) (short)-22716))))))));
                                var_16 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)149)), ((short)22696)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)18884)) || ((_Bool)1))))))) ? (((unsigned int) min((-653031685), (var_1)))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-6874))));
                                arr_16 [i_0] [i_0] [i_1] [i_0] = ((((/* implicit */long long int) (+((+(((/* implicit */int) arr_9 [i_4] [i_3] [i_2] [i_1]))))))) / (var_9));
                            }
                        } 
                    } 
                } 
                arr_17 [i_1] [i_1] [i_1 - 3] = ((/* implicit */int) (!(((/* implicit */_Bool) var_2))));
                var_17 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0 + 1] [(short)9] [i_1 + 1] [i_1 - 2] [i_1]))) <= (var_7))) ? (((/* implicit */long long int) ((/* implicit */int) min(((signed char)63), ((signed char)126))))) : (var_10)));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_5 = 3; i_5 < 22; i_5 += 3) 
    {
        arr_20 [i_5] = (~(((/* implicit */int) (signed char)-121)));
        var_18 -= ((/* implicit */unsigned char) ((((/* implicit */int) var_11)) == (((/* implicit */int) arr_18 [(signed char)10] [(signed char)10]))));
        var_19 += ((/* implicit */short) ((var_10) | (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [(signed char)18] [i_5]))))))));
    }
}
