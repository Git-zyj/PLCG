/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35047
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
    var_16 = ((/* implicit */signed char) var_5);
    var_17 = ((/* implicit */int) 3020374675U);
    var_18 = ((/* implicit */signed char) ((var_2) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_7)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 11; i_3 += 3) 
                    {
                        for (short i_4 = 1; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) (+(5985002159615745951ULL)));
                                arr_13 [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) arr_8 [i_4] [i_4 - 1] [i_4] [i_4 + 1])), (((((/* implicit */_Bool) arr_4 [i_0] [i_4 + 2])) ? (((/* implicit */int) arr_12 [i_0] [i_3 - 3] [11ULL] [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4 + 1]))))));
                                var_20 += ((unsigned short) (_Bool)1);
                                var_21 += ((/* implicit */long long int) ((((/* implicit */_Bool) (~(1274592600U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) arr_10 [i_0] [(unsigned short)10] [i_1] [i_2] [i_3] [4LL])))))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (arr_6 [i_3 - 1] [i_4 + 2] [i_2] [i_0 + 2]))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        arr_16 [i_0] [4] [i_1] |= ((/* implicit */_Bool) ((unsigned int) max((((/* implicit */signed char) arr_8 [i_0] [i_1] [i_5 - 1] [i_0 + 3])), ((signed char)60))));
                        var_22 += ((/* implicit */long long int) max((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_1])), (var_12)))) : (((/* implicit */int) (_Bool)1))))), (1274592645U)));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_6 = 1; i_6 < 11; i_6 += 2) 
                        {
                            arr_20 [i_0] [i_1] [i_1] [i_5 - 1] [5LL] = (+((+(((/* implicit */int) var_4)))));
                            arr_21 [i_1] [i_1] [i_0] [(unsigned short)11] [i_6 + 1] = ((/* implicit */int) ((unsigned char) var_4));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_23 += ((/* implicit */unsigned int) (+((~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_2 [(_Bool)1])) : (((/* implicit */int) (unsigned char)29))))))));
                            var_24 = ((/* implicit */long long int) max((((((/* implicit */_Bool) (-(723411198U)))) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) ((var_0) > (((/* implicit */long long int) var_1))))))), (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_4)), (3571556102U)))))))));
                        }
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_25 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)133))) : (-6790412955706290412LL))) <= (((/* implicit */long long int) arr_15 [i_8] [i_0] [i_0] [i_0 + 2])))))) % (var_9)));
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_0] [i_2])) >> ((((~(max((((/* implicit */unsigned long long int) (unsigned short)39189)), (5985002159615745951ULL))))) - (12461741914093805653ULL)))));
                        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) var_12))));
                    }
                    for (long long int i_9 = 3; i_9 < 10; i_9 += 3) 
                    {
                        var_28 = ((/* implicit */_Bool) (+(-2450929437491151598LL)));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned long long int i_10 = 4; i_10 < 11; i_10 += 4) /* same iter space */
                        {
                            arr_32 [i_0] [i_0] [i_2] [i_9] [i_10] = (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-20860523704371784LL));
                            var_29 |= ((/* implicit */signed char) (_Bool)1);
                        }
                        for (unsigned long long int i_11 = 4; i_11 < 11; i_11 += 4) /* same iter space */
                        {
                            var_30 = ((/* implicit */signed char) (~(3020374675U)));
                            arr_36 [i_0] [i_0] [i_0] [i_0] [i_9 - 1] [i_11] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 1])) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0])))))));
                            var_31 ^= ((/* implicit */_Bool) var_3);
                        }
                        for (unsigned long long int i_12 = 4; i_12 < 11; i_12 += 4) /* same iter space */
                        {
                            arr_39 [i_0] [i_1] [i_0] [i_9] [i_9 + 1] = ((/* implicit */int) arr_6 [i_9] [i_1] [i_2] [i_9]);
                            arr_40 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 2] [i_0 - 1] [i_0] = ((/* implicit */signed char) (unsigned short)39196);
                            arr_41 [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) ((signed char) ((arr_25 [i_0 + 2] [i_0 + 3] [i_9 - 3] [i_9 - 3] [i_12 - 4] [10]) - (arr_25 [i_0 + 1] [i_0 + 2] [i_9 + 2] [(_Bool)1] [i_12 - 4] [i_12 + 1]))));
                            var_32 = ((/* implicit */unsigned int) var_12);
                        }
                    }
                }
            } 
        } 
    } 
}
