/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234842
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
    var_12 = ((/* implicit */unsigned short) var_8);
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
                {
                    {
                        arr_11 [i_0 + 1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((((/* implicit */int) var_5)) + (((/* implicit */int) var_5))))) : (((9223372036854775807LL) / (((/* implicit */long long int) ((/* implicit */int) arr_9 [(unsigned char)13] [i_1] [i_2] [(unsigned char)13]))))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (-2085028682878467232LL) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0 - 2] [i_2] [i_2 + 1])))))));
                        arr_12 [i_0] [i_0 + 1] [i_0] [i_0] [i_0 + 1] = ((/* implicit */signed char) ((((/* implicit */long long int) var_3)) + (((70368744144896LL) + (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2 + 1] [i_2 + 1])))))));
                        arr_13 [i_1] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)61265), (((/* implicit */unsigned short) var_4)))))) / (((var_3) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54055))))))) < (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                    }
                } 
            } 
        } 
        var_13 = ((/* implicit */int) ((signed char) arr_6 [i_0] [i_0 + 1] [i_0 - 2]));
        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) min(((unsigned short)54055), (((/* implicit */unsigned short) var_10))))) + (((1490766689) - (var_8)))))) ? (((((var_2) < (((/* implicit */long long int) arr_10 [i_0])))) ? (max((805306368U), (((/* implicit */unsigned int) var_8)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-12)) ? (((/* implicit */int) arr_9 [i_0] [i_0 + 1] [(unsigned char)9] [(unsigned char)9])) : (arr_2 [i_0])))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_3)) / (var_2)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 13835058055282163712ULL))))) : ((~(((/* implicit */int) arr_5 [i_0] [i_0])))))))));
        var_15 = ((/* implicit */long long int) ((min((min((310046035582678146ULL), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0 - 1] [i_0] [i_0])))), (((/* implicit */unsigned long long int) ((var_3) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)98)))));
    }
    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) max((-977589062816966704LL), (((/* implicit */long long int) var_8))))) ? ((~(2085028682878467232LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)54055))))))))));
    var_17 ^= ((/* implicit */short) ((var_2) / (((/* implicit */long long int) ((/* implicit */int) var_5)))));
}
