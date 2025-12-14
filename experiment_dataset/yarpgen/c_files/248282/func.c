/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248282
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
    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (-(((/* implicit */int) var_15)))))));
    var_18 = ((/* implicit */short) var_0);
    var_19 = ((/* implicit */unsigned short) (~(var_12)));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned char) ((unsigned int) min((((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (4294666691U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)94))))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)30720)) & (((/* implicit */int) (unsigned char)31))))))));
                /* LoopSeq 3 */
                for (unsigned short i_2 = 4; i_2 < 11; i_2 += 1) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned int) arr_1 [i_2]);
                    arr_9 [i_1] = ((/* implicit */int) arr_3 [i_0] [5LL]);
                    var_21 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_2 [i_2 - 4] [i_2 - 4])) ? (((((/* implicit */_Bool) (unsigned char)251)) ? (arr_3 [i_1] [(unsigned char)6]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-23139))))) : (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (arr_0 [(unsigned char)4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [1ULL])))))))));
                    arr_10 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_0 [i_2])))) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 1]))))))) : ((-(((((/* implicit */int) arr_5 [i_0] [i_1])) << (((((/* implicit */int) (short)-23139)) + (23154)))))))));
                }
                /* vectorizable */
                for (unsigned short i_3 = 4; i_3 < 11; i_3 += 1) /* same iter space */
                {
                    var_22 |= ((/* implicit */unsigned long long int) var_2);
                    var_23 |= ((/* implicit */unsigned long long int) (unsigned short)30720);
                }
                for (unsigned short i_4 = 4; i_4 < 11; i_4 += 1) /* same iter space */
                {
                    var_24 = ((/* implicit */long long int) min((arr_11 [i_0] [i_0 + 2] [i_4 - 1]), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_7 [i_4 - 1] [7LL] [i_4 - 1])))))));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            {
                                arr_20 [i_1] [i_1] [i_4 - 1] [i_5] [i_6] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)30858)), (2259087653351245005ULL)))) ? (((/* implicit */int) (unsigned char)161)) : (((/* implicit */int) ((unsigned char) -1823691785)))))), (1542042256U)));
                                var_25 ^= ((/* implicit */_Bool) ((signed char) ((unsigned short) arr_1 [i_5])));
                                var_26 |= ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (_Bool)0))))));
                            }
                        } 
                    } 
                }
                var_27 -= ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)89))) == (arr_2 [i_0 + 1] [6ULL])))) >= (((/* implicit */int) min((((_Bool) arr_7 [i_0] [(unsigned char)1] [i_1])), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) <= (arr_12 [i_1])))))));
            }
        } 
    } 
    var_28 = ((/* implicit */_Bool) (((+((-(var_14))))) / (min((((/* implicit */int) var_11)), ((+(((/* implicit */int) var_7))))))));
}
