/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52507
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 21; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned int) arr_3 [i_0 - 1] [i_0 - 1] [i_1 + 1]);
                var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1])))))) : (((((/* implicit */_Bool) (signed char)45)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_1 - 3]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_0)), (arr_1 [5ULL])))) : (var_8)))))))));
                arr_6 [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))));
                var_14 = ((/* implicit */unsigned long long int) var_4);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) var_0);
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_2])) ? (arr_8 [i_2]) : (arr_8 [i_2]))))));
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_2] [i_2] [i_2])))))));
        /* LoopNest 3 */
        for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            for (short i_4 = 1; i_4 < 17; i_4 += 2) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_5] [i_4 - 1] [i_3] [i_2])) ? (((/* implicit */int) arr_4 [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_7 [i_2]))));
                        var_19 += ((/* implicit */unsigned int) (unsigned char)0);
                        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (short)8191))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */long long int) arr_2 [i_2]);
        arr_15 [i_2] = ((/* implicit */short) ((((arr_9 [i_2] [i_2]) + (2147483647))) << (((((arr_9 [i_2] [i_2]) + (1769185799))) - (7)))));
    }
    for (short i_6 = 3; i_6 < 19; i_6 += 1) 
    {
        var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_1 [i_6]), (((/* implicit */unsigned short) (unsigned char)255))))) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)-9202)) != (var_8))))))))));
        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) min((var_5), (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_6 - 1])) ^ (((/* implicit */int) (signed char)45))))))))));
    }
    /* vectorizable */
    for (unsigned char i_7 = 0; i_7 < 20; i_7 += 1) 
    {
        arr_21 [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_7] [i_7] [i_7])) || (((/* implicit */_Bool) ((unsigned long long int) var_0)))));
        arr_22 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_7])) ? (((/* implicit */int) (short)-8190)) : (((/* implicit */int) arr_18 [i_7]))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_20 [1ULL]))))) : ((+(var_6)))));
    }
    var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)0), (((/* implicit */unsigned char) var_7)))))) : (var_4)))) : ((+(max((var_1), (((/* implicit */long long int) var_3)))))))))));
}
