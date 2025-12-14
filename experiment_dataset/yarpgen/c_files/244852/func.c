/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244852
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
    for (long long int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (signed char i_2 = 2; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 14; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_1] [i_2] [i_3] [i_1] [i_4] = ((/* implicit */unsigned char) min((4611686018427387903ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_4 [i_1] [(unsigned char)2] [i_3])))) ? (-4907810937372086518LL) : (((((/* implicit */_Bool) 13835058055282163707ULL)) ? (arr_12 [13] [13] [i_2] [13] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)222))))))))));
                                var_14 = (signed char)8;
                                arr_14 [i_3] = ((/* implicit */unsigned long long int) 8323072LL);
                                arr_15 [i_0] [i_0] [i_2] [i_0] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_9 [i_0 - 1] [i_1] [i_2 - 1] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 1] [i_0]))) : (13835058055282163712ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_9 [i_0] [8LL] [i_2] [i_3 + 1]))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        for (long long int i_6 = 0; i_6 < 15; i_6 += 1) 
                        {
                            {
                                var_15 -= ((/* implicit */int) ((long long int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) < (3196741166373860167ULL)))));
                                var_16 = ((/* implicit */unsigned int) max((4611686018427387900ULL), (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)188)), (arr_17 [i_5] [i_2 - 1] [i_0 - 1] [i_0 - 1]))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */signed char) (_Bool)1);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 2) 
    {
        for (int i_8 = 2; i_8 < 23; i_8 += 4) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    arr_28 [i_9] [i_7] [i_7] [i_7] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_22 [i_8 - 1] [i_8 + 1])))) ? (((unsigned long long int) arr_22 [i_8 + 1] [i_8 - 1])) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_8 + 1] [i_8 - 1])))));
                    arr_29 [21LL] [i_8] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-37)) : (((/* implicit */int) var_7))))) % ((+(var_6))))))));
                    var_18 ^= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-33)), (var_7))))))) + ((+(((((/* implicit */_Bool) (unsigned char)48)) ? (var_6) : (((/* implicit */long long int) var_12))))))));
                    var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((signed char) arr_22 [i_8 + 1] [i_8]))), (((((/* implicit */_Bool) arr_22 [i_8 + 1] [i_8 - 1])) ? (((/* implicit */int) arr_22 [i_8 + 1] [i_8 + 1])) : (((/* implicit */int) arr_22 [i_8 + 1] [i_8 - 1]))))));
                    arr_30 [i_7] [i_8 - 2] [i_9] [13] |= ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) > ((+(((/* implicit */int) (signed char)-54))))));
                }
            } 
        } 
    } 
}
