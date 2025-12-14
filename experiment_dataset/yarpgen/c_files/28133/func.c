/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28133
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) ((_Bool) (signed char)-108));
                    var_14 = ((/* implicit */unsigned long long int) arr_2 [i_1]);
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 1; i_3 < 15; i_3 += 1) 
                    {
                        var_15 = ((arr_10 [i_0] [i_0] [i_0] [i_0] [(signed char)5] [i_0]) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-31)) ? (((/* implicit */int) (signed char)109)) : (((/* implicit */int) (signed char)-118))))) ? (((((/* implicit */_Bool) 11685321196346966123ULL)) ? (((/* implicit */unsigned long long int) var_6)) : (8139754950984036116ULL))) : (((/* implicit */unsigned long long int) 4294967295U)))));
                        var_16 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((unsigned int) 2025121497980090560ULL))) ? (((((/* implicit */int) (unsigned char)148)) + (((/* implicit */int) (short)6079)))) : (((/* implicit */int) arr_2 [i_1])))) == (((((/* implicit */_Bool) arr_2 [i_3 + 1])) ? (((((/* implicit */_Bool) 367383379)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_1 [(_Bool)1] [i_1])))) : (((/* implicit */int) var_3))))));
                    }
                    var_17 += ((((unsigned long long int) var_0)) / (((/* implicit */unsigned long long int) var_12)));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (var_6) : (var_1)));
    var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_6)))) ? (var_10) : (max((2748563108613682500LL), (((/* implicit */long long int) (_Bool)0))))))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))));
}
