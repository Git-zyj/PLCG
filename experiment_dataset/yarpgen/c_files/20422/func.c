/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20422
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
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1] = ((int) ((unsigned long long int) (-(((/* implicit */int) var_3)))));
                    arr_8 [i_1] [i_2] [i_1] [i_2] = ((/* implicit */int) ((_Bool) ((300201823) * (((/* implicit */int) ((((/* implicit */_Bool) 13661649931915223556ULL)) || (((/* implicit */_Bool) 17197614402450071532ULL))))))));
                    var_15 = ((/* implicit */int) 4031675013167746960ULL);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 3) 
    {
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_3])) ? (arr_2 [i_3] [i_3] [i_3]) : (((/* implicit */int) (_Bool)1))))) | (max((((/* implicit */unsigned long long int) arr_2 [i_3] [20] [i_3])), (((((/* implicit */_Bool) 2191668747008738592LL)) ? (14415069060541804656ULL) : (((/* implicit */unsigned long long int) 1697136461)))))))))));
        arr_12 [i_3] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) 17197614402450071532ULL)) ? (4031675013167746963ULL) : (((/* implicit */unsigned long long int) 1598307740)))) ^ (((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)64)), (arr_4 [4])))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((5613475101127364701LL) % (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3] [i_3] [i_3] [i_3])))))) > (((unsigned long long int) -5613475101127364706LL))))))));
        /* LoopNest 3 */
        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 2) 
        {
            for (long long int i_5 = 0; i_5 < 14; i_5 += 4) 
            {
                for (long long int i_6 = 0; i_6 < 14; i_6 += 2) 
                {
                    {
                        arr_21 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)129))) / (187787954020317987LL)))) ? (max((2160885891890938127LL), (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_3] [i_4] [i_3] [i_3])) ? (arr_0 [6U]) : (arr_18 [i_3] [i_3] [i_3] [i_3])))))));
                        var_17 ^= ((int) min((min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)0))), (((/* implicit */unsigned short) ((short) var_10)))));
                        var_18 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((315600166), (((/* implicit */int) arr_14 [i_3] [i_6] [i_6]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)1)) + (1521516693)))) : (max((((/* implicit */unsigned long long int) 1998463362)), (5536664845094080880ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1285714238)))))) : (max((((/* implicit */long long int) ((-2147483634) & (((/* implicit */int) arr_19 [i_4]))))), (arr_5 [i_4] [6LL] [6LL] [i_4])))));
                        arr_22 [i_3] [i_3] = ((/* implicit */_Bool) arr_2 [i_3] [i_4] [i_5]);
                    }
                } 
            } 
        } 
        arr_23 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)43450)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)98)))))) * (((/* implicit */int) ((((/* implicit */_Bool) 3647404893451882519LL)) && (((/* implicit */_Bool) ((long long int) 17197614402450071532ULL))))))));
    }
    var_19 = ((/* implicit */unsigned short) var_2);
    var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-41))));
}
