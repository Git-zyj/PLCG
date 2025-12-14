/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193771
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((_Bool) var_11)))))) ? (((((/* implicit */_Bool) (signed char)96)) ? (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_5)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-105))))))))));
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((((((/* implicit */int) (signed char)90)) < (((/* implicit */int) var_8)))) ? (((((/* implicit */_Bool) (signed char)-59)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) (!((_Bool)0)))))) : (((/* implicit */int) var_8)))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        arr_4 [i_0] [(_Bool)1] &= ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)75))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((var_7) ? (((((((/* implicit */int) var_8)) + (2147483647))) >> (((((/* implicit */int) (signed char)-118)) + (131))))) : (((((/* implicit */int) var_1)) | (var_14))))))));
                    arr_10 [i_0] [i_2] = (!(((/* implicit */_Bool) (-(var_10)))));
                }
            } 
        } 
    }
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        arr_13 [i_3] = ((/* implicit */int) (((~(((/* implicit */int) ((unsigned char) var_9))))) < (((((((/* implicit */int) var_6)) * (((/* implicit */int) var_9)))) / ((+(((/* implicit */int) var_4))))))));
        var_19 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) % (var_14)))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)247)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_15)))) < ((+(var_10)))))) : (((/* implicit */int) ((((/* implicit */int) var_13)) >= (((/* implicit */int) var_3)))))));
        arr_14 [i_3] = ((/* implicit */signed char) (((~(((/* implicit */int) var_6)))) * (min(((~(((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) var_8)) | (((/* implicit */int) var_3))))))));
    }
    for (signed char i_4 = 0; i_4 < 21; i_4 += 4) 
    {
        arr_19 [i_4] [i_4] = (((((~(((/* implicit */int) var_1)))) >> (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) var_11))))))) <= (((((/* implicit */_Bool) var_12)) ? (var_14) : (((/* implicit */int) var_1)))));
        arr_20 [i_4] = ((/* implicit */signed char) min(((-((~(((/* implicit */int) (signed char)-96)))))), ((((-(((/* implicit */int) (signed char)-112)))) * (((/* implicit */int) var_2))))));
    }
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */int) var_2)) > (((/* implicit */int) var_11))))) : (((/* implicit */int) var_11))));
        var_21 -= ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) var_2))) != (((/* implicit */int) var_11))));
        var_22 = ((/* implicit */signed char) min((var_22), (var_5)));
    }
    var_23 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (-(((/* implicit */int) var_8)))))))));
}
