/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216054
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
    var_11 *= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)186)) && (((/* implicit */_Bool) 0U))));
    var_12 = ((/* implicit */unsigned int) var_5);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) (+(min((var_1), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)0)))))))));
        arr_5 [i_0] = ((/* implicit */unsigned char) arr_2 [i_0]);
    }
    for (int i_1 = 4; i_1 < 10; i_1 += 2) 
    {
        var_13 -= ((signed char) ((((/* implicit */_Bool) arr_1 [13])) ? (((/* implicit */int) (unsigned char)186)) : ((~(((/* implicit */int) (short)-32755))))));
        var_14 = ((/* implicit */long long int) (_Bool)1);
        /* LoopNest 2 */
        for (signed char i_2 = 3; i_2 < 10; i_2 += 4) 
        {
            for (long long int i_3 = 0; i_3 < 12; i_3 += 1) 
            {
                {
                    var_15 = ((/* implicit */signed char) (-((~(((/* implicit */int) min((var_10), (((/* implicit */unsigned short) arr_12 [i_3])))))))));
                    /* LoopNest 2 */
                    for (short i_4 = 1; i_4 < 10; i_4 += 3) 
                    {
                        for (unsigned long long int i_5 = 4; i_5 < 9; i_5 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */int) arr_3 [i_1])) ^ (((/* implicit */int) var_8)))))));
                                var_17 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */int) arr_20 [i_4])) * (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_18 [(unsigned short)7])))));
                                var_18 = ((/* implicit */int) min((arr_7 [i_4]), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_19 [5LL] [(_Bool)1] [i_2] [(unsigned short)0] [8U] [5LL] [5LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) : (var_1))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 + 2]))))))));
                                arr_21 [i_3] [i_3] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)50137))))) ? (((/* implicit */int) arr_20 [(unsigned char)0])) : (((/* implicit */int) arr_19 [i_5] [i_4] [i_3] [i_3] [(unsigned short)2] [(_Bool)1] [i_1]))))));
                            }
                        } 
                    } 
                    arr_22 [i_1] [2ULL] [i_3] |= ((/* implicit */unsigned int) arr_8 [i_3]);
                    arr_23 [i_1] [i_3] [i_3] [6U] = (~(((/* implicit */int) var_4)));
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        for (unsigned char i_7 = 2; i_7 < 10; i_7 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((int) (unsigned short)15))), (var_1)));
                                arr_30 [i_3] = min((((unsigned long long int) min((((/* implicit */long long int) (_Bool)1)), (871438842230431236LL)))), (3548313460423397657ULL));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_20 |= ((/* implicit */int) ((unsigned char) var_6));
    var_21 = ((/* implicit */signed char) var_5);
}
