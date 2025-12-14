/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217463
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
    for (unsigned char i_0 = 3; i_0 < 24; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_17 ^= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (short)-19491)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1))))));
                    var_18 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */int) var_13)) : (512140531)))) ? (arr_8 [i_1 - 1] [i_1 + 1] [i_0 + 1] [i_0 + 1]) : (((/* implicit */int) min((((/* implicit */short) var_0)), (arr_3 [i_0]))))))));
                    var_19 += ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (max((((/* implicit */unsigned int) var_1)), (var_7))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_0)))))))), (var_4)));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) var_15);
    var_21 = ((/* implicit */unsigned short) ((long long int) (_Bool)1));
    var_22 = ((/* implicit */_Bool) var_15);
    /* LoopSeq 2 */
    for (unsigned long long int i_3 = 4; i_3 < 13; i_3 += 3) 
    {
        var_23 = ((/* implicit */unsigned short) var_5);
        var_24 |= ((/* implicit */signed char) (!(((((int) (unsigned char)250)) < (((((/* implicit */_Bool) var_14)) ? (arr_8 [i_3] [i_3] [(_Bool)1] [(_Bool)1]) : (((/* implicit */int) (_Bool)1))))))));
    }
    for (unsigned short i_4 = 0; i_4 < 23; i_4 += 3) 
    {
        var_25 |= ((/* implicit */unsigned short) max((((/* implicit */int) ((signed char) (unsigned char)1))), (((((/* implicit */_Bool) (~(2663362493U)))) ? (((/* implicit */int) var_2)) : (((((/* implicit */int) var_13)) ^ (((/* implicit */int) (unsigned short)58952))))))));
        arr_15 [15ULL] = ((/* implicit */unsigned long long int) (unsigned short)36425);
    }
}
