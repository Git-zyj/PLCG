/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245309
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
    var_11 = ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) ((int) 1560116945U))), (12879622073926427889ULL))), (((/* implicit */unsigned long long int) var_9))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            var_12 = ((/* implicit */unsigned int) var_6);
            arr_7 [16] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((signed char) -3016678784805949538LL))) ? (((/* implicit */int) max((arr_5 [i_1 + 1]), (arr_3 [i_0] [i_1])))) : (((/* implicit */int) arr_1 [i_1 + 1] [i_0 - 1])))) / (((/* implicit */int) ((unsigned char) arr_3 [i_0 - 1] [i_1 + 1])))));
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    var_13 &= ((/* implicit */_Bool) arr_10 [(unsigned short)2]);
                    arr_12 [i_3] [i_3] [i_2] [i_3] = ((/* implicit */_Bool) ((signed char) ((unsigned char) var_4)));
                }
                /* LoopNest 2 */
                for (short i_4 = 2; i_4 < 18; i_4 += 3) 
                {
                    for (short i_5 = 1; i_5 < 18; i_5 += 4) 
                    {
                        {
                            arr_17 [i_0 + 1] [i_1] [i_2] [i_4] [i_4 - 2] [15LL] &= ((/* implicit */signed char) var_3);
                            arr_18 [i_0] [i_1 + 1] [11ULL] [(short)11] [i_4 - 1] [i_0] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_0 [i_0 - 1] [(unsigned short)15]))) : (((5567121999783123722ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(unsigned short)4] [5LL])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (+(5567121999783123703ULL)))))) : (((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_1 + 1])) ? (((/* implicit */unsigned int) 183950023)) : (((arr_15 [i_5] [(unsigned char)12] [i_2] [i_1] [i_4]) * (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))));
                        }
                    } 
                } 
                arr_19 [(_Bool)1] [8ULL] [8ULL] [8ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_3 [i_0 - 1] [i_1 + 1]))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 6794685475796876179LL)) ? (5567121999783123733ULL) : (((/* implicit */unsigned long long int) var_1)))))) : (((/* implicit */int) arr_5 [i_2]))));
                var_14 = ((/* implicit */long long int) ((int) arr_10 [4ULL]));
            }
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                arr_22 [i_6] [(_Bool)1] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)71))) : (654121351U)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [13ULL]))) : (arr_0 [i_1 + 1] [(unsigned short)10])))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (short)-11536)) : (183950024)))) && (((/* implicit */_Bool) (~(18210981471982192100ULL))))))) : (((/* implicit */int) min(((short)32767), (((/* implicit */short) (unsigned char)255)))))));
                arr_23 [i_0] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4219599828U)) ? (-1558820312619686074LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-87)))));
                arr_24 [(unsigned short)2] [12] [(unsigned char)10] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_16 [i_0 + 1] [i_1 + 1] [i_6 - 1] [9LL] [i_0 - 1]))))) ? (5567121999783123733ULL) : (((/* implicit */unsigned long long int) var_1))));
                /* LoopSeq 3 */
                for (unsigned long long int i_7 = 2; i_7 < 17; i_7 += 4) /* same iter space */
                {
                    arr_29 [(_Bool)1] [(_Bool)1] [i_6] [(signed char)1] = ((/* implicit */unsigned long long int) ((unsigned char) -1));
                    /* LoopSeq 1 */
                    for (unsigned char i_8 = 0; i_8 < 20; i_8 += 4) 
                    {
                        var_15 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (+((+(var_8)))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-109)) / (-1265822667)))), (((arr_14 [i_8] [(unsigned short)6] [i_6 - 1] [i_1] [i_0] [(unsigned short)6]) >> (((/* implicit */int) var_6)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((_Bool) arr_5 [i_0 - 1])))))));
                        arr_33 [i_8] [(_Bool)1] [i_8] [18ULL] [i_0] &= ((/* implicit */unsigned int) ((_Bool) -6794685475796876177LL));
                        arr_34 [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) arr_28 [i_6])) ? (((((/* implicit */int) arr_28 [i_6])) % (((/* implicit */int) var_6)))) : ((+(((/* implicit */int) (signed char)58)))))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1 + 1])) ? (((/* implicit */int) arr_6 [i_0] [(unsigned short)10] [i_1 + 1])) : (-2147483645)))));
                    }
                    arr_35 [i_6] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */long long int) max((arr_25 [i_1 + 1] [i_6 - 1]), (((/* implicit */unsigned short) arr_6 [i_1 + 1] [i_6 - 1] [i_7 - 1]))))), (6794685475796876177LL)));
                    var_16 = ((/* implicit */signed char) (~(((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3))) / (5567121999783123733ULL))) / (((/* implicit */unsigned long long int) 6794685475796876177LL))))));
                }
                for (unsigned long long int i_9 = 2; i_9 < 17; i_9 += 4) /* same iter space */
                {
                    arr_39 [i_9] [12U] [i_9] [i_9] |= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_26 [(unsigned short)18] [i_9] [i_6] [i_9 + 3] [i_9])), (arr_37 [i_0] [i_9] [i_6] [18U] [i_1])));
                    var_17 = arr_0 [i_0 - 1] [i_6];
                    var_18 = ((_Bool) (unsigned char)23);
                }
                for (unsigned short i_10 = 1; i_10 < 17; i_10 += 4) 
                {
                    var_19 = ((/* implicit */unsigned int) ((unsigned char) ((short) arr_25 [i_0 - 1] [8U])));
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_6 - 1] [i_1 + 1])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_6 [i_0] [i_1 + 1] [i_6])) : (((/* implicit */int) var_9))))) ? (6794685475796876184LL) : (((((/* implicit */_Bool) arr_38 [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_0] [i_1 + 1] [i_1] [i_6] [1]))) : (var_5))))) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [(signed char)0])))));
                }
            }
            var_21 = ((/* implicit */unsigned char) var_10);
            var_22 = 6794685475796876180LL;
        }
        arr_42 [i_0] = ((/* implicit */long long int) var_3);
        /* LoopNest 3 */
        for (unsigned short i_11 = 0; i_11 < 20; i_11 += 2) 
        {
            for (short i_12 = 0; i_12 < 20; i_12 += 4) 
            {
                for (signed char i_13 = 0; i_13 < 20; i_13 += 2) 
                {
                    {
                        var_23 = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)12))));
                        arr_50 [i_0] [i_11] [1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) var_1)) >= (max((max((((/* implicit */long long int) (unsigned char)74)), (6794685475796876168LL))), (((/* implicit */long long int) ((_Bool) var_7)))))));
                        arr_51 [i_0] [i_0] [i_12] [(unsigned short)5] [i_12] [7U] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0 + 1] [i_11]))) / ((-(((long long int) arr_41 [i_0] [i_11] [i_11] [5U] [i_13]))))));
                        arr_52 [i_0] [(signed char)9] [i_12] [i_13] [(signed char)6] [i_11] = ((/* implicit */unsigned short) var_3);
                    }
                } 
            } 
        } 
    }
}
