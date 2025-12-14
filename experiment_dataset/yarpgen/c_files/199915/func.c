/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199915
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
    for (short i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)19096)) ^ (((/* implicit */int) arr_0 [i_0] [i_0 - 3]))))) ? (((((/* implicit */long long int) ((((/* implicit */int) var_9)) - (((/* implicit */int) (_Bool)1))))) + ((+(4611686018427387903LL))))) : (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 2] [1LL]))) : (-4611686018427387903LL)))));
        arr_3 [i_0 - 2] [15ULL] = ((/* implicit */signed char) (+(min((7404925685725632974ULL), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) * (16001568931299085276ULL)))))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            arr_7 [i_0] = ((var_2) < (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (signed char)0)))));
            var_18 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)4))))));
        }
        for (signed char i_2 = 3; i_2 < 15; i_2 += 4) 
        {
            var_19 = ((/* implicit */unsigned short) var_15);
            /* LoopSeq 2 */
            for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) 
            {
                /* LoopSeq 1 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    arr_17 [i_0 - 2] [i_2] [i_3] [i_2] = ((/* implicit */unsigned short) (+((((_Bool)1) ? (4611686018427387903LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)173)))))));
                    arr_18 [i_4] [i_2] [i_2] = ((_Bool) (unsigned char)141);
                }
                arr_19 [14LL] [i_2] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) max((var_15), (((/* implicit */signed char) var_3))))) ? (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) (!(((/* implicit */_Bool) -4611686018427387904LL))))))));
                arr_20 [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) var_10)) & (((/* implicit */int) ((((/* implicit */int) arr_13 [i_0 - 1] [i_0 - 3] [i_2 - 2])) != (((/* implicit */int) arr_13 [i_0 + 1] [i_0 - 3] [i_2 - 3])))))));
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                var_20 = ((/* implicit */short) ((signed char) var_8));
                arr_23 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (_Bool)0);
            }
        }
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0 - 2] [i_0 - 3] [i_0 + 1]))) : (0LL))) < (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (0LL)))))))))));
        arr_24 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)5))));
    }
    var_22 = (-(((((/* implicit */_Bool) var_4)) ? (((long long int) var_8)) : (-4611686018427387902LL))));
}
