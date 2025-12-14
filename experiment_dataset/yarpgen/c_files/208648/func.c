/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208648
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
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) || (((/* implicit */_Bool) ((-1584385373779456557LL) | (var_8))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 20; i_2 += 3) 
                {
                    for (short i_3 = 1; i_3 < 21; i_3 += 3) 
                    {
                        {
                            arr_13 [i_0] = (i_0 % 2 == zero) ? (((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [6ULL])) << (((arr_12 [i_0]) - (7811246506550171025LL)))))) ? (arr_9 [12ULL] [(_Bool)1] [2LL] [(unsigned short)4] [(_Bool)1]) : (-7192472162672524796LL))), (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_11 [13ULL] [0U] [(unsigned short)2] [15U] [15LL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [(unsigned char)10]))) : (arr_10 [(_Bool)1] [i_0] [(_Bool)1] [(signed char)20])))))))) : (((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [6ULL])) << (((((arr_12 [i_0]) + (7811246506550171025LL))) - (4515888638892185036LL)))))) ? (arr_9 [12ULL] [(_Bool)1] [2LL] [(unsigned short)4] [(_Bool)1]) : (-7192472162672524796LL))), (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_11 [13ULL] [0U] [(unsigned short)2] [15U] [15LL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [(unsigned char)10]))) : (arr_10 [(_Bool)1] [i_0] [(_Bool)1] [(signed char)20]))))))));
                            arr_14 [(_Bool)1] [18ULL] [4U] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -17461926)))))) | (((((/* implicit */long long int) (~(((/* implicit */int) (signed char)-44))))) & (((((/* implicit */_Bool) arr_12 [i_0])) ? (arr_12 [i_0]) : (((/* implicit */long long int) 2030220878))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (long long int i_4 = 3; i_4 < 22; i_4 += 3) 
                {
                    arr_17 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+((-9223372036854775807LL - 1LL)))))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 23; i_6 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) arr_21 [16LL] [5LL] [16LL] [(_Bool)1])) ? (((((/* implicit */_Bool) 7192472162672524799LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [(unsigned char)17] [20U] [7LL] [22ULL]))) : (arr_10 [15LL] [i_0] [(unsigned char)8] [(short)19]))) : (((((/* implicit */_Bool) arr_8 [13ULL] [1LL])) ? (arr_21 [10U] [(unsigned char)0] [18LL] [19ULL]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)43))))))));
                                arr_24 [8LL] [7ULL] [i_0] [10U] [5ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_9 [i_4 + 1] [(unsigned char)3] [(unsigned char)18] [14U] [(_Bool)1]) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)4)))))) && (((/* implicit */_Bool) (~(((/* implicit */int) (short)-18684)))))));
                            }
                        } 
                    } 
                    arr_25 [0LL] [i_0] [(unsigned short)19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_10 [19ULL] [i_0] [i_1] [9LL]), (((/* implicit */long long int) arr_16 [(short)7] [i_1] [i_0 + 1]))))) ? ((~(((/* implicit */int) (unsigned short)0)))) : (((((/* implicit */int) arr_11 [(signed char)18] [i_1] [i_1] [12LL] [(unsigned char)4])) * (((/* implicit */int) arr_11 [8] [(unsigned char)17] [12] [i_1] [(signed char)17]))))));
                    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_0 - 1] [(unsigned short)9] [i_4 + 1])) ? (arr_22 [i_0 - 1] [(unsigned char)6] [i_4 - 2]) : (arr_22 [i_0 - 1] [(signed char)10] [i_4 - 3])))) % (((((/* implicit */_Bool) (short)-17408)) ? (-7192472162672524806LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)9)))))));
                }
            }
        } 
    } 
}
