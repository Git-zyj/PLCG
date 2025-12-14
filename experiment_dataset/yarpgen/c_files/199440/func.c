/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199440
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) (~(((unsigned long long int) var_11)))))));
        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) var_12))));
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_7 [(unsigned char)20] [i_1 - 1] [(unsigned char)20] &= ((/* implicit */short) (+(((((/* implicit */_Bool) var_2)) ? (var_1) : (((/* implicit */long long int) var_3))))));
                    var_16 *= ((/* implicit */_Bool) arr_1 [i_1] [(unsigned char)18]);
                    var_17 = ((/* implicit */unsigned char) (~((+(arr_0 [i_0])))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_3 = 1; i_3 < 19; i_3 += 1) 
        {
            for (unsigned char i_4 = 0; i_4 < 21; i_4 += 1) 
            {
                {
                    var_18 &= ((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_3 + 2] [i_3]))));
                    var_19 = ((/* implicit */int) ((unsigned char) 4183812796U));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 2; i_5 < 19; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 20; i_6 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (!(((/* implicit */_Bool) 636285760U)))))));
                                var_21 = ((_Bool) var_8);
                                arr_23 [i_0] [i_5] [(signed char)16] [i_3] [i_0] = ((/* implicit */_Bool) (+(var_5)));
                            }
                        } 
                    } 
                    var_22 &= ((/* implicit */short) (!(((/* implicit */_Bool) var_1))));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned char) 1974089442U);
    }
    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((min((3795261396U), (((/* implicit */unsigned int) var_13)))), (((/* implicit */unsigned int) var_13))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) var_10))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
    /* LoopSeq 3 */
    for (unsigned char i_7 = 0; i_7 < 16; i_7 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_8 = 3; i_8 < 15; i_8 += 3) 
        {
            for (short i_9 = 1; i_9 < 14; i_9 += 3) 
            {
                {
                    arr_30 [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) (+(max((((long long int) (_Bool)1)), (((/* implicit */long long int) ((int) var_3)))))));
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 16; i_10 += 2) 
                    {
                        for (signed char i_11 = 0; i_11 < 16; i_11 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */short) arr_2 [(_Bool)1] [i_10]);
                                arr_38 [i_7] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_11] = ((/* implicit */long long int) arr_28 [i_8] [i_8 - 2] [i_10]);
                                var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((((((/* implicit */int) (short)-882)) + (2147483647))) << ((((((~(((/* implicit */int) (unsigned char)182)))) + (212))) - (29))))) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_13 [i_7] [i_8 - 2] [i_7] [i_7])) ? (5671096271913193610ULL) : (((/* implicit */unsigned long long int) arr_0 [i_10]))))))));
                                arr_39 [i_7] [i_8 - 2] [i_8 - 2] [(signed char)13] [i_7] [i_9 - 1] [i_10] = ((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) (!(((_Bool) ((unsigned long long int) 4294967287U))))))));
    }
    for (unsigned char i_12 = 0; i_12 < 20; i_12 += 2) 
    {
        var_28 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!((_Bool)1))))));
        var_29 = ((/* implicit */short) (+(((/* implicit */int) (!(arr_10 [i_12] [i_12] [i_12]))))));
        var_30 |= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)73)))))))), (((unsigned int) (+(4294967286U))))));
        var_31 += ((/* implicit */unsigned long long int) ((_Bool) 4294967289U));
    }
    for (unsigned long long int i_13 = 0; i_13 < 21; i_13 += 3) 
    {
        var_32 |= ((/* implicit */int) 3671537398U);
        var_33 = ((/* implicit */_Bool) 20U);
        var_34 = ((/* implicit */int) (unsigned char)113);
        var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_13] [i_13] [i_13]))))) ? ((~(var_1))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 623429906U))))))), (arr_9 [i_13] [i_13] [i_13]))))));
        var_36 += ((/* implicit */long long int) var_10);
    }
}
