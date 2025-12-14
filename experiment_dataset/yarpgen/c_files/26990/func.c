/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26990
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
    var_15 = ((unsigned int) max((((((/* implicit */_Bool) var_10)) ? (var_12) : (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) var_3))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_2 = 4; i_2 < 10; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [1U] [10LL] [6] [i_0] [6] [6] = ((/* implicit */long long int) (_Bool)1);
                                var_16 = (+(((((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [(unsigned short)1] [i_4] [i_0] [i_2])) % (((/* implicit */int) var_1)))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1] [i_1]))) : (18446744073709551615ULL)));
                }
                for (unsigned short i_5 = 0; i_5 < 11; i_5 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 2) 
                    {
                        for (short i_7 = 0; i_7 < 11; i_7 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_7] [i_6] [i_5] [i_5] [i_1] [i_0])) ? (max((((((/* implicit */_Bool) 15664491357527675797ULL)) ? (((/* implicit */long long int) var_4)) : (var_14))), (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))))) : (((/* implicit */long long int) (~(((/* implicit */int) (signed char)93)))))));
                                var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) arr_16 [i_7])) : (7288555647788376790ULL)))) ? (((/* implicit */unsigned long long int) var_2)) : (((unsigned long long int) var_6)))) >= (min(((~(arr_14 [i_7]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 11158188425921174826ULL)))))))));
                            }
                        } 
                    } 
                    arr_20 [i_0] [(short)7] [i_5] = ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) min((2147483647), (var_5))))))), (min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) (signed char)28)) ? (((/* implicit */int) (signed char)-94)) : (((/* implicit */int) (signed char)75))))))));
                }
                arr_21 [i_0] [i_1] = 1847538876;
                var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min(((~(((/* implicit */int) arr_19 [i_0])))), ((-(((/* implicit */int) (_Bool)1)))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) var_0)) : (var_2)))) < (min((var_12), (((/* implicit */unsigned long long int) var_1)))))))) + (var_8)));
}
