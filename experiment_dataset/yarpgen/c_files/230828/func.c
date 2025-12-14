/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230828
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
    var_19 ^= ((/* implicit */signed char) min(((~(((((/* implicit */_Bool) 14995117645508101371ULL)) ? (14995117645508101374ULL) : (((/* implicit */unsigned long long int) var_8)))))), (((/* implicit */unsigned long long int) var_4))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? ((+(((((/* implicit */_Bool) (signed char)23)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)27698))) : (14995117645508101374ULL))))) : (min((((/* implicit */unsigned long long int) var_17)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-8))) : (10704928563171385832ULL)))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) ((int) 3451626428201450218ULL));
                    arr_7 [i_0] = ((/* implicit */int) (+(3451626428201450267ULL)));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_2))));
                        arr_11 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */signed char) (~(var_8)));
                        arr_12 [i_0] = ((/* implicit */_Bool) var_11);
                    }
                    for (long long int i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        arr_16 [i_0] [i_0] [i_2] [i_4] [i_0] [i_4] = ((/* implicit */unsigned int) var_10);
                        arr_17 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3451626428201450265ULL)) ? (14995117645508101375ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))) ? (((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) 2113929216U)) : (14995117645508101371ULL))) : (3451626428201450244ULL)))) ? ((~(3451626428201450242ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (3451626428201450216ULL) : (((/* implicit */unsigned long long int) var_4))))) ? ((-(var_0))) : (var_9))))));
                        /* LoopSeq 4 */
                        for (signed char i_5 = 0; i_5 < 13; i_5 += 2) 
                        {
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(953809849U)))) ? ((~(var_8))) : (((/* implicit */int) ((signed char) 3451626428201450241ULL)))));
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned char)8] [i_0] = ((/* implicit */signed char) var_1);
                        }
                        for (unsigned short i_6 = 0; i_6 < 13; i_6 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned short) var_18);
                            arr_23 [i_0] = ((/* implicit */unsigned short) (-2147483647 - 1));
                        }
                        for (unsigned short i_7 = 0; i_7 < 13; i_7 += 2) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned short) var_5);
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_1)))) ? (3451626428201450216ULL) : ((+(((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (7741815510538165783ULL)))))));
                            var_26 = ((/* implicit */signed char) min((3451626428201450248ULL), (14995117645508101398ULL)));
                            var_27 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)77))));
                            arr_26 [i_0] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */int) ((signed char) ((unsigned int) var_17)));
                        }
                        for (unsigned short i_8 = 0; i_8 < 13; i_8 += 2) /* same iter space */
                        {
                            arr_29 [i_2] [i_2] [i_2] [10LL] [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)82))));
                            var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) (-(478740597))))));
                        }
                    }
                }
            } 
        } 
    }
}
