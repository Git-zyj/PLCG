/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198557
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (((unsigned long long int) 1730623073351362214LL))))) ? (((/* implicit */int) (((+(((/* implicit */int) arr_0 [i_0])))) != (((/* implicit */int) (unsigned short)65534))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) 0U)) : (var_7)))))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) (_Bool)1);
    }
    for (int i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        var_15 = ((/* implicit */unsigned char) (~(((unsigned long long int) arr_5 [i_1]))));
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? ((~(((/* implicit */int) (unsigned short)64039)))) : (((/* implicit */int) (unsigned char)17)))))));
    }
    for (unsigned short i_2 = 1; i_2 < 12; i_2 += 1) 
    {
        var_17 = ((/* implicit */unsigned short) 7895782525950896015LL);
        var_18 = ((/* implicit */short) arr_7 [i_2 + 1]);
        arr_8 [i_2] |= ((/* implicit */short) var_0);
        var_19 = ((/* implicit */unsigned long long int) (short)32764);
        /* LoopSeq 4 */
        /* vectorizable */
        for (short i_3 = 4; i_3 < 12; i_3 += 1) 
        {
            var_20 = ((/* implicit */unsigned char) (!((_Bool)0)));
            var_21 = ((/* implicit */unsigned char) ((arr_3 [i_3 - 4]) == (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2 + 1])))));
        }
        for (short i_4 = 3; i_4 < 12; i_4 += 4) 
        {
            arr_14 [i_2] [i_4] [i_2 - 1] = ((/* implicit */unsigned char) arr_10 [i_2 + 1] [i_2]);
            /* LoopNest 3 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 1; i_6 < 10; i_6 += 2) 
                {
                    for (short i_7 = 0; i_7 < 13; i_7 += 1) 
                    {
                        {
                            arr_22 [i_5] [i_5] = ((/* implicit */unsigned long long int) (-((+((+(((/* implicit */int) var_9))))))));
                            arr_23 [i_2] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_11 [i_6 - 1] [i_6 + 1] [i_6 + 1])), (arr_18 [i_2] [i_2] [i_5] [i_4 - 1] [i_4 - 2]))))) ^ (2008359850581642011LL)));
                            arr_24 [i_5] [i_5] [i_7] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)0))))) ? (arr_12 [i_5] [i_7]) : (((((/* implicit */_Bool) arr_9 [i_2] [i_4])) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) (_Bool)1)))))));
                            arr_25 [i_5] [i_4] [(short)12] [i_6 - 1] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-119))) >= (3490498535U)));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (unsigned long long int i_8 = 1; i_8 < 10; i_8 += 3) /* same iter space */
        {
            var_22 -= ((/* implicit */unsigned long long int) (+(var_8)));
            var_23 &= ((/* implicit */long long int) (signed char)11);
        }
        for (unsigned long long int i_9 = 1; i_9 < 10; i_9 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_10 = 3; i_10 < 10; i_10 += 3) 
            {
                for (unsigned int i_11 = 3; i_11 < 11; i_11 += 2) 
                {
                    {
                        arr_38 [i_2] [i_2 + 1] [i_2] [i_2] [i_2 + 1] [i_11] = ((/* implicit */unsigned int) (unsigned short)64312);
                        arr_39 [i_2] [i_9] [12] [i_11] = ((/* implicit */int) 282559355U);
                    }
                } 
            } 
            var_24 = ((/* implicit */unsigned long long int) ((unsigned int) (+((~(((/* implicit */int) (_Bool)0)))))));
        }
    }
    var_25 = ((/* implicit */_Bool) var_12);
    var_26 = ((/* implicit */signed char) var_5);
}
