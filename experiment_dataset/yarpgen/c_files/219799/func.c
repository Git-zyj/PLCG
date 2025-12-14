/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219799
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
    var_18 = ((/* implicit */unsigned int) (+(534773760)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned short) max(((-(((/* implicit */int) (short)192)))), (((/* implicit */int) ((((/* implicit */_Bool) 534773760)) && (((/* implicit */_Bool) (unsigned char)188)))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 17; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */signed char) ((min((((/* implicit */long long int) var_14)), (max((((/* implicit */long long int) var_6)), (var_5))))) * (((/* implicit */long long int) (-(((/* implicit */int) var_3)))))));
                            var_21 = ((((/* implicit */long long int) max((((/* implicit */int) var_12)), ((+(((/* implicit */int) var_12))))))) / (((((/* implicit */_Bool) var_15)) ? (min((var_5), (((/* implicit */long long int) var_13)))) : (((/* implicit */long long int) var_14)))));
                            var_22 += ((/* implicit */long long int) var_14);
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) ^ ((((+(var_7))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 13; i_4 += 2) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 2) 
        {
            for (int i_6 = 2; i_6 < 10; i_6 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 13; i_7 += 4) 
                    {
                        for (long long int i_8 = 3; i_8 < 12; i_8 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) min((2147483636), (((/* implicit */int) (_Bool)0))))) / ((-(var_15))))))));
                                var_25 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39327))) : (30ULL)))))));
                                var_26 -= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_13)))))) : (max((((/* implicit */long long int) (short)192)), ((-9223372036854775807LL - 1LL))))));
                                arr_25 [i_6 + 1] [i_7] [i_6 + 1] [i_4] [i_4] = ((/* implicit */signed char) ((((((/* implicit */int) (_Bool)1)) % (-1135291854))) << ((((+(var_7))) - (4657579573520203680LL)))));
                            }
                        } 
                    } 
                    var_27 *= var_15;
                    arr_26 [i_4] [i_5] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) - (((/* implicit */int) ((((/* implicit */unsigned int) var_4)) < (var_6))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((4294967295U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39327)))))) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) : (var_17))))));
                }
            } 
        } 
    } 
}
