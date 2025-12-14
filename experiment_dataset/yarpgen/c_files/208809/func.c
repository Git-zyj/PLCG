/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208809
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
    var_12 = ((/* implicit */int) var_3);
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_4 [3] [(unsigned char)17] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) + (4U)))))) || (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_7))) ^ ((~(var_10))))))));
                var_13 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-83)), (arr_0 [i_0 - 1]))))) ^ (arr_3 [i_0 + 2] [i_0 - 1] [i_0 + 2]))));
                /* LoopSeq 1 */
                for (short i_2 = 1; i_2 < 16; i_2 += 1) 
                {
                    arr_9 [i_0 - 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_5)))) ? (((((/* implicit */_Bool) -9102649207214355713LL)) ? ((-(((/* implicit */int) var_11)))) : (((/* implicit */int) (signed char)83)))) : ((+(103972800)))));
                    var_14 = ((/* implicit */unsigned char) (~(((/* implicit */int) max((((/* implicit */short) arr_6 [i_0 + 2])), (arr_5 [i_0] [(_Bool)1]))))));
                }
            }
        } 
    } 
}
