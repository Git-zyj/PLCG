/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40944
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
    var_20 = ((/* implicit */short) min(((+(((/* implicit */int) max((((/* implicit */unsigned short) var_12)), (var_1)))))), (((/* implicit */int) (unsigned char)253))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 13; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((unsigned long long int) 568719641U)))));
            var_22 = ((/* implicit */int) (unsigned short)23754);
        }
        for (unsigned int i_2 = 4; i_2 < 12; i_2 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_3 = 0; i_3 < 13; i_3 += 3) 
            {
                arr_8 [i_0] = ((/* implicit */unsigned long long int) var_12);
                var_23 = ((/* implicit */short) (-(((/* implicit */int) var_6))));
                var_24 = ((/* implicit */unsigned short) (short)-32764);
            }
            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) 1686582735U))));
            var_26 = ((/* implicit */long long int) (+((~(1572456629)))));
        }
        var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) -1LL))));
        var_28 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)65535))));
    }
    /* vectorizable */
    for (short i_4 = 0; i_4 < 13; i_4 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_5 = 2; i_5 < 12; i_5 += 1) 
        {
            arr_16 [i_5] [i_5 + 1] = ((int) (!(((/* implicit */_Bool) var_18))));
            var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) (!(((/* implicit */_Bool) 2737016039384527034ULL)))))));
            var_30 += 20LL;
            var_31 = (short)32757;
            /* LoopNest 2 */
            for (unsigned short i_6 = 0; i_6 < 13; i_6 += 1) 
            {
                for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                {
                    {
                        var_32 = ((/* implicit */signed char) (-(((/* implicit */int) var_8))));
                        var_33 = ((/* implicit */unsigned long long int) ((unsigned char) 1686582734U));
                    }
                } 
            } 
        }
        var_34 = 1686582729U;
        var_35 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (unsigned short)65535))))));
        var_36 = ((/* implicit */unsigned long long int) (short)-15854);
    }
    var_37 = (unsigned short)23756;
}
