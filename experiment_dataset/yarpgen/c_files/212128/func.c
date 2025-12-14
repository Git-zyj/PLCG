/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212128
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
    for (unsigned char i_0 = 4; i_0 < 12; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */signed char) (((~(((((/* implicit */int) var_2)) + (((/* implicit */int) arr_2 [i_0 + 2] [i_2])))))) > (max((1010923713), (((/* implicit */int) (signed char)-52))))));
                    var_19 = ((signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-52)) ? (((/* implicit */int) arr_6 [i_2 + 1] [i_1] [i_0])) : (((/* implicit */int) (unsigned char)119)))))));
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */signed char) min((((((/* implicit */int) (unsigned char)125)) - (((/* implicit */int) (signed char)52)))), ((((+(((/* implicit */int) arr_2 [i_0] [i_0])))) | (-1231051065)))));
        arr_10 [i_0 - 4] [i_0] = ((/* implicit */signed char) (((-(arr_3 [i_0 + 1]))) - ((+(((/* implicit */int) arr_0 [i_0 - 4] [i_0]))))));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)255)) + (((/* implicit */int) (unsigned char)234))));
        var_21 &= ((/* implicit */unsigned char) ((short) (-(((/* implicit */int) (unsigned char)233)))));
    }
    for (short i_3 = 1; i_3 < 16; i_3 += 2) 
    {
        arr_13 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)233)) & (((/* implicit */int) (signed char)127))))) ? (((((/* implicit */int) (signed char)-52)) - ((-2147483647 - 1)))) : (((/* implicit */int) arr_12 [i_3 - 1] [i_3 - 1]))));
        arr_14 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */int) arr_12 [i_3] [i_3])) != (((/* implicit */int) (signed char)73)))))) || (((/* implicit */_Bool) arr_11 [i_3]))));
    }
    for (unsigned char i_4 = 0; i_4 < 10; i_4 += 4) 
    {
        var_22 = ((/* implicit */unsigned char) min((((((/* implicit */int) max(((unsigned char)0), (arr_18 [i_4])))) & (((((/* implicit */_Bool) arr_18 [i_4])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_4 [i_4] [i_4])))))), (max((((/* implicit */int) min((arr_16 [i_4] [i_4]), (((/* implicit */unsigned char) var_10))))), ((+(((/* implicit */int) arr_7 [i_4] [i_4]))))))));
        arr_19 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (short)20908)) ? (((/* implicit */int) (signed char)57)) : (((/* implicit */int) var_13))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)241))))) ? (((/* implicit */int) (unsigned char)237)) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_0 [i_4] [i_4])), (arr_2 [i_4] [i_4])))))) : (min((((/* implicit */int) (short)-21421)), ((-(2147483647)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_5 = 2; i_5 < 7; i_5 += 3) 
        {
            arr_22 [i_5] [i_5 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) (unsigned char)245))) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_7 [i_5 + 1] [i_5 + 3]))));
            var_23 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)167)) / (-961069487)));
        }
    }
    for (unsigned char i_6 = 0; i_6 < 10; i_6 += 1) 
    {
        arr_25 [i_6] [i_6] = ((/* implicit */signed char) (unsigned char)167);
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 10; i_7 += 4) 
        {
            for (unsigned char i_8 = 0; i_8 < 10; i_8 += 1) 
            {
                {
                    arr_31 [i_6] = ((/* implicit */unsigned char) max(((+((-(((/* implicit */int) (signed char)57)))))), ((-((-(((/* implicit */int) arr_16 [i_6] [i_7]))))))));
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)167))))) ? (((((/* implicit */_Bool) max((-13), (961069464)))) ? (((/* implicit */int) min((((/* implicit */short) var_14)), ((short)-21432)))) : (((/* implicit */int) arr_28 [i_6] [i_7] [i_7] [i_8])))) : (((((/* implicit */int) var_5)) >> (((((/* implicit */int) arr_27 [i_6] [i_7] [i_8])) - (95)))))));
                    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned char)137), ((unsigned char)201)))) ? ((-(((/* implicit */int) arr_0 [i_8] [i_7])))) : (((((/* implicit */_Bool) (unsigned char)40)) ? (((/* implicit */int) (unsigned char)183)) : (((/* implicit */int) arr_18 [i_7]))))))) ? ((~(((/* implicit */int) (unsigned char)182)))) : (((/* implicit */int) ((signed char) (unsigned char)31)))));
                }
            } 
        } 
        arr_32 [i_6] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)0))));
        arr_33 [i_6] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_7 [i_6] [i_6])))) ? ((~(((/* implicit */int) (signed char)109)))) : (((/* implicit */int) ((signed char) (unsigned char)137)))));
    }
    var_26 += ((/* implicit */short) (-(min((((/* implicit */int) (unsigned char)31)), ((-(((/* implicit */int) (unsigned char)27))))))));
}
