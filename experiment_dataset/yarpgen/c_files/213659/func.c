/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213659
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 8; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */_Bool) (+(((unsigned long long int) arr_4 [i_0] [(signed char)9] [(_Bool)1]))));
                /* LoopSeq 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    var_19 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1] [i_1]))) / (((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2]))))))) + (((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) arr_5 [i_0] [i_0])), (arr_1 [5U]))) * (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_6 [i_0] [i_0] [i_0] [1U])))))))));
                    arr_9 [6U] [i_0] = ((/* implicit */_Bool) max((arr_0 [i_1 - 3] [i_1 + 1]), (((/* implicit */unsigned char) ((_Bool) arr_8 [i_0] [i_0] [i_0])))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        arr_13 [i_0] [i_0] = ((max((((/* implicit */long long int) 1432266629U)), (2985397277470377869LL))) == (max((((/* implicit */long long int) arr_11 [i_1] [i_1 + 1] [i_1 + 1] [(_Bool)1] [4U])), (((((/* implicit */long long int) ((/* implicit */int) arr_8 [9ULL] [i_1] [i_1]))) | (arr_1 [(unsigned char)0]))))));
                        arr_14 [i_0] [i_0] [i_0] [i_0] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_2 [i_1 + 2]), (arr_2 [i_1 + 2]))))));
                        arr_15 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) (short)-29609))));
                    }
                    var_20 = ((/* implicit */_Bool) 9223372036854775794LL);
                }
                for (short i_4 = 1; i_4 < 7; i_4 += 3) 
                {
                    arr_19 [i_0] = ((/* implicit */unsigned char) (-((+(((/* implicit */int) max(((unsigned char)139), (((/* implicit */unsigned char) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_25 [i_6] = ((/* implicit */unsigned char) arr_23 [i_0] [i_1] [i_6]);
                                arr_26 [i_0] [i_0] [i_0] [i_6] [i_6] [i_0] = ((/* implicit */signed char) max((arr_0 [i_1] [i_6]), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_0] [i_1 - 2] [i_4 + 3] [i_5] [i_0]))))) || (((/* implicit */_Bool) arr_3 [i_1 - 1])))))));
                            }
                        } 
                    } 
                }
                for (unsigned char i_7 = 0; i_7 < 10; i_7 += 4) 
                {
                    var_21 ^= ((/* implicit */long long int) (((-(((/* implicit */int) arr_24 [i_0] [i_7])))) ^ ((+((+(((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))))))));
                    arr_29 [(unsigned char)9] [(unsigned char)9] [i_7] = ((/* implicit */_Bool) min(((~(((/* implicit */int) min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned char) arr_21 [i_0] [i_0] [i_0] [i_0]))))))), (((arr_17 [i_7] [i_7]) ? (((((/* implicit */_Bool) arr_3 [i_7])) ? (arr_4 [i_0] [i_0] [i_0]) : (((/* implicit */int) arr_17 [i_0] [i_0])))) : ((~(((/* implicit */int) (short)20600))))))));
                    arr_30 [i_7] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(1786053637U)))) ? (((/* implicit */int) ((signed char) arr_12 [i_1 + 1] [i_1 - 2]))) : (((/* implicit */int) (_Bool)1))));
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_0] [(signed char)5])) * (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((1633493334U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_0] [i_0]))))))) > (((unsigned int) (unsigned char)255)))))));
                    arr_31 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((max(((~(arr_1 [i_0]))), (((/* implicit */long long int) 1838580020)))), ((-(2985397277470377857LL)))));
                }
                var_23 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_1] [i_1 + 1])) ? (((((/* implicit */unsigned long long int) arr_28 [i_0])) & (arr_3 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [5LL])))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_21 [i_1 - 1] [8LL] [8LL] [8LL])) > (((/* implicit */int) max(((unsigned char)141), (arr_18 [i_0])))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) ((((var_1) + (2147483647))) >> (((var_17) - (3269601855U)))));
    var_25 -= ((/* implicit */long long int) (+(((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)171))))) + (1462458741)))));
    var_26 = ((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) -1185277754)) / (var_0)))), (max((var_3), (((/* implicit */unsigned long long int) -8749437844427273307LL)))))), (((/* implicit */unsigned long long int) var_2))));
}
