/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248909
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
    var_17 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)202)) + (((/* implicit */int) (unsigned char)53))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_18 += ((/* implicit */unsigned short) (unsigned char)89);
                    var_19 = ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0])) > (((((/* implicit */_Bool) min(((unsigned char)196), ((unsigned char)71)))) ? (((/* implicit */int) arr_5 [i_1 + 2])) : (((/* implicit */int) arr_3 [i_1]))))));
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)4040)), (138327470052227165LL)))) ? (1904854971U) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)131), (((/* implicit */unsigned char) (_Bool)1))))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)0), ((unsigned char)54))))) : ((~(3416570621U)))));
                    arr_7 [i_0] [(short)13] [(short)13] [i_0] = ((/* implicit */unsigned long long int) 2080696630906511736LL);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) arr_2 [i_0]))));
                                var_22 = (!(((/* implicit */_Bool) min((((/* implicit */int) arr_10 [i_0] [i_0])), (((((/* implicit */_Bool) (unsigned short)65520)) ? (((/* implicit */int) (short)16849)) : (((/* implicit */int) (unsigned char)245))))))));
                                var_23 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)163))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
