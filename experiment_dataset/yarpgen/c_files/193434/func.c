/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193434
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 18; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) var_3);
        /* LoopSeq 2 */
        for (unsigned int i_1 = 4; i_1 < 18; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    {
                        var_17 = ((/* implicit */short) (+(var_4)));
                        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (-(((/* implicit */int) var_5)))))));
                        var_19 = ((/* implicit */unsigned int) (+(var_4)));
                    }
                } 
            } 
            arr_9 [i_0] [i_1] [(signed char)9] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_3))));
            arr_10 [i_1] = ((/* implicit */short) var_8);
            arr_11 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) var_8))));
        }
        for (int i_4 = 2; i_4 < 17; i_4 += 4) 
        {
            arr_16 [i_0] [i_0] [10LL] = ((/* implicit */short) (+(((/* implicit */int) var_1))));
            var_20 = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_14)) + (((/* implicit */int) var_13))))));
            var_21 = (-(((/* implicit */int) var_0)));
            arr_17 [i_4] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_5))));
        }
    }
    for (unsigned short i_5 = 3; i_5 < 18; i_5 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_6 = 3; i_6 < 18; i_6 += 3) 
        {
            for (unsigned short i_7 = 0; i_7 < 19; i_7 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_14))));
                    arr_28 [i_5] = ((/* implicit */unsigned long long int) var_8);
                    var_23 = ((/* implicit */unsigned char) var_1);
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 1; i_8 < 17; i_8 += 3) 
                    {
                        for (int i_9 = 0; i_9 < 19; i_9 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) max((((/* implicit */int) var_9)), ((+(((/* implicit */int) var_12)))))))));
                                var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (-(min((((/* implicit */int) var_0)), ((-(((/* implicit */int) var_5)))))))))));
                                arr_35 [i_5] [i_6] [i_7] [i_8] [i_9] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))));
                            }
                        } 
                    } 
                    arr_36 [i_5] [i_5 - 3] [i_6 - 1] [i_5] = ((/* implicit */unsigned char) (-((+(((/* implicit */int) var_0))))));
                }
            } 
        } 
        arr_37 [i_5] = ((/* implicit */unsigned char) (-((+(((/* implicit */int) var_6))))));
        arr_38 [i_5] = ((/* implicit */long long int) (+(((/* implicit */int) var_3))));
        arr_39 [i_5] [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_14)), (var_16))))));
        var_26 = (~((~(((/* implicit */int) var_5)))));
    }
    for (unsigned short i_10 = 0; i_10 < 15; i_10 += 4) 
    {
        var_27 = ((/* implicit */signed char) (-((+(((/* implicit */int) var_14))))));
        var_28 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_0))))));
    }
    var_29 -= ((/* implicit */unsigned char) (-((((-(var_16))) | (((/* implicit */long long int) ((/* implicit */int) var_14)))))));
}
