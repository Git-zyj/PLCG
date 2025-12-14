/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211058
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned int) (((+(-368485517869822418LL))) != (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1]))))) : (((/* implicit */int) min(((short)0), (((/* implicit */short) arr_5 [i_0] [i_0] [i_0]))))))))));
                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) min((((/* implicit */long long int) ((unsigned char) var_9))), (((((((/* implicit */long long int) ((/* implicit */int) (short)9))) > (-210988382766442768LL))) ? (-210988382766442768LL) : (210988382766442764LL))))))));
            }
        } 
    } 
    var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (1326184227495230548ULL) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))))) ? (((/* implicit */long long int) min((min((((/* implicit */int) (short)-21094)), (-424110214))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7))))))) : (-21LL));
    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((((((/* implicit */int) var_1)) + (2147483647))) >> (((((/* implicit */int) var_10)) + (83))))) == (((((/* implicit */int) (signed char)123)) << (((((((/* implicit */int) (short)-3)) + (31))) - (28))))))))) > (var_14))))));
    /* LoopNest 3 */
    for (short i_2 = 3; i_2 < 17; i_2 += 2) 
    {
        for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
        {
            for (long long int i_4 = 0; i_4 < 21; i_4 += 3) 
            {
                {
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)-18)), (-210988382766442775LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_13)) + (((/* implicit */int) (short)-30286)))))))) : (((/* implicit */int) ((short) ((short) (signed char)(-127 - 1)))))));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        for (short i_6 = 1; i_6 < 17; i_6 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) 210988382766442772LL);
                                arr_21 [i_5] [i_6] [i_4] [i_5] [i_2] [i_2] [i_4] = ((/* implicit */unsigned char) (((~(max((210988382766442767LL), (((/* implicit */long long int) var_4)))))) + (((/* implicit */long long int) ((/* implicit */int) (((-(((/* implicit */int) (short)-17757)))) < (((/* implicit */int) arr_17 [i_2] [i_2] [i_6 + 3] [i_5] [i_2 - 3]))))))));
                                arr_22 [i_3] [i_3] [i_4] [i_5] [i_6] [i_2] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */int) ((((/* implicit */long long int) ((-424110214) & (((/* implicit */int) arr_18 [i_3] [i_5] [i_6]))))) != ((+(5538438478673361286LL)))))) : (((((/* implicit */int) (!(((/* implicit */_Bool) 210988382766442790LL))))) - (((/* implicit */int) ((((/* implicit */int) var_6)) > (((/* implicit */int) var_0)))))))));
                            }
                        } 
                    } 
                    arr_23 [i_2] [i_2] = ((/* implicit */short) arr_14 [i_2] [i_2] [i_3] [i_4] [i_4] [i_4]);
                    arr_24 [i_2] [i_2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))));
                }
            } 
        } 
    } 
}
