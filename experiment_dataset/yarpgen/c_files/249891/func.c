/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249891
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
    var_12 = ((/* implicit */short) ((18446744073709551615ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (17781743707798929807ULL))))))));
    var_13 = ((/* implicit */unsigned int) (((((-(((/* implicit */int) var_2)))) == (max((8388352), (((/* implicit */int) (unsigned char)26)))))) && (((/* implicit */_Bool) max((((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32765))) <= (15ULL)))), (var_0))))));
    var_14 = (unsigned char)46;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 8; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 7; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_15 -= ((/* implicit */unsigned long long int) 1067710778);
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((1970530297) % (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_8 [i_0] [i_0] [i_1 + 2] [i_2]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1153))))))) : (17781743707798929807ULL)));
                    var_17 = ((/* implicit */int) (unsigned char)124);
                }
            } 
        } 
    } 
}
