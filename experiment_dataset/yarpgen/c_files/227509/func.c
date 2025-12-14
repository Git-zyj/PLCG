/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227509
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_0 [(signed char)13]))))))) ? (((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned short)17873)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_0 [i_1])))), (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)12965)) : (((/* implicit */int) (unsigned short)10))))))) : (min((arr_2 [(short)6]), (((/* implicit */unsigned int) ((arr_4 [i_0] [i_1]) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_1 [i_0])))))))));
                var_13 += ((/* implicit */signed char) min((min(((+(507904))), (((/* implicit */int) min((arr_3 [i_1]), (((/* implicit */short) (signed char)-36))))))), (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_3 [i_1]))))))));
                arr_6 [i_0] = ((/* implicit */_Bool) (+(max((((/* implicit */unsigned int) min((arr_3 [i_1]), (((/* implicit */short) arr_0 [i_0]))))), (((((/* implicit */_Bool) arr_5 [i_1] [11ULL] [i_1])) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1])))))))));
                var_14 = ((/* implicit */_Bool) (-((~((-(((/* implicit */int) arr_0 [i_1]))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        for (int i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            for (short i_4 = 1; i_4 < 10; i_4 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) arr_8 [i_2]);
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 11; i_6 += 2) 
                        {
                            {
                                arr_19 [i_2] [i_2] [i_4] [i_5] [i_5] [i_6] &= ((/* implicit */int) arr_3 [i_2]);
                                arr_20 [i_2] [i_3] [i_3] [i_4] [i_5] [i_6] [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)108)) ? (((/* implicit */int) (unsigned char)59)) : (((/* implicit */int) (signed char)-29)))))));
                                var_16 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)26))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0))))), (arr_5 [i_2] [i_3] [(unsigned short)15])));
                }
            } 
        } 
    } 
    var_18 = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) var_2)), (var_9)))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)37)), ((unsigned char)246)))) : (((var_10) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4))))))), (((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) var_7)) ? (var_6) : (var_6))))));
}
