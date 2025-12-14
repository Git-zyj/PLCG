/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230741
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
    var_19 = ((/* implicit */int) ((_Bool) var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) arr_1 [i_1 + 1])) : (((/* implicit */int) arr_1 [i_1 - 1]))))) ? ((~(((/* implicit */int) var_2)))) : (((/* implicit */int) arr_1 [i_1 - 1]))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 1; i_2 < 17; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 1; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_16 [(unsigned char)8] [i_1] [i_2] [i_3] [(unsigned short)2] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((short) (~(var_12)))))));
                                var_21 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((unsigned short) var_10))) ? (((/* implicit */int) arr_15 [i_0] [i_1] [i_1 + 1] [i_2 - 1] [i_0] [i_2] [i_1 + 1])) : (((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2 + 2] [i_3] [i_2] [i_4] [i_4])) ? (((/* implicit */int) arr_0 [i_4])) : (((/* implicit */int) var_3))))))));
                                arr_17 [i_3] [i_3] [i_2] [i_3] [i_3] = ((/* implicit */signed char) ((unsigned int) var_6));
                            }
                        } 
                    } 
                } 
                var_22 -= ((/* implicit */signed char) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                arr_18 [i_0] [(signed char)8] = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((((/* implicit */int) (unsigned char)253)) & (((/* implicit */int) (unsigned short)40005)))) : (((((/* implicit */int) arr_15 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1] [i_1 + 2] [i_0] [i_1])) << (((((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_0] [i_1])) + (64))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_5 = 3; i_5 < 22; i_5 += 3) 
    {
        for (unsigned short i_6 = 1; i_6 < 22; i_6 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (int i_8 = 2; i_8 < 21; i_8 += 3) 
                    {
                        {
                            var_23 = (-(((/* implicit */int) (unsigned char)0)));
                            arr_29 [10LL] [10LL] = ((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? ((+((+(603102081))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) : (var_18)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_22 [i_5] [i_5]))))));
                            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(3909302273U)))) ? (((((/* implicit */_Bool) -603102082)) ? (((/* implicit */int) var_4)) : (arr_26 [i_7] [i_7] [i_7]))) : (((/* implicit */int) arr_27 [i_7] [i_7] [i_7] [2LL]))))) ? (var_18) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_25 [i_6 + 1] [i_6] [i_7])) ^ (((/* implicit */int) arr_25 [i_6 + 2] [i_6 + 1] [i_7])))))));
                            var_25 = ((/* implicit */_Bool) var_14);
                            var_26 = ((/* implicit */int) ((var_18) + (((((/* implicit */_Bool) min((var_16), (((/* implicit */unsigned int) var_13))))) ? (((/* implicit */unsigned long long int) (+(var_12)))) : (arr_21 [i_8 + 2])))));
                        }
                    } 
                } 
                arr_30 [5LL] [i_6 + 2] [i_6 + 2] = ((/* implicit */signed char) (+(((/* implicit */int) arr_25 [i_5] [i_5 + 2] [i_5]))));
                var_27 -= ((/* implicit */unsigned char) arr_27 [9ULL] [9ULL] [9ULL] [9ULL]);
            }
        } 
    } 
}
