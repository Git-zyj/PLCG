/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204079
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
    for (unsigned int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_10 |= ((((/* implicit */int) max((var_3), (arr_5 [i_0] [(_Bool)1])))) + (((/* implicit */int) arr_3 [i_4])));
                                arr_15 [i_4] [i_4] [i_0] |= ((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) 3868904224U)))));
                                arr_16 [i_0] [4LL] [i_1] [(signed char)10] [i_3] [4LL] = ((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) (signed char)-41)), (3868904208U))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_2 + 1] [i_2 + 1])))))));
                            }
                        } 
                    } 
                } 
                arr_17 [6LL] [i_1] = ((/* implicit */unsigned int) ((unsigned short) var_3));
                var_11 = ((/* implicit */int) min(((~(((arr_11 [i_0] [i_0] [i_0] [i_1] [i_1 - 2] [i_0] [i_1]) & (3583961521939233605LL))))), (((/* implicit */long long int) arr_10 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 1]))));
                /* LoopSeq 2 */
                for (int i_5 = 0; i_5 < 18; i_5 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_6 = 1; i_6 < 17; i_6 += 3) 
                    {
                        for (int i_7 = 0; i_7 < 18; i_7 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */int) ((((/* implicit */_Bool) ((2147483647) << (((arr_21 [i_0 - 2] [i_7] [i_6] [i_6 + 1]) - (2830824873U)))))) ? (((((/* implicit */_Bool) arr_21 [i_0 - 2] [i_7] [i_5] [i_6 - 1])) ? (arr_21 [i_0 - 1] [i_7] [i_0 - 1] [i_6 - 1]) : (arr_21 [i_0 - 2] [i_7] [i_1 - 3] [i_6 + 1]))) : (arr_21 [i_0 - 1] [i_7] [i_1] [i_6 + 1])));
                                arr_26 [i_0] [i_1 - 2] [i_5] [i_1] [i_1 - 2] = ((/* implicit */signed char) arr_8 [i_0]);
                            }
                        } 
                    } 
                    arr_27 [i_1] [i_1] [i_1] = 3486816319U;
                }
                for (long long int i_8 = 0; i_8 < 18; i_8 += 3) 
                {
                    arr_30 [i_1] [i_1 - 2] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (+(((/* implicit */int) (_Bool)0)))))) ? ((+(min((arr_20 [i_0 - 1] [i_0 + 1] [i_0] [i_0 - 1] [i_0 - 2]), (((/* implicit */long long int) var_6)))))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1])))));
                    /* LoopNest 2 */
                    for (long long int i_9 = 0; i_9 < 18; i_9 += 1) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 3) 
                        {
                            {
                                var_13 -= ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) arr_25 [i_0] [i_0] [8LL] [i_9] [i_10])))))), (min((((/* implicit */int) arr_5 [i_0 - 2] [i_0])), ((-(((/* implicit */int) (short)22817))))))));
                                var_14 -= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min((arr_24 [i_0 + 1] [i_1 - 3] [i_1 + 1] [i_1 - 1] [16LL]), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (3868904231U))))))), (18446744073709551615ULL)));
                                arr_36 [i_1] = ((/* implicit */short) max((((/* implicit */int) ((unsigned short) arr_28 [i_0 + 1] [i_1 - 3]))), (min((1195826840), (((/* implicit */int) (_Bool)0))))));
                            }
                        } 
                    } 
                }
                var_15 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (signed char)-77)) >= (((/* implicit */int) (short)22794))))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) ((unsigned long long int) var_7));
    var_17 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)251))))), ((-(((/* implicit */int) var_2))))))) : (max(((+(-9100551942359922105LL))), (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))))));
    var_18 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) max((8231453224994951723LL), (((/* implicit */long long int) var_1))))) ? (((/* implicit */int) var_3)) : ((~(((/* implicit */int) var_2))))))));
    var_19 = ((/* implicit */unsigned char) (-(((((/* implicit */long long int) 3868904224U)) | (var_4)))));
}
