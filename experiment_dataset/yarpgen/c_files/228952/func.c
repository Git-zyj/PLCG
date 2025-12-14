/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228952
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
    var_19 += ((/* implicit */unsigned char) max(((-(((/* implicit */int) var_11)))), (((/* implicit */int) var_5))));
    var_20 = (unsigned short)21724;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */int) min(((unsigned char)172), ((unsigned char)172)))) - (((/* implicit */int) var_10)))))));
                arr_5 [i_0] = ((/* implicit */unsigned short) (((((!(((/* implicit */_Bool) 9223372036854775807LL)))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_2 [(signed char)7] [i_0]))))) : (max((9223372036854775807LL), (((/* implicit */long long int) (short)-1)))))) * (((/* implicit */long long int) ((/* implicit */int) (short)-1)))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) ((unsigned char) (unsigned char)195)))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    var_22 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)65535)) & (((/* implicit */int) (unsigned char)125))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */long long int) (+(4294967295U)));
                                arr_17 [i_0] [i_1] [i_0] [i_3] [i_3] [i_4 - 3] = ((/* implicit */unsigned short) ((signed char) max((((/* implicit */unsigned long long int) (unsigned char)62)), (4046795395777312798ULL))));
                                var_24 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */short) (signed char)-17)), (var_13))))))), (((((/* implicit */_Bool) ((-6225373068703720372LL) + (((/* implicit */long long int) ((/* implicit */int) arr_12 [(unsigned char)15] [(signed char)6] [i_1] [(unsigned char)15] [i_3] [i_4])))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))) : (-8546813918400610357LL)))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */long long int) min((((/* implicit */unsigned int) var_5)), (((unsigned int) 9223372036854775807LL))));
                    var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) (unsigned char)97))) ? (((((/* implicit */_Bool) 1697901984266206077ULL)) ? (4046795395777312798ULL) : (((/* implicit */unsigned long long int) -1LL)))) : (((/* implicit */unsigned long long int) max((901621327U), (((/* implicit */unsigned int) (unsigned short)29910))))))))));
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_5 = 0; i_5 < 12; i_5 += 3) 
    {
        for (unsigned short i_6 = 0; i_6 < 12; i_6 += 3) 
        {
            for (unsigned int i_7 = 1; i_7 < 9; i_7 += 4) 
            {
                {
                    var_27 ^= ((/* implicit */unsigned short) (unsigned char)216);
                    var_28 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) arr_24 [i_7] [i_7] [i_6] [i_5])), (var_2)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) + (11247023224136824662ULL)))));
                }
            } 
        } 
    } 
}
