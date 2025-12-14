/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241889
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
    var_13 &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) * ((~(((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */unsigned int) var_2))))))));
    var_14 = ((/* implicit */signed char) var_5);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) min((((unsigned long long int) (short)26025)), (((/* implicit */unsigned long long int) (short)255)))))));
                var_16 *= ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) var_4)), (10254017922015548555ULL))) < (((/* implicit */unsigned long long int) -248206300))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 3) 
        {
            {
                arr_15 [i_3] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)29836)) ? (-7471939750750734971LL) : (((/* implicit */long long int) ((/* implicit */int) (short)26026)))));
                var_17 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (signed char)120)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)115))) : (((unsigned long long int) min((var_7), (arr_9 [i_3 + 2]))))));
                var_18 += ((/* implicit */short) (!(((/* implicit */_Bool) (short)26005))));
                var_19 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) var_11)) / (var_6))) - (((/* implicit */unsigned long long int) var_1))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (long long int i_4 = 0; i_4 < 20; i_4 += 2) 
    {
        arr_20 [i_4] |= ((/* implicit */int) max((arr_6 [i_4] [i_4]), (((/* implicit */signed char) arr_7 [i_4]))));
        var_20 = max((((/* implicit */long long int) max((((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_4] [i_4])) || (((/* implicit */_Bool) arr_1 [18LL]))))), (min((((/* implicit */short) arr_3 [i_4] [i_4])), ((short)-26030)))))), (min((-9128968824325417867LL), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)125)) ? (((/* implicit */int) (short)15465)) : (((/* implicit */int) (unsigned short)54364))))))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 4) 
    {
        arr_24 [i_5] [i_5] = ((/* implicit */long long int) var_8);
        var_21 = ((/* implicit */long long int) ((((/* implicit */int) arr_22 [i_5])) | (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_9 [i_5])))))));
        var_22 = ((/* implicit */short) max((((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)-26007)))))))), ((-(((unsigned int) (_Bool)1))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 1) 
        {
            var_23 = ((/* implicit */long long int) ((unsigned short) ((short) (+(((/* implicit */int) var_12))))));
            var_24 = ((/* implicit */signed char) max((min((min((9128968824325417880LL), (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) (unsigned short)38858)))), (((/* implicit */long long int) var_3))));
            var_25 = ((/* implicit */long long int) 560353592U);
            var_26 -= ((/* implicit */signed char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_19 [i_5]))))), (min((((/* implicit */long long int) arr_0 [i_5])), (arr_19 [i_6])))));
        }
        var_27 = ((/* implicit */unsigned long long int) var_4);
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_28 = ((/* implicit */unsigned short) ((signed char) ((short) arr_28 [i_7] [i_7])));
        /* LoopNest 3 */
        for (int i_8 = 1; i_8 < 24; i_8 += 2) 
        {
            for (unsigned int i_9 = 0; i_9 < 25; i_9 += 1) 
            {
                for (signed char i_10 = 0; i_10 < 25; i_10 += 1) 
                {
                    {
                        var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((unsigned long long int) 120)))));
                        var_30 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_8 - 1]))));
                        arr_36 [i_10] [i_9] [i_9] [i_7] [i_7] &= ((/* implicit */unsigned char) ((long long int) (+(14567418937428439746ULL))));
                        var_31 *= ((/* implicit */unsigned long long int) var_3);
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_11 = 0; i_11 < 23; i_11 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_12 = 0; i_12 < 23; i_12 += 1) 
        {
            for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_14 = 0; i_14 < 23; i_14 += 4) 
                    {
                        for (short i_15 = 0; i_15 < 23; i_15 += 3) 
                        {
                            {
                                arr_51 [i_11] [i_13 + 1] [i_11] [i_11] = ((/* implicit */long long int) var_9);
                                var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) max((((/* implicit */int) ((_Bool) var_10))), ((-(((/* implicit */int) ((unsigned short) -124))))))))));
                                var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) var_7))));
                                arr_52 [i_11] [i_14] [i_13] [i_12] [i_11] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_33 [i_15]))));
                            }
                        } 
                    } 
                    arr_53 [i_11] [i_12] [9LL] [i_11] = (~(((/* implicit */int) ((arr_39 [i_11] [i_11]) || (((((/* implicit */_Bool) -133)) && (((/* implicit */_Bool) 139))))))));
                }
            } 
        } 
        var_34 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) 110)) + (arr_34 [(unsigned short)22] [i_11] [i_11] [i_11] [i_11] [i_11])));
    }
}
