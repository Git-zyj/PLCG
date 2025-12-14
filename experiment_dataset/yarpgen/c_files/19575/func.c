/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19575
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
    var_18 = ((/* implicit */unsigned short) ((var_4) || (((/* implicit */_Bool) var_2))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 9; i_2 += 2) 
            {
                {
                    var_19 *= ((/* implicit */unsigned long long int) (signed char)-4);
                    var_20 += ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-4))))) ? (((((/* implicit */unsigned int) var_5)) % (((((/* implicit */_Bool) arr_3 [i_2])) ? (arr_6 [i_2 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))) : (((/* implicit */unsigned int) min((min((var_8), (((/* implicit */int) var_7)))), (((/* implicit */int) arr_7 [i_0] [i_0] [(unsigned char)8] [i_0])))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((unsigned int) var_6)))));
                                var_22 = ((/* implicit */int) (-(((arr_10 [i_3] [i_3]) * (arr_10 [i_2 - 2] [i_3])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned int i_5 = 0; i_5 < 19; i_5 += 2) 
    {
        var_23 += ((/* implicit */_Bool) ((int) (signed char)-110));
        var_24 = ((/* implicit */short) ((min((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))), (min((3647378603U), (((/* implicit */unsigned int) arr_16 [i_5])))))) % (min(((~(var_10))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_2)))))))));
    }
    for (short i_6 = 0; i_6 < 19; i_6 += 2) 
    {
        var_25 += ((/* implicit */unsigned short) ((unsigned int) (signed char)16));
        var_26 += min((((((/* implicit */unsigned int) ((/* implicit */int) var_15))) / (arr_15 [i_6] [i_6]))), (((/* implicit */unsigned int) var_11)));
        var_27 ^= ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)62)) + (((/* implicit */int) (unsigned short)12))));
    }
    /* vectorizable */
    for (short i_7 = 0; i_7 < 11; i_7 += 1) 
    {
        var_28 += ((/* implicit */unsigned long long int) var_17);
        arr_24 [i_7] [i_7] = ((/* implicit */unsigned short) var_5);
        var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) (~(((/* implicit */int) ((unsigned char) (unsigned short)47507))))))));
        var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_7]))) : (var_0)));
        var_31 += ((/* implicit */unsigned int) arr_7 [i_7] [i_7] [i_7] [i_7]);
    }
    var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) ((short) var_7))))) >= (max((((/* implicit */unsigned int) min((((/* implicit */int) var_17)), (var_8)))), (((var_9) + (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))))));
    var_33 = ((/* implicit */unsigned short) var_2);
}
