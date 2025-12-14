/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25271
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
    var_14 = ((/* implicit */_Bool) var_9);
    var_15 = ((/* implicit */_Bool) var_12);
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */long long int) max(((unsigned short)13245), (((/* implicit */unsigned short) (signed char)-41))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_6 [i_1] [i_2] = ((/* implicit */unsigned long long int) (unsigned char)0);
                    var_17 -= ((/* implicit */unsigned int) (signed char)40);
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 10; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_4] [12ULL] [12ULL] [12ULL] &= ((/* implicit */short) ((((/* implicit */int) ((((var_5) ^ (var_2))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1])))))) * (((/* implicit */int) (!(((/* implicit */_Bool) (+(0U)))))))));
                                arr_14 [i_4] [i_1] [i_3] [i_1] [i_1] [11ULL] [i_0 - 1] = ((/* implicit */int) ((((/* implicit */long long int) min((((/* implicit */int) min((((/* implicit */unsigned short) arr_5 [i_0 + 2] [i_1])), ((unsigned short)52278)))), (((((/* implicit */_Bool) 2932205628799123805LL)) ? (33538048) : (((/* implicit */int) (unsigned char)18))))))) - (3835422673022738565LL)));
                                arr_15 [(signed char)8] [(_Bool)1] [i_2] [i_0] [(unsigned char)6] &= ((/* implicit */short) 3065862192U);
                                var_18 -= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned int) 2055116767)) >= (4294967295U)))) != (((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) (unsigned char)15))))))));
                            }
                        } 
                    } 
                }
                var_19 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2097148ULL)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [1ULL] [i_0]))) == (-378740716788048176LL)))) : (min((((/* implicit */int) (unsigned short)43818)), (var_6)))))) ? (arr_8 [i_1] [i_0] [(short)6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1] [i_0 + 3] [i_0 + 3]))));
                /* LoopNest 3 */
                for (unsigned short i_5 = 2; i_5 < 13; i_5 += 2) 
                {
                    for (unsigned short i_6 = 0; i_6 < 14; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 3; i_7 < 12; i_7 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_22 [4ULL] [i_0 + 1] [i_1] [(short)3] [i_1] [i_1])), (arr_25 [i_5] [i_5] [i_7] [i_5] [i_7 - 1] [i_1])))) || (((/* implicit */_Bool) (+(((/* implicit */int) (signed char)124)))))));
                                arr_27 [13ULL] [i_1] [i_5 + 1] [i_6] [i_6] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_13))) && (((/* implicit */_Bool) var_12))));
                                var_21 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)251))) != (4294967295U)));
                                var_22 ^= ((/* implicit */signed char) (short)20823);
                                var_23 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(1019578331U)))) ? (((/* implicit */int) (unsigned char)21)) : (((/* implicit */int) arr_22 [i_7] [i_5] [i_6] [i_5 - 2] [i_5] [i_0]))))) && (((/* implicit */_Bool) var_9))));
                            }
                        } 
                    } 
                } 
                var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) arr_23 [(signed char)4] [i_0] [i_0 + 2] [(signed char)4] [(signed char)4] [i_1] [4U]))));
            }
        } 
    } 
    var_25 *= ((/* implicit */unsigned char) ((((((((/* implicit */int) var_11)) < (var_6))) ? (((/* implicit */unsigned long long int) ((int) 15484646532989690325ULL))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_12))))) << (((((/* implicit */int) var_13)) + (9095)))));
}
