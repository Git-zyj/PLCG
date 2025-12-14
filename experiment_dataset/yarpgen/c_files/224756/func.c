/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224756
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
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)224))) : (0ULL)))))) : (((((_Bool) (unsigned char)141)) ? (((/* implicit */unsigned long long int) var_11)) : (((unsigned long long int) 14048086268172443545ULL))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) max((var_16), ((((_Bool)1) ? (14048086268172443545ULL) : (((/* implicit */unsigned long long int) 4294967284U))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) 2648116999778876889LL))) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) (!(arr_2 [i_0] [i_1 + 2] [i_2 - 1])))))));
                        arr_13 [i_3] [8] [i_0] [i_0] = ((/* implicit */unsigned short) var_2);
                    }
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) ((unsigned char) var_4));
    var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)185)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_10)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))) ? (4398657805537108077ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
}
