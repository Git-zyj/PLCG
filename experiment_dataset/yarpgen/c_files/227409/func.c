/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227409
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
    for (int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (signed char)100))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 19; i_4 += 4) 
                        {
                            {
                                arr_17 [i_4 + 2] [i_1 + 3] [i_2] [i_1 + 3] [i_0] = ((/* implicit */int) 1048575U);
                                arr_18 [i_0] [i_1] [i_0] [i_2] [i_3] [i_2] = ((/* implicit */unsigned char) (unsigned short)29868);
                                var_21 = ((/* implicit */unsigned short) (unsigned char)11);
                                var_22 = ((/* implicit */short) (signed char)-32);
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (short i_5 = 2; i_5 < 19; i_5 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 0; i_6 < 21; i_6 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) -626475557))));
                            var_24 = ((/* implicit */unsigned int) (unsigned char)7);
                        }
                        var_25 = ((/* implicit */long long int) (unsigned char)182);
                        var_26 = (+((+(((/* implicit */int) (signed char)-44)))));
                    }
                    for (int i_7 = 0; i_7 < 21; i_7 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_8 = 1; i_8 < 19; i_8 += 3) 
                        {
                            var_27 = ((/* implicit */long long int) (signed char)31);
                            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) 9223372036854775807LL))));
                            var_29 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)4))));
                        }
                        for (long long int i_9 = 0; i_9 < 21; i_9 += 3) 
                        {
                            var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) (+(((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)151))))))))))));
                            var_31 += ((/* implicit */unsigned int) (_Bool)0);
                        }
                        arr_29 [i_1] &= ((/* implicit */unsigned short) 1259660707);
                    }
                    for (unsigned short i_10 = 0; i_10 < 21; i_10 += 3) 
                    {
                        arr_32 [i_2] [i_1] [i_0] &= ((/* implicit */_Bool) (-((+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)125)))))))));
                        var_32 = (~(((/* implicit */int) (unsigned char)104)));
                    }
                    for (unsigned short i_11 = 1; i_11 < 18; i_11 += 1) 
                    {
                        arr_35 [i_11] [(_Bool)1] [i_0 - 2] [i_11] = (unsigned short)44025;
                        var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)29)))))))))))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_12 = 0; i_12 < 17; i_12 += 2) 
    {
        for (unsigned short i_13 = 0; i_13 < 17; i_13 += 4) 
        {
            {
                var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) -7077797538261814392LL))));
                var_35 &= ((/* implicit */unsigned int) (+((~(((/* implicit */int) (unsigned short)8192))))));
            }
        } 
    } 
    var_36 = ((/* implicit */unsigned short) 705633282U);
    var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) (-((+(((/* implicit */int) (unsigned short)23022)))))))));
}
