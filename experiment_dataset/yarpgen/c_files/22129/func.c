/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22129
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
    var_20 -= ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */short) var_18)), (var_3)))) ^ ((-(((/* implicit */int) ((((/* implicit */_Bool) 3221225472U)) && ((_Bool)1))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_6 [i_0] [7ULL] = ((/* implicit */signed char) (+(4080522066097843897ULL)));
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)255)) ? ((-(max((7722475672712651035LL), (((/* implicit */long long int) 4199949634U)))))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_1])))))));
                arr_7 [(_Bool)1] [i_1] [i_0] = ((/* implicit */unsigned char) min((((-7722475672712651024LL) % (((/* implicit */long long int) max((2076140966U), (((/* implicit */unsigned int) (unsigned short)29970))))))), (((/* implicit */long long int) arr_4 [i_1] [4ULL]))));
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) var_5);
    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) (unsigned char)56))));
}
