/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248464
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
    var_16 |= ((_Bool) ((int) ((((/* implicit */_Bool) var_7)) ? (var_15) : (((/* implicit */int) var_12)))));
    var_17 += ((/* implicit */short) var_8);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            arr_7 [i_0] [i_1] = (~(((/* implicit */int) ((short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_6)))))));
            arr_8 [i_0] |= ((/* implicit */signed char) (((~(((/* implicit */int) ((unsigned short) var_15))))) >= (((var_3) ? (((/* implicit */int) ((var_8) < (((/* implicit */unsigned int) var_0))))) : (((/* implicit */int) ((_Bool) var_10)))))));
        }
        var_18 = ((/* implicit */int) var_13);
    }
    for (short i_2 = 1; i_2 < 23; i_2 += 2) 
    {
        var_19 += ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (-2147483647) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(var_11))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_14))))) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((var_11) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_11))))) != (((long long int) var_0))))))));
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_16 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) (+(var_14))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (~(var_0)))) && (var_3))))) : (((((/* implicit */long long int) ((/* implicit */int) var_4))) / ((+(var_14)))))));
            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_5)) != (((/* implicit */int) var_5)))) ? (((var_14) & (((/* implicit */long long int) ((/* implicit */int) var_10))))) : ((~(var_14)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (~(var_8)))) && (((/* implicit */_Bool) var_9)))))) : ((((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_12)) >> (((((/* implicit */int) var_5)) - (58961)))))) : (((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */unsigned int) var_1)))))))))));
            var_21 |= ((/* implicit */int) var_6);
        }
    }
    for (unsigned short i_4 = 1; i_4 < 19; i_4 += 1) 
    {
        arr_19 [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_13)) : (var_7)))) ? (((long long int) var_0)) : (((/* implicit */long long int) ((((/* implicit */int) var_6)) + (((/* implicit */int) var_10))))))))));
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 20; i_5 += 4) 
        {
            for (long long int i_6 = 0; i_6 < 20; i_6 += 3) 
            {
                {
                    var_22 = ((((/* implicit */_Bool) 6053277378769730395ULL)) ? (var_0) : (((int) -2147483621)));
                    /* LoopSeq 1 */
                    for (long long int i_7 = 2; i_7 < 16; i_7 += 2) 
                    {
                        var_23 ^= ((/* implicit */short) ((_Bool) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_12)))))));
                        /* LoopSeq 1 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_34 [i_4 - 1] [i_5] [i_6] [i_7 - 1] [i_7 + 3] [i_8] = (~(((((/* implicit */int) ((unsigned short) (short)20059))) >> (((-6887779169909808930LL) + (6887779169909808959LL))))));
                            arr_35 [(unsigned short)12] [i_8] [i_6] [i_8] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_15)) ? ((-(((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) var_14)) ? (var_1) : (((/* implicit */int) var_12)))))));
                        }
                        var_24 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (var_15)))))))));
                    }
                }
            } 
        } 
    }
    var_25 = ((/* implicit */_Bool) var_4);
    var_26 = ((/* implicit */long long int) (+(var_15)));
}
