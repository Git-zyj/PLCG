/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47943
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
    var_20 = ((/* implicit */signed char) min((((/* implicit */int) (unsigned char)0)), (min((((/* implicit */int) ((signed char) 70368744177663ULL))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (268435455)))))));
    var_21 = ((/* implicit */short) var_7);
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_6)))))) : (((long long int) ((((/* implicit */long long int) var_6)) | (7316451329558152912LL))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 19; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                arr_18 [i_4] [i_4] [i_3] [i_2 - 2] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) arr_0 [i_1 + 1] [i_2 + 3]))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) var_10)))))) : ((~(max((((/* implicit */unsigned long long int) arr_16 [i_4] [i_3] [i_2] [i_1] [i_0])), (arr_0 [i_0] [i_0])))))));
                                var_23 = ((/* implicit */unsigned short) ((unsigned char) ((arr_15 [i_2 + 3] [i_2] [i_2 + 2] [i_2 - 3]) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_15 [i_2 + 1] [i_2] [i_2 - 1] [i_2 + 2])))));
                                var_24 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) < (4407051447053840410LL)));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */short) min((3556614901U), (((((/* implicit */_Bool) 738352394U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1 - 1] [i_1] [i_2 + 4] [i_2]))) : (min((((/* implicit */unsigned int) var_8)), (738352396U)))))));
                    arr_19 [i_0] [i_1] [i_2] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned long long int) 738352416U))))) ? (((((/* implicit */_Bool) (unsigned short)65517)) ? (var_14) : (1925479349))) : (((-1925479336) ^ (((/* implicit */int) (signed char)-1))))))));
                    var_26 = ((/* implicit */unsigned char) var_6);
                }
            } 
        } 
    }
}
