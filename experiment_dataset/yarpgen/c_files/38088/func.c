/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38088
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
    var_16 = ((/* implicit */unsigned int) var_13);
    var_17 = ((/* implicit */_Bool) (signed char)-50);
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] = ((signed char) ((((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) (unsigned char)66)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) (!(arr_4 [i_0] [i_0])))) : (((/* implicit */int) ((unsigned char) (signed char)-50)))));
                    var_18 = ((/* implicit */_Bool) ((((/* implicit */int) (short)16447)) ^ ((~(((/* implicit */int) (signed char)-50))))));
                    var_19 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_7 [(signed char)2] [i_1] [1ULL] [(signed char)2]))))) ? (((/* implicit */int) (signed char)47)) : (((/* implicit */int) (unsigned char)146))))), (((long long int) min((arr_5 [i_1] [(unsigned char)23] [i_2] [i_0]), (((/* implicit */long long int) 524287)))))));
                    arr_9 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)19103)) ? (((/* implicit */int) (short)11280)) : (((/* implicit */int) (unsigned char)28))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-9793))) : (((((/* implicit */_Bool) arr_5 [i_2] [0ULL] [15] [1LL])) ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)47)))))))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (signed char)50)) ? (((/* implicit */int) (signed char)-50)) : (((/* implicit */int) (signed char)-122))))))) : (((((/* implicit */_Bool) (+(25)))) ? (((unsigned long long int) (unsigned char)116)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)11280)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)112))) : (arr_6 [i_0] [i_0] [i_0] [i_0]))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 1; i_3 < 24; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            var_20 &= ((/* implicit */_Bool) arr_1 [i_3] [22]);
                            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) arr_7 [i_3] [i_2] [i_0] [i_0]))));
                            arr_15 [(_Bool)1] [i_1] [i_1] [i_0] = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (arr_5 [3] [i_1] [i_1] [i_4]))) ? (((/* implicit */int) (signed char)62)) : (((((/* implicit */_Bool) (signed char)4)) ? (((((/* implicit */_Bool) (short)11280)) ? (((/* implicit */int) (signed char)47)) : (((/* implicit */int) (short)13023)))) : (((int) arr_0 [i_0]))))));
                        }
                        var_22 = ((/* implicit */unsigned long long int) ((((int) (unsigned char)7)) - (((/* implicit */int) (short)-20982))));
                    }
                }
            } 
        } 
        var_23 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) -26))));
        arr_16 [i_0] [11] = ((/* implicit */_Bool) (~(min((((4611685984067649536LL) >> (((/* implicit */int) (_Bool)1)))), (-4611685984067649549LL)))));
    }
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 23; i_5 += 1) 
    {
        var_24 &= ((/* implicit */short) ((unsigned int) arr_4 [i_5] [20U]));
        var_25 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */int) (unsigned char)140)) : (((/* implicit */int) (short)-11281))))) ? (((((/* implicit */_Bool) arr_13 [i_5] [(_Bool)1] [i_5] [i_5] [(unsigned short)2] [(_Bool)1] [(_Bool)1])) ? (((/* implicit */int) var_13)) : (255047839))) : (((/* implicit */int) arr_10 [4LL]))));
    }
    for (signed char i_6 = 0; i_6 < 10; i_6 += 2) 
    {
        var_26 = ((/* implicit */_Bool) arr_7 [i_6] [i_6] [i_6] [i_6]);
        arr_22 [i_6] = ((/* implicit */long long int) min((((/* implicit */int) (unsigned short)6)), (min((((/* implicit */int) min((((/* implicit */unsigned char) var_7)), ((unsigned char)236)))), (((((/* implicit */_Bool) 25)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)-47))))))));
        arr_23 [i_6] [i_6] &= ((/* implicit */unsigned int) (_Bool)1);
        arr_24 [i_6] = ((/* implicit */unsigned int) (((((-(arr_5 [i_6] [i_6] [i_6] [(short)15]))) - (min((((/* implicit */long long int) arr_4 [i_6] [i_6])), (-4611685984067649549LL))))) - (arr_13 [i_6] [(signed char)20] [i_6] [i_6] [i_6] [i_6] [i_6])));
        arr_25 [i_6] [i_6] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) ((_Bool) (signed char)50))) == (-25))))));
    }
    for (long long int i_7 = 1; i_7 < 23; i_7 += 4) 
    {
        arr_28 [(signed char)11] &= ((/* implicit */signed char) arr_7 [i_7] [i_7] [i_7 + 1] [i_7 + 2]);
        var_27 = ((/* implicit */int) (unsigned short)65529);
    }
}
