/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39781
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
    var_15 *= ((/* implicit */unsigned long long int) var_0);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                arr_16 [2LL] [(unsigned char)12] [i_2] [10LL] [i_0] = ((/* implicit */unsigned short) var_14);
                                var_16 = ((/* implicit */unsigned int) ((((max((var_3), (arr_7 [i_0] [2LL]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_9)), ((unsigned char)3))))))) ? (max((((/* implicit */long long int) arr_8 [i_0] [i_4] [i_2] [i_2])), (6754594602221444954LL))) : (((((/* implicit */_Bool) arr_9 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_1 - 1]))) : (arr_10 [i_0] [i_3] [i_2] [i_1 + 2])))));
                                arr_17 [i_0] [i_1 + 1] [(unsigned char)10] [i_1] [(signed char)4] = ((/* implicit */long long int) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_13 [i_0] [i_1 + 1] [i_1 + 2]))), (arr_13 [i_0] [i_1 - 1] [i_1 + 2])));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)45151)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_11)))), (((/* implicit */int) ((4024980275U) > (4024980264U))))))) ? (((((/* implicit */_Bool) max(((short)-14279), (((/* implicit */short) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_1 [i_1 + 2])))) : (((3243459254970562317LL) << (((/* implicit */int) var_6)))))) : (((/* implicit */long long int) (~((-(((/* implicit */int) (unsigned short)13442)))))))));
                /* LoopNest 3 */
                for (unsigned char i_5 = 0; i_5 < 14; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 2; i_6 < 13; i_6 += 2) 
                    {
                        for (long long int i_7 = 0; i_7 < 14; i_7 += 3) 
                        {
                            {
                                var_18 += ((/* implicit */unsigned char) ((((((((/* implicit */int) var_12)) / (((/* implicit */int) arr_8 [(unsigned short)8] [i_1] [i_1] [i_1])))) * (((/* implicit */int) arr_11 [i_6 + 1] [i_6 - 2] [i_6] [i_6 - 1] [i_6 - 2])))) & (((/* implicit */int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) var_0)))))));
                                var_19 -= ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) 269987032U)) % ((((_Bool)0) ? (556479336652305798ULL) : (((/* implicit */unsigned long long int) 4024980269U)))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((short) 4024980277U)))) <= (max((var_13), (((/* implicit */long long int) var_10)))))))));
                                var_20 &= (!(((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) ((unsigned short) var_6))) : (((/* implicit */int) arr_0 [i_6] [(unsigned short)5]))))));
                                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) var_1))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
