/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51868
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
    for (short i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(unsigned char)0])) ? (((/* implicit */int) arr_1 [(unsigned char)2])) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) 2147483647))))))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])));
                    var_20 += arr_4 [i_0];
                    var_21 = ((/* implicit */short) arr_5 [i_2] [i_2] [i_1] [i_0]);
                }
            } 
        } 
        var_22 = ((/* implicit */short) arr_6 [i_0] [i_0]);
        arr_8 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_0] [i_0 - 1])) ? (((((/* implicit */_Bool) (unsigned char)235)) ? (2519441156U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-17213))))) : (((/* implicit */unsigned int) (-((+(-1626606049))))))));
    }
    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 3) 
    {
        var_23 = ((/* implicit */short) arr_9 [i_3] [i_3]);
        var_24 += ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_3] [i_3] [i_3] [i_3])) ? (((/* implicit */int) arr_5 [i_3] [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_5 [i_3] [i_3] [i_3] [i_3])))))));
        var_25 &= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_11 [i_3])))) ? (((/* implicit */unsigned int) arr_9 [(unsigned short)10] [0U])) : (arr_3 [i_3])));
    }
    for (signed char i_4 = 0; i_4 < 20; i_4 += 1) 
    {
        arr_15 [3] [i_4] = ((/* implicit */short) arr_12 [i_4]);
        /* LoopSeq 2 */
        for (unsigned char i_5 = 0; i_5 < 20; i_5 += 3) 
        {
            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_4] [i_4] [i_5])) ? (((((/* implicit */_Bool) arr_16 [i_4] [i_5] [i_5])) ? (((/* implicit */int) arr_16 [i_4] [i_4] [i_5])) : (((/* implicit */int) arr_16 [i_4] [i_4] [i_4])))) : (((/* implicit */int) arr_16 [i_4] [(short)1] [5]))));
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 3) 
            {
                for (unsigned short i_7 = 0; i_7 < 20; i_7 += 4) 
                {
                    {
                        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) arr_17 [i_6]))));
                        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) arr_17 [i_6]))));
                        arr_23 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_5] [(unsigned short)0] [10])))))));
                    }
                } 
            } 
            var_29 = ((/* implicit */short) arr_14 [i_4]);
        }
        for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 1) 
        {
            arr_26 [i_8] [i_8] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_21 [i_4] [i_8] [i_8] [i_4]))))) ? (((((/* implicit */_Bool) arr_21 [i_8] [i_8] [i_8] [i_8])) ? (((/* implicit */int) arr_21 [i_8] [18U] [i_4] [(short)14])) : (((/* implicit */int) arr_21 [i_4] [i_8] [i_8] [i_8])))) : (((((/* implicit */_Bool) arr_21 [(unsigned char)7] [i_4] [i_8] [i_8])) ? (((/* implicit */int) arr_21 [i_4] [i_4] [(unsigned short)4] [i_8])) : (((/* implicit */int) arr_21 [i_4] [i_8] [14] [i_8]))))));
            var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_4] [i_4] [i_8])) ? (((/* implicit */int) arr_16 [i_4] [(unsigned short)9] [i_4])) : (((((/* implicit */_Bool) arr_25 [i_4] [i_8])) ? (((/* implicit */int) arr_12 [i_8])) : (((/* implicit */int) arr_12 [(unsigned char)0]))))))) ? (((/* implicit */int) arr_25 [i_4] [i_4])) : ((~(((((/* implicit */_Bool) arr_17 [i_8])) ? (((/* implicit */int) arr_20 [i_4] [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_20 [i_4] [i_8] [i_8] [i_8])))))))))));
            /* LoopNest 2 */
            for (unsigned int i_9 = 0; i_9 < 20; i_9 += 3) 
            {
                for (int i_10 = 2; i_10 < 19; i_10 += 1) 
                {
                    {
                        arr_31 [i_4] [i_8] [i_8] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_29 [(signed char)7] [i_10 + 1] [2] [(unsigned short)9] [i_10 - 1]))))) ? ((-(((/* implicit */int) arr_29 [(unsigned short)14] [i_10 + 1] [i_10] [i_10] [i_10 - 1])))) : (((/* implicit */int) arr_29 [i_9] [i_10 + 1] [(unsigned short)0] [i_10] [i_10 - 1]))));
                        arr_32 [i_8] [i_8] [i_9] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_21 [i_4] [i_4] [9ULL] [i_4])) ? (((/* implicit */int) arr_17 [i_10 - 1])) : (((/* implicit */int) arr_19 [(short)16] [i_8] [i_8]))))))) ? ((~((+(((/* implicit */int) arr_27 [i_4] [i_4])))))) : (((/* implicit */int) arr_19 [i_9] [i_8] [(short)6]))));
                        var_31 = ((/* implicit */unsigned short) arr_28 [i_10] [i_8]);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_11 = 0; i_11 < 20; i_11 += 2) 
            {
                for (short i_12 = 0; i_12 < 20; i_12 += 4) 
                {
                    {
                        var_32 = ((/* implicit */unsigned int) arr_30 [i_4]);
                        var_33 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_4] [i_4])) ? (((/* implicit */int) arr_17 [(short)19])) : (((/* implicit */int) arr_13 [i_4]))))) ? (((/* implicit */int) arr_36 [i_4] [i_8] [i_11] [i_8] [i_12])) : (((/* implicit */int) arr_35 [i_4] [i_4] [i_11] [i_12])))))));
                    }
                } 
            } 
            arr_37 [i_8] [(unsigned short)15] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [(unsigned short)3] [i_4] [i_8] [i_8])) ? (((/* implicit */int) arr_21 [i_4] [i_4] [i_4] [i_4])) : (((((/* implicit */_Bool) arr_21 [i_8] [i_8] [i_4] [i_4])) ? (((/* implicit */int) arr_21 [i_4] [i_8] [i_8] [i_8])) : (((/* implicit */int) arr_21 [i_4] [i_4] [i_4] [(short)3]))))));
        }
        var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_30 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_4] [i_4]))) : (((((/* implicit */_Bool) arr_16 [i_4] [i_4] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-3261))) : (1775526144U))))))));
    }
    var_35 -= ((/* implicit */short) var_7);
    var_36 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_15))));
    var_37 = ((/* implicit */int) max((var_37), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 984234594U)) ? (-1790698425) : (-1790698429)))) ? ((+(((/* implicit */int) var_18)))) : (((/* implicit */int) var_12))))));
}
