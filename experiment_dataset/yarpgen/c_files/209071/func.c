/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209071
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
    var_15 = max((((/* implicit */unsigned long long int) var_9)), (var_13));
    /* LoopSeq 3 */
    for (short i_0 = 3; i_0 < 16; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((((((/* implicit */_Bool) min((7333822322287997803ULL), (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-29910)) + (2147483647))) << (((13142754589656281265ULL) - (13142754589656281265ULL)))))) : (min((((/* implicit */unsigned long long int) 4072922350U)), (13142754589656281256ULL))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (_Bool)1)))));
        arr_3 [i_0] = ((/* implicit */int) var_10);
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) arr_0 [i_0] [i_0 - 3]));
    }
    for (short i_1 = 3; i_1 < 16; i_1 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            for (int i_3 = 0; i_3 < 17; i_3 += 3) 
            {
                for (short i_4 = 0; i_4 < 17; i_4 += 4) 
                {
                    {
                        arr_15 [i_4] |= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((((/* implicit */int) var_5)), ((+(((/* implicit */int) arr_1 [i_3]))))))), (var_10)));
                        arr_16 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)10258)) ? (((/* implicit */int) (short)-23741)) : (((/* implicit */int) (signed char)10))));
                        var_16 = ((unsigned short) ((signed char) var_10));
                        arr_17 [i_1] [i_2] [i_1] [i_3] [i_4] = ((int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)23759))))), ((unsigned short)65533)));
                    }
                } 
            } 
        } 
        arr_18 [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) (!(var_3))));
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 17; i_5 += 4) 
        {
            for (short i_6 = 3; i_6 < 15; i_6 += 4) 
            {
                {
                    arr_23 [i_1] [i_5] [i_1] = ((/* implicit */short) arr_6 [i_1]);
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) (unsigned char)26)) ^ (((/* implicit */int) (short)23781)))))) ? (((/* implicit */int) var_9)) : (((((/* implicit */int) (short)23747)) ^ (((/* implicit */int) (short)-13562))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_7 = 3; i_7 < 16; i_7 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */int) arr_9 [(short)0] [(unsigned char)16])) - (((/* implicit */int) (short)-13538)))))));
        arr_27 [i_7] = var_4;
        arr_28 [i_7] = ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) 16777215U)))));
        arr_29 [i_7] = ((/* implicit */long long int) ((unsigned char) (short)-13555));
    }
    /* LoopNest 2 */
    for (unsigned int i_8 = 2; i_8 < 19; i_8 += 3) 
    {
        for (unsigned long long int i_9 = 2; i_9 < 17; i_9 += 4) 
        {
            {
                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) arr_30 [i_8] [(unsigned short)7]))));
                arr_36 [i_8] = ((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned long long int) var_14)) : (var_13))))))), (var_14)));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) max((((/* implicit */int) ((signed char) min((var_6), (((/* implicit */short) (unsigned char)222)))))), (((((/* implicit */int) var_5)) | (((/* implicit */int) ((unsigned char) var_14)))))));
}
