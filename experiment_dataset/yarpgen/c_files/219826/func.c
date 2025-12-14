/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219826
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
    for (unsigned char i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] [13] = ((/* implicit */signed char) arr_6 [i_0] [i_0] [i_0] [4LL]);
                    arr_11 [i_0] [i_1] = ((unsigned int) 4066547920U);
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_3 = 2; i_3 < 11; i_3 += 3) 
        {
            for (unsigned short i_4 = 0; i_4 < 14; i_4 += 2) 
            {
                for (unsigned int i_5 = 0; i_5 < 14; i_5 += 4) 
                {
                    {
                        arr_19 [(signed char)3] [i_0 + 1] [4] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) min(((signed char)23), (var_15)))) ? (((/* implicit */long long int) min((2147483644), (((/* implicit */int) (signed char)0))))) : ((+(arr_0 [i_3 - 2] [i_0 - 1])))));
                        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((unsigned int) (short)32767)))));
                    }
                } 
            } 
        } 
        arr_20 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)60)), (17145583949641559987ULL)))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_7 [i_0] [(_Bool)1] [i_0])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_8)))))) : (((/* implicit */int) var_8))));
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)16368)) ? (10304518625574772851ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18463)))))) ? (((((/* implicit */int) arr_13 [i_0] [i_0 - 1] [(unsigned short)1])) & (((/* implicit */int) (unsigned short)65535)))) : ((~(((/* implicit */int) (unsigned short)65517))))));
    }
    var_20 = ((/* implicit */unsigned short) min((((/* implicit */int) (unsigned char)243)), (0)));
}
