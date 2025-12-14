/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208637
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (signed char i_2 = 3; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (signed char)17)), (((((/* implicit */_Bool) min(((short)2892), (arr_0 [i_0])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15878))) % (17152248134146189241ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))));
                                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) 10493608961012714750ULL))));
                                var_21 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)2892)), (8202771043652700534LL)))) ? (((/* implicit */int) (unsigned short)11027)) : (((/* implicit */int) max((var_2), (((/* implicit */unsigned char) (_Bool)1)))))));
                                arr_13 [i_0] [i_1] [i_0] [i_2] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((15105234208552196015ULL), (((((/* implicit */_Bool) var_3)) ? (13157570658876680407ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)513)))))))) ? (1671436242) : (((/* implicit */int) (unsigned short)18258))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 14; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) -1861105520)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) 68719476735ULL)))))) : (max((((/* implicit */unsigned long long int) (signed char)17)), (((((/* implicit */_Bool) 8175422062236201408ULL)) ? (((/* implicit */unsigned long long int) 3479129554U)) : (310335582388269877ULL))))))))));
                                var_23 = ((/* implicit */unsigned int) max((max((-1861105509), (((/* implicit */int) max(((signed char)1), ((signed char)-17)))))), (((/* implicit */int) (signed char)17))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 1; i_7 < 16; i_7 += 3) 
                    {
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            {
                                arr_25 [i_0] [i_1] [(_Bool)1] [i_7] [i_8] |= max((((/* implicit */unsigned long long int) max(((-(((/* implicit */int) (short)-1)))), (((((/* implicit */_Bool) arr_6 [(unsigned char)15] [(unsigned char)15])) ? (((/* implicit */int) (signed char)-17)) : (((/* implicit */int) (signed char)17))))))), (min((((/* implicit */unsigned long long int) max(((signed char)17), ((signed char)1)))), (var_1))));
                                arr_26 [i_7] [i_7] = ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned long long int) var_5)), (16765926427867379007ULL)))))) + (arr_17 [i_2] [i_2 - 3] [i_2] [i_2] [i_2]));
                                var_24 *= ((/* implicit */short) (-(4259995143502766205ULL)));
                                var_25 = ((/* implicit */long long int) (unsigned short)47278);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)40339))));
    var_27 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_16)) : (-2033828909))) <= (((/* implicit */int) (_Bool)1))));
}
