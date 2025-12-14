/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233513
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
    var_11 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_15 [i_2] [10ULL] [10ULL] [10ULL] [i_4] = ((((/* implicit */_Bool) (-(1737752316996974833ULL)))) ? (((/* implicit */unsigned long long int) max((((long long int) (unsigned short)13409)), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)53336)))))))) : (max((((((/* implicit */_Bool) 5683657426026401835LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) : (8687254577911362697ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_8)))))));
                                var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) 2616898430686627092ULL))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) max((((arr_16 [i_0 + 1] [i_1 + 1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))), (((/* implicit */unsigned long long int) var_2))));
                                var_14 += ((/* implicit */unsigned short) ((min((((((/* implicit */_Bool) (signed char)-13)) ? (((/* implicit */int) (unsigned short)13406)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned short)13413)))) * (min((((((/* implicit */int) (unsigned short)13409)) >> (((((/* implicit */int) (unsigned short)52123)) - (52096))))), (((/* implicit */int) max(((unsigned short)52114), (((/* implicit */unsigned short) (unsigned char)255)))))))));
                                var_15 *= ((/* implicit */unsigned char) (((((_Bool)1) ? (arr_4 [i_0 + 2]) : (arr_2 [i_0 + 2]))) <= (((((/* implicit */_Bool) (unsigned short)65535)) ? (arr_6 [i_0] [i_0 - 2] [i_1 + 1]) : (arr_6 [i_0] [i_0 - 2] [i_1 + 1])))));
                                var_16 = ((/* implicit */signed char) ((unsigned int) min((((((/* implicit */_Bool) (unsigned char)137)) ? (arr_20 [i_0] [i_1] [i_2] [i_2] [i_5] [(unsigned short)2] [(unsigned char)12]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)9))))), (((/* implicit */unsigned int) ((int) (_Bool)0))))));
                            }
                        } 
                    } 
                    arr_21 [i_0] [12] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3969786816128658587ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((var_2) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (max((807650220U), (0U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)13412))) <= (-3916154073371257492LL))))))));
}
