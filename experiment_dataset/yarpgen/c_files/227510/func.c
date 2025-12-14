/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227510
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
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = (+(2917281265U));
                    var_16 = ((/* implicit */short) arr_6 [i_0] [i_0] [i_2]);
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        var_17 *= ((/* implicit */unsigned long long int) ((1520391332) + (((/* implicit */int) (signed char)-1))));
                        /* LoopSeq 3 */
                        for (short i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            arr_14 [i_4] [i_4] [i_2] [i_0] [i_4] [i_0] = ((/* implicit */unsigned char) arr_13 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]);
                            var_18 |= ((/* implicit */signed char) 9223372036854775795LL);
                            arr_15 [i_4] [i_4] = ((/* implicit */_Bool) arr_4 [i_1]);
                            arr_16 [i_0] [i_3] [i_4] [i_1] [i_0] = ((/* implicit */unsigned char) var_11);
                            var_19 = ((/* implicit */unsigned short) 6443038U);
                        }
                        for (long long int i_5 = 0; i_5 < 20; i_5 += 2) /* same iter space */
                        {
                            var_20 -= ((/* implicit */short) ((((((/* implicit */int) (unsigned char)0)) & (((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1] [i_2 + 2])))) == (((/* implicit */int) (_Bool)0))));
                            var_21 = ((/* implicit */unsigned short) 1610117946);
                            var_22 = ((/* implicit */short) arr_4 [i_2]);
                        }
                        /* vectorizable */
                        for (long long int i_6 = 0; i_6 < 20; i_6 += 2) /* same iter space */
                        {
                            arr_22 [i_0] [i_1] [i_3] = ((/* implicit */int) ((((/* implicit */int) arr_13 [i_2] [i_3] [i_3] [i_2] [i_2] [i_3] [i_2 - 1])) > (((/* implicit */int) arr_13 [i_1] [i_6] [i_1] [i_6] [i_1] [i_1] [i_2 - 1]))));
                            arr_23 [i_3] [i_3] [i_2] [i_0] [i_0] = ((/* implicit */signed char) var_5);
                            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (~(-2051887218147143191LL))))));
                            arr_24 [i_6] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) arr_11 [i_0] [i_0] [i_0] [i_2] [i_0] [i_3] [i_6]);
                        }
                    }
                    /* vectorizable */
                    for (signed char i_7 = 0; i_7 < 20; i_7 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_8 = 0; i_8 < 20; i_8 += 1) 
                        {
                            var_24 = ((/* implicit */short) (+(((/* implicit */int) var_3))));
                            var_25 = ((/* implicit */unsigned short) arr_20 [i_0] [i_1] [i_0] [i_0] [i_2 + 1] [i_1]);
                        }
                        arr_29 [i_7] [i_7] [i_7] [i_7] [i_7] |= ((/* implicit */long long int) (+(((/* implicit */int) arr_17 [i_2 + 1] [i_1 - 1]))));
                    }
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */short) ((((((/* implicit */int) var_10)) & (var_2))) / (var_5)));
    var_27 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (!(((/* implicit */_Bool) 0ULL))))) | (((/* implicit */int) (unsigned char)255)))) != (((/* implicit */int) var_15))));
    var_28 = ((/* implicit */unsigned char) (unsigned short)9101);
    /* LoopSeq 1 */
    for (signed char i_9 = 0; i_9 < 17; i_9 += 2) 
    {
        arr_32 [i_9] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)252))));
        var_29 = ((/* implicit */int) max((var_29), ((+(((/* implicit */int) (_Bool)1))))));
        arr_33 [i_9] [i_9] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) var_6)))))) > (((4391901388877931188ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))));
        var_30 = ((/* implicit */short) (signed char)0);
    }
}
