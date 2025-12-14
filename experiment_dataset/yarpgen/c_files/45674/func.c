/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45674
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) arr_3 [i_0] [i_1] [i_1])))))))))));
                    arr_6 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_2])) ? (((min((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [9LL] [i_0])), (var_6))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_0])) == (((/* implicit */int) arr_1 [i_0])))))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */unsigned short) arr_4 [i_2] [i_2] [i_1] [i_0])), (arr_5 [i_0])))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) var_4);
    var_18 = ((/* implicit */unsigned short) var_7);
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 1; i_3 < 14; i_3 += 3) 
    {
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    arr_15 [i_5] [i_5] [i_4] = arr_7 [i_4 - 1] [i_5];
                    var_19 -= ((((/* implicit */int) arr_10 [i_3 + 1])) / (((/* implicit */int) arr_10 [i_3 + 1])));
                    arr_16 [i_4] = ((/* implicit */unsigned int) ((long long int) (unsigned short)5681));
                    arr_17 [i_3] [i_4 - 1] [i_5] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_4 - 1] [i_3 + 1])) ? (((/* implicit */int) arr_7 [i_4 - 1] [i_3 + 1])) : (((/* implicit */int) arr_7 [i_4 - 1] [i_3 - 1]))));
                }
                for (short i_6 = 2; i_6 < 14; i_6 += 1) /* same iter space */
                {
                    arr_22 [i_3 + 1] [i_4] = max((((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [i_3 - 1])) < (((/* implicit */int) arr_9 [i_3 - 1]))))), (max((arr_9 [i_3 + 1]), (arr_9 [i_3 + 1]))));
                    arr_23 [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (((+(var_11))) > (max((((/* implicit */unsigned int) arr_13 [i_3] [i_4] [i_3 + 1] [12ULL])), (arr_21 [i_3] [i_3] [i_6 - 1] [i_4]))))))) | (min((min((arr_18 [i_3 + 1] [i_6 + 1] [13U]), (arr_18 [i_3 - 1] [i_4 - 1] [i_3 - 1]))), (((/* implicit */long long int) ((unsigned char) arr_9 [i_6])))))));
                    /* LoopSeq 1 */
                    for (signed char i_7 = 1; i_7 < 13; i_7 += 4) 
                    {
                        arr_26 [i_7] [i_4] [i_4] [i_3] = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) arr_24 [i_3] [i_4] [0] [i_4 - 1] [i_7 - 1] [i_6 - 2])), (var_3))), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_10 [i_3])) ? (arr_18 [i_3 - 1] [i_6 - 2] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_4]))))))))));
                        arr_27 [i_3 + 1] [i_3 + 1] [i_4] [i_7 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) ((max((arr_21 [i_3 + 1] [i_4 - 1] [i_6 - 2] [i_4]), (((/* implicit */unsigned int) arr_24 [i_3] [i_3] [i_4 - 1] [i_6 - 2] [i_7] [i_4 - 1])))) | (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_6 - 1]))) : (max((((((/* implicit */_Bool) arr_11 [i_3])) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3]))))), (((/* implicit */unsigned int) arr_8 [i_3 + 1]))))));
                        arr_28 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) arr_18 [(unsigned short)5] [i_3 - 1] [(unsigned short)5]))) == (((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_4] [i_3 - 1] [i_3 - 1] [i_4])) && (((/* implicit */_Bool) var_3)))))));
                        arr_29 [i_3] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) min((((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_25 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_6] [i_6] [i_7 + 2])) & (((/* implicit */int) arr_11 [i_3])))))), (min((((/* implicit */int) arr_13 [i_3 - 1] [i_4 - 1] [i_3 - 1] [i_6 - 2])), (((((/* implicit */int) var_10)) / (((/* implicit */int) arr_12 [i_3] [i_4] [i_6] [i_7]))))))));
                    }
                    var_20 = ((/* implicit */unsigned long long int) arr_25 [i_3 + 1] [i_4] [14ULL] [i_4 - 1] [i_6] [i_6]);
                }
                for (short i_8 = 2; i_8 < 14; i_8 += 1) /* same iter space */
                {
                    arr_33 [i_3 - 1] [i_4] = ((/* implicit */unsigned char) arr_11 [i_3]);
                    arr_34 [i_4] [i_4] [i_4] [i_4] = ((((/* implicit */_Bool) ((unsigned char) (short)-31935))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_31 [i_3] [i_3 - 1] [i_4 - 1] [i_8 - 2])))) : (((((((/* implicit */int) var_0)) == (((/* implicit */int) var_0)))) ? (min((var_8), (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_8] [i_4 - 1]))))));
                    arr_35 [i_3] [i_4] [i_3] [i_8] = ((/* implicit */short) arr_19 [i_4] [i_8 - 1] [i_3 - 1] [i_4 - 1]);
                }
                var_21 *= ((/* implicit */unsigned short) ((max((max((arr_21 [10] [10] [10] [14]), (((/* implicit */unsigned int) arr_31 [i_3] [i_4] [i_4 - 1] [i_4 - 1])))), (((/* implicit */unsigned int) (!(arr_14 [i_3] [i_3])))))) >= (arr_21 [i_3] [i_3] [i_4] [(_Bool)1])));
            }
        } 
    } 
}
