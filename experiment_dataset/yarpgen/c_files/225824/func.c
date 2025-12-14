/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225824
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
    var_10 = ((/* implicit */short) ((unsigned short) var_5));
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((var_1) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))) ? (((/* implicit */unsigned long long int) ((int) min((var_5), ((unsigned short)255))))) : (((var_0) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_12 &= ((/* implicit */short) var_7);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 4; i_1 < 13; i_1 += 1) 
        {
            var_13 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_2 [i_1 - 2]))));
            var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) (+(((/* implicit */int) arr_3 [i_1 + 3] [i_1 - 2])))))));
            var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) var_5))));
        }
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) max(((short)-28), (((/* implicit */short) (_Bool)1))))), (((((/* implicit */_Bool) (unsigned short)0)) ? (var_6) : (var_6)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(unsigned short)4]))) ^ (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0])))));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_5))))) ? ((~(arr_1 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))));
    }
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
    {
        for (long long int i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 17; i_4 += 1) 
                {
                    for (long long int i_5 = 1; i_5 < 14; i_5 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)28)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (arr_5 [i_2])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) | (((/* implicit */int) (unsigned short)25))))) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-64))) : (arr_5 [i_3])))))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294705152LL)) ? (((/* implicit */int) (short)-10336)) : (((/* implicit */int) var_5))))) ? (-4294705148LL) : (((((/* implicit */_Bool) (short)-10335)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [(short)12] [i_3] [i_4] [(_Bool)1]))) : (-4294705152LL)))))));
                            var_18 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) (unsigned short)31166)) & (((/* implicit */int) arr_12 [i_5 + 2] [i_5 + 1] [(short)10] [i_5 + 2])))));
                        }
                    } 
                } 
                var_19 *= (!(((/* implicit */_Bool) ((int) arr_11 [i_3]))));
                var_20 = ((/* implicit */long long int) (+(max((((((/* implicit */_Bool) (signed char)75)) ? (arr_10 [i_2] [i_2]) : (var_6))), (((/* implicit */unsigned int) arr_7 [i_2] [i_3]))))));
                arr_15 [i_3] = ((/* implicit */long long int) (unsigned short)65535);
                var_21 = ((/* implicit */unsigned long long int) arr_11 [i_2]);
            }
        } 
    } 
}
