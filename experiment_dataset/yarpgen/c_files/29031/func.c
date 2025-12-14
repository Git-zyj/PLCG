/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29031
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
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_4 = 3; i_4 < 9; i_4 += 3) 
                        {
                            arr_17 [(_Bool)1] [7] [7] [(_Bool)1] = (unsigned short)0;
                            arr_18 [i_4] [i_0] [i_0] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) (-(-181549118)));
                            var_18 = ((/* implicit */unsigned short) var_16);
                        }
                        var_19 = arr_13 [i_0] [i_1] [i_2] [i_3] [i_3];
                        arr_19 [i_0] [i_1] [i_2] [i_0] [i_2] [i_0 - 1] = ((/* implicit */unsigned char) -7342946436817785134LL);
                    }
                    for (unsigned short i_5 = 1; i_5 < 10; i_5 += 3) 
                    {
                        arr_22 [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) (+(((((/* implicit */_Bool) 7814128011332083213LL)) ? (((/* implicit */int) arr_11 [i_5 + 1] [i_5 - 1] [i_5 + 1] [i_5] [i_5 - 1])) : (((/* implicit */int) arr_13 [i_5 + 1] [i_5 + 1] [i_5] [i_5 + 1] [i_5 - 1]))))));
                        var_20 = ((/* implicit */int) min((((/* implicit */long long int) max((min((arr_13 [i_5] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) var_14)))), (((/* implicit */unsigned short) arr_12 [i_0] [i_0] [i_5 - 1]))))), (((((/* implicit */_Bool) max((arr_3 [i_0]), (((/* implicit */short) (signed char)32))))) ? (arr_8 [i_2] [i_2] [i_2]) : (arr_21 [5LL] [5LL] [i_0 - 1] [i_5 + 1])))));
                    }
                    arr_23 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0]))))) <= (min((-7342946436817785153LL), (((/* implicit */long long int) (signed char)6))))))) : (min((((/* implicit */int) ((signed char) (signed char)18))), (((((/* implicit */_Bool) (short)24052)) ? (((/* implicit */int) (unsigned short)44632)) : (((/* implicit */int) var_13))))))));
                    var_21 = ((((/* implicit */int) min((arr_12 [i_0] [i_1] [i_2]), (((/* implicit */short) (_Bool)1))))) << (((((((/* implicit */int) arr_12 [i_0] [i_1] [i_0 - 2])) | (((/* implicit */int) arr_12 [i_0 - 2] [i_1] [i_2])))) - (32581))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned short) var_6))))) ? (var_4) : (((/* implicit */int) var_0))))) ? (min((((((/* implicit */int) var_9)) - (((/* implicit */int) var_7)))), (var_4))) : (((/* implicit */int) (unsigned short)29373))));
}
