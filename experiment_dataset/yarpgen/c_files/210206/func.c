/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210206
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
    var_12 = ((/* implicit */_Bool) var_6);
    /* LoopSeq 3 */
    for (int i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_10))));
        var_14 *= ((/* implicit */short) (-(9205357638345293824LL)));
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_0 [i_0 + 1] [i_0 - 3]))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)24573))))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        var_16 = ((/* implicit */long long int) var_7);
        var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))));
    }
    for (int i_2 = 2; i_2 < 12; i_2 += 2) 
    {
        var_18 = ((/* implicit */signed char) max(((+((+(((/* implicit */int) arr_8 [2ULL])))))), (((/* implicit */int) arr_7 [(unsigned char)1]))));
        var_19 |= ((/* implicit */long long int) max((min((arr_7 [i_2 - 2]), (arr_7 [i_2 - 2]))), (max((arr_7 [i_2 - 2]), (arr_7 [i_2 - 2])))));
        arr_9 [i_2] = ((/* implicit */_Bool) (+(var_0)));
        var_20 = ((/* implicit */int) max((arr_6 [(unsigned char)12] [i_2]), (((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)-48)), ((unsigned short)55502)))))))));
        /* LoopNest 3 */
        for (unsigned char i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            for (unsigned long long int i_4 = 1; i_4 < 9; i_4 += 3) 
            {
                for (unsigned short i_5 = 0; i_5 < 13; i_5 += 2) 
                {
                    {
                        var_21 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) arr_6 [i_4 + 3] [i_2 + 1])))));
                        var_22 = ((/* implicit */unsigned int) (signed char)-118);
                        var_23 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(var_2)))))))));
                    }
                } 
            } 
        } 
    }
}
