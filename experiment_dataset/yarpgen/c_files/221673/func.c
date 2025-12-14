/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221673
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
    var_15 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) min((var_13), (((/* implicit */short) (!(((/* implicit */_Bool) var_5))))))))));
    var_16 = ((/* implicit */int) var_6);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 4; i_0 < 11; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            arr_5 [i_0] [i_0] [(signed char)3] = ((/* implicit */_Bool) ((var_6) * (((unsigned long long int) arr_0 [i_0]))));
            var_17 -= ((/* implicit */unsigned int) arr_1 [i_0 + 1]);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    {
                        var_18 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-8)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)9)))))) ? (arr_8 [i_3 + 1] [i_2] [i_1] [i_0 - 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_7)))))));
                        var_19 = ((/* implicit */unsigned char) 16383U);
                        var_20 = ((/* implicit */unsigned char) ((short) (unsigned short)54174));
                    }
                } 
            } 
            var_21 = ((/* implicit */unsigned int) (short)-9981);
        }
        var_22 = ((/* implicit */unsigned short) arr_0 [i_0]);
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            for (short i_5 = 0; i_5 < 14; i_5 += 1) 
            {
                {
                    var_23 -= (((-(((/* implicit */int) arr_7 [i_4 + 1] [i_5])))) + (((/* implicit */int) var_1)));
                    var_24 ^= ((/* implicit */unsigned long long int) (unsigned short)18329);
                }
            } 
        } 
        var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_9 [i_0 - 4] [i_0 + 1] [i_0 + 3] [i_0 - 1]))));
        var_26 = ((/* implicit */int) ((unsigned long long int) var_10));
    }
    for (unsigned int i_6 = 4; i_6 < 11; i_6 += 4) /* same iter space */
    {
        arr_21 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_3)) ? (arr_10 [i_6] [4] [i_6 + 2] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))))) ? (((/* implicit */unsigned long long int) ((var_1) ? (((long long int) (unsigned char)16)) : ((-(arr_4 [i_6] [i_6])))))) : ((+(((arr_20 [i_6 + 1]) - (((/* implicit */unsigned long long int) 1428312299U))))))));
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 12; i_7 += 4) 
        {
            for (unsigned long long int i_8 = 2; i_8 < 10; i_8 += 2) 
            {
                {
                    var_27 = ((/* implicit */int) arr_25 [i_8 + 2] [i_8 + 2]);
                    var_28 ^= ((((/* implicit */_Bool) arr_2 [i_7])) ? (((/* implicit */int) min((((/* implicit */short) arr_19 [i_6])), ((short)0)))) : (((/* implicit */int) var_13)));
                }
            } 
        } 
    }
}
