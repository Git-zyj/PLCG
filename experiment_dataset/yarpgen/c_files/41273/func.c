/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41273
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */_Bool) ((unsigned long long int) ((13011568912682605273ULL) << (((-4216690159532558856LL) + (4216690159532558881LL))))));
                    var_17 = ((/* implicit */long long int) arr_3 [i_0] [(unsigned short)10] [i_2]);
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 1; i_3 < 14; i_3 += 1) 
        {
            for (unsigned char i_4 = 0; i_4 < 17; i_4 += 1) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 2) 
                {
                    {
                        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_3 + 2] [i_3 + 2] [i_3 + 3] [i_0])) ? (((/* implicit */int) arr_1 [i_3 + 1] [i_3 - 1])) : (arr_8 [i_3 + 3] [i_3 - 1])))) ? (((/* implicit */int) (unsigned char)156)) : (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1))))));
                        var_19 = ((/* implicit */unsigned int) ((unsigned long long int) min((1125482092439196379LL), (((/* implicit */long long int) arr_13 [i_3 - 1] [i_3 + 1] [i_0] [i_3 - 1])))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_6 = 0; i_6 < 17; i_6 += 3) 
    {
        var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_0))));
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (~((~(((unsigned int) 3906991470U)))))))));
        /* LoopSeq 1 */
        for (unsigned int i_7 = 0; i_7 < 17; i_7 += 2) 
        {
            var_22 = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) arr_14 [i_6] [i_6] [i_7] [i_7])) ? (arr_4 [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_6] [i_6]))))));
            var_23 = ((/* implicit */unsigned int) arr_4 [i_7]);
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 1) 
            {
                for (unsigned char i_9 = 0; i_9 < 17; i_9 += 3) 
                {
                    {
                        var_24 = ((/* implicit */int) ((((arr_16 [i_6] [i_7] [i_8] [(unsigned short)15]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)4032))))) > (((((/* implicit */_Bool) var_8)) ? (max((3906991488U), (((/* implicit */unsigned int) var_4)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_28 [i_6] [i_9] [11ULL] [16ULL] [(_Bool)1])))))))));
                        arr_29 [11U] [11U] [i_9] [(_Bool)1] = ((/* implicit */unsigned int) arr_22 [i_7] [i_7]);
                        arr_30 [i_9] [i_8] [i_9] = ((/* implicit */int) (+(max((arr_27 [i_6] [i_6] [i_7] [i_8] [i_9]), (((/* implicit */unsigned long long int) (-(arr_8 [i_7] [i_8]))))))));
                    }
                } 
            } 
        }
    }
    var_25 = ((var_13) * (((/* implicit */unsigned int) ((/* implicit */int) var_11))));
}
