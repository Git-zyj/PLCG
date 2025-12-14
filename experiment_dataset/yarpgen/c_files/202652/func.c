/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202652
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
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */short) (-(((/* implicit */int) var_2))));
                    var_11 = ((/* implicit */signed char) (+(14252480859874095666ULL)));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) (signed char)127);
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 3) 
    {
        for (long long int i_4 = 1; i_4 < 13; i_4 += 2) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_5 = 3; i_5 < 11; i_5 += 1) 
                {
                    var_13 ^= ((/* implicit */long long int) 11172723326406962734ULL);
                    var_14 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_14 [i_4 + 1])) : (((/* implicit */int) arr_14 [i_4 + 1]))));
                    var_15 = ((/* implicit */unsigned short) max((var_15), ((unsigned short)43728)));
                }
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    var_16 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53923))) - (arr_13 [i_6 + 1] [i_4 - 1] [i_4 - 1])))));
                    arr_21 [i_3] [i_3] [i_6] = ((/* implicit */unsigned int) arr_20 [i_3] [i_3] [i_6 + 1]);
                    arr_22 [i_3] [i_4] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_3] [i_4] [i_4] [i_6 + 1]))))) / ((+(((/* implicit */int) var_9))))));
                    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_6 + 1] [17ULL] [i_6 + 1]))))), (((((/* implicit */_Bool) arr_6 [i_4 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_6 [i_4 - 1]))))))));
                }
                for (long long int i_7 = 2; i_7 < 13; i_7 += 4) 
                {
                    var_18 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_0 [i_3])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)16831))))) : (((/* implicit */int) (!(arr_10 [i_4 - 1]))))));
                    arr_25 [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) | ((~(((/* implicit */int) var_1))))));
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1357177167)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_17 [i_3] [i_4 + 1] [i_7] [(signed char)5])));
                }
                /* LoopNest 3 */
                for (long long int i_8 = 0; i_8 < 14; i_8 += 2) 
                {
                    for (short i_9 = 0; i_9 < 14; i_9 += 2) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (((((!(((/* implicit */_Bool) 8432109103990346449ULL)))) ? (arr_20 [i_9] [(short)8] [i_4 - 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) / (arr_17 [i_9] [i_4 - 1] [i_4 - 1] [i_9])))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-4))))))));
                                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) 2840615147U))));
                                var_22 = (i_3 % 2 == 0) ? (((/* implicit */_Bool) ((min((12482924734610020576ULL), (arr_13 [i_4 + 1] [i_4 + 1] [i_4 + 1]))) & (((/* implicit */unsigned long long int) ((((-878608770) + (2147483647))) << (((arr_17 [i_3] [i_3] [i_4 + 1] [i_4 - 1]) - (7619648059263744559LL))))))))) : (((/* implicit */_Bool) ((min((12482924734610020576ULL), (arr_13 [i_4 + 1] [i_4 + 1] [i_4 + 1]))) & (((/* implicit */unsigned long long int) ((((-878608770) + (2147483647))) << (((((((arr_17 [i_3] [i_3] [i_4 + 1] [i_4 - 1]) - (7619648059263744559LL))) + (5030061145725182333LL))) - (30LL)))))))));
                                arr_34 [i_3] [i_4 - 1] [i_8] [i_9] [i_3] = ((/* implicit */unsigned long long int) (unsigned short)60130);
                                var_23 -= ((/* implicit */signed char) (+(((((/* implicit */long long int) (-(((/* implicit */int) var_2))))) ^ (var_0)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
