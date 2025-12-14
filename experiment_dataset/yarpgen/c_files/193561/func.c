/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193561
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)3060)) ? (((/* implicit */int) (signed char)-1)) : (1751905835)));
    var_15 = max((var_5), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1751905830)) ? (-1751905830) : (((/* implicit */int) var_1))))) : (min((((/* implicit */unsigned int) var_13)), (var_2)))))));
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_4)) ? (var_2) : (var_2))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))))), (var_5)))) : (((((/* implicit */_Bool) 8084420439864196080ULL)) ? (((3444558688451530762ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14561))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))));
    var_17 = min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)26)) ? (((/* implicit */int) (short)-27044)) : (697283891)))), ((+(min((524287LL), (((/* implicit */long long int) (short)14560)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) min(((~(-1108585879))), (((((/* implicit */int) arr_0 [i_1])) / (((/* implicit */int) min(((unsigned char)171), (((/* implicit */unsigned char) (_Bool)1)))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 12; i_3 += 2) 
                    {
                        {
                            var_19 ^= ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) (unsigned short)45816)), (11335611628393803082ULL))) | (((/* implicit */unsigned long long int) var_9))));
                            var_20 = ((/* implicit */_Bool) (short)(-32767 - 1));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) arr_5 [i_1] [i_0 - 2] [(unsigned short)3]))));
                /* LoopNest 2 */
                for (unsigned short i_4 = 4; i_4 < 13; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        {
                            arr_16 [i_4] = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (((((/* implicit */_Bool) (unsigned char)226)) ? (2022765504U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)151))))))) >> ((((~(var_3))) - (5830107522098758803LL)))));
                            arr_17 [i_5] [i_4] [i_1] [(unsigned char)4] = ((/* implicit */_Bool) min(((~(((((/* implicit */_Bool) (signed char)-103)) ? (5509686953316560973LL) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (((((/* implicit */_Bool) (signed char)81)) ? (arr_10 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))))));
                            var_22 ^= ((/* implicit */long long int) (+(min((((/* implicit */int) min((arr_15 [i_0 + 2]), (var_13)))), (var_6)))));
                            arr_18 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (short)-23281))));
                            arr_19 [i_0] [i_1] [i_4 - 4] [i_5] = ((/* implicit */short) ((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_12 [i_0 + 1])))) == (((((((/* implicit */_Bool) arr_13 [i_5] [i_0] [i_1] [i_0])) || (((/* implicit */_Bool) (unsigned char)239)))) ? (((/* implicit */int) arr_9 [i_1] [i_1] [i_4] [i_5])) : (((/* implicit */int) arr_4 [i_0 + 2] [i_0 - 2] [i_0 - 1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
