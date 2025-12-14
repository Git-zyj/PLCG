/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219697
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
    var_15 = ((/* implicit */short) (+(3339139023U)));
    var_16 = min((8087226852881029709LL), (((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (-1251701902) : (1251701898)))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_17 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-89)) ? (702281832469655921LL) : (min((var_5), (var_5)))))) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)21602)) > (((/* implicit */int) (unsigned short)19240))))))));
        var_18 += ((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((2270764798U), (((((/* implicit */_Bool) var_5)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0])))))))), ((~(7998868484743073002LL)))));
    }
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        arr_5 [i_1] = ((/* implicit */int) (+(((9033398334383194983LL) - (arr_4 [i_1] [i_1])))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            arr_8 [6] [i_2] [i_1] = (~(arr_7 [(signed char)0] [i_2] [i_2]));
            arr_9 [(unsigned short)4] [i_2] = (unsigned short)0;
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (18446744073709551615ULL)));
            /* LoopSeq 1 */
            for (signed char i_3 = 2; i_3 < 15; i_3 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 17; i_4 += 1) 
                {
                    for (unsigned char i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        {
                            var_20 = ((((/* implicit */_Bool) arr_17 [(unsigned short)15] [i_3 + 2] [i_3 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_3 + 2] [i_3 + 2] [i_3 - 1]))) : (9033398334383194963LL));
                            arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] |= ((/* implicit */int) ((var_13) && (((/* implicit */_Bool) var_1))));
                        }
                    } 
                } 
                arr_19 [i_1] [i_1] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) != (((/* implicit */int) arr_14 [i_2] [i_2] [i_3] [i_2]))));
                arr_20 [i_1] [i_2] [i_1] [i_1] |= ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
            }
            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (var_3)))) ? (((/* implicit */int) var_0)) : ((~(((/* implicit */int) arr_15 [i_1] [i_2])))))))));
        }
        for (long long int i_6 = 0; i_6 < 17; i_6 += 2) 
        {
            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (~((~(arr_4 [i_1] [i_6]))))))));
            /* LoopSeq 1 */
            for (signed char i_7 = 2; i_7 < 16; i_7 += 2) 
            {
                var_23 = ((/* implicit */unsigned short) max((var_23), (max((((/* implicit */unsigned short) max((arr_16 [i_7 + 1] [i_7] [i_7 - 1] [i_7] [i_7]), (arr_16 [i_7 + 1] [i_7] [i_7 - 1] [i_7] [i_7])))), (min((var_0), (((/* implicit */unsigned short) var_2))))))));
                var_24 = ((/* implicit */unsigned long long int) ((((-8972574652062342312LL) >= (((/* implicit */long long int) -1608448613)))) ? (((/* implicit */int) min(((unsigned short)38843), ((unsigned short)65523)))) : (((((/* implicit */_Bool) (unsigned char)67)) ? (((/* implicit */int) arr_14 [i_1] [i_7 - 1] [i_7 - 2] [i_7])) : (((/* implicit */int) var_14))))));
                arr_26 [i_1] [i_6] [i_7] [(_Bool)1] |= (-((~(arr_13 [i_1] [i_6] [i_7 - 2] [i_7]))));
                var_25 |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_16 [i_1] [i_6] [i_6] [i_7] [i_7])) ? ((~(arr_7 [(signed char)9] [(signed char)7] [i_6]))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_1] [i_6] [i_1]))) & (8087226852881029709LL)))))) - (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)0))))) & (arr_6 [0ULL] [i_7])))));
                var_26 = var_0;
            }
            var_27 = ((/* implicit */int) ((((/* implicit */_Bool) (((~(arr_25 [i_1]))) & (((/* implicit */long long int) arr_21 [i_1] [i_6]))))) ? (((((/* implicit */_Bool) (~(arr_12 [i_1] [i_1] [i_6] [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (-8972574652062342312LL))) : ((~(9033398334383194963LL)))));
        }
    }
    var_28 = ((/* implicit */signed char) var_14);
}
