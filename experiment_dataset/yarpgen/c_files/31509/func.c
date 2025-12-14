/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31509
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
    for (short i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] &= max((((/* implicit */long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 744586938U))))), (min((((/* implicit */unsigned int) arr_1 [i_0])), (226577717U)))))), (arr_0 [i_0]));
                var_15 = ((/* implicit */signed char) ((unsigned long long int) max((arr_4 [i_0 - 2] [i_0 + 1] [i_0 + 1]), (((/* implicit */unsigned short) (short)-9007)))));
                var_16 ^= ((/* implicit */int) ((unsigned short) min(((+(((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))), (((/* implicit */int) max(((short)-9007), ((short)-9003)))))));
            }
        } 
    } 
    var_17 = ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_13))))))) + (max((((/* implicit */long long int) var_4)), ((~(var_1))))));
    var_18 = ((/* implicit */unsigned short) var_9);
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (short)8988)) : (((/* implicit */int) (signed char)0))));
    /* LoopNest 3 */
    for (short i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            for (signed char i_4 = 0; i_4 < 21; i_4 += 3) 
            {
                {
                    var_20 *= ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) 71296049)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)64))) : (arr_6 [i_3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-9004), (var_11)))))))));
                    arr_12 [i_2] [i_2] [i_4] [i_2] = var_8;
                    arr_13 [i_2] [i_4] = ((/* implicit */int) max((min(((unsigned short)30364), ((unsigned short)65526))), (((/* implicit */unsigned short) ((signed char) arr_6 [i_2])))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (max((((/* implicit */long long int) arr_11 [i_2] [i_3])), (((((/* implicit */long long int) ((/* implicit */int) var_2))) / (8885251907191329606LL))))) : (((((/* implicit */_Bool) var_5)) ? (max((3937301517518431910LL), (((/* implicit */long long int) (signed char)12)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)63079)) : (2008917327))))))));
                                var_22 = var_13;
                            }
                        } 
                    } 
                    var_23 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_4])) / (var_9)))) : (((((/* implicit */_Bool) (unsigned short)44263)) ? (arr_6 [i_2]) : (arr_7 [i_2])))))) ? (max((((/* implicit */unsigned long long int) var_6)), (var_14))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2627667120687259437LL)) ? (-2713635486948767256LL) : (((/* implicit */long long int) 1090389141U)))))));
                }
            } 
        } 
    } 
}
