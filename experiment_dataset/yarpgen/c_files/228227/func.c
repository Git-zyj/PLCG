/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228227
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
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_0)) ? (-1980270289) : (((/* implicit */int) (unsigned short)61571)))), (((/* implicit */int) (unsigned short)61570))))) ? (((max((((/* implicit */int) (short)32767)), (var_5))) % (((/* implicit */int) ((signed char) arr_3 [i_0] [i_0]))))) : (((((/* implicit */int) min((arr_0 [i_1]), ((unsigned short)11)))) - (max((2147483647), (((/* implicit */int) (_Bool)1))))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 2; i_2 < 17; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((+(arr_3 [17LL] [17LL]))), (((/* implicit */long long int) (~(((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_3] [i_0])))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_3] [i_2]))))) : (((/* implicit */int) (unsigned short)3964))));
                                var_12 = ((/* implicit */unsigned short) (((~(max((((/* implicit */int) (unsigned short)7)), (arr_2 [i_0]))))) & (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)61585)) ? (((/* implicit */int) arr_1 [i_3] [i_0])) : (var_3)))) < (min((((/* implicit */unsigned long long int) var_9)), (arr_8 [i_0] [i_1 - 1] [i_2] [i_1]))))))));
                                arr_12 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~((-(((/* implicit */int) arr_9 [i_1])))))))));
                            }
                        } 
                    } 
                } 
                arr_13 [i_1] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0 + 1] [i_1] [i_0 + 1] [i_0] [i_0 + 1]))) - (2612092616U)))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_3 [i_0] [i_1]))));
                arr_14 [i_0] [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1))))), (2358387855U))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_5 = 0; i_5 < 20; i_5 += 3) 
    {
        for (short i_6 = 0; i_6 < 20; i_6 += 1) 
        {
            for (short i_7 = 4; i_7 < 17; i_7 += 3) 
            {
                {
                    arr_25 [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) arr_21 [i_6] [i_7] [i_7 - 3]))) ? (arr_15 [i_7]) : (((/* implicit */long long int) -810914994))));
                    arr_26 [i_5] [i_6] [i_6] = ((/* implicit */int) ((((((unsigned long long int) var_5)) + (arr_20 [i_7 + 1]))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_6])))));
                }
            } 
        } 
    } 
}
