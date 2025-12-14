/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2015
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
    var_12 = ((/* implicit */signed char) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)234))) : (min((min((4294967295U), (((/* implicit */unsigned int) (unsigned short)65535)))), (((/* implicit */unsigned int) var_7))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2]))) % (((((/* implicit */_Bool) arr_8 [i_2] [i_0])) ? (arr_8 [(unsigned short)4] [(unsigned short)4]) : (((/* implicit */long long int) 0U))))));
                    var_14 = ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2] [i_1]))) != ((~((-9223372036854775807LL - 1LL)))));
                    var_15 |= ((/* implicit */signed char) arr_4 [i_1] [i_1]);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        for (int i_4 = 0; i_4 < 11; i_4 += 3) 
        {
            {
                /* LoopNest 3 */
                for (short i_5 = 0; i_5 < 11; i_5 += 1) 
                {
                    for (unsigned int i_6 = 3; i_6 < 10; i_6 += 3) 
                    {
                        for (long long int i_7 = 0; i_7 < 11; i_7 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_4]))) : (arr_7 [i_5])))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))))) : (max((((/* implicit */unsigned long long int) arr_3 [i_5] [i_7])), (arr_17 [i_3] [i_3] [(unsigned short)0])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_21 [i_3] [i_3] [i_5] [i_6])))) : (((((/* implicit */_Bool) max((-9223372036854775790LL), (((/* implicit */long long int) (unsigned short)65535))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_2)))) : (((((/* implicit */_Bool) (short)510)) ? (arr_24 [0ULL] [i_4] [i_4] [i_6 + 1] [i_7] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))))))));
                                arr_26 [i_3] [i_3] [i_3] [i_6 + 1] [i_4] [i_7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_19 [i_4]), (arr_19 [i_4]))))));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) var_10))));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
}
