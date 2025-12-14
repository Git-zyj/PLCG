/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35551
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) - (((/* implicit */int) var_7))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) (_Bool)1))))) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 2) /* same iter space */
                {
                    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (_Bool)1))));
                    arr_9 [i_1] [i_1] [i_1] [(unsigned char)10] = ((/* implicit */signed char) var_13);
                }
                /* vectorizable */
                for (unsigned char i_3 = 0; i_3 < 14; i_3 += 2) /* same iter space */
                {
                    var_16 = ((/* implicit */_Bool) (+(arr_0 [i_0])));
                    var_17 ^= 3875475153U;
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (signed char i_5 = 0; i_5 < 14; i_5 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_1] = ((((/* implicit */_Bool) -452175237)) && (((/* implicit */_Bool) arr_5 [i_4])));
                                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 419492143U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [(_Bool)1] [i_4] [(signed char)9] [i_1] [i_1] [i_1] [i_0]))) : (((var_8) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3997007491720516604ULL)) ? (((/* implicit */int) (signed char)-87)) : (((/* implicit */int) (signed char)-122))));
                }
                for (signed char i_6 = 0; i_6 < 14; i_6 += 4) 
                {
                    var_20 = ((/* implicit */unsigned short) arr_8 [i_1]);
                    arr_19 [i_0] &= ((/* implicit */unsigned short) (!(((((/* implicit */int) arr_13 [i_0])) >= (((/* implicit */int) arr_13 [i_0]))))));
                }
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_9)) / (arr_7 [i_0] [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1]))) : (((var_3) / (arr_7 [i_0] [i_0])))));
                /* LoopSeq 2 */
                for (unsigned int i_7 = 0; i_7 < 14; i_7 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 14; i_8 += 4) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                arr_30 [i_1] [3U] [i_1] [i_8] [i_9] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((signed char) 0)))));
                                arr_31 [i_0] [i_0] [i_0] [(_Bool)1] [i_1] = ((/* implicit */signed char) ((unsigned int) ((unsigned short) arr_8 [i_1])));
                                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((long long int) var_3))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned char i_10 = 2; i_10 < 13; i_10 += 3) 
                    {
                        var_23 = max((max((((/* implicit */unsigned int) (_Bool)1)), (545707591U))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) -2115290496)) ? (((/* implicit */int) arr_15 [i_0] [i_1] [i_1] [(signed char)8])) : (((/* implicit */int) arr_5 [i_7])))) | ((~(((/* implicit */int) (short)5270))))))));
                        var_24 = ((/* implicit */short) ((int) ((var_6) & (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))))));
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) (!(var_4))))) >= (((/* implicit */int) (_Bool)0))));
                    }
                    var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (short)-17540)), (min((((((/* implicit */_Bool) (unsigned char)35)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_7] [i_7] [i_7] [i_1] [i_1] [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) - (((/* implicit */int) (unsigned short)28700))))))))))));
                }
                for (short i_11 = 2; i_11 < 11; i_11 += 3) 
                {
                    var_27 = ((/* implicit */unsigned int) ((short) min((((((/* implicit */int) arr_6 [i_0])) + (((/* implicit */int) (_Bool)1)))), ((+(((/* implicit */int) (_Bool)1)))))));
                    var_28 = ((/* implicit */unsigned int) (((((!(var_4))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_5)))) : (0ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_0] [i_1] [(_Bool)0])))));
                }
            }
        } 
    } 
    var_29 &= ((/* implicit */_Bool) -383521262);
    /* LoopNest 2 */
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        for (int i_13 = 1; i_13 < 13; i_13 += 4) 
        {
            {
                var_30 = ((/* implicit */short) ((unsigned char) min((1456019509), (2147483647))));
                /* LoopSeq 1 */
                for (signed char i_14 = 0; i_14 < 15; i_14 += 3) 
                {
                    arr_45 [i_13] [i_13] [i_12] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (((!((_Bool)1))) ? (arr_39 [(unsigned short)12] [i_13] [i_13 + 1]) : (max((-1250476228), (((/* implicit */int) var_10))))))) < (((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_38 [(unsigned short)7])))) * (((var_13) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                    var_31 = ((/* implicit */long long int) arr_40 [i_12]);
                    var_32 = ((/* implicit */unsigned char) var_2);
                }
            }
        } 
    } 
    var_33 = (signed char)-1;
}
