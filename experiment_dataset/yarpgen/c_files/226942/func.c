/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226942
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
    var_13 += ((/* implicit */unsigned char) var_2);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        var_14 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (var_9) : (((/* implicit */unsigned int) (-(1508976761))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            arr_15 [i_0] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */int) (((+(arr_4 [i_0] [i_1]))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1] [(unsigned char)3])))))));
                            var_15 = ((/* implicit */_Bool) (~(min((((int) arr_12 [i_0] [(unsigned char)7] [i_4])), (((/* implicit */int) ((arr_5 [(signed char)4] [i_2] [i_3]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
                            var_16 = ((/* implicit */unsigned short) min((((var_2) ? (((/* implicit */int) ((signed char) var_7))) : (((/* implicit */int) ((((/* implicit */_Bool) -1508976762)) || (((/* implicit */_Bool) arr_12 [i_0] [i_1] [(short)9]))))))), ((-(((/* implicit */int) max((arr_1 [i_0] [i_4]), ((signed char)88))))))));
                            var_17 = ((/* implicit */signed char) ((int) arr_7 [(unsigned short)3] [i_1] [i_2] [i_2]));
                        }
                        var_18 += ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) (unsigned char)116)) ? (4938942949361855209ULL) : (((/* implicit */unsigned long long int) 1435806117)))));
                        var_19 = ((/* implicit */int) (-((-((~(2615824305U)))))));
                    }
                    for (signed char i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        var_20 = ((/* implicit */short) ((max((((((/* implicit */int) arr_6 [3] [i_0] [i_0])) >> (((((/* implicit */int) var_3)) + (142))))), ((+(((/* implicit */int) var_3)))))) & (((/* implicit */int) max((arr_14 [i_0] [i_1]), (arr_14 [i_0] [i_1]))))));
                        /* LoopSeq 2 */
                        for (int i_6 = 1; i_6 < 10; i_6 += 1) /* same iter space */
                        {
                            arr_23 [i_0] [i_1] = ((/* implicit */unsigned short) arr_10 [i_0] [i_1] [i_2] [i_5] [8]);
                            arr_24 [i_1] [i_1] [i_1] [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 983463323)) && (((/* implicit */_Bool) (unsigned short)39055))));
                            arr_25 [i_5] [i_1] [i_1] &= ((((/* implicit */int) (unsigned short)53283)) - (max((1435806117), (-983463323))));
                            arr_26 [4U] [i_5] [i_2] [i_6] [i_5] [i_2] &= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_22 [2] [i_0] [i_6 - 1] [i_6] [i_6] [i_5])) ^ (arr_13 [i_5] [i_5] [i_6 + 1] [i_6] [i_6] [i_6] [i_6 - 1]))))));
                            arr_27 [(signed char)7] [i_0] [i_5] = ((((/* implicit */_Bool) min((arr_9 [i_1] [i_2]), (arr_9 [i_1] [i_5])))) ? (((/* implicit */unsigned long long int) var_9)) : (((((/* implicit */unsigned long long int) (+(-1435806114)))) + (arr_5 [(signed char)3] [i_1] [i_1]))));
                        }
                        for (int i_7 = 1; i_7 < 10; i_7 += 1) /* same iter space */
                        {
                            var_21 = ((/* implicit */int) ((unsigned int) var_12));
                            var_22 ^= 1435806112;
                        }
                        arr_32 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0] [i_0]))) ^ (var_9))))))) ? ((((-(var_5))) ^ (((/* implicit */unsigned int) min((((/* implicit */int) (short)-9731)), (-1508976740)))))) : (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_10)))) ? (arr_2 [i_0] [2U]) : (((/* implicit */int) (_Bool)1))))));
                        arr_33 [i_0] [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
                        var_23 = ((/* implicit */signed char) var_7);
                    }
                    var_24 = ((/* implicit */int) min((var_0), (((/* implicit */long long int) arr_6 [i_0] [i_1] [10]))));
                    var_25 -= ((/* implicit */unsigned int) ((int) ((((/* implicit */int) arr_21 [i_1] [(signed char)6])) ^ (var_6))));
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */signed char) (-(-1508976761)));
    /* LoopSeq 1 */
    for (signed char i_8 = 0; i_8 < 15; i_8 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 1; i_9 < 14; i_9 += 1) 
        {
            for (unsigned short i_10 = 2; i_10 < 14; i_10 += 3) 
            {
                {
                    var_27 *= ((/* implicit */unsigned long long int) (signed char)116);
                    var_28 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) -1508976769))) || (((/* implicit */_Bool) -1435806113))));
                    var_29 = ((/* implicit */_Bool) arr_35 [i_10]);
                }
            } 
        } 
        var_30 -= ((/* implicit */unsigned char) min((1435806112), (-1435806133)));
    }
}
