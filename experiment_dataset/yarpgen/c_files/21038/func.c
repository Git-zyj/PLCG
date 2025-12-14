/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21038
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */long long int) arr_2 [i_0] [i_0] [i_1]);
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 22; i_2 += 2) 
                {
                    for (unsigned short i_3 = 1; i_3 < 21; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_15 = arr_5 [i_0] [7U] [i_2] [i_4];
                                var_16 = ((/* implicit */int) arr_4 [i_2] [i_0] [i_1]);
                                var_17 = ((/* implicit */int) max((var_17), ((~((+(((/* implicit */int) var_9))))))));
                                var_18 *= ((/* implicit */unsigned char) ((max((arr_8 [i_2] [i_4] [i_2 + 1] [i_3 - 1]), (((/* implicit */long long int) (~(-2013737680)))))) == (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_6 [i_0] [i_3] [i_3]))))));
                                arr_11 [i_0] [i_0] [i_0] [i_2] [(_Bool)1] = arr_10 [i_0] [i_0] [i_0] [i_0] [(unsigned short)2] [i_0];
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */int) ((((/* implicit */int) arr_9 [i_0] [i_0])) != (((/* implicit */int) arr_4 [i_0] [(unsigned char)10] [i_1]))));
                /* LoopNest 3 */
                for (short i_5 = 0; i_5 < 23; i_5 += 4) 
                {
                    for (signed char i_6 = 1; i_6 < 21; i_6 += 2) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 23; i_7 += 4) 
                        {
                            {
                                arr_20 [i_5] [i_1] [i_5] [i_5] = ((/* implicit */signed char) (~(var_7)));
                                var_20 = ((signed char) arr_8 [14] [i_0] [i_5] [i_7]);
                                var_21 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_1] [i_1] [i_5] [i_6] [i_7]))) * (var_5)))) ? (((((/* implicit */int) arr_14 [i_0] [i_1] [i_5] [(unsigned short)20])) >> (((var_3) - (2075351727087655820ULL))))) : ((-(((/* implicit */int) (signed char)37))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 &= ((/* implicit */short) var_10);
    var_23 = ((/* implicit */unsigned char) var_0);
    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) ((unsigned int) var_11)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_7)), (18446744073709551615ULL))))))) : ((((!(var_1))) ? (-850090604) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
}
