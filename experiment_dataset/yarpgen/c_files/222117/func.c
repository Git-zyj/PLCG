/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222117
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
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 4; i_1 < 13; i_1 += 3) 
        {
            {
                arr_5 [i_0 + 1] = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) var_9)))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (unsigned short i_3 = 1; i_3 < 13; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_15 [(unsigned short)6] [i_1] [(signed char)1] [(_Bool)1] [(signed char)13] [(unsigned short)0] [i_3] = ((/* implicit */short) 2475303717U);
                                arr_16 [i_3] [2LL] [(_Bool)1] [i_3] [i_4] [6LL] = ((/* implicit */long long int) (+((+((+(-646353966)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 16; i_5 += 2) 
                {
                    for (int i_6 = 3; i_6 < 14; i_6 += 4) 
                    {
                        {
                            arr_23 [i_0] [5LL] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) min((((((/* implicit */_Bool) 646353957)) ? (((/* implicit */int) (signed char)24)) : (((/* implicit */int) var_7)))), (((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_3))))))) > (((((var_0) << (((((((/* implicit */int) var_10)) + (30865))) - (24))))) % (((/* implicit */long long int) ((((/* implicit */int) var_5)) % (273969322))))))));
                            var_11 = ((/* implicit */unsigned short) ((max((((/* implicit */long long int) 1822233392U)), (3638440085345422881LL))) >> ((((-(min((3), (((/* implicit */int) (signed char)30)))))) + (38)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned short) min((var_9), (((/* implicit */unsigned char) (signed char)-107))));
    var_13 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) max((var_7), (((/* implicit */unsigned short) var_1))))) < (((((/* implicit */_Bool) (signed char)46)) ? (((/* implicit */int) (unsigned short)1772)) : (646353941))))))));
}
