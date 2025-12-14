/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197989
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
    /* LoopNest 3 */
    for (signed char i_0 = 4; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned int i_2 = 3; i_2 < 12; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */unsigned int) min((((((/* implicit */int) max((((/* implicit */short) var_9)), ((short)3740)))) << (((((/* implicit */int) var_4)) - (13))))), (((((/* implicit */_Bool) 4694924732769118882ULL)) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) (signed char)(-127 - 1)))))));
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_11 = ((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2]))) / (arr_3 [i_1] [i_3])))))));
                        arr_11 [i_0] [i_1] [i_2] [i_2] [6ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_0] [i_2 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_4 [i_0 - 3] [i_1]), ((signed char)-91))))) : (min((144044819331678208ULL), (11289039965928523381ULL)))))) ? (min((((/* implicit */unsigned int) (_Bool)1)), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)108))) ^ (3402135669U))))) : (((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (3402135675U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (_Bool)1))))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_15 [i_2] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_7 [i_0] [(signed char)5] [1U] [i_2])), (12339170698824296071ULL)));
                        var_12 = ((/* implicit */_Bool) min((((var_1) ? (((/* implicit */int) arr_6 [i_0 - 1] [i_0 - 2] [i_2 + 1])) : (((/* implicit */int) arr_6 [i_0 - 1] [i_0 - 1] [i_2 - 2])))), (((/* implicit */int) (!(var_7))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        var_13 *= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_14 [i_2 + 1]))));
                        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_1) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_2 - 1] [i_0] [i_2] [(_Bool)1])))))) ? ((~(arr_3 [i_0] [i_0 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (_Bool)1))))));
                        arr_19 [i_0] [i_1] |= ((/* implicit */_Bool) (-(3402135696U)));
                        /* LoopSeq 1 */
                        for (signed char i_6 = 3; i_6 < 9; i_6 += 4) 
                        {
                            var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)77)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_3 [i_1] [i_6 + 3]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-81))))))) : (arr_18 [i_6 - 2] [i_6] [i_2 - 3] [i_2 - 1] [i_1])));
                            var_16 = ((/* implicit */signed char) ((arr_10 [i_2] [i_0 - 1] [i_6 - 3]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_6 [i_0] [i_2] [(_Bool)1]))));
                            var_17 = ((/* implicit */_Bool) ((unsigned int) (unsigned short)62025));
                            var_18 = ((/* implicit */_Bool) ((signed char) arr_3 [i_0 - 1] [i_2 - 1]));
                        }
                    }
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) ((unsigned short) var_1));
}
