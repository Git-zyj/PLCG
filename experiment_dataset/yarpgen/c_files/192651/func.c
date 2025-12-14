/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192651
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
    var_16 = ((/* implicit */unsigned char) var_10);
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */short) min((((((/* implicit */_Bool) ((arr_2 [i_0] [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((((/* implicit */_Bool) 2147483647)) ? (var_7) : (((/* implicit */unsigned long long int) -2147483647)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)896))))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-64)))))));
                    arr_7 [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)0)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)21346)) : (((/* implicit */int) var_15))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)31)) <= (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 2]))) <= (min((((/* implicit */long long int) 0U)), (-1473890709258408694LL)))))))))));
                                var_19 = ((/* implicit */short) ((unsigned char) (!(((/* implicit */_Bool) 2147483637)))));
                                arr_12 [i_4] [(signed char)12] [(signed char)12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */short) arr_9 [i_0] [i_0 - 3] [i_0 - 3] [i_0] [i_0])), (arr_8 [i_0 - 2] [i_1] [i_4] [i_3])))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min((var_5), (((/* implicit */unsigned short) (signed char)64))))), (min((var_3), (290319197U)))))) : (((((/* implicit */_Bool) arr_4 [i_1])) ? (((((/* implicit */_Bool) arr_0 [i_3] [i_4])) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2421))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))));
                                var_20 += ((/* implicit */unsigned short) var_11);
                            }
                        } 
                    } 
                    var_21 += ((/* implicit */unsigned short) ((min((((/* implicit */unsigned int) (-2147483647 - 1))), (var_0))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) -3570596717110458338LL))))));
                    arr_13 [i_2] [i_1] [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)65)) ? (var_0) : (1274606732U))) >> (((((/* implicit */int) arr_5 [i_0] [i_1] [i_0] [i_0 + 2])) - (22103)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19697))) : ((+(min((((/* implicit */unsigned long long int) (unsigned short)21999)), (arr_11 [i_2])))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) var_15);
    var_23 = ((/* implicit */unsigned char) (short)-2421);
}
