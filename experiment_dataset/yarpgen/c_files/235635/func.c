/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235635
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
    var_20 = ((/* implicit */short) (+(((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_17))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_21 += ((/* implicit */long long int) ((unsigned char) ((((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_0 [i_1])))) ? (((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_2 [i_0]))))) : (((unsigned int) (short)1629)))));
                var_22 += ((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_1]);
            }
        } 
    } 
    var_23 = ((/* implicit */short) var_3);
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                arr_12 [i_2] [i_2] = ((/* implicit */long long int) arr_8 [i_2]);
                arr_13 [i_2] [i_2] [i_3] = ((/* implicit */short) ((arr_7 [i_2]) ? (((((/* implicit */_Bool) var_5)) ? (arr_8 [i_2]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_7 [i_2]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3921623105U)) ? (((((/* implicit */_Bool) -9021478726173887178LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-7195811037682851902LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)19943))))))));
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 19; i_4 += 1) 
                {
                    for (long long int i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (short i_6 = 1; i_6 < 17; i_6 += 2) 
                            {
                                arr_21 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_8)) ? ((+(-6422653752290544169LL))) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_15))))))));
                                var_24 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_20 [i_5] [i_3] [(unsigned char)14] [i_4] [i_6] [(unsigned char)14])) ? (min((((/* implicit */long long int) arr_7 [i_5])), (var_3))) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) >> (((/* implicit */int) var_19))));
                                var_25 &= ((/* implicit */unsigned char) (short)1024);
                            }
                            /* vectorizable */
                            for (unsigned int i_7 = 3; i_7 < 18; i_7 += 2) /* same iter space */
                            {
                                arr_25 [i_2] [i_4] = ((/* implicit */long long int) ((0ULL) >= (((/* implicit */unsigned long long int) arr_19 [i_2] [i_2] [i_4] [i_2] [i_7 - 3]))));
                                arr_26 [i_2] [i_5] [i_4] [i_3] [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 131068U)) | (((((/* implicit */_Bool) (short)19196)) ? (((/* implicit */unsigned long long int) var_0)) : (9084043225889373245ULL)))));
                            }
                            /* vectorizable */
                            for (unsigned int i_8 = 3; i_8 < 18; i_8 += 2) /* same iter space */
                            {
                                var_26 = ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)1420))) + (-8237608680353187370LL));
                                var_27 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))))) >= ((~(arr_8 [i_2])))));
                            }
                            var_28 = ((/* implicit */unsigned char) var_7);
                            var_29 = ((/* implicit */unsigned short) (short)-13751);
                        }
                    } 
                } 
                var_30 = ((/* implicit */short) var_11);
            }
        } 
    } 
}
