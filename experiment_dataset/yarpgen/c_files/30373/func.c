/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30373
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
    var_19 = ((/* implicit */short) ((unsigned long long int) var_4));
    var_20 = ((/* implicit */unsigned int) var_6);
    var_21 = ((/* implicit */unsigned int) var_3);
    var_22 = ((/* implicit */int) var_12);
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_23 = ((unsigned int) var_6);
        var_24 = ((((((/* implicit */int) var_13)) + (2147483647))) << (((((/* implicit */int) var_2)) - (135))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) var_6)) == (((/* implicit */int) var_4)))));
        /* LoopSeq 1 */
        for (short i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            arr_8 [i_0] [(short)2] |= ((/* implicit */unsigned char) var_5);
            /* LoopSeq 3 */
            for (short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                var_25 = ((/* implicit */int) ((unsigned int) ((((/* implicit */int) var_11)) > (((/* implicit */int) var_17)))));
                var_26 = ((/* implicit */unsigned char) ((short) ((((/* implicit */int) var_0)) * (((/* implicit */int) var_13)))));
            }
            for (unsigned int i_3 = 1; i_3 < 14; i_3 += 2) 
            {
                var_27 = ((/* implicit */short) ((((/* implicit */int) ((short) var_13))) | (((/* implicit */int) ((_Bool) var_7)))));
                /* LoopNest 2 */
                for (signed char i_4 = 3; i_4 < 13; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned short) (~(var_8)));
                            var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) ((var_14) > (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_7)))))))));
                            var_30 = ((/* implicit */_Bool) (+(var_14)));
                        }
                    } 
                } 
                arr_20 [i_0] = ((/* implicit */short) (((~(((/* implicit */int) var_13)))) < (((/* implicit */int) ((signed char) var_17)))));
            }
            for (int i_6 = 1; i_6 < 14; i_6 += 2) 
            {
                var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) ((int) var_1)))));
                var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) ((unsigned int) var_8)))));
            }
            var_33 *= ((/* implicit */int) ((var_3) >= (var_3)));
        }
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
    {
        arr_27 [i_7] = ((/* implicit */unsigned char) (~(max((max((((/* implicit */unsigned int) var_13)), (var_8))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_10)))))))));
        arr_28 [i_7] = min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_17))))) != (max((((/* implicit */unsigned int) var_15)), (var_18)))))), (((unsigned int) var_4)));
        var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) ((unsigned char) var_8)))))))));
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
    {
        var_35 = ((/* implicit */signed char) max(((~((~(((/* implicit */int) var_1)))))), (((/* implicit */int) ((signed char) var_17)))));
        var_36 = var_11;
        var_37 = ((/* implicit */unsigned int) var_4);
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
    {
        var_38 = ((/* implicit */unsigned int) max((var_38), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) != (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) | (max((((/* implicit */unsigned int) var_0)), (var_14))))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_10 = 0; i_10 < 10; i_10 += 3) 
        {
            arr_35 [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_0))));
            var_39 *= ((/* implicit */unsigned int) ((unsigned char) var_6));
            arr_36 [i_10] = ((/* implicit */_Bool) var_13);
        }
        var_40 = ((/* implicit */unsigned char) max((max((((/* implicit */int) var_6)), ((-(((/* implicit */int) var_15)))))), (min((((/* implicit */int) max((var_9), (((/* implicit */short) var_11))))), ((-(((/* implicit */int) var_16))))))));
    }
}
