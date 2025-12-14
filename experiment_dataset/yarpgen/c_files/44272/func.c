/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44272
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
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */int) (((-(var_5))) == (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7)))))))) >= (min(((~(((/* implicit */int) (short)14755)))), (((/* implicit */int) var_1))))));
    var_12 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (+((~(70366596694016LL)))))), (5107139264630382520ULL)));
    var_13 = ((/* implicit */_Bool) var_10);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    var_14 ^= ((/* implicit */_Bool) 10350119406462639114ULL);
                    arr_9 [i_0] [i_1] [11U] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)5232)) ? (10350119406462639122ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_16 [i_0] [(unsigned char)1] [i_0] [(unsigned char)1] = ((/* implicit */int) ((508U) | (((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_4 + 1] [i_0 - 1])))))));
                                arr_17 [i_0] [i_1] [i_1] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */short) 5619801325446986114LL);
                            }
                        } 
                    } 
                }
                for (short i_5 = 0; i_5 < 12; i_5 += 2) 
                {
                    /* LoopNest 2 */
                    for (short i_6 = 1; i_6 < 8; i_6 += 3) 
                    {
                        for (unsigned int i_7 = 3; i_7 < 9; i_7 += 3) 
                        {
                            {
                                arr_26 [i_0] [i_7] [(_Bool)1] [(unsigned short)7] [i_7] = arr_19 [(_Bool)1] [i_5] [i_6] [i_7];
                                var_15 ^= ((((/* implicit */int) var_3)) & (((((/* implicit */int) ((_Bool) (_Bool)1))) % ((-(((/* implicit */int) arr_18 [i_5] [(signed char)11] [4])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 2; i_8 < 10; i_8 += 1) 
                    {
                        for (unsigned int i_9 = 2; i_9 < 11; i_9 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0] [i_0 + 3])))) ? ((+(7089677325536160082ULL))) : (((/* implicit */unsigned long long int) arr_13 [i_0 + 1] [i_8 + 2]))));
                                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_11 [i_8] [i_8] [i_8 + 1] [i_8 - 2] [(signed char)2] [i_8 + 1])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_1]))) * (10350119406462639122ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 1] [i_1]))))) * (((/* implicit */unsigned long long int) min(((-(42520836U))), ((((_Bool)1) ? (1303339641U) : (531U)))))))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned char) arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                    arr_31 [i_0] [(unsigned char)10] [(unsigned char)10] [(unsigned char)10] = ((/* implicit */unsigned short) (((+(2948370779U))) - (2948370769U)));
                }
                var_19 = ((/* implicit */long long int) max((var_19), ((+(((((/* implicit */_Bool) arr_20 [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-64))) : (arr_20 [i_0 + 1])))))));
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) (short)-20252)), (1073404668U))))));
                arr_32 [i_0] = ((/* implicit */unsigned short) (-(508440603U)));
                arr_33 [i_0] = (!((!(((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 + 2])))));
            }
        } 
    } 
}
