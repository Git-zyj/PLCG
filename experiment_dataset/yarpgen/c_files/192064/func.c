/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192064
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_18 = min((min((arr_9 [i_4 - 1] [i_1] [i_2]), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) > (0)))))), (((/* implicit */long long int) var_11)));
                                var_19 += ((/* implicit */unsigned short) (-(((/* implicit */int) arr_7 [i_0] [i_1 - 1] [i_0] [i_3] [i_3]))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_5 [i_1] [i_0])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_17))))))) ? (min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) var_5)), (var_16)))), (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1)))))));
                        var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(var_15))))));
                    }
                    var_22 = ((/* implicit */_Bool) var_14);
                    /* LoopSeq 2 */
                    for (unsigned int i_6 = 3; i_6 < 22; i_6 += 2) /* same iter space */
                    {
                        var_23 = ((/* implicit */int) (_Bool)1);
                        var_24 = ((/* implicit */signed char) ((((/* implicit */int) var_5)) != (((((/* implicit */_Bool) max(((unsigned short)55075), (((/* implicit */unsigned short) (_Bool)1))))) ? (((/* implicit */int) min((arr_16 [i_0] [i_1 - 1] [i_1 - 1] [18LL]), (((/* implicit */unsigned short) var_9))))) : (((/* implicit */int) var_8))))));
                        arr_18 [i_0] [i_1] [i_2] [i_6] [i_1] = ((/* implicit */_Bool) min(((((!(((/* implicit */_Bool) arr_13 [i_0] [(signed char)10] [i_2] [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_12 [i_1] [i_1] [(short)22] [(short)13] [i_1 - 1] [i_1] [i_1]))), (((/* implicit */long long int) (_Bool)0))));
                        var_25 -= ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [22ULL] [i_2] [i_0])) ? (arr_4 [i_0] [i_0]) : (((/* implicit */unsigned long long int) 1739088516))))))))));
                    }
                    for (unsigned int i_7 = 3; i_7 < 22; i_7 += 2) /* same iter space */
                    {
                        var_26 = ((/* implicit */long long int) var_1);
                        var_27 = ((/* implicit */unsigned long long int) ((unsigned int) max((((/* implicit */unsigned short) var_16)), (var_17))));
                    }
                    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((!((_Bool)1))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_1])) : (((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_1]))))) : (var_7)))) ? (((/* implicit */int) min((max((((/* implicit */signed char) arr_1 [i_2])), (arr_7 [i_0] [4] [i_0] [i_0] [i_2]))), (((/* implicit */signed char) min(((_Bool)1), ((_Bool)1))))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_0])) && ((_Bool)0))))));
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */_Bool) var_9);
    var_30 &= ((/* implicit */signed char) var_2);
    var_31 = ((/* implicit */long long int) var_13);
}
