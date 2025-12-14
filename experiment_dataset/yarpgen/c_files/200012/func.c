/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200012
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
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((_Bool) 9527438166374666480ULL)) && ((!(((/* implicit */_Bool) var_9))))))), (((var_8) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_1))))))));
                    arr_8 [i_0] [i_1] [i_0] [i_2] = (~(((((/* implicit */_Bool) arr_2 [(unsigned char)15] [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_0 + 1]))) : (var_10))));
                    var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) max((((/* implicit */unsigned int) var_7)), (var_10))))));
                    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)188)) ? (((/* implicit */int) (signed char)-124)) : (((/* implicit */int) (unsigned char)188))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (short)23759))))) : ((~(var_10)))))) ? ((~(((/* implicit */int) min((var_3), (var_6)))))) : (((/* implicit */int) arr_6 [i_0 - 1]))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_14 = arr_0 [i_0];
                                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((short) var_10))), (((unsigned int) arr_13 [i_2] [i_0 - 1])))))));
                                var_16 = ((/* implicit */signed char) (~(((/* implicit */int) ((var_9) <= (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
                                var_17 ^= ((/* implicit */unsigned long long int) (signed char)-1);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 4) 
    {
        for (signed char i_6 = 0; i_6 < 22; i_6 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_7 = 0; i_7 < 22; i_7 += 1) 
                {
                    for (unsigned int i_8 = 0; i_8 < 22; i_8 += 3) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) var_9);
                                var_19 = var_7;
                            }
                        } 
                    } 
                } 
                arr_28 [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) arr_23 [i_5] [(_Bool)1] [i_5] [i_5] [i_5])))))) % (((((/* implicit */_Bool) arr_23 [i_5] [i_5] [i_6] [i_6] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_5] [i_5] [i_5] [i_5] [i_5]))) : (var_8)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_10 = 0; i_10 < 21; i_10 += 1) 
    {
        for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) (short)-23759);
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 2) 
                {
                    for (unsigned long long int i_13 = 0; i_13 < 21; i_13 += 1) 
                    {
                        {
                            arr_40 [i_10] [(signed char)19] [i_12] [i_13] = ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_23 [i_10] [i_10] [i_10] [i_10] [(_Bool)0])))) << ((((+(((/* implicit */int) min((arr_31 [i_10]), (var_2)))))) + (33)))));
                            arr_41 [i_12] [20U] = min(((short)23738), ((short)-23759));
                        }
                    } 
                } 
            }
        } 
    } 
}
