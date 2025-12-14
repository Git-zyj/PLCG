/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216114
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_19 ^= ((/* implicit */_Bool) (-((-(((377282692U) & (377282692U)))))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (min((((((/* implicit */unsigned long long int) 1707479011)) & (7ULL))), ((~(4204299464454956602ULL)))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */short) -257574682);
                    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((min((((18446744073709551608ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32430))))), (((/* implicit */unsigned long long int) -257574682)))) & (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (_Bool)1))))))))))));
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((min((((18446744073709551615ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32763))))), (((/* implicit */unsigned long long int) ((1243261487) & (-838349442)))))), ((+(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32763))) & (18446744073709551613ULL)))))));
                    var_21 = ((/* implicit */signed char) (((+(min((((/* implicit */unsigned long long int) (_Bool)1)), (14242444609254595014ULL))))) & (((/* implicit */unsigned long long int) ((6U) & (((/* implicit */unsigned int) 2147483647)))))));
                }
            } 
        } 
    }
    var_22 += ((/* implicit */_Bool) (unsigned short)62567);
    var_23 = ((/* implicit */unsigned char) ((min(((~(27))), (((/* implicit */int) (short)-1)))) & ((+(((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)0))))))));
}
