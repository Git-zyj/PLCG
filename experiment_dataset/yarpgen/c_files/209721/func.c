/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209721
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
    var_19 = ((/* implicit */long long int) var_12);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) arr_4 [i_0 + 1])) ? (-5347974682823658471LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 + 3]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)6)) ? ((~(((/* implicit */int) var_12)))) : (-1289741494)))))))));
                var_21 = ((((/* implicit */_Bool) min((3079284704U), (((/* implicit */unsigned int) (signed char)45))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_6 [i_0])), ((unsigned char)155)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (min((4294967295U), (((/* implicit */unsigned int) var_10)))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 15; i_2 += 3) 
                {
                    for (signed char i_3 = 2; i_3 < 16; i_3 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) 16233785443415943609ULL)))))));
                            var_23 ^= ((/* implicit */long long int) var_4);
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) ((long long int) var_10));
}
