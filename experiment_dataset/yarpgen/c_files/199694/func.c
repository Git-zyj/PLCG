/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199694
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_19 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1])) ^ (((/* implicit */int) arr_3 [i_0]))))) ? (((arr_2 [i_1]) ? (arr_1 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((((-864616079992746811LL) + (9223372036854775807LL))) >> (((/* implicit */int) var_5))))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -864616079992746814LL)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (unsigned char)254)))) >> (((((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_2 [i_0])))) - (5584))))))));
                var_20 += ((/* implicit */unsigned long long int) arr_3 [i_0]);
                arr_5 [i_0] = ((/* implicit */unsigned char) arr_0 [i_0]);
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)252)) >> (((((/* implicit */int) (unsigned char)124)) - (107))))))))) - (((/* implicit */int) ((((unsigned long long int) -1843372844)) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [(unsigned short)1] [i_1] [(unsigned short)20] [i_1] [6LL])) ? (((/* implicit */int) (short)32578)) : (((/* implicit */int) arr_3 [i_2]))))))))));
                            var_22 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) << (((((unsigned int) -864616079992746815LL)) - (2498825403U)))));
                            arr_11 [i_0] [(short)3] [(short)3] [(short)3] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (short)-13637)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) ^ (12118915600249248139ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58796)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) (-(((int) var_1))));
}
