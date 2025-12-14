/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37667
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
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) 762736584U)), (var_3)))) ? ((~(var_14))) : (((/* implicit */int) ((unsigned short) var_16)))))) : (max((((((/* implicit */unsigned int) ((/* implicit */int) var_12))) ^ (762736569U))), (((/* implicit */unsigned int) (~(((/* implicit */int) (short)4))))))))))));
    var_21 += ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_19))))) ? (((((/* implicit */_Bool) ((int) 3532230710U))) ? (((((/* implicit */_Bool) var_14)) ? (var_10) : (var_15))) : (((/* implicit */long long int) var_17)))) : (var_3)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 16; i_4 += 3) 
                        {
                            {
                                arr_11 [i_0 + 1] [(signed char)17] [i_1 - 1] [i_1] [(_Bool)1] [(unsigned char)2] [(signed char)17] = ((/* implicit */long long int) 435089592U);
                                var_22 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_10))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)122)) && (((/* implicit */_Bool) (signed char)-34))))) : (((/* implicit */int) var_13))))));
                                var_23 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_9)) / (arr_10 [i_0] [i_0] [i_1 + 1] [(_Bool)1] [(short)0] [i_4 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_4] [i_4 + 1] [i_2 + 1] [(signed char)9] [i_4]))) : (arr_10 [i_1 + 1] [2U] [i_2 + 1] [i_4 + 4] [i_2 + 1] [i_4])))));
                                var_24 = 1872484235182346897LL;
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) 3532230699U)) ? (((((unsigned int) 6848014235138909192ULL)) / (((762736575U) >> (((762736569U) - (762736547U))))))) : (762736588U)));
                }
            } 
        } 
    } 
}
