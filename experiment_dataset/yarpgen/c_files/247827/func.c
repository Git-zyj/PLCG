/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247827
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
    var_16 = ((/* implicit */unsigned char) var_4);
    var_17 = ((/* implicit */short) var_3);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 *= ((/* implicit */int) ((((536870911) ^ (((/* implicit */int) (short)23590)))) >= (((/* implicit */int) max((((/* implicit */short) arr_3 [i_0])), ((short)23590))))));
                    var_19 |= ((/* implicit */unsigned int) ((signed char) (short)11846));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) max((1327716345), ((~(((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1])) ? (var_14) : (((/* implicit */int) var_6))))))));
                                var_21 *= ((/* implicit */unsigned char) max((((((/* implicit */unsigned int) -262144)) | (134217727U))), (((/* implicit */unsigned int) ((signed char) (unsigned char)97)))));
                                var_22 = ((/* implicit */_Bool) arr_7 [19LL] [i_1] [i_1] [i_1] [i_1] [i_1]);
                                var_23 = ((/* implicit */unsigned char) (-(max((((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_2] [i_3] [i_1] [i_1])), (0ULL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 = ((((/* implicit */_Bool) ((short) var_9))) ? (((/* implicit */unsigned long long int) var_9)) : (min(((~(var_15))), (((/* implicit */unsigned long long int) 89916580)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_5 = 3; i_5 < 9; i_5 += 4) 
    {
        var_25 &= 134217727U;
        /* LoopNest 3 */
        for (unsigned char i_6 = 2; i_6 < 9; i_6 += 3) 
        {
            for (int i_7 = 3; i_7 < 8; i_7 += 1) 
            {
                for (unsigned int i_8 = 0; i_8 < 10; i_8 += 3) 
                {
                    {
                        var_26 -= ((/* implicit */short) ((unsigned long long int) -6495609623754742108LL));
                        var_27 = ((/* implicit */unsigned int) ((int) -1851462416));
                        var_28 = ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) ((unsigned char) 1937296945))));
                        var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32767))) : (arr_5 [i_8] [i_6 + 1] [i_5])));
                    }
                } 
            } 
        } 
    }
}
