/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195309
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
    var_18 = ((/* implicit */_Bool) var_8);
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 246535146497836483ULL)))))))), (min((((/* implicit */long long int) arr_0 [i_0 + 3] [4LL])), (var_15)))));
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) (unsigned char)52))));
    }
    var_21 = ((int) (unsigned char)55);
    /* LoopNest 2 */
    for (long long int i_1 = 2; i_1 < 9; i_1 += 1) 
    {
        for (unsigned char i_2 = 1; i_2 < 8; i_2 += 3) 
        {
            {
                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((((var_14) + (2147483647))) << (((((/* implicit */int) arr_5 [i_1 + 1])) - (81))))) << (((((int) arr_5 [i_1 - 1])) - (76))))))));
                var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) arr_5 [i_1 + 1])), (1481996253)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (((var_15) - (((/* implicit */long long int) arr_0 [i_2] [i_2]))))))) ? (((/* implicit */int) (((-(var_5))) > (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1 - 2])))))) : (1071644672));
                /* LoopNest 2 */
                for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    for (unsigned long long int i_4 = 2; i_4 < 7; i_4 += 4) 
                    {
                        {
                            arr_10 [i_2 + 1] [(short)2] [i_4] = ((/* implicit */unsigned short) min((max((((/* implicit */long long int) arr_2 [i_2 - 1])), (var_5))), (((/* implicit */long long int) ((short) (~(arr_6 [i_4] [i_2] [i_3] [4U])))))));
                            var_24 = ((/* implicit */int) ((((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) && (((/* implicit */_Bool) max((((/* implicit */int) arr_8 [5ULL] [i_2] [i_3] [i_4 - 2])), (var_14)))))) || (((((/* implicit */_Bool) ((unsigned short) var_6))) || (((/* implicit */_Bool) arr_4 [i_2 + 1] [i_3] [i_3]))))));
                            arr_11 [i_1 + 1] [(short)1] [i_3] [i_4] = min((var_14), (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_3)))));
                            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((int) ((long long int) (~(((/* implicit */int) (unsigned char)247)))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_5 = 0; i_5 < 10; i_5 += 4) 
                {
                    for (unsigned char i_6 = 0; i_6 < 10; i_6 += 4) 
                    {
                        for (int i_7 = 0; i_7 < 10; i_7 += 1) 
                        {
                            {
                                arr_20 [i_1] [i_7] [i_1] [i_1 - 2] [i_1 - 2] = min((((unsigned long long int) arr_18 [i_1] [i_1] [i_2 + 2] [i_5] [i_5] [i_7])), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)177)) / (2147483647))) / (((int) var_5))))));
                                arr_21 [i_1] [i_2] [i_7] [i_6] [i_7] = ((/* implicit */short) ((int) (unsigned char)151));
                            }
                        } 
                    } 
                } 
                var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)52)) & (((/* implicit */int) (unsigned char)68))));
            }
        } 
    } 
}
