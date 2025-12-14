/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222498
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
    for (signed char i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_6 [5LL] = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)-3721))));
                arr_7 [9ULL] [(signed char)10] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) (~(2948353959U))))) ? (arr_3 [i_0]) : (((/* implicit */int) var_3))));
                var_19 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((+(((/* implicit */int) var_2))))))) ? (((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (1346613335U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 2]))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-31476)))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    arr_11 [i_0] [i_1] [i_2] [i_0] = ((int) arr_4 [i_2] [i_0]);
                    arr_12 [i_2] [i_1] [i_1] [i_0] = ((((/* implicit */_Bool) 2948353966U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_5 [i_2]));
                }
            }
        } 
    } 
    var_20 = ((/* implicit */int) ((min((min((2287828610704211968ULL), (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)27426))))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) 2948353981U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)24836))) : (2948353956U))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) 
    {
        for (int i_4 = 4; i_4 < 22; i_4 += 1) 
        {
            {
                var_21 = ((unsigned int) ((((long long int) 541910160U)) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) 7568167986573321897ULL)) ? (((/* implicit */int) (short)27428)) : (((/* implicit */int) (short)-16041)))))));
                arr_19 [i_3] [i_3] [i_4] = ((/* implicit */short) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)11)), (3753057135U)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)245), (((/* implicit */unsigned char) arr_14 [i_3])))))) * (min((((/* implicit */unsigned long long int) 1401058249U)), (18446744073709551615ULL)))))));
                var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)11)))))));
                /* LoopNest 3 */
                for (signed char i_5 = 0; i_5 < 23; i_5 += 2) 
                {
                    for (unsigned char i_6 = 0; i_6 < 23; i_6 += 1) 
                    {
                        for (int i_7 = 2; i_7 < 21; i_7 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */short) arr_14 [(signed char)22]);
                                arr_27 [i_3] [i_4] [i_3] [i_3] = ((/* implicit */long long int) max((18446744073709551596ULL), (((/* implicit */unsigned long long int) (short)31469))));
                                var_24 = ((/* implicit */unsigned char) (((!((!(((/* implicit */_Bool) 2948353981U)))))) && (((/* implicit */_Bool) 503316480U))));
                                var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((((/* implicit */long long int) -560853490)) / (arr_22 [i_4] [i_6] [18U]))))))));
                            }
                        } 
                    } 
                } 
                var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_4] [i_4])) ? (((/* implicit */int) (signed char)-118)) : (((/* implicit */int) ((((/* implicit */int) ((198146802704514976LL) > (((/* implicit */long long int) ((/* implicit */int) (short)0)))))) > (((int) -590294528)))))));
            }
        } 
    } 
}
