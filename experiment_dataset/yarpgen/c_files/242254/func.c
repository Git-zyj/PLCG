/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242254
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_10 = ((/* implicit */long long int) (unsigned char)8);
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                for (short i_3 = 1; i_3 < 16; i_3 += 1) 
                {
                    {
                        var_11 = ((/* implicit */_Bool) ((unsigned long long int) ((unsigned long long int) -3158589547934873667LL)));
                        var_12 = ((/* implicit */int) max((min((14040946085065314830ULL), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) ((((12945392480452272763ULL) != (((/* implicit */unsigned long long int) arr_12 [i_1] [i_1] [i_1 + 1] [i_1] [i_1 + 1] [i_1])))) ? (((long long int) var_4)) : (((/* implicit */long long int) min((arr_6 [i_1] [i_1]), (((/* implicit */unsigned int) (unsigned char)7))))))))));
                    }
                } 
            } 
        } 
    }
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-29796)) ? (min((((/* implicit */unsigned long long int) ((int) 2568484592110660014ULL))), (max((16205865552409154105ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
    var_14 = ((/* implicit */unsigned int) var_3);
    var_15 = ((((/* implicit */_Bool) max((((/* implicit */long long int) (+(var_8)))), (max((((/* implicit */long long int) var_5)), (9217154056291495194LL)))))) ? (((((/* implicit */_Bool) 0LL)) ? (max((((/* implicit */long long int) var_7)), (9223372036854775800LL))) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) ((/* implicit */int) var_2))));
}
