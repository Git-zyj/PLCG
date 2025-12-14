/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190751
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
    var_12 = ((/* implicit */signed char) min((((/* implicit */int) (signed char)25)), (((((/* implicit */int) var_8)) << (((((/* implicit */int) var_0)) + (25)))))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    {
                        var_13 = ((/* implicit */unsigned int) (unsigned short)65535);
                        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((long long int) (unsigned short)127))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))) ? (((7730789287174943380ULL) | (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_2] [14U])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2075488413)) ? (((/* implicit */int) (unsigned char)47)) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_2]))))))))));
                        var_15 = ((/* implicit */unsigned short) min((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (signed char)26)))), (((/* implicit */int) ((((/* implicit */int) (unsigned char)122)) < (((/* implicit */int) ((var_5) != (arr_3 [i_0])))))))));
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */unsigned short) ((min((69996910023127355ULL), (16504034743563358161ULL))) % (((/* implicit */unsigned long long int) (+(arr_3 [i_0]))))));
    }
}
