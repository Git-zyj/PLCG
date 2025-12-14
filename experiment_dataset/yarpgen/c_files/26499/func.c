/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26499
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
    /* LoopSeq 4 */
    for (short i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_17)))) ? (((((/* implicit */_Bool) 0U)) ? (arr_1 [i_0 - 2]) : (arr_0 [i_0 - 2] [i_0]))) : ((~(arr_1 [i_0 - 2]))))))));
        var_21 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(arr_0 [i_0] [i_0]))))))), ((+(arr_1 [i_0 - 3])))));
    }
    for (int i_1 = 0; i_1 < 25; i_1 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */signed char) var_15);
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) arr_4 [i_1]);
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            for (short i_3 = 0; i_3 < 25; i_3 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 25; i_4 += 2) 
                    {
                        for (long long int i_5 = 2; i_5 < 23; i_5 += 1) 
                        {
                            {
                                arr_19 [i_1] [i_2] [i_3] [i_5] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_5 [i_5 + 2])) ? (6U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_5 - 1])) % (((/* implicit */int) arr_5 [i_5 - 1])))))));
                                var_23 -= ((/* implicit */int) ((_Bool) ((_Bool) var_17)));
                                var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((unsigned int) (-(((((/* implicit */_Bool) var_12)) ? (arr_14 [i_1] [i_2] [i_3] [i_4] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(short)6])))))))))));
                                var_25 = ((/* implicit */unsigned int) var_10);
                                arr_20 [i_1] [i_1] [i_5 - 2] [i_4] [i_4] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)9096)))))));
                            }
                        } 
                    } 
                    var_26 &= var_17;
                    arr_21 [i_1] [i_2] [i_2] [i_1] = ((((/* implicit */_Bool) min((((/* implicit */short) arr_10 [i_1] [i_2] [i_3])), ((short)13444)))) ? (((((/* implicit */_Bool) (~(var_12)))) ? (((/* implicit */int) ((_Bool) 14970739819428580265ULL))) : (((arr_10 [(_Bool)1] [i_2] [i_3]) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_18 [i_1] [i_1] [i_2] [i_2] [11])))))) : ((~(((/* implicit */int) (unsigned short)9416)))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 25; i_6 += 4) /* same iter space */
    {
        var_27 *= ((/* implicit */unsigned int) (signed char)44);
        var_28 = ((/* implicit */_Bool) ((((var_8) != (((/* implicit */int) arr_11 [i_6])))) ? (((((/* implicit */int) var_3)) >> (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_15 [i_6]))));
        var_29 += ((/* implicit */short) ((int) arr_13 [i_6] [i_6] [i_6]));
    }
    /* vectorizable */
    for (long long int i_7 = 0; i_7 < 10; i_7 += 2) 
    {
        arr_27 [i_7] [i_7] = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_17 [i_7] [i_7] [i_7] [i_7] [i_7])) : (((/* implicit */int) arr_10 [i_7] [i_7] [i_7])));
        var_30 = ((/* implicit */signed char) arr_8 [i_7]);
    }
    var_31 = ((unsigned int) ((max((4294967289U), (((/* implicit */unsigned int) var_4)))) / (((/* implicit */unsigned int) (-(((/* implicit */int) var_11)))))));
    var_32 = ((/* implicit */long long int) 6U);
}
