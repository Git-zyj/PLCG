/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42050
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
    var_12 |= 12984978709403944433ULL;
    var_13 &= ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned long long int) (unsigned short)46920)))));
    var_14 = ((/* implicit */signed char) var_0);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) arr_2 [(unsigned char)1]);
                /* LoopSeq 4 */
                for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    arr_9 [i_0] [(signed char)8] [i_1] [i_2] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0 - 2] [i_0 - 2] [3ULL] [i_0 + 3])) / (((/* implicit */int) arr_7 [i_0 - 1] [i_0 + 3] [10ULL] [i_0 + 4])))))));
                    arr_10 [(signed char)14] [(unsigned char)17] [i_2] = ((/* implicit */signed char) ((short) ((unsigned long long int) (~(((/* implicit */int) arr_2 [i_0]))))));
                }
                for (short i_3 = 2; i_3 < 15; i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 1; i_4 < 16; i_4 += 4) 
                    {
                        for (unsigned long long int i_5 = 1; i_5 < 16; i_5 += 1) 
                        {
                            {
                                arr_17 [i_4] [8ULL] [i_3 - 2] [i_3 + 3] [9ULL] [(unsigned char)0] [i_5 - 1] = ((/* implicit */signed char) (unsigned short)18609);
                                arr_18 [i_0 - 1] [(signed char)13] [i_3] [i_0] [i_4] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_11 [i_3] [i_4 + 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [(signed char)0] [i_3] [(signed char)0] [i_5 + 1])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18627)))))) : (arr_8 [i_3 + 3] [i_4 + 1]))) != (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)111))))), (((((/* implicit */_Bool) (unsigned short)18627)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)97))) : (3112941198367355596ULL)))))));
                                arr_19 [(short)9] [13LL] [i_4] [i_3] [i_4] [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (signed char)124)) ? (((/* implicit */int) arr_14 [i_4 + 2] [i_3 + 3] [i_1] [13ULL])) : (((/* implicit */int) arr_14 [i_4 - 1] [i_4] [(signed char)3] [i_4 - 1])))), (((/* implicit */int) var_7))));
                            }
                        } 
                    } 
                    arr_20 [i_0] [i_0] [8ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)-12)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))))), (min((var_1), (((/* implicit */unsigned int) (short)5))))))) ? (arr_8 [i_0] [i_3]) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (signed char)11)) ? (((/* implicit */int) (signed char)29)) : (((/* implicit */int) (unsigned short)59369)))), (((/* implicit */int) arr_11 [i_0] [i_1])))))));
                }
                for (short i_6 = 2; i_6 < 15; i_6 += 1) /* same iter space */
                {
                    var_16 &= min((max((max((((/* implicit */unsigned long long int) arr_2 [(unsigned short)5])), (arr_16 [i_0]))), (((/* implicit */unsigned long long int) var_2)))), (3112941198367355604ULL));
                    arr_23 [i_1] [13U] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_22 [i_0 + 4])) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_12 [(unsigned short)2] [(unsigned short)2] [(signed char)12])), (arr_15 [(signed char)12] [i_6] [i_1] [i_0 - 2] [(unsigned short)8])))) : (((((/* implicit */int) arr_7 [i_1] [1ULL] [i_6] [i_6 + 1])) - (((/* implicit */int) (signed char)-98)))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) == (((unsigned long long int) (signed char)29)))))));
                    var_17 -= ((/* implicit */unsigned short) max((arr_8 [i_0 - 1] [i_6 + 3]), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)97))) % (arr_8 [i_0 + 1] [i_6 + 2])))));
                }
                for (short i_7 = 2; i_7 < 15; i_7 += 1) /* same iter space */
                {
                    arr_27 [i_0] [i_1] [(signed char)3] = arr_6 [(unsigned short)12] [i_0] [i_1] [i_7];
                    arr_28 [(signed char)7] [(signed char)9] [i_0] [i_0] = max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))))), ((~(arr_6 [1U] [(short)4] [i_0] [i_0]))));
                    var_18 -= ((/* implicit */unsigned short) (unsigned char)159);
                }
                arr_29 [i_1] = (-(min((max((3112941198367355596ULL), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_0])) ? (((/* implicit */int) (unsigned short)59375)) : (((/* implicit */int) (short)0))))))));
                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) var_9))));
            }
        } 
    } 
}
