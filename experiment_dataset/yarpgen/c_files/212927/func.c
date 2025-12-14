/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212927
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
    var_19 = ((/* implicit */_Bool) var_18);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 9; i_2 += 1) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147475456U)) ? (((/* implicit */unsigned long long int) 16383LL)) : (6626377148752684803ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2147475456U)))))) : (((((/* implicit */_Bool) 0ULL)) ? (18446744073709551615ULL) : (1ULL)))));
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)85)) ? (0ULL) : (((/* implicit */unsigned long long int) 3564415697U))))) ? (((((/* implicit */_Bool) (+(10853929255163778611ULL)))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 7978863809984534734LL)))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 3387856802U)) ? (((/* implicit */long long int) 2147483642)) : (-8040124420927537847LL)))))))))));
                        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1740244494U)) ? (1352668418U) : (((((/* implicit */_Bool) -51128448)) ? (1932710826U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16711680U)) ? (10853929255163778592ULL) : (((/* implicit */unsigned long long int) 2362256469U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (2147475450U)))) : (1041258691478126350ULL)));
                    }
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (-14LL) : (((/* implicit */long long int) 7U))))) ? (((((/* implicit */_Bool) (unsigned char)187)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -14LL)) ? (3532725737U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-11)))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */long long int) var_10)) : (((((/* implicit */_Bool) -1262194408)) ? (14LL) : (((/* implicit */long long int) 0U)))))))));
    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) var_5))));
}
