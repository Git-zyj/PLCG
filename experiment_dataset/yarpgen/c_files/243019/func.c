/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243019
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
    var_10 = ((/* implicit */unsigned short) 1763026108271668431LL);
    var_11 -= ((/* implicit */long long int) ((((var_7) != (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))) ? (536870912U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_7) : (var_9))))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(var_9))))));
        var_12 = ((/* implicit */int) min((var_12), ((-(var_9)))));
    }
    for (long long int i_1 = 0; i_1 < 25; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (short i_2 = 3; i_2 < 21; i_2 += 3) 
        {
            var_13 += ((/* implicit */short) (-(((((/* implicit */_Bool) max((-6486087160299603510LL), (((/* implicit */long long int) 926090260U))))) ? (((arr_5 [i_1] [1LL]) + (((/* implicit */unsigned int) var_1)))) : (((/* implicit */unsigned int) min((((/* implicit */int) arr_7 [13] [i_1])), (-1407128833))))))));
            var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_7 [i_2 + 1] [i_2 + 1])) ? (((/* implicit */int) arr_6 [i_2 - 3] [i_2 + 3])) : (((/* implicit */int) arr_7 [i_2 + 4] [i_2 - 2])))), (((/* implicit */int) arr_7 [i_2 - 3] [i_2 - 2])))))));
        }
        for (long long int i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            arr_14 [i_3] [i_3] [i_1] = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_9)) ? (var_6) : (var_9))), (-1040190203)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((974763306982141839LL) == (-7727412454170857150LL))))) != (((((/* implicit */_Bool) var_4)) ? (-6486087160299603502LL) : (var_3))))))) : (((unsigned int) -861326916)));
            arr_15 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) max(((+(arr_10 [i_1] [i_3]))), (((/* implicit */unsigned int) (-(var_0))))))) / (arr_8 [i_1] [i_3])));
        }
        arr_16 [13ULL] [13ULL] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (-2063746632) : (((/* implicit */int) arr_7 [i_1] [i_1])))))));
        var_15 -= ((/* implicit */short) ((unsigned short) arr_2 [i_1]));
        /* LoopSeq 2 */
        for (int i_4 = 0; i_4 < 25; i_4 += 3) 
        {
            arr_19 [i_1] [i_4] [9LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)7461)) ? (((/* implicit */unsigned long long int) min((((unsigned int) arr_9 [i_1] [i_4])), (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)104)), (var_7))))))) : (13646167363862504044ULL)));
            arr_20 [i_4] = ((/* implicit */unsigned short) ((9007199254740991LL) << (((((((/* implicit */_Bool) arr_9 [i_4] [i_1])) ? (((/* implicit */long long int) (+(191093079U)))) : ((-(arr_13 [i_1]))))) - (191093070LL)))));
            arr_21 [i_4] [i_4] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_12 [i_4]))));
            arr_22 [i_1] [i_4] [i_1] = ((/* implicit */signed char) -1794065869949489820LL);
            /* LoopSeq 1 */
            for (int i_5 = 0; i_5 < 25; i_5 += 1) 
            {
                arr_26 [i_5] [i_5] [1LL] [i_5] = ((/* implicit */int) max((((arr_25 [i_1] [i_4] [i_5]) < (arr_25 [i_1] [i_4] [i_4]))), (((((/* implicit */_Bool) arr_25 [i_5] [i_1] [i_1])) && (((/* implicit */_Bool) arr_25 [i_1] [17LL] [i_1]))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_6 = 0; i_6 < 25; i_6 += 4) 
                {
                    var_16 = ((/* implicit */int) (unsigned short)53703);
                    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((arr_18 [i_1] [i_1] [i_1]) % (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) 9276686236864823451ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_7 [i_6] [i_1]))))))))));
                }
                var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((unsigned char) max((7200424306270789156LL), (((/* implicit */long long int) arr_7 [i_1] [i_1]))))))));
            }
        }
        for (unsigned int i_7 = 4; i_7 < 24; i_7 += 1) 
        {
            arr_33 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_23 [i_7 - 3] [i_7] [i_7 - 3]) >= (var_7))))) > (((2141384500U) << (((1040190198) - (1040190191)))))));
            arr_34 [i_7] [i_7] = ((/* implicit */unsigned int) var_1);
            var_19 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_9)), ((~(((((/* implicit */_Bool) arr_2 [(unsigned char)19])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) arr_5 [i_1] [i_7 + 1]))))))));
        }
        arr_35 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) arr_4 [i_1])) : (191093079U)));
    }
}
