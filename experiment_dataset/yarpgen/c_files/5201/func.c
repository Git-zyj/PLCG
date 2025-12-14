/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5201
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 7; i_2 += 4) 
            {
                {
                    arr_8 [i_1] = ((/* implicit */long long int) ((int) arr_4 [i_0] [i_1 + 3] [i_2 + 4]));
                    var_10 = var_9;
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (int i_4 = 3; i_4 < 7; i_4 += 1) 
                        {
                            {
                                arr_13 [i_4 - 3] [i_1 + 2] [i_0] [i_4] [i_4] [i_3] [i_4 - 3] = ((/* implicit */unsigned char) ((3634057565U) ^ (((/* implicit */unsigned int) 1630151516))));
                                arr_14 [i_0] = ((/* implicit */unsigned short) arr_9 [i_4 - 3] [i_3] [i_2 + 2] [i_1 + 3]);
                                arr_15 [i_4] [4] [i_2] [i_1] [i_0] = ((/* implicit */int) -6024539540831329380LL);
                                var_11 = ((/* implicit */int) ((((((/* implicit */int) var_4)) == (-435378307))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (+(0ULL)))))) : (((((/* implicit */_Bool) arr_3 [i_4 - 1] [1] [i_2 - 2])) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_0] [(unsigned char)8] [(unsigned char)8]))))) : (arr_2 [(unsigned char)6])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_12 -= ((/* implicit */short) var_7);
    var_13 |= ((/* implicit */short) (-(((/* implicit */int) var_7))));
    var_14 += ((/* implicit */short) min((((/* implicit */int) var_4)), (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1)))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
    var_15 = (+((+((+(18446744073709551609ULL))))));
}
