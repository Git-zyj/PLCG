/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4360
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
    var_17 = max((var_2), (((/* implicit */unsigned long long int) var_1)));
    var_18 = ((/* implicit */short) min((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_15)))), (-473485987)))), (min((((((/* implicit */unsigned long long int) var_9)) ^ (var_13))), ((~(var_2)))))));
    var_19 -= ((/* implicit */unsigned short) (-(min((((((/* implicit */int) var_5)) + (((/* implicit */int) (unsigned char)39)))), (((/* implicit */int) ((short) (short)197)))))));
    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 16760832ULL)) ? (var_3) : (var_3))), (((/* implicit */unsigned int) (unsigned short)19463))))) || (((/* implicit */_Bool) max((min((var_13), (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) (+(var_10))))))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (signed char i_4 = 4; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_21 *= ((/* implicit */int) ((short) ((signed char) min((2147483647), (((/* implicit */int) var_5))))));
                                arr_14 [i_0] [i_0] [i_0] [1] [i_1] = ((/* implicit */int) max((((((/* implicit */_Bool) arr_12 [i_4 + 1] [7ULL] [i_2] [i_3] [i_4 - 2] [i_2])) ? (arr_12 [i_4 - 2] [i_1] [10] [10] [i_1] [i_4 - 1]) : (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)208)))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) -265096816))));
                }
                for (signed char i_5 = 0; i_5 < 12; i_5 += 3) 
                {
                    arr_17 [i_1] [i_1] [i_1] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_0] [i_1] [i_5]))))), (var_2)));
                    arr_18 [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned char)216), (((/* implicit */unsigned char) (_Bool)1))))))))));
                    var_23 = ((/* implicit */signed char) arr_6 [i_0] [(unsigned char)3] [(_Bool)1]);
                    arr_19 [i_0] [i_1] [i_1] = ((/* implicit */short) (~(((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)34))))));
                }
                arr_20 [i_0] [i_1] = 2113929216U;
                var_24 = ((/* implicit */unsigned long long int) -265096816);
            }
        } 
    } 
}
