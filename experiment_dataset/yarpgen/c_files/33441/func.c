/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33441
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
    var_18 = ((/* implicit */long long int) (-(var_0)));
    var_19 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */int) ((((/* implicit */int) var_9)) == (((/* implicit */int) var_14))))) % ((+(((/* implicit */int) var_8)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 1; i_2 < 12; i_2 += 3) 
                {
                    arr_6 [i_2] = ((((((/* implicit */_Bool) arr_5 [i_2 + 1] [i_2] [i_2])) ? (arr_5 [i_2 + 1] [i_2 + 1] [i_2 + 1]) : (arr_5 [i_2 + 1] [i_2 + 1] [i_2 + 1]))) - (arr_5 [i_2 + 1] [i_1] [i_2]));
                    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) var_12)) : (arr_5 [i_0] [i_2 - 1] [i_2 - 1])))) ? (((/* implicit */unsigned long long int) min((((var_1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_15)))), (((/* implicit */int) var_5))))) : (max((((13634389762639756979ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(signed char)12]))))), (((/* implicit */unsigned long long int) var_17)))))))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_10 [(signed char)2] [(signed char)2] [i_3] = ((/* implicit */signed char) var_7);
                    arr_11 [i_0] &= ((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */short) var_11)), (var_5)))) > (((/* implicit */int) ((arr_3 [i_0]) < (arr_3 [i_3]))))));
                }
                arr_12 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_5);
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 13; i_4 += 4) 
                {
                    for (int i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        {
                            var_21 &= ((/* implicit */long long int) ((((((/* implicit */_Bool) ((var_14) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_15 [10ULL] [i_4] [i_0] [10ULL]))))) ? ((-(((/* implicit */int) var_1)))) : (((var_6) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_9 [i_0] [i_4] [i_4] [i_5])))))) != ((~(((((/* implicit */int) var_10)) & (((/* implicit */int) var_5))))))));
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_17))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_11)))) : (((((/* implicit */int) arr_16 [i_5] [i_1] [i_4])) * (((/* implicit */int) (_Bool)1))))))) ? ((+(min((var_7), (((/* implicit */long long int) (unsigned char)152)))))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_9 [i_5] [i_4] [i_1] [i_0])))))));
                            var_23 = ((/* implicit */unsigned short) arr_0 [i_4]);
                        }
                    } 
                } 
                var_24 = ((/* implicit */long long int) ((signed char) ((max((var_7), (((/* implicit */long long int) var_16)))) * (((/* implicit */long long int) (-(((/* implicit */int) var_5))))))));
            }
        } 
    } 
    var_25 = ((/* implicit */signed char) var_0);
    var_26 = ((/* implicit */int) ((((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) == (var_0)))) * (((/* implicit */long long int) ((/* implicit */int) var_16)))));
}
