/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3451
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
    var_17 = ((/* implicit */short) (_Bool)1);
    var_18 = ((/* implicit */short) ((_Bool) ((((/* implicit */int) ((681311507) >= (((/* implicit */int) (_Bool)1))))) >= (((/* implicit */int) ((signed char) (_Bool)1))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                {
                    var_19 += ((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) arr_5 [i_0] [i_1] [(signed char)9])))) + (2147483647))) << ((((((_Bool)1) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)78)))) - (1)))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 20; i_3 += 4) 
                    {
                        for (signed char i_4 = 2; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */int) ((signed char) arr_10 [i_2 + 3]));
                                arr_11 [i_0] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_3 - 1])) ? (((/* implicit */int) arr_10 [i_3 + 1])) : (((/* implicit */int) arr_10 [i_3 + 1]))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2])) ? (540161847) : (((/* implicit */int) arr_4 [i_0] [i_2])))));
                    var_22 = ((/* implicit */unsigned long long int) var_1);
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_5 = 0; i_5 < 21; i_5 += 4) 
        {
            for (signed char i_6 = 0; i_6 < 21; i_6 += 1) 
            {
                for (short i_7 = 0; i_7 < 21; i_7 += 2) 
                {
                    {
                        arr_22 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((long long int) (-9223372036854775807LL - 1LL)))));
                        var_23 = ((/* implicit */int) min((var_23), (((((/* implicit */_Bool) (short)20550)) ? (arr_20 [i_0] [i_5]) : (arr_20 [i_5] [i_0])))));
                        var_24 ^= ((/* implicit */signed char) arr_15 [i_0]);
                        var_25 = ((/* implicit */_Bool) max((var_25), (((((/* implicit */int) arr_10 [i_0])) != (((/* implicit */int) arr_10 [i_5]))))));
                    }
                } 
            } 
        } 
        var_26 &= ((/* implicit */_Bool) (+(((/* implicit */int) (short)-20561))));
        var_27 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) var_14))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (signed char)-92))));
    }
    var_28 = ((/* implicit */_Bool) max((((/* implicit */long long int) var_3)), (min((((/* implicit */long long int) ((var_3) ? (((/* implicit */int) (short)20565)) : (((/* implicit */int) (unsigned short)65535))))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (-9223372036854775793LL)))))));
}
