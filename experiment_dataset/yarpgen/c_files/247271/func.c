/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247271
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
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_9 [i_2] [i_0] [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_0))))))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) & (((((/* implicit */unsigned long long int) 525881812)) & (5257851135614364718ULL)))))));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 1; i_3 < 15; i_3 += 1) /* same iter space */
                    {
                        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-10)) & (((/* implicit */int) (_Bool)1))));
                        var_14 = ((/* implicit */signed char) arr_11 [i_3] [i_3 + 2] [i_0 - 2] [i_0]);
                        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-121)) ? (0) : (((/* implicit */int) (signed char)20))));
                        var_16 = ((/* implicit */unsigned long long int) var_7);
                    }
                    for (long long int i_4 = 1; i_4 < 15; i_4 += 1) /* same iter space */
                    {
                        var_17 = ((/* implicit */long long int) ((_Bool) (-(((/* implicit */int) ((signed char) (-9223372036854775807LL - 1LL)))))));
                        arr_15 [i_4] [i_2] [i_0 - 2] = ((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) & (arr_6 [i_0]))) & (arr_2 [i_0 - 1] [i_1 + 4]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_4]))));
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)11286)) ? (((/* implicit */int) (unsigned char)16)) : (((/* implicit */int) (unsigned char)112))))) ? (((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [i_2] [(signed char)4])) : (((((/* implicit */_Bool) arr_8 [i_1] [i_1 + 2] [i_1 + 4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 - 2]))) : (34359738367ULL)))));
                        arr_16 [i_4] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) arr_6 [i_4]);
                    }
                }
            } 
        } 
    } 
    var_19 &= ((/* implicit */int) ((_Bool) var_6));
    var_20 = ((/* implicit */_Bool) max((var_20), ((_Bool)1)));
    var_21 = ((/* implicit */long long int) var_3);
}
