/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223763
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
    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (+(((/* implicit */int) ((unsigned char) (unsigned short)0))))))));
    var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)3))));
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)22)) & (((/* implicit */int) (unsigned char)29))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)16)))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    var_21 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)4)) & (((/* implicit */int) (signed char)-18))));
                    arr_10 [i_0] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)28))));
                    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)(-127 - 1))))))));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 4; i_4 < 12; i_4 += 2) 
                        {
                            arr_16 [i_0] [(signed char)13] [i_2] [(signed char)11] [i_2] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((long long int) (signed char)-36)))));
                            var_23 = (~(4740658578543156222LL));
                        }
                        for (long long int i_5 = 3; i_5 < 11; i_5 += 3) 
                        {
                            arr_21 [i_0 - 1] [i_1] [i_0] [i_1] [i_5 + 3] = ((/* implicit */unsigned char) ((unsigned short) 4740658578543156222LL));
                            arr_22 [i_0] [i_1] [i_0] [i_3] [i_5] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-16)) & (((/* implicit */int) (unsigned short)56779))));
                            var_24 = ((/* implicit */unsigned short) (+(((((/* implicit */long long int) ((/* implicit */int) (signed char)-17))) + (-8243213029344951575LL)))));
                        }
                        var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)52))));
                        var_26 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)2))));
                        /* LoopSeq 1 */
                        for (long long int i_6 = 0; i_6 < 14; i_6 += 3) 
                        {
                            arr_26 [i_0 + 2] [i_0 - 1] [i_0] [i_0 - 2] [i_0] = ((/* implicit */signed char) (-(-2153825167659871409LL)));
                            arr_27 [i_1] [i_1] [i_1] [i_0] [i_1] = ((/* implicit */long long int) (~((~(((/* implicit */int) (signed char)45))))));
                        }
                        arr_28 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-28))));
                    }
                    for (signed char i_7 = 0; i_7 < 14; i_7 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_8 = 0; i_8 < 14; i_8 += 3) 
                        {
                            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((signed char) (~(((/* implicit */int) (signed char)93))))))));
                            var_28 += ((/* implicit */long long int) (!(((/* implicit */_Bool) -4740658578543156223LL))));
                            var_29 ^= ((/* implicit */long long int) ((4740658578543156237LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64249)))));
                            var_30 &= ((/* implicit */long long int) (unsigned short)64260);
                        }
                        for (signed char i_9 = 0; i_9 < 14; i_9 += 4) 
                        {
                            arr_37 [i_0] [i_0] = ((/* implicit */unsigned short) (-((+(((/* implicit */int) (signed char)15))))));
                            var_31 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-15))));
                        }
                        var_32 = ((/* implicit */long long int) (signed char)73);
                    }
                    var_33 ^= ((signed char) (unsigned short)1);
                }
            }
        } 
    } 
}
