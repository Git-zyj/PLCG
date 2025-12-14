/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194552
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
    for (int i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_1] [i_1] [i_3] = ((/* implicit */short) var_3);
                            arr_12 [i_0] [(unsigned char)7] [6ULL] [i_1] [i_0] = ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_10)) : (((int) var_4)))) - (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_18)))));
                        }
                    } 
                } 
                arr_13 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) max(((-((-(var_12))))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_17)))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned int i_4 = 0; i_4 < 23; i_4 += 2) 
    {
        arr_17 [i_4] = ((/* implicit */short) var_16);
        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((short) var_16)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) : (max((((/* implicit */unsigned long long int) max((var_4), (var_4)))), (min((((/* implicit */unsigned long long int) (short)14286)), (8ULL)))))));
        arr_18 [i_4] = ((/* implicit */short) (-((+(((/* implicit */int) var_16))))));
    }
    for (unsigned char i_5 = 3; i_5 < 17; i_5 += 1) 
    {
        var_20 += ((/* implicit */unsigned char) ((((var_18) && (((/* implicit */_Bool) (-(((/* implicit */int) var_4))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (max((((/* implicit */unsigned long long int) var_14)), (var_5))))))));
        var_21 = ((/* implicit */unsigned short) var_10);
    }
    for (unsigned short i_6 = 0; i_6 < 15; i_6 += 2) 
    {
        var_22 = ((((/* implicit */_Bool) max((var_16), (var_10)))) ? (var_5) : (((/* implicit */unsigned long long int) var_7)));
        var_23 = ((/* implicit */_Bool) var_16);
        arr_25 [i_6] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((_Bool) var_8)))));
    }
    for (unsigned int i_7 = 4; i_7 < 18; i_7 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_8 = 4; i_8 < 16; i_8 += 2) 
        {
            for (unsigned int i_9 = 3; i_9 < 19; i_9 += 1) 
            {
                {
                    var_24 = ((/* implicit */_Bool) (~((~(((/* implicit */int) var_8))))));
                    var_25 = ((/* implicit */unsigned int) min((min((((/* implicit */int) ((short) var_1))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_17)))))), ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
                    arr_36 [(_Bool)1] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_9)), (((((/* implicit */unsigned int) ((/* implicit */int) var_14))) % (var_12)))))) ? (((unsigned long long int) (+(var_3)))) : (min((var_5), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4)))))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_10 = 1; i_10 < 18; i_10 += 3) 
        {
            for (unsigned long long int i_11 = 3; i_11 < 18; i_11 += 2) 
            {
                for (long long int i_12 = 1; i_12 < 19; i_12 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (int i_13 = 2; i_13 < 19; i_13 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned int) var_6);
                            var_27 = ((/* implicit */unsigned char) var_0);
                        }
                        for (unsigned short i_14 = 0; i_14 < 20; i_14 += 1) 
                        {
                            arr_52 [i_7] [i_10 + 2] [i_11 - 3] [i_12 - 1] [i_12] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned short) var_18))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (var_13)))) ? (((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11)))))));
                            var_28 += ((/* implicit */unsigned short) var_6);
                            var_29 = ((/* implicit */long long int) (+(((/* implicit */int) var_6))));
                            arr_53 [8] [8] [i_10] [i_14] = ((/* implicit */short) var_10);
                        }
                        for (int i_15 = 0; i_15 < 20; i_15 += 1) 
                        {
                            arr_57 [i_10] [i_10 + 1] [(unsigned short)5] [i_10] = ((/* implicit */signed char) var_6);
                            arr_58 [i_10] [i_10] = var_11;
                        }
                        var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) (-(min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4)))), ((-(((/* implicit */int) var_6)))))))))));
                        var_31 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) var_8)) : ((~(((/* implicit */int) var_6))))))), (var_13)));
                    }
                } 
            } 
        } 
        var_32 ^= ((/* implicit */int) ((min((((var_5) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned long long int) var_9)))) >> ((((~(var_15))) - (4053182306U)))));
        var_33 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) var_16)) < (((/* implicit */int) var_18)))))));
        arr_59 [i_7] = ((/* implicit */long long int) (-((+(((/* implicit */int) var_11))))));
    }
}
