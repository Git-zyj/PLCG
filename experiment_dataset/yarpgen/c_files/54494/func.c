/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54494
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
    var_10 ^= ((/* implicit */unsigned long long int) (~(min((((long long int) var_9)), (((/* implicit */long long int) min((var_4), (((/* implicit */signed char) var_8)))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */int) (+(3692981793821138730LL)));
                    var_12 |= ((/* implicit */unsigned int) (((((~(((/* implicit */int) (signed char)12)))) + (2147483647))) >> ((((~(((/* implicit */int) var_8)))) + (4)))));
                    /* LoopSeq 4 */
                    for (long long int i_3 = 1; i_3 < 8; i_3 += 2) 
                    {
                        arr_12 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_3 + 2] [i_3 - 1] [i_1] [i_3 - 1]))))) ? (arr_3 [i_1] [i_0]) : (((/* implicit */long long int) 375442208U))));
                        arr_13 [i_0] [i_1] [i_1] [i_1] = max((((/* implicit */int) min((arr_6 [i_1]), (arr_6 [i_1])))), (((((/* implicit */int) arr_6 [i_1])) / (((/* implicit */int) arr_6 [i_1])))));
                        var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((unsigned int) arr_7 [i_0] [i_0] [i_0] [i_0])))));
                        arr_14 [i_1] [i_1] [i_3] = ((/* implicit */unsigned int) (+(18446744073709551615ULL)));
                        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) arr_9 [i_0] [i_0] [i_0]))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 11; i_4 += 2) 
                    {
                        arr_18 [i_0] [i_1] [i_2] = ((/* implicit */signed char) min((((/* implicit */int) ((unsigned char) arr_5 [i_0] [i_2]))), (((((/* implicit */int) arr_2 [i_0])) - (((/* implicit */int) arr_2 [i_0]))))));
                        var_15 -= ((/* implicit */unsigned char) max(((((-(8471349356218341246ULL))) / (var_1))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_15 [i_0] [i_1] [i_2] [i_4])))))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 2) /* same iter space */
                    {
                        arr_21 [i_2] [i_1] [i_2] [i_5] [i_0] [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_6)), (((((/* implicit */_Bool) ((unsigned char) var_7))) ? (((((/* implicit */_Bool) 3237286287U)) ? (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1])) : (2ULL))) : (((/* implicit */unsigned long long int) 3919525112U))))));
                        var_16 = max((((int) var_8)), (((/* implicit */int) min((((/* implicit */short) var_4)), (arr_7 [i_0] [i_1] [i_2] [i_1])))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 11; i_6 += 2) /* same iter space */
                    {
                        arr_24 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) max(((_Bool)0), (((_Bool) arr_11 [i_0] [i_0] [i_1] [i_6]))));
                        var_17 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) (unsigned char)255)))))))));
                        var_18 -= ((/* implicit */unsigned int) max((25ULL), (min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) 3237286284U)) : (var_1))), (((/* implicit */unsigned long long int) (_Bool)0))))));
                        arr_25 [i_6] [i_1] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */int) (+(9975394717491210390ULL)));
                    }
                    /* LoopSeq 2 */
                    for (unsigned long long int i_7 = 3; i_7 < 10; i_7 += 1) /* same iter space */
                    {
                        arr_28 [i_1] = (!((!(((/* implicit */_Bool) max((1828269706093960327ULL), (8471349356218341228ULL)))))));
                        var_19 = (~(9975394717491210370ULL));
                    }
                    for (unsigned long long int i_8 = 3; i_8 < 10; i_8 += 1) /* same iter space */
                    {
                        arr_32 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((int) arr_27 [i_1] [i_1] [i_2] [i_1]));
                        var_20 ^= var_5;
                    }
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (min((((/* implicit */unsigned long long int) 2577232176U)), (8471349356218341225ULL))) : (((/* implicit */unsigned long long int) var_9))));
}
