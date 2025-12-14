/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234203
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
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_16 [i_1] = ((/* implicit */signed char) 13373280802821187187ULL);
                                arr_17 [i_1] [i_1] = ((/* implicit */unsigned short) (_Bool)0);
                                arr_18 [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_6);
                                arr_19 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned long long int) var_3);
                                arr_20 [i_1] [i_1] [i_2] = (-(((arr_13 [i_0] [i_1] [i_3] [i_4]) >> (((arr_1 [i_0] [i_0]) + (2115815475))))));
                            }
                        } 
                    } 
                } 
                arr_21 [i_0] [i_0] [i_0] = ((/* implicit */short) (signed char)31);
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) -1363302489);
    var_21 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) -293130963)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (294348214U) : (4000619081U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) | (((/* implicit */int) var_2))))) : (max((var_6), (((/* implicit */unsigned long long int) var_4))))))));
    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) (((~(293130992))) + (var_1)))) || (((/* implicit */_Bool) -293130963))));
    var_23 = var_10;
}
