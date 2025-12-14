/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47091
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 13; i_2 += 2) 
            {
                for (int i_3 = 4; i_3 < 11; i_3 += 3) 
                {
                    {
                        arr_9 [i_1] [i_2 + 1] [i_1] [i_0] [i_1] = ((/* implicit */int) var_9);
                        var_10 = ((/* implicit */int) max((var_10), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */int) var_4)) & (((/* implicit */int) var_7)))) : (((/* implicit */int) var_9))))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_4 = 4; i_4 < 13; i_4 += 2) 
        {
            for (unsigned char i_5 = 0; i_5 < 15; i_5 += 3) 
            {
                for (unsigned short i_6 = 0; i_6 < 15; i_6 += 3) 
                {
                    {
                        arr_19 [i_6] [i_5] [i_4] [i_4] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)14927)) >= (((/* implicit */int) (_Bool)1))));
                        arr_20 [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) % (((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (var_0))))));
                        arr_21 [i_6] [i_5] [i_0] [i_0] = ((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)254))) + (8108313396348738334ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0)))))));
                    }
                } 
            } 
        } 
        arr_22 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((8108313396348738334ULL) * (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-32148)) & (((/* implicit */int) (_Bool)1))))))))));
    }
    /* vectorizable */
    for (unsigned short i_7 = 0; i_7 < 12; i_7 += 2) 
    {
        var_11 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))));
        arr_27 [i_7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))));
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) var_2)) == (((/* implicit */int) var_0))));
    }
    for (int i_8 = 1; i_8 < 15; i_8 += 2) 
    {
        /* LoopNest 3 */
        for (short i_9 = 1; i_9 < 15; i_9 += 3) 
        {
            for (signed char i_10 = 0; i_10 < 17; i_10 += 2) 
            {
                for (unsigned int i_11 = 0; i_11 < 17; i_11 += 3) 
                {
                    {
                        arr_39 [i_8 + 2] [i_8 + 1] = (+(((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((var_1) * (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5))))))));
                        arr_40 [i_8] [i_9 - 1] [i_10] [i_10] [i_11] = ((/* implicit */_Bool) min((((((((/* implicit */int) var_6)) / (((/* implicit */int) var_0)))) << (((8108313396348738334ULL) - (8108313396348738324ULL))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_7)) >> (((/* implicit */int) var_8))))))))));
                        arr_41 [i_11] [i_8] [i_11] [i_11] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((max((((/* implicit */long long int) var_8)), (var_1))), (((/* implicit */long long int) ((var_8) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))))))));
                        var_13 = ((/* implicit */short) ((3444950511U) * (((/* implicit */unsigned int) 1169483252))));
                        arr_42 [i_8] [6U] [i_10] [i_8] = ((/* implicit */unsigned int) ((var_6) ? (((/* implicit */long long int) min(((+(((/* implicit */int) var_0)))), (((/* implicit */int) var_0))))) : (max((var_1), (((/* implicit */long long int) var_7))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_12 = 0; i_12 < 17; i_12 += 3) 
        {
            for (short i_13 = 3; i_13 < 15; i_13 += 3) 
            {
                {
                    var_14 = ((/* implicit */_Bool) max((((/* implicit */int) var_9)), (((((/* implicit */int) var_9)) | (((/* implicit */int) var_8))))));
                    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned short) (!(var_2))))))) ? (((/* implicit */int) var_4)) : (((max((var_3), (var_2))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (!(var_3))))))));
                    var_16 = var_0;
                }
            } 
        } 
    }
    var_17 = ((/* implicit */unsigned short) min((((/* implicit */unsigned char) var_2)), (var_5)));
    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) var_9))));
    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) var_5))));
}
