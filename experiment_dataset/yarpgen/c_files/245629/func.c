/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245629
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
    var_12 = ((/* implicit */long long int) var_11);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (short i_4 = 1; i_4 < 15; i_4 += 2) 
                    {
                        {
                            var_13 |= ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (short)22830))))));
                            var_14 |= ((/* implicit */short) (((((_Bool)1) || (((/* implicit */_Bool) (unsigned short)9083)))) ? (min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [i_2]))))), (max((var_5), (((/* implicit */unsigned int) var_9)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (0) : (0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : ((-(var_4)))));
                            arr_15 [i_0] [i_1] = ((/* implicit */short) var_10);
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (unsigned char i_5 = 0; i_5 < 18; i_5 += 4) 
            {
                for (long long int i_6 = 0; i_6 < 18; i_6 += 2) 
                {
                    for (unsigned char i_7 = 0; i_7 < 18; i_7 += 2) 
                    {
                        {
                            arr_23 [i_0] [(unsigned short)10] [i_0] [(unsigned short)3] [i_7] = ((/* implicit */int) (short)-13175);
                            arr_24 [i_0] [i_1] [i_5] [i_0] [i_7] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_9))));
                            var_15 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)253)) ? ((~(((/* implicit */int) ((unsigned short) var_9))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_11))))))))));
                            arr_25 [i_0] [i_1] [i_5] [(unsigned short)8] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)0))));
                        }
                    } 
                } 
            } 
            arr_26 [i_0] [i_1] [i_0] = max(((-((+(((/* implicit */int) var_3)))))), ((+(((/* implicit */int) (short)13178)))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_8 = 2; i_8 < 14; i_8 += 1) 
        {
            var_16 = ((/* implicit */unsigned char) var_4);
            /* LoopNest 2 */
            for (unsigned int i_9 = 0; i_9 < 18; i_9 += 4) 
            {
                for (signed char i_10 = 0; i_10 < 18; i_10 += 1) 
                {
                    {
                        var_17 += (((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) var_0)) : ((~(((/* implicit */int) (unsigned char)253)))));
                        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (_Bool)0))));
                        arr_37 [i_0] [i_8 - 2] [i_0] = ((/* implicit */unsigned short) (unsigned char)255);
                    }
                } 
            } 
            var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))));
        }
        var_20 = ((/* implicit */short) (-(((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [12] [(short)14] [i_0]))));
    }
}
