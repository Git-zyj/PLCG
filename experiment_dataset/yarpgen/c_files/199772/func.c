/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199772
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
    var_14 = ((/* implicit */_Bool) min((var_14), ((((!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)-125)) + (((/* implicit */int) var_4))))))) || (((/* implicit */_Bool) ((((((/* implicit */int) var_0)) == (((/* implicit */int) (signed char)-19)))) ? (((var_1) | (((/* implicit */unsigned long long int) 216450005)))) : ((+(var_1))))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_15 *= ((/* implicit */unsigned char) ((((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0]))))) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(unsigned short)16]))))))) << (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) < (((/* implicit */int) arr_0 [i_0] [i_0])))))));
        var_16 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 4294967283U)), (var_7)))) ? (((/* implicit */int) min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned char) arr_1 [1ULL]))))) : (((((/* implicit */int) arr_2 [i_0] [i_0])) / (((/* implicit */int) arr_0 [i_0] [i_0]))))))) + (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_0]))))) : (min((((/* implicit */long long int) arr_2 [i_0] [i_0])), (var_9)))))));
        var_17 = (((!(((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))))))) ? (((((/* implicit */_Bool) max((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (11004999528417091858ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned long long int) max(((+(((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) arr_1 [i_0]))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_18 = ((((var_9) << (((((((/* implicit */_Bool) arr_5 [i_1] [i_2])) ? (arr_3 [i_2] [i_1] [i_0]) : (arr_4 [i_2] [i_1]))) - (5700669172910787357LL))))) - (((/* implicit */long long int) arr_6 [i_2] [(signed char)13] [i_0])));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_19 *= ((/* implicit */_Bool) max(((+(((/* implicit */int) arr_8 [1] [i_1] [i_1] [i_1] [i_1])))), (((/* implicit */int) arr_8 [i_0] [i_1] [(short)13] [i_0] [i_4]))));
                                arr_14 [i_3] &= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])) ? (((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_2] [i_4 - 1])) : (((/* implicit */int) arr_7 [i_4] [i_4] [i_4 - 1] [i_4] [i_4]))))), (-4546763858597187530LL)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_3] [i_4])) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_1] [i_1] [i_3] [(unsigned short)18])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_1]))) : (arr_4 [i_1] [i_3]))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */signed char) arr_8 [i_3] [i_3] [i_2] [i_0] [i_0])))))))) : (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1)))))));
                                arr_15 [(_Bool)1] [i_4] [i_4] = ((/* implicit */unsigned int) arr_5 [i_2] [i_0]);
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-2266)))))));
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) -2413617085947026252LL)) ? (((/* implicit */int) ((((/* implicit */int) max((((/* implicit */short) arr_1 [(short)17])), (arr_10 [i_2] [i_2] [i_1] [i_0] [10U] [i_2])))) == (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_13 [i_2] [i_2] [i_2] [i_2] [i_0])) == (((/* implicit */int) arr_12 [i_2] [i_2] [i_2] [i_2] [i_0] [i_0]))))) <= (((/* implicit */int) ((((/* implicit */_Bool) 4294967294U)) || (((/* implicit */_Bool) arr_10 [i_2] [i_2] [8ULL] [i_1] [8ULL] [i_2]))))))))));
                    var_22 = ((/* implicit */signed char) (((-(arr_6 [i_0] [i_0] [i_0]))) + (((((/* implicit */_Bool) 6120410939152727849LL)) ? (((/* implicit */int) arr_5 [i_2] [i_1])) : (((/* implicit */int) arr_5 [i_2] [i_1]))))));
                }
            } 
        } 
    }
}
