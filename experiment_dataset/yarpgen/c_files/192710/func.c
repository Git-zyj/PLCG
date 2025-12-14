/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192710
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
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 24; i_1 += 3) 
        {
            {
                var_16 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(arr_0 [i_1 - 1]))))));
                /* LoopSeq 2 */
                for (int i_2 = 2; i_2 < 22; i_2 += 3) 
                {
                    var_17 = ((/* implicit */unsigned short) ((short) ((long long int) ((var_10) ? (((/* implicit */int) (unsigned char)34)) : (((/* implicit */int) (unsigned char)35))))));
                    var_18 = ((/* implicit */_Bool) var_7);
                    arr_6 [i_0] [i_2 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((/* implicit */int) arr_3 [i_0] [i_1 - 1] [i_2])) : (((((/* implicit */_Bool) (unsigned char)52)) ? (((/* implicit */int) (short)-12505)) : (((/* implicit */int) (unsigned char)35))))));
                }
                for (unsigned char i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_4 = 3; i_4 < 21; i_4 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 0; i_5 < 25; i_5 += 4) 
                        {
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)235), ((unsigned char)225))))) < ((+(max((0U), (((/* implicit */unsigned int) var_10))))))));
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [15] [i_1 + 1] [i_3] [i_3] [i_4] [i_5])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)226)) : (((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) (((-9223372036854775807LL - 1LL)) / (((/* implicit */long long int) ((/* implicit */int) (short)10715)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_0)) == (((/* implicit */int) var_2)))))) : (max((var_5), (((/* implicit */unsigned long long int) arr_10 [i_0]))))))));
                            arr_14 [i_0 - 3] [i_1] [i_1] [(_Bool)1] [i_4] = ((/* implicit */unsigned char) ((_Bool) min(((unsigned char)73), (((/* implicit */unsigned char) arr_12 [i_5] [i_4 - 2] [i_3] [(unsigned char)12] [i_1] [i_0 + 1])))));
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)73)) ? (((/* implicit */int) (short)2793)) : (((/* implicit */int) arr_10 [i_0 + 2]))))) || (((((/* implicit */_Bool) (signed char)127)) && (((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0 - 2] [i_0 - 3]))))));
                            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_5 [i_0 + 2])) : (((/* implicit */int) arr_8 [i_1] [i_1 + 1] [i_1] [i_4 + 4]))))) ? (((((/* implicit */int) (unsigned char)21)) / (((/* implicit */int) (unsigned char)36)))) : (((((/* implicit */_Bool) arr_5 [i_0 + 1])) ? (((/* implicit */int) arr_5 [i_0 - 3])) : (((/* implicit */int) (unsigned char)80))))));
                        }
                        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (+(((/* implicit */int) var_13)))))));
                    }
                    for (signed char i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (((!(((/* implicit */_Bool) (unsigned char)42)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (min((arr_13 [i_0 + 1] [i_1 + 1] [i_1 - 2] [i_1] [i_1 - 2] [i_1 - 1] [i_6]), (((/* implicit */unsigned int) var_14)))))))));
                        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (~(((unsigned int) (short)-12492))))) > (min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_1])) != (((/* implicit */int) var_0))))), (((((/* implicit */_Bool) (unsigned char)229)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0]))) : (var_5)))))));
                    }
                    var_26 = ((/* implicit */unsigned long long int) max((var_26), (var_8)));
                    arr_18 [i_3] [i_1] [(_Bool)1] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) arr_8 [(signed char)12] [i_1] [i_3] [i_3])) ? (((/* implicit */int) min(((unsigned short)1600), (((/* implicit */unsigned short) var_1))))) : (((/* implicit */int) var_1)))));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_7 = 1; i_7 < 12; i_7 += 4) 
    {
        var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) (-((-(((/* implicit */int) arr_10 [i_7 + 2])))))))));
        var_28 = ((/* implicit */int) (short)12498);
        var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) 10U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
        /* LoopNest 2 */
        for (long long int i_8 = 0; i_8 < 14; i_8 += 3) 
        {
            for (unsigned long long int i_9 = 1; i_9 < 11; i_9 += 4) 
            {
                {
                    var_30 = ((/* implicit */_Bool) var_14);
                    /* LoopSeq 1 */
                    for (unsigned short i_10 = 0; i_10 < 14; i_10 += 4) 
                    {
                        var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)1604)) ? (1276732031995775393ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [4U]))))), (((/* implicit */unsigned long long int) arr_23 [i_9 + 1] [i_9 + 2]))))) ? ((~(((((/* implicit */_Bool) arr_3 [i_7] [i_8] [(signed char)16])) ? (15385850876064172656ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)155))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_9] [i_9 + 1] [19U])) & (((/* implicit */int) arr_4 [i_9] [i_9 - 1] [13U])))))));
                        var_32 = ((/* implicit */unsigned int) (unsigned short)63938);
                    }
                }
            } 
        } 
        var_33 = ((/* implicit */unsigned long long int) (short)12502);
    }
    var_34 += ((/* implicit */unsigned short) (~((-((+(var_3)))))));
}
