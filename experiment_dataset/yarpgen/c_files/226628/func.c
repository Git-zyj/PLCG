/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226628
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */short) ((((/* implicit */int) min((((unsigned short) arr_3 [i_2])), (((/* implicit */unsigned short) ((((/* implicit */int) (short)-1)) >= (((/* implicit */int) (short)29256)))))))) & (((/* implicit */int) var_15))));
                                arr_10 [i_0] [i_1] [i_2] [i_3] [i_2] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) ^ (((((/* implicit */_Bool) 2783394435U)) ? (-4447444979149166486LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [i_3] [i_4])))))))) ? (min((arr_1 [i_0] [i_1]), (((/* implicit */long long int) var_13)))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) (short)7909)), (var_5)))));
                            }
                        } 
                    } 
                    arr_11 [i_0] [i_1] [i_1] = ((/* implicit */short) arr_4 [i_1] [i_1] [i_2] [i_0]);
                }
                /* vectorizable */
                for (long long int i_5 = 0; i_5 < 20; i_5 += 4) /* same iter space */
                {
                    arr_14 [i_0] [i_0] [i_5] [i_1] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32761))) : (arr_4 [i_0] [i_0] [i_1] [i_5]))));
                    var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_13))));
                }
                for (long long int i_6 = 0; i_6 < 20; i_6 += 4) /* same iter space */
                {
                    arr_19 [i_6] [i_6] [i_1] [i_0] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (short)-8768)) ? (3018530571U) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))));
                    var_22 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? ((~((~(((/* implicit */int) (signed char)-64)))))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? ((~(((/* implicit */int) (signed char)(-127 - 1))))) : (((/* implicit */int) (_Bool)0))))));
                    arr_20 [i_0] [i_1] = ((((/* implicit */_Bool) min((((((/* implicit */int) (signed char)127)) | (((/* implicit */int) arr_15 [i_0] [i_0])))), (((/* implicit */int) min(((short)-17939), (((/* implicit */short) var_6)))))))) ? (((((/* implicit */_Bool) min((-5911333265029018939LL), (((/* implicit */long long int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3115154540U)) ? (((/* implicit */int) var_13)) : (96)))) : (((267911168U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)3))))))) : (((1861141170U) & (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)15)) & (var_1)))))));
                }
                for (long long int i_7 = 0; i_7 < 20; i_7 += 4) /* same iter space */
                {
                    var_23 = ((/* implicit */signed char) ((((((/* implicit */long long int) 133169152)) / (arr_1 [i_0] [i_1]))) * (((/* implicit */long long int) min((((((/* implicit */int) (unsigned char)140)) * (((/* implicit */int) var_13)))), (((((/* implicit */_Bool) (short)8188)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_7] [i_7])))))))));
                    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) (_Bool)1))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6))));
                    arr_23 [i_0] [i_1] [i_7] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (2147483647) : ((+(((/* implicit */int) (signed char)-3))))))) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) ((min((3458764513820540928LL), (5296775675888575161LL))) > (((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (-1LL)))))))));
                    arr_24 [i_0] [i_1] [i_1] [i_7] = ((/* implicit */long long int) var_7);
                    arr_25 [i_7] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-91)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                }
                arr_26 [i_0] &= ((/* implicit */long long int) (+(((/* implicit */int) ((signed char) (+(((/* implicit */int) (signed char)35))))))));
            }
        } 
    } 
    var_25 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9))))) == (7911971970786918323LL))))) == (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)54))))) ? (((/* implicit */unsigned int) min((var_1), (((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) (signed char)-114)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))))));
    var_26 = var_7;
}
