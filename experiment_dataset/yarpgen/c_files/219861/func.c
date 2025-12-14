/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219861
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
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            {
                var_13 ^= ((/* implicit */int) var_12);
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0 - 1]))) < (arr_1 [i_1 - 1]))) || (((/* implicit */_Bool) var_4))));
                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((_Bool) ((15441543920355525479ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_2 [i_0] [i_0] [i_1]))))))))));
                var_15 = ((/* implicit */short) arr_0 [i_0] [i_1]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((9968625483819489794ULL), (var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [i_2]))) : (((long long int) arr_7 [i_2] [i_3])))) << (((((/* implicit */int) min((arr_7 [(signed char)10] [i_3]), (arr_6 [i_2] [i_2])))) + (11316)))));
                arr_10 [i_2] [i_3] [i_3] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_3])))))));
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    for (unsigned short i_5 = 0; i_5 < 14; i_5 += 1) 
                    {
                        {
                            arr_16 [i_3] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? (((/* implicit */unsigned short) min((min((((/* implicit */long long int) (-(((/* implicit */int) arr_15 [i_2] [i_2] [i_2] [i_2]))))), (((arr_12 [i_3]) - (var_3))))), (((/* implicit */long long int) ((unsigned char) (signed char)94)))))) : (((/* implicit */unsigned short) min((min((((/* implicit */long long int) (-(((/* implicit */int) arr_15 [i_2] [i_2] [i_2] [i_2]))))), (((arr_12 [i_3]) + (var_3))))), (((/* implicit */long long int) ((unsigned char) (signed char)94))))));
                            var_17 = min((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)57))))), (((((/* implicit */_Bool) (~(arr_8 [i_3])))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_4) <= (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2] [i_2] [(short)12] [i_2] [i_2]))))))) : (((long long int) arr_7 [i_4] [i_5])))));
                            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (150800164U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_2])))))))))));
                        }
                    } 
                } 
                var_19 -= ((/* implicit */unsigned long long int) ((unsigned short) ((signed char) var_11)));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_6 = 0; i_6 < 13; i_6 += 1) 
    {
        for (unsigned short i_7 = 0; i_7 < 13; i_7 += 4) 
        {
            for (int i_8 = 0; i_8 < 13; i_8 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)198))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_6] [i_7])) ? (((/* implicit */int) (unsigned char)41)) : (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) arr_20 [i_6] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)56))) : (arr_17 [i_6] [i_6]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) 1105636699U))));
                    arr_23 [i_6] [i_7] [i_8] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) max((((/* implicit */long long int) 3189330596U)), (arr_2 [i_6] [i_6] [i_8])))) ? (((((/* implicit */_Bool) arr_13 [i_6] [i_6] [i_6] [(unsigned char)12] [i_6])) ? (((/* implicit */int) arr_15 [i_6] [i_6] [i_6] [i_8])) : (var_11))) : (((/* implicit */int) ((unsigned char) arr_20 [2ULL] [i_7]))))));
                    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) arr_2 [i_6] [i_7] [i_8]))) ? (((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_7 [i_6] [i_6]))))) / (((((/* implicit */_Bool) 1105636727U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_7] [i_7] [i_8]))) : (arr_1 [i_6]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_7] [i_7])) ? (3189330597U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)199)))))) ? (var_1) : (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-1))))))))))));
                    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) arr_1 [i_6]))));
                }
            } 
        } 
    } 
}
