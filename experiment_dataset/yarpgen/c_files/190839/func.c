/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190839
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
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (-(((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */int) (unsigned short)58935)) : (((/* implicit */int) (short)0)))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 23; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (unsigned short)6601))));
                                var_22 = ((/* implicit */unsigned char) arr_12 [i_0] [i_1] [i_0] [i_3] [i_4]);
                            }
                        } 
                    } 
                    arr_13 [13LL] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) ((unsigned long long int) -11))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : ((-(var_5)))))));
                    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_2])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_12))));
                    arr_14 [i_0] [i_1] [i_2] [i_0] = var_13;
                }
            } 
        } 
        arr_15 [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~((~(((/* implicit */int) var_19)))))))));
    }
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 25; i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 25; i_6 += 4) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 25; i_8 += 3) 
                    {
                        for (unsigned char i_9 = 2; i_9 < 24; i_9 += 1) 
                        {
                            {
                                var_24 ^= ((/* implicit */unsigned short) var_13);
                                arr_28 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) var_3)) != (((/* implicit */int) ((unsigned char) arr_4 [i_5] [i_5] [i_8] [i_9])))));
                            }
                        } 
                    } 
                    var_25 = ((((/* implicit */_Bool) 14803472580881444603ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58935))) : (4150295097U));
                    arr_29 [i_5] [i_6] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_5])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_10))))) ? (((10962802066984792105ULL) >> (((/* implicit */int) (unsigned short)16)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                }
            } 
        } 
        arr_30 [i_5] = ((/* implicit */_Bool) arr_12 [(_Bool)1] [i_5] [i_5] [i_5] [i_5]);
        arr_31 [i_5] = ((/* implicit */unsigned short) ((_Bool) var_1));
    }
    for (unsigned short i_10 = 0; i_10 < 25; i_10 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_11 = 0; i_11 < 25; i_11 += 1) 
        {
            var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)41321)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned short)47103))))))));
            arr_36 [i_11] [i_11] [(unsigned short)8] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
            arr_37 [i_11] = (~(((/* implicit */int) (unsigned short)6594)));
        }
        arr_38 [i_10] = ((/* implicit */signed char) var_16);
        var_27 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)136)) ? (min((((/* implicit */int) ((unsigned short) arr_20 [i_10] [i_10] [i_10]))), ((~(((/* implicit */int) (signed char)-21)))))) : (((/* implicit */int) (unsigned short)58935))));
        var_28 = ((/* implicit */int) ((((/* implicit */_Bool) (short)9406)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)65526), (((/* implicit */unsigned short) arr_0 [i_10])))))) : ((((_Bool)1) ? (4378915523946913280ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 620610988)) && (((/* implicit */_Bool) 4192256))))))))));
    }
}
