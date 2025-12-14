/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224794
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
    for (short i_0 = 0; i_0 < 18; i_0 += 1) /* same iter space */
    {
        var_10 = (_Bool)1;
        /* LoopNest 3 */
        for (long long int i_1 = 4; i_1 < 16; i_1 += 3) 
        {
            for (unsigned char i_2 = 4; i_2 < 17; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    {
                        var_11 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (signed char)123)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1))))));
                        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) (unsigned char)10))) + ((-(((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]))))))) ? ((+((-(var_6))))) : (((((/* implicit */int) var_4)) - (((/* implicit */int) (_Bool)1))))));
                        arr_9 [i_0] [i_0] [0ULL] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) max(((unsigned char)255), (((/* implicit */unsigned char) ((signed char) (signed char)31)))))) + ((-(((/* implicit */int) var_8))))));
                        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) arr_8 [i_0] [i_2] [i_2 - 4] [(unsigned char)2] [i_3]))));
                        var_14 ^= ((/* implicit */signed char) ((unsigned char) (((!(((/* implicit */_Bool) (unsigned short)57915)))) ? (max((4201144041433316503LL), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_5 [i_0] [i_2] [i_2])), ((unsigned short)57915))))))));
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) + (((/* implicit */int) max(((signed char)103), (((/* implicit */signed char) var_8)))))))) && (((/* implicit */_Bool) ((arr_3 [i_0] [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))))));
    }
    for (short i_4 = 0; i_4 < 18; i_4 += 1) /* same iter space */
    {
        var_16 ^= ((/* implicit */short) var_9);
        arr_12 [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((arr_1 [i_4]) - (((/* implicit */int) arr_6 [i_4] [i_4]))))) % (((((/* implicit */_Bool) arr_2 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_1)))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_4] [i_4] [i_4] [i_4] [i_4])) + (((/* implicit */int) arr_8 [i_4] [i_4] [i_4] [i_4] [i_4])))))));
        arr_13 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_7))) ? (((/* implicit */int) (_Bool)0)) : (((int) max((((/* implicit */unsigned long long int) (short)3188)), (3264164293061613478ULL))))));
    }
    var_17 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) -4123157176634358805LL)) && ((_Bool)0))))) * (((unsigned long long int) var_6))));
    var_18 = ((/* implicit */int) var_3);
}
