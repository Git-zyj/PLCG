/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44612
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
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)28816))) : (15959670285760473135ULL)));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_2 [1U] = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)254))));
        var_21 = ((/* implicit */unsigned long long int) max((((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) / (var_4))), (((/* implicit */long long int) (short)-28826))));
    }
    for (int i_1 = 1; i_1 < 18; i_1 += 3) 
    {
        arr_5 [i_1] [i_1] |= ((((/* implicit */_Bool) (unsigned char)218)) ? (((/* implicit */int) var_15)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)103)) ? (15959670285760473152ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)218)))))) ? (((/* implicit */int) (signed char)-75)) : (((/* implicit */int) (unsigned char)252)))));
        var_22 *= ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)27))));
        var_23 = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)-16))));
    }
    var_24 &= ((/* implicit */signed char) var_2);
    /* LoopNest 2 */
    for (signed char i_2 = 1; i_2 < 11; i_2 += 3) 
    {
        for (signed char i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 11; i_4 += 3) 
                {
                    for (int i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        {
                            var_25 = arr_13 [i_2 - 1];
                            var_26 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (unsigned char)54)) : (((/* implicit */int) (unsigned short)0))))), ((~(0ULL)))));
                            var_27 = ((/* implicit */unsigned short) arr_6 [i_2 + 1]);
                            var_28 = ((/* implicit */_Bool) min((min((4294967295U), (3281996884U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1729651529016754432ULL)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 12; i_6 += 2) 
                {
                    for (long long int i_7 = 0; i_7 < 12; i_7 += 4) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) max((3281996901U), (((/* implicit */unsigned int) (signed char)16)))))));
                            var_30 += ((/* implicit */short) arr_4 [i_6]);
                            arr_19 [i_2] [i_3] [i_6] [i_3] [i_2] [i_2 - 1] = max((((((/* implicit */_Bool) max(((short)(-32767 - 1)), (((/* implicit */short) arr_0 [(unsigned char)7]))))) ? (min((((/* implicit */unsigned long long int) var_4)), (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned long long int) 1012970387U)));
                        }
                    } 
                } 
                arr_20 [i_2] [i_2] [i_3] = ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) < (max((((/* implicit */unsigned int) (short)28816)), (0U))));
            }
        } 
    } 
    var_31 |= ((/* implicit */unsigned char) (+(((/* implicit */int) var_16))));
}
