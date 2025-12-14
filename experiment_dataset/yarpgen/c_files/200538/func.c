/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200538
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
    for (unsigned char i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 10; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (short i_4 = 1; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_11 = arr_1 [i_0];
                                var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)121))))) ? ((-(9223372036854775788LL))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) arr_6 [i_1] [i_2 + 1] [i_3])), (arr_7 [i_3])))))))) ? (((((/* implicit */_Bool) ((unsigned char) var_10))) ? (((/* implicit */int) var_9)) : ((-(arr_5 [i_0] [i_0] [i_3] [i_4]))))) : (((((/* implicit */_Bool) max((259880667), (((/* implicit */int) arr_12 [i_0]))))) ? (259880667) : ((-(-259880667)))))));
                                arr_14 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)54)));
                                var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_4] [i_2] [i_0 - 3])) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_2 + 2]))))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 3) 
                {
                    for (int i_6 = 2; i_6 < 11; i_6 += 4) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 12; i_7 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) 259880663))));
                                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (-((-(arr_20 [i_7] [i_6] [i_1] [i_0]))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (int i_8 = 1; i_8 < 11; i_8 += 4) 
                {
                    for (short i_9 = 0; i_9 < 12; i_9 += 3) 
                    {
                        for (signed char i_10 = 3; i_10 < 10; i_10 += 3) 
                        {
                            {
                                arr_31 [i_0] [i_1] [i_8 + 1] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65533)) ? (((/* implicit */int) (signed char)-113)) : (((/* implicit */int) (unsigned char)201))))) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned char)197)))))))));
                                arr_32 [i_0] [i_0] = ((/* implicit */unsigned short) ((long long int) ((((((-435560792) ^ (((/* implicit */int) arr_7 [i_9])))) + (2147483647))) >> (((((int) -259880654)) + (259880654))))));
                                arr_33 [i_0 + 1] [i_1] [i_8] [i_9] [i_0] [i_9] = ((/* implicit */_Bool) ((short) (-(((/* implicit */int) arr_22 [i_8 + 1] [i_8 - 1] [i_8 + 1] [i_8 - 1] [i_8])))));
                                var_16 = ((/* implicit */unsigned long long int) ((190528641U) << (((1099511627775ULL) - (1099511627747ULL)))));
                                arr_34 [i_0 - 3] [i_0] [i_8] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (signed char)-9)) || (((/* implicit */_Bool) 259880667)))))) ? (((/* implicit */unsigned long long int) -259880681)) : (((((/* implicit */_Bool) var_6)) ? ((+(arr_26 [i_0] [i_1] [i_8]))) : (((/* implicit */unsigned long long int) ((arr_18 [i_0] [i_10]) - (((/* implicit */long long int) ((/* implicit */int) (short)1023))))))))));
                            }
                        } 
                    } 
                } 
                arr_35 [i_0] [(short)0] [i_0] &= (+(max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_1] [i_0] [i_1]))) : (var_8))), (((((/* implicit */_Bool) (unsigned char)173)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)187))) : (9223372036854775807LL))))));
                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) arr_11 [i_1] [i_1] [i_1] [i_0] [i_0] [i_0] [i_0]))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((unsigned long long int) var_6));
}
