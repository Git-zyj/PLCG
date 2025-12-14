/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37754
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
    var_12 = ((/* implicit */short) ((unsigned char) (+(((/* implicit */int) min((var_11), (((/* implicit */unsigned short) var_2))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_5 [i_0]))) ? (((((((/* implicit */_Bool) (signed char)10)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0]))))) | (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)27362))) : (14219647875688453188ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned short) ((signed char) max((arr_0 [i_1]), (arr_1 [i_1]))));
                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */short) var_7)), (min((((/* implicit */short) arr_6 [i_1] [(unsigned char)5])), ((short)-11528)))))) ? (((((/* implicit */_Bool) 3457947161U)) ? (((((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1])) & (((/* implicit */int) var_9)))) : (((/* implicit */int) ((unsigned short) var_5))))) : (((/* implicit */int) arr_6 [i_0 + 1] [i_1]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) max((max((arr_12 [i_2] [i_3]), (((/* implicit */short) (_Bool)1)))), (((/* implicit */short) (!(((/* implicit */_Bool) var_5)))))))) || (((/* implicit */_Bool) var_7))));
                /* LoopNest 3 */
                for (short i_4 = 0; i_4 < 15; i_4 += 3) 
                {
                    for (signed char i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 15; i_6 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_20 [i_2] [i_3] [i_2] [i_5]))));
                                var_17 -= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_15 [i_6] [i_5] [i_4] [i_6]))));
                                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) 11089958723583847322ULL))));
                                arr_25 [i_5] [i_5] &= 11089958723583847298ULL;
                                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_3] [i_3] [i_4] [i_5]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_18 [i_3])) : (((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) max((arr_14 [i_2]), (((/* implicit */unsigned short) var_5)))))))) : (max((var_8), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_10 [i_4] [i_5])))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
