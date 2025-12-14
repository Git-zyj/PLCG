/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26864
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] |= ((/* implicit */_Bool) var_12);
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) ((unsigned int) var_2)))) ? (min((arr_1 [i_0 + 1]), (arr_1 [i_0 + 1]))) : (max((var_6), (((((/* implicit */_Bool) (unsigned char)212)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned char)230))))))));
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-126)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_5)))) / (arr_0 [i_0] [3ULL])))) ? ((~((((_Bool)1) ? (arr_1 [i_0 - 1]) : (((/* implicit */int) var_10)))))) : (((/* implicit */int) (short)8064))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 3) 
    {
        var_18 = ((/* implicit */unsigned int) arr_4 [i_1] [i_1]);
        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((long long int) ((long long int) (unsigned short)53535)))), (7048327534792858796ULL))))));
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 3; i_3 < 21; i_3 += 2) 
            {
                for (unsigned int i_4 = 1; i_4 < 21; i_4 += 3) 
                {
                    {
                        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) ((int) (_Bool)1)))) ? (((/* implicit */int) (unsigned short)12000)) : (((int) (-(((/* implicit */int) (signed char)-47)))))));
                        arr_16 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((+(((/* implicit */int) arr_13 [i_1] [i_1] [i_3] [i_4] [10ULL] [i_4])))) * (((((/* implicit */int) (short)-32745)) * (((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))) : (7048327534792858796ULL)));
                        arr_17 [(unsigned char)5] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-103)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)35))))) ? (((/* implicit */int) (signed char)57)) : (((((/* implicit */int) var_3)) - (((/* implicit */int) (signed char)-100)))))) : (min((((int) var_0)), (((/* implicit */int) (_Bool)1))))));
                    }
                } 
            } 
        } 
    }
    var_21 = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_7)), (((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 1741627042U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)127))))) : (min((((/* implicit */long long int) (short)(-32767 - 1))), (9223372036854775807LL)))))));
    var_22 = ((/* implicit */unsigned short) min((((/* implicit */signed char) (_Bool)0)), ((signed char)-64)));
    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) var_6))));
}
