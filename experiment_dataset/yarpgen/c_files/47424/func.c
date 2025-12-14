/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47424
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
    var_10 ^= ((/* implicit */unsigned int) ((((/* implicit */int) (short)15304)) & (((((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (var_6)))) / (((((/* implicit */_Bool) (short)-15303)) ? (((/* implicit */int) (short)15305)) : (((/* implicit */int) (_Bool)0))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            {
                var_11 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) 7ULL)) ? (((/* implicit */int) (short)-15304)) : (((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (short)-15303)) ? (var_7) : (-1800987240)))))) : (((unsigned long long int) ((0ULL) == (((/* implicit */unsigned long long int) var_7)))))));
                var_12 -= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_7)) ? (arr_3 [i_0 - 1] [(unsigned short)2]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32755))))), (arr_3 [10U] [8U])))) ? (((((/* implicit */_Bool) 11799324992985670322ULL)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3)))) : (2045425882))) : (((/* implicit */int) var_0))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_13 = min((((/* implicit */unsigned long long int) (short)4341)), (7ULL));
                            var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (unsigned char)253)) : (((((arr_4 [i_0] [i_0]) != (134217727))) ? (((/* implicit */int) (unsigned char)201)) : (((/* implicit */int) (_Bool)1))))));
                            var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) + (arr_1 [i_0])))) ? (min((arr_1 [i_0]), (arr_4 [i_0] [i_0 - 1]))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1))))));
                            var_16 *= ((/* implicit */unsigned long long int) (-(2935241811073043253LL)));
                        }
                    } 
                } 
                var_17 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((((/* implicit */_Bool) (short)-32755)) ? (arr_2 [11LL]) : (((/* implicit */int) (!(((/* implicit */_Bool) -134217712))))))) : (((((/* implicit */_Bool) (unsigned char)148)) ? (((/* implicit */int) (!(var_0)))) : (((/* implicit */int) (!((_Bool)1))))))));
            }
        } 
    } 
    var_18 = (unsigned char)255;
}
