/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239305
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
    var_12 &= ((/* implicit */_Bool) ((var_1) ? (352151373U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) (signed char)-18)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2)))) : ((~(((/* implicit */int) (unsigned char)0)))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_13 -= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) + (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [4LL])) ? (((/* implicit */int) (unsigned char)249)) : (((/* implicit */int) arr_1 [(unsigned char)4] [(unsigned char)4]))))) % (arr_2 [(short)8])))));
        var_14 = (i_0 % 2 == zero) ? (((/* implicit */long long int) (~(((3942815907U) << (((arr_3 [i_0]) - (4743585960309454642LL)))))))) : (((/* implicit */long long int) (~(((3942815907U) << (((((arr_3 [i_0]) + (4743585960309454642LL))) + (656613750474374274LL))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) 352151388U)) ? (((/* implicit */int) (signed char)127)) : ((-2147483647 - 1))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (short i_4 = 1; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_15 -= ((/* implicit */int) (((_Bool)1) ? (2998473842U) : (((/* implicit */unsigned int) (-2147483647 - 1)))));
                                var_16 *= ((/* implicit */int) (((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15))) : (251658240U))) << (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (short)10304))))) ? (((/* implicit */long long int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_3] [i_4 - 1])))))) : (((((/* implicit */_Bool) arr_1 [i_2] [(unsigned char)10])) ? (arr_12 [i_2] [i_2] [i_2] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)13)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 2; i_6 < 16; i_6 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) arr_6 [i_5] [i_2] [6U] [i_0]);
                                var_18 = ((/* implicit */unsigned int) (((-(((((/* implicit */_Bool) (unsigned char)60)) ? (17448634809814161100ULL) : (((/* implicit */unsigned long long int) arr_3 [i_0])))))) <= (((/* implicit */unsigned long long int) ((arr_16 [i_1 - 1] [i_6 - 1] [i_6 - 1] [i_0] [i_6 + 1]) ? (((/* implicit */int) arr_16 [i_1 - 1] [i_1 - 1] [i_6 + 1] [i_0] [i_6 - 2])) : (((/* implicit */int) arr_16 [i_1 - 1] [i_6] [i_6 - 2] [i_0] [i_6 + 1])))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) arr_1 [i_0] [5])) : (2147483647)))));
                }
            } 
        } 
        var_20 -= ((/* implicit */_Bool) (~(7767823256109777993LL)));
        var_21 = ((/* implicit */_Bool) arr_5 [i_0]);
    }
}
