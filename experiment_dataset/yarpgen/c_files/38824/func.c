/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38824
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) arr_0 [8LL]))));
        var_14 -= ((/* implicit */signed char) (-(((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_15 |= ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_2)));
        var_16 *= ((/* implicit */unsigned int) var_0);
    }
    /* LoopSeq 3 */
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        var_17 ^= ((/* implicit */short) ((max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1] [i_1]))) : (12498757451548688535ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)31562)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_1 [i_1] [i_1]))))))) << (((max((arr_2 [i_1] [i_1]), (arr_2 [i_1] [i_1]))) + (5276915620376885947LL)))));
        var_18 += ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_0)) < (((/* implicit */int) ((arr_2 [i_1] [i_1]) == (arr_3 [i_1])))))))) ^ ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)0))))) : (((var_1) << (((((/* implicit */int) var_12)) - (110))))))));
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (short)31566))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 3; i_2 < 14; i_2 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned char i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            var_20 = ((/* implicit */long long int) min((var_20), (var_8)));
            var_21 ^= ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) var_11))))));
        }
        for (long long int i_4 = 0; i_4 < 15; i_4 += 3) 
        {
            arr_14 [i_4] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_2 + 1] [i_4])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0))));
            var_22 = ((/* implicit */_Bool) max((var_22), (((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) < (var_7))))));
            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) 9181600328694421443ULL)))))))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 2) 
        {
            var_24 = ((/* implicit */unsigned long long int) var_2);
            var_25 *= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) && (((/* implicit */_Bool) ((long long int) -1091279913027587464LL)))));
            var_26 |= ((((11322742902042113540ULL) > (((/* implicit */unsigned long long int) -6729232526979915129LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_1) < (var_5))))) : (var_5));
            arr_17 [i_5] [i_2 - 3] = (+(((unsigned long long int) (_Bool)1)));
        }
        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((/* implicit */int) arr_8 [i_2 - 1])) << (((var_2) - (1404859539U))))))));
    }
    for (unsigned int i_6 = 3; i_6 < 14; i_6 += 4) /* same iter space */
    {
        var_28 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_5 [i_6])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)8))))) / (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-33)))))))) ? (((((var_3) | (((/* implicit */unsigned long long int) -5783471237395381490LL)))) << (((/* implicit */int) (_Bool)1)))) : (var_3)));
        var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) (((~(((var_5) | (((/* implicit */unsigned long long int) 1244300987U)))))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_6 - 1])) ? (((/* implicit */int) arr_0 [i_6 - 3])) : (((/* implicit */int) arr_0 [i_6 - 1]))))))))));
    }
}
