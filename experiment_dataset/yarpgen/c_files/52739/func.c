/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52739
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
    var_16 = var_8;
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) (+(var_0))))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) var_2))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            {
                arr_6 [i_0 + 1] [i_0] = (!((!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))) * (arr_5 [i_0] [i_1])))))));
                var_18 = ((/* implicit */short) arr_4 [i_1 - 3]);
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_2 = 3; i_2 < 15; i_2 += 3) 
    {
        for (unsigned char i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            for (unsigned char i_4 = 0; i_4 < 18; i_4 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_7))));
                    arr_15 [i_4] [i_4] [i_4] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((unsigned long long int) arr_12 [i_2] [i_2])) >= (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))))))))));
                    var_20 = ((/* implicit */unsigned long long int) arr_8 [i_4]);
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 1; i_5 < 15; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 2; i_6 < 16; i_6 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) ((signed char) (signed char)32));
                                arr_21 [i_6] [i_4] [i_4] [i_4] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */int) var_6)) <= (((/* implicit */int) var_15))))))) * (((((arr_9 [i_6] [(unsigned short)8]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3]))))) ? ((-(var_12))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_19 [i_6] [(signed char)4] [i_4] [(signed char)4] [i_6]))))))));
                                var_22 += arr_9 [i_2] [i_3];
                                var_23 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) 16345713750263399476ULL)) && (((_Bool) (unsigned char)211)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_7 = 1; i_7 < 9; i_7 += 2) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            {
                var_24 = ((/* implicit */unsigned long long int) ((signed char) ((unsigned long long int) ((unsigned long long int) 7979585321155444728ULL))));
                var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((short) (unsigned short)44978)))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_9 = 3; i_9 < 10; i_9 += 2) /* same iter space */
                {
                    arr_30 [i_9] [i_7 + 1] = ((/* implicit */signed char) ((unsigned long long int) (signed char)32));
                    var_26 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) / (((/* implicit */int) arr_8 [i_7]))));
                    var_27 *= ((((/* implicit */_Bool) (short)-17148)) && ((_Bool)0));
                }
                for (unsigned char i_10 = 3; i_10 < 10; i_10 += 2) /* same iter space */
                {
                    arr_34 [i_7] [i_8] [i_10] [(short)10] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))));
                    var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((unsigned short) (-(((/* implicit */int) (unsigned short)20554))))))));
                    arr_35 [i_10] [i_8] [i_10] [i_10] = ((/* implicit */short) arr_23 [i_7] [i_7]);
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_29 = ((/* implicit */short) arr_10 [i_8] [i_7]);
                    var_30 = ((/* implicit */short) var_2);
                    var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) arr_18 [(unsigned char)15] [14ULL] [i_8] [i_8]))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_12 = 2; i_12 < 11; i_12 += 2) 
                    {
                        var_32 = ((/* implicit */unsigned short) arr_31 [i_12] [(unsigned short)8] [i_11] [2ULL]);
                        arr_42 [i_7] [(unsigned short)5] [i_7] [i_7 + 2] [(unsigned char)4] = arr_1 [i_12];
                        var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) ((unsigned short) (~((-(((/* implicit */int) var_14))))))))));
                    }
                }
            }
        } 
    } 
}
