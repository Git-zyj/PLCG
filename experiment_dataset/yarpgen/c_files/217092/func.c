/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217092
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
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) 0ULL))));
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((_Bool) 36028796750528512LL)))));
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) -36028796750528512LL)) ? (11983815277830818294ULL) : (((/* implicit */unsigned long long int) 36028796750528512LL)))) >> (((/* implicit */int) ((((/* implicit */_Bool) 877197278)) && (((/* implicit */_Bool) 3400777664U)))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_19 += ((/* implicit */_Bool) -877197274);
                    arr_9 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (signed char)26)) ? (-36028796750528516LL) : (((/* implicit */long long int) -877197273)))))) << (3ULL)));
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_5)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0 - 1] [i_0 + 2] [i_0 + 4])))))));
    }
    for (unsigned long long int i_3 = 3; i_3 < 19; i_3 += 1) 
    {
        arr_14 [i_3] [i_3] = ((/* implicit */unsigned short) (-(((((/* implicit */long long int) 2134534543U)) - (((((/* implicit */long long int) arr_13 [i_3])) + (4503591037435904LL)))))));
        var_20 = ((/* implicit */_Bool) max((var_20), (var_4)));
        var_21 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (_Bool)0))))))), (((unsigned long long int) ((long long int) 2366896239872381354LL)))));
    }
    for (unsigned short i_4 = 0; i_4 < 23; i_4 += 3) 
    {
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 21; i_5 += 2) 
        {
            for (int i_6 = 3; i_6 < 22; i_6 += 3) 
            {
                {
                    arr_23 [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((((/* implicit */int) arr_21 [i_4] [(unsigned short)6])) + (((/* implicit */int) (signed char)38)))))))));
                    arr_24 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+((+(((/* implicit */int) var_7))))))) ? (((((/* implicit */_Bool) arr_22 [i_5 + 1] [i_4] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)238))) : (var_9))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_21 [i_4] [i_4])))))));
                }
            } 
        } 
        arr_25 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((18446744073709551605ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_4] [i_4]))))), (((/* implicit */unsigned long long int) var_9))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) | (((var_12) ? (var_13) : (((/* implicit */unsigned long long int) arr_16 [i_4] [i_4])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
        var_22 = ((/* implicit */unsigned short) var_6);
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_17 [i_4])) : (2147483647)))) ? (((unsigned long long int) arr_17 [i_4])) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))));
        var_24 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) max(((signed char)-49), (((/* implicit */signed char) (_Bool)1)))))));
    }
    var_25 = ((/* implicit */_Bool) var_15);
}
