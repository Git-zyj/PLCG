/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234253
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_0] [i_2] [i_1] = ((signed char) (+(arr_3 [i_2 + 1] [i_1] [i_2 - 1])));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) (((~(((/* implicit */int) (_Bool)1)))) == (((/* implicit */int) ((short) arr_10 [i_1 + 1] [i_1 + 1] [i_2 + 2] [i_2 + 2] [i_2 + 1])))));
                                arr_11 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] [(_Bool)1] = ((/* implicit */short) max((var_12), (((/* implicit */unsigned long long int) (~(arr_7 [i_2 + 1] [17U] [i_3] [i_3]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 3; i_5 < 18; i_5 += 4) 
                    {
                        for (int i_6 = 2; i_6 < 18; i_6 += 4) 
                        {
                            {
                                arr_16 [i_5] [i_1] [i_1] [i_1] [i_5] [i_5] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2])) ? (arr_3 [i_1 + 1] [i_1] [i_6 + 1]) : (arr_3 [i_5 - 3] [i_1] [i_2 - 1]))));
                                var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1])) ? ((~((~(((/* implicit */int) (short)-23519)))))) : (((((/* implicit */_Bool) 565636514)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                                var_17 = ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) >= (arr_12 [i_0] [i_0] [2] [(unsigned short)5] [2] [i_0]))) ? (arr_9 [i_1] [8U] [i_2] [i_1] [8U] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) ? ((((+(var_2))) + (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_5 [i_0] [i_1] [(short)0])), (530014412U)))))) : (((/* implicit */long long int) ((/* implicit */int) var_11))));
                                var_18 = ((/* implicit */unsigned short) max((((/* implicit */int) ((unsigned short) var_1))), (((((/* implicit */int) arr_10 [i_1 + 1] [i_2 - 2] [i_5 - 2] [i_5] [i_6 - 1])) + (((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_1] [i_5 - 1] [i_1]))))));
                                arr_17 [i_1] [i_1] [i_2] [i_5] [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_5] [i_5] [i_2] [i_1] [i_6 - 1] [i_2]))) >= (max((((/* implicit */long long int) (!(((/* implicit */_Bool) 2471604622U))))), (((long long int) arr_9 [i_1] [i_1 - 1] [14U] [i_2] [i_5] [i_6]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)16196))))) ? (68719476672ULL) : (((/* implicit */unsigned long long int) (~(var_4))))));
    }
    for (long long int i_7 = 4; i_7 < 8; i_7 += 4) 
    {
        var_20 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) arr_19 [i_7])))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_7] [i_7] [i_7]))) - (arr_12 [i_7] [i_7 + 3] [i_7] [i_7] [i_7] [i_7])))))))) < (var_8)));
        var_21 = ((/* implicit */short) ((var_10) ? (((/* implicit */int) arr_18 [i_7 - 3])) : ((~(((/* implicit */int) arr_15 [i_7 - 3]))))));
        var_22 = ((/* implicit */long long int) 2471604597U);
    }
    for (long long int i_8 = 0; i_8 < 16; i_8 += 4) 
    {
        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_8] [i_8])) == ((+(((/* implicit */int) ((unsigned short) (short)-325))))))))));
        var_24 = ((/* implicit */long long int) (~((~(((/* implicit */int) (unsigned short)5286))))));
        var_25 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_8])) && (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65516))) >= (arr_12 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]))))))));
    }
    var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_2)) : (((((/* implicit */_Bool) (+(var_5)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_6)))));
    var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) var_9))));
    var_28 = ((/* implicit */short) var_2);
}
