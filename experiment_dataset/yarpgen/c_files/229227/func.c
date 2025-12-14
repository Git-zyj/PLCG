/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229227
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
    var_19 = ((/* implicit */_Bool) var_15);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) (unsigned char)198)))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            var_21 *= ((((/* implicit */_Bool) max(((short)-19793), (((/* implicit */short) (_Bool)0))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (!((_Bool)1))))))) : (max((min((((/* implicit */unsigned int) var_8)), (3408845499U))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)53)) - (((/* implicit */int) (short)19895))))))));
            var_22 = ((/* implicit */int) ((((/* implicit */int) (short)19793)) >= (max((((/* implicit */int) ((_Bool) var_3))), (((arr_0 [i_1]) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) : (((/* implicit */int) (_Bool)1))))))));
            arr_7 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) ((short) arr_6 [i_0] [i_0] [i_1]))) % (((((/* implicit */int) (signed char)127)) << (((3820843129U) - (3820843107U)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))) : (max((max((((/* implicit */unsigned int) (short)19793)), (755644649U))), (max((arr_5 [i_0] [i_1]), (((/* implicit */unsigned int) (unsigned char)47))))))));
        }
        var_23 &= ((/* implicit */short) ((((/* implicit */int) min((((/* implicit */unsigned char) arr_0 [i_0])), (arr_3 [i_0] [i_0])))) != (((((/* implicit */int) arr_0 [i_0])) >> (((((/* implicit */int) var_2)) + (22738)))))));
    }
    var_24 = ((/* implicit */unsigned char) max((((3408845499U) & (((/* implicit */unsigned int) ((/* implicit */int) (short)0))))), (((/* implicit */unsigned int) min((((/* implicit */short) var_13)), (max((var_0), (((/* implicit */short) var_5)))))))));
}
