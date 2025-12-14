/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23892
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 += ((/* implicit */signed char) (unsigned short)27826);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    for (int i_3 = 2; i_3 < 16; i_3 += 2) 
                    {
                        var_21 -= ((/* implicit */short) (_Bool)1);
                        arr_10 [i_3] |= ((unsigned short) ((int) -2044581365));
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] = 1682796358;
                        var_22 = ((/* implicit */int) min((var_22), ((-(((/* implicit */int) (unsigned char)139))))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) (-(8323010859458766679LL)));
                        arr_14 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) (_Bool)0);
                        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((unsigned long long int) 1091920597)))));
                        var_25 = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
                    }
                    for (int i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        arr_17 [i_5] [i_2] [i_2] [(unsigned char)14] = ((194544267) / (((/* implicit */int) (unsigned char)50)));
                        arr_18 [i_2] = ((/* implicit */unsigned short) ((-8256053980882767240LL) | (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) (unsigned char)118))));
                        var_27 -= ((/* implicit */unsigned long long int) ((2147483647) / (((/* implicit */int) (unsigned short)54922))));
                        var_28 -= ((/* implicit */unsigned short) (_Bool)1);
                        var_29 = ((/* implicit */int) 8256053980882767239LL);
                    }
                    var_30 = ((/* implicit */long long int) ((signed char) (_Bool)1));
                    arr_21 [i_2] = ((((/* implicit */_Bool) -8256053980882767231LL)) && (((/* implicit */_Bool) 1383145355)));
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 19; i_7 += 1) 
                    {
                        for (signed char i_8 = 0; i_8 < 19; i_8 += 1) 
                        {
                            {
                                var_31 = ((/* implicit */unsigned char) (unsigned short)683);
                                var_32 = ((/* implicit */unsigned long long int) (!((_Bool)1)));
                                var_33 *= ((/* implicit */unsigned short) 8245767077308549409LL);
                            }
                        } 
                    } 
                    arr_28 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) -268435456);
                }
            } 
        } 
        var_34 = ((/* implicit */unsigned long long int) ((unsigned short) (unsigned short)683));
    }
    var_35 *= ((/* implicit */unsigned short) 1091920597);
}
