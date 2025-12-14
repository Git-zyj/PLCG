/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39704
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
    var_17 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_4)), (((((((/* implicit */int) var_1)) != (((/* implicit */int) var_16)))) ? ((-(var_11))) : (((/* implicit */unsigned long long int) var_10))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 4; i_3 < 11; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned short) (-(var_10)));
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 4; i_4 < 14; i_4 += 1) 
                        {
                            arr_13 [i_1] [i_1] [(unsigned char)14] [i_1] [i_1] = ((/* implicit */unsigned char) (-((-(arr_9 [i_0] [i_0] [i_0] [i_0 - 2] [i_4])))));
                            var_19 = ((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2] [i_1] [(_Bool)1] [i_1] [i_4 - 2]);
                        }
                        for (long long int i_5 = 0; i_5 < 15; i_5 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0))));
                            var_21 |= ((/* implicit */_Bool) arr_10 [i_0]);
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (short)-5567)) : (((/* implicit */int) arr_14 [i_3 + 1] [i_1] [i_1] [i_0 - 1] [i_5]))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned char i_6 = 0; i_6 < 15; i_6 += 1) 
                    {
                        arr_18 [i_0] [i_0] [i_2] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1] [i_0])) && (((/* implicit */_Bool) (unsigned short)14645)))))));
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)59032)) >> (((/* implicit */int) arr_3 [i_0 - 2]))));
                    }
                    arr_19 [i_1] [(_Bool)1] [i_2] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max(((short)-5567), ((short)-5560))))));
                    var_24 = ((/* implicit */long long int) ((((_Bool) var_12)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_12)), ((unsigned char)162)))) : (((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) (~(arr_0 [i_2])))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((unsigned char) arr_1 [i_0])))))));
                    var_25 *= ((/* implicit */short) var_9);
                }
            } 
        } 
    } 
    var_26 &= ((/* implicit */signed char) ((-3LL) * (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) * (((((/* implicit */int) (unsigned char)153)) / (((/* implicit */int) (short)-5565)))))))));
}
