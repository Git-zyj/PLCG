/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215229
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
    var_15 = ((((/* implicit */_Bool) var_10)) ? ((~((~(4294967286U))))) : (((/* implicit */unsigned int) (~((~(1618006001)))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned long long int) min((((int) (+(var_14)))), (((((/* implicit */int) ((arr_0 [i_0]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))) << (((((unsigned int) (short)-19113)) - (4294948159U)))))));
        var_17 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) var_7)) ? (arr_2 [i_0 + 1]) : (4294967286U))) < (((/* implicit */unsigned int) max((((/* implicit */int) arr_1 [i_0])), (1120979952)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((max(((unsigned short)35708), ((unsigned short)29839))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_2 [i_0]))))))))) : (min((((/* implicit */unsigned long long int) (unsigned short)35686)), (arr_0 [i_0 + 1])))));
        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 988936896))))) < (((/* implicit */int) ((arr_0 [i_0 + 2]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29848)))))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        arr_5 [i_1] = ((/* implicit */short) (~(min((((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) (unsigned char)75)) : (1120979943))), (((int) (unsigned char)155))))));
        var_19 = ((/* implicit */unsigned int) ((arr_3 [(short)9]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1]))))))));
    }
    /* LoopNest 2 */
    for (short i_2 = 3; i_2 < 12; i_2 += 4) 
    {
        for (unsigned int i_3 = 2; i_3 < 11; i_3 += 4) 
        {
            {
                arr_10 [i_2] [i_2] = ((int) (unsigned char)0);
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 3; i_4 < 12; i_4 += 3) 
                {
                    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */int) max((var_20), ((((!(((/* implicit */_Bool) var_11)))) ? (arr_15 [i_5] [i_3] [i_5]) : (((/* implicit */int) (!(((/* implicit */_Bool) ((int) (unsigned char)138))))))))));
                            var_21 = ((/* implicit */unsigned char) arr_6 [i_2]);
                            var_22 = ((/* implicit */short) max(((-(((((/* implicit */int) (unsigned short)35702)) - (((/* implicit */int) (unsigned short)35700)))))), ((((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) ((var_7) == (((/* implicit */unsigned int) var_5))))) : (((((/* implicit */_Bool) arr_4 [i_3] [i_5])) ? (arr_12 [i_2] [(unsigned char)0] [3] [i_5]) : (arr_9 [i_2] [i_3 + 2] [i_4 - 1])))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 9; i_6 += 4) 
                {
                    for (unsigned int i_7 = 2; i_7 < 11; i_7 += 4) 
                    {
                        {
                            arr_21 [i_2 - 3] [i_3 + 2] [i_7] [i_7 - 2] &= (~(-928851200));
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_10)))) <= (min((3837773168U), (((/* implicit */unsigned int) 637718756)))))))) + ((((!(((/* implicit */_Bool) (unsigned char)176)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)29827)))))) : (arr_6 [i_2])))));
                            var_24 = ((/* implicit */unsigned int) 17684524222308573006ULL);
                            var_25 = ((/* implicit */unsigned int) -2133481377);
                        }
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) && (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)165)) ? (((/* implicit */unsigned int) var_3)) : (var_13)))) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)47937)) & (((/* implicit */int) var_4)))))))));
}
