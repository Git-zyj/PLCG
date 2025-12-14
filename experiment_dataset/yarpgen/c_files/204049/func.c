/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204049
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) 7340227831615881737LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) 10472948135999087370ULL)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) : (var_6)))) : (var_7)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)79))) - ((-(min((arr_2 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0 - 1] [i_0 - 1]))))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    arr_9 [i_1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (-7340227831615881751LL) : (((((/* implicit */_Bool) ((223294244U) * (4071673051U)))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_1 [i_0] [i_1]) <= (((/* implicit */unsigned long long int) 223294245U)))))) : (-7340227831615881739LL)))));
                    var_16 = ((/* implicit */unsigned int) -7340227831615881764LL);
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((int) -7340227831615881739LL))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 4071673064U)) ? (((/* implicit */int) ((4071673051U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52661)))))) : ((+(((/* implicit */int) (unsigned short)12875))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 10266368890360017144ULL)) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_1])) : (((/* implicit */int) (unsigned char)146))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 7340227831615881738LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))) : (223294250U)))) : ((+(arr_5 [i_0] [i_2])))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 14; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) ((unsigned short) ((((((/* implicit */_Bool) (unsigned short)12874)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (223294244U))) + (((arr_10 [i_3] [i_1] [i_1] [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52684))))))));
                                arr_14 [i_0 + 1] [i_1] [i_2] [i_1] [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4071673025U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52661))) : (arr_2 [i_0] [6U])));
                                arr_15 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) min((223294244U), (223294232U)))) < (((((/* implicit */_Bool) arr_1 [i_0 + 2] [i_0])) ? (((/* implicit */unsigned long long int) -7340227831615881739LL)) : (arr_1 [i_0 - 3] [i_4])))));
                            }
                        } 
                    } 
                    arr_16 [i_1] = (+(((((/* implicit */int) arr_0 [i_0] [i_1])) + (((((/* implicit */int) arr_0 [13LL] [i_0])) + (((/* implicit */int) (unsigned short)52659)))))));
                }
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_10 [i_0 - 1] [i_1] [(signed char)6] [i_1]) + (arr_10 [i_0 + 1] [i_1] [i_1] [i_1])))) ? (3400799478493799319ULL) : (((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) (signed char)127)), (223294259U))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_0 + 1] [i_0 + 1]))))))));
            }
        } 
    } 
    var_20 -= ((/* implicit */long long int) var_13);
}
