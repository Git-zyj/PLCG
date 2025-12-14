/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45521
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1 + 2] [i_1] = ((/* implicit */long long int) var_6);
                /* LoopNest 3 */
                for (long long int i_2 = 4; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned char i_3 = 2; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 13; i_4 += 3) 
                        {
                            {
                                arr_14 [7LL] [(_Bool)1] [i_1] [i_3] [(unsigned char)3] [i_3 - 2] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) >= (var_15)))) + (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (var_3)))));
                                arr_15 [(signed char)4] [i_4 - 2] [i_3] [i_1] [i_2 - 4] [i_1 + 1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) == (var_13))))) : (((((/* implicit */_Bool) var_12)) ? (((var_2) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (((/* implicit */long long int) var_3))))));
                                arr_16 [13LL] [13LL] [i_2 - 1] [i_1] [(unsigned short)10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_8)))) ? (var_14) : (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */long long int) 3842153215U)) : (3945410639316821204LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_15))))))));
                            }
                        } 
                    } 
                } 
                arr_17 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6)))) : (var_3)))) ? (((var_15) & (((/* implicit */unsigned int) var_0)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) || (((/* implicit */_Bool) (unsigned char)254))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) var_12);
    var_17 = ((/* implicit */long long int) var_8);
    var_18 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_2))) & (((((var_5) - (((/* implicit */long long int) ((/* implicit */int) var_11))))) & (((/* implicit */long long int) var_7))))));
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1))) : (5101316925526346446LL)))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? (((((/* implicit */_Bool) 2276119517U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (3768935920U))) : (((/* implicit */unsigned int) var_7))));
}
