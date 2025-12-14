/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47894
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 18; i_2 += 2) /* same iter space */
                {
                    var_16 = ((/* implicit */unsigned char) ((_Bool) max((max((8080580926099245842LL), (8080580926099245857LL))), (((/* implicit */long long int) arr_3 [i_0] [9ULL])))));
                    var_17 = ((/* implicit */short) (!(((_Bool) var_3))));
                    arr_10 [i_0] [i_0] [i_2] |= ((/* implicit */int) arr_3 [i_0] [i_2]);
                }
                for (short i_3 = 0; i_3 < 18; i_3 += 2) /* same iter space */
                {
                    arr_13 [i_0] [i_1] [i_3] [i_3] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((long long int) arr_1 [i_0] [i_1]))) || (((/* implicit */_Bool) ((int) (unsigned char)10))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_5 [i_3] [i_0]))))))) : (((/* implicit */int) arr_3 [i_0] [(signed char)4]))));
                    var_18 |= ((/* implicit */short) (~(((((/* implicit */long long int) (~(((/* implicit */int) var_5))))) + (-8080580926099245861LL)))));
                    var_19 = ((/* implicit */unsigned int) (~(((/* implicit */int) max(((unsigned short)65517), (((/* implicit */unsigned short) arr_6 [i_0] [i_0] [i_1] [15LL])))))));
                }
                var_20 ^= ((/* implicit */int) (_Bool)1);
                var_21 -= ((/* implicit */short) (+(var_7)));
                var_22 -= ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) max((((/* implicit */int) arr_3 [i_0] [i_1])), (arr_8 [i_0] [i_0] [i_0] [i_0]))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_14)) ? (((var_6) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)29)))) : (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)19))))))));
    var_24 = ((/* implicit */int) var_14);
}
