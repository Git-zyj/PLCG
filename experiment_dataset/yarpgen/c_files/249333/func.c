/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249333
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
    var_14 *= var_1;
    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)65307)), (9223372036854775802LL)))) ? ((+(((/* implicit */int) min((var_4), (((/* implicit */unsigned char) var_11))))))) : ((~((-(((/* implicit */int) var_6)))))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 17; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        var_16 = ((/* implicit */unsigned int) ((long long int) (!(((/* implicit */_Bool) var_6)))));
                        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) 4294967269U))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) max((arr_9 [i_1] [i_2 + 1] [i_3]), (arr_0 [(unsigned short)2]))))));
                        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((unsigned long long int) ((unsigned char) arr_2 [i_2 - 3]))))));
                    }
                    var_19 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (~(var_0))))) ? (((unsigned int) arr_6 [i_2 + 1] [i_1 - 1] [(_Bool)1] [(_Bool)1])) : (((/* implicit */unsigned int) ((int) arr_8 [i_1 - 1] [i_2 + 2] [i_2 + 3])))));
                }
            } 
        } 
    } 
}
