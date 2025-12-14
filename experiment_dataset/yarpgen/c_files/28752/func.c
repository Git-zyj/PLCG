/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28752
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
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */int) var_13)) >= (var_5))));
                var_15 = ((/* implicit */long long int) 0);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        arr_9 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_8 [i_2] [i_2])))) ? (arr_6 [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) (+(-1850185487)))) == (((((/* implicit */long long int) ((/* implicit */int) (signed char)-23))) / (var_10)))))))));
        var_16 = ((/* implicit */int) (!(((1488001937) == (((/* implicit */int) arr_7 [(_Bool)1]))))));
        arr_10 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (max((arr_6 [i_2] [i_2]), (arr_6 [i_2] [(signed char)16]))) : (((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned char)199))))));
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((unsigned short) ((var_9) ? (((arr_6 [i_2] [i_2]) / (((/* implicit */long long int) ((/* implicit */int) (short)-11709))))) : (max((((/* implicit */long long int) (_Bool)0)), (arr_6 [(signed char)3] [i_2])))))))));
        var_18 = ((/* implicit */_Bool) var_11);
    }
    for (int i_3 = 0; i_3 < 20; i_3 += 2) 
    {
        arr_13 [(unsigned char)5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_3])) ? (((((/* implicit */_Bool) var_3)) ? (((unsigned int) arr_8 [10LL] [i_3])) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43539))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)120)))));
        arr_14 [i_3] = ((/* implicit */int) ((((/* implicit */int) ((unsigned short) (unsigned char)254))) == (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)-14548)) : (var_5)))));
        arr_15 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_3] [i_3])) ? (arr_6 [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1)))))) ? (min((arr_12 [i_3]), (arr_12 [i_3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
        arr_16 [i_3] = ((/* implicit */int) (unsigned short)20);
    }
    /* LoopNest 2 */
    for (signed char i_4 = 4; i_4 < 21; i_4 += 4) 
    {
        for (long long int i_5 = 0; i_5 < 25; i_5 += 1) 
        {
            {
                var_19 &= max((((/* implicit */long long int) var_8)), (min((((((/* implicit */_Bool) -2992614483581251576LL)) ? (arr_17 [i_5]) : (var_12))), (((/* implicit */long long int) ((unsigned short) 13627254703810281058ULL))))));
                arr_21 [(unsigned char)22] [(unsigned char)22] [i_4 + 4] = ((/* implicit */long long int) (unsigned char)220);
                arr_22 [i_4] [5U] = ((/* implicit */int) arr_20 [i_4 - 1]);
            }
        } 
    } 
}
