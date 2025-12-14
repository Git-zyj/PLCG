/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36190
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned int i_2 = 4; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 4) 
                    {
                        for (short i_4 = 2; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */int) var_9);
                                var_20 = ((/* implicit */unsigned int) (!(((((unsigned long long int) var_6)) != (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)127), ((signed char)112)))))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) var_10))))))));
                }
            } 
        } 
    } 
    var_22 -= var_10;
    var_23 = ((/* implicit */unsigned long long int) (signed char)(-127 - 1));
    /* LoopNest 3 */
    for (unsigned char i_5 = 1; i_5 < 22; i_5 += 1) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 4) 
        {
            for (signed char i_7 = 0; i_7 < 25; i_7 += 4) 
            {
                {
                    arr_20 [i_5 + 3] [i_5] [i_6] [i_7] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_7))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 25; i_8 += 4) 
                    {
                        for (int i_9 = 3; i_9 < 23; i_9 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-14717))) : (var_16))))))));
                                var_25 = ((((/* implicit */int) max((((/* implicit */short) (unsigned char)4)), ((short)-14717)))) << (((4294967293U) - (4294967266U))));
                                var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((((/* implicit */_Bool) 4294967289U)) ? (6721376011746909361ULL) : (max((var_17), (((/* implicit */unsigned long long int) var_9)))))))));
                            }
                        } 
                    } 
                    var_27 += ((/* implicit */unsigned short) var_17);
                    var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)25)) ? (var_8) : (((/* implicit */unsigned int) ((((/* implicit */int) var_13)) >> (((((/* implicit */int) (unsigned char)185)) - (162))))))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 25; i_10 += 1) 
                    {
                        for (int i_11 = 2; i_11 < 22; i_11 += 4) 
                        {
                            {
                                var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) var_4))));
                                arr_31 [i_5] [i_10] [i_5] [i_5] [i_5] [(unsigned char)8] [11U] = var_8;
                                arr_32 [i_5] [i_6] [i_7] [i_10] [i_10] [i_10] = ((/* implicit */unsigned int) (signed char)-33);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
