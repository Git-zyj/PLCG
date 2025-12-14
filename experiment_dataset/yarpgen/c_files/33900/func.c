/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33900
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
    var_20 -= ((/* implicit */unsigned short) (-((((+(var_3))) * (((/* implicit */unsigned long long int) var_2))))));
    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((min((max((var_11), (((/* implicit */unsigned long long int) var_16)))), (((var_11) & (((/* implicit */unsigned long long int) var_9)))))) < (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) 8022708331331239059LL)) ? (-5677861527534235888LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)19))))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 10; i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    {
                        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_2)))))));
                        var_23 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_0] [i_0])) || (((/* implicit */_Bool) arr_6 [i_0] [(unsigned char)8] [i_1] [i_3]))));
                        var_24 -= ((/* implicit */unsigned char) (~(arr_6 [i_0] [i_0] [i_0] [i_3])));
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_9)) | (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)14325))) & (8656679951605291523ULL)))));
                        var_26 -= ((/* implicit */_Bool) var_15);
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) >= (((/* implicit */int) (short)-31636))));
    }
    /* vectorizable */
    for (short i_4 = 0; i_4 < 10; i_4 += 1) /* same iter space */
    {
        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((((/* implicit */_Bool) ((1994206236666336072ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24804)))))) ? (((/* implicit */int) var_0)) : (((((/* implicit */int) var_13)) + (var_10))))))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 10; i_5 += 1) 
        {
            for (unsigned short i_6 = 0; i_6 < 10; i_6 += 1) 
            {
                {
                    arr_19 [i_4] = ((/* implicit */unsigned long long int) (-(arr_18 [i_5])));
                    var_29 ^= ((/* implicit */long long int) (~(((/* implicit */int) arr_13 [i_5]))));
                }
            } 
        } 
        var_30 = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_4]))) | (var_9))) / (((/* implicit */long long int) (~(235890595U))))));
    }
}
