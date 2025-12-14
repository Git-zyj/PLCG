/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194510
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
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                var_19 -= ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) var_6))) ? (((/* implicit */long long int) min((((/* implicit */int) max(((unsigned short)65535), ((unsigned short)47576)))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (unsigned short)12567))))))) : (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_16))) ^ (var_17)))) ? (((((/* implicit */_Bool) 554959720070689296ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)37182))) : (var_0))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)10077)) ? (2147450880U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)243))))))))));
                                var_20 = ((/* implicit */int) (-(((((/* implicit */_Bool) var_15)) ? (((var_1) | (((/* implicit */long long int) ((/* implicit */int) var_11))))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_5 = 0; i_5 < 25; i_5 += 3) 
                {
                    for (unsigned char i_6 = 0; i_6 < 25; i_6 += 2) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 25; i_7 += 1) 
                        {
                            {
                                arr_20 [(unsigned short)9] [(unsigned char)18] [i_5] [i_5] [(signed char)11] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147516415U)) ? (2147450880U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4691)))))) & ((~(var_13)))));
                                var_21 = ((/* implicit */_Bool) (+(((/* implicit */int) var_11))));
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) (-(var_12)))) ? (((/* implicit */unsigned long long int) 5969112957871455298LL)) : (((10055813974973419944ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))));
            }
        } 
    } 
    var_23 *= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)20)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (2147516415U)))) ? (((/* implicit */int) ((_Bool) (unsigned char)80))) : (((/* implicit */int) (unsigned char)80))))));
    var_24 -= ((/* implicit */int) (~(((unsigned int) var_10))));
}
