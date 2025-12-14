/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24447
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
    for (unsigned long long int i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_12 [i_3] [i_3] [18U] [18U] [i_3] = ((/* implicit */signed char) (unsigned char)0);
                                arr_13 [i_1] [i_3] [i_1] = ((/* implicit */int) ((0U) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                                var_14 = ((/* implicit */unsigned short) (short)32751);
                                arr_14 [i_0] [i_1] [i_3] [i_0] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1629)) ? ((((_Bool)0) ? (-1653862510) : (((/* implicit */int) (unsigned short)65356)))) : ((+(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6))));
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */unsigned long long int) var_4);
                arr_15 [i_0] [i_1] = ((/* implicit */unsigned short) (-(1653862510)));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 16; i_5 += 3) 
                {
                    for (signed char i_6 = 0; i_6 < 19; i_6 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)0))));
                            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 31457280U)) || (((/* implicit */_Bool) (signed char)-53))));
                            var_18 = ((/* implicit */int) var_10);
                            var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (short)9308))));
                            arr_22 [i_6] [i_1] [i_0 + 2] [i_6] [i_6] [i_0] = ((/* implicit */short) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (var_10)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */int) var_12);
    /* LoopNest 3 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        for (long long int i_8 = 0; i_8 < 16; i_8 += 3) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_11 = 1; i_11 < 14; i_11 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned short) var_9);
                            arr_39 [i_11] [(_Bool)1] [i_8] [i_9] [i_8] [(unsigned char)0] [(unsigned char)0] = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned char)108)) / (-1140661219))) / ((-(4095)))));
                            var_22 = ((/* implicit */unsigned char) var_3);
                        }
                        var_23 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) var_11)))))) : (var_9)));
                        arr_40 [i_7] [i_7] [i_8] [i_8] [i_9] [i_10] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (signed char)82)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)147))))));
                    }
                    var_24 *= ((/* implicit */short) (((+(((/* implicit */int) var_3)))) > (((/* implicit */int) (_Bool)1))));
                    var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)2048)) ^ (((((/* implicit */_Bool) (signed char)58)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)58))))));
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */short) var_0);
}
