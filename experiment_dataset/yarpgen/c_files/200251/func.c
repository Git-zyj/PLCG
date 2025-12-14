/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200251
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
    for (signed char i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 7; i_1 += 4) 
        {
            for (long long int i_2 = 4; i_2 < 8; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 8; i_3 += 4) 
                    {
                        for (int i_4 = 1; i_4 < 9; i_4 += 1) 
                        {
                            {
                                arr_17 [i_0] [i_0] [i_2] [i_0] [i_0 + 1] [2] [i_0] &= ((/* implicit */signed char) (+(((/* implicit */int) ((short) ((short) (_Bool)1))))));
                                var_19 ^= max(((((-(((/* implicit */int) arr_0 [i_1])))) % (((/* implicit */int) max((arr_5 [6U] [i_4]), (arr_8 [i_0 - 1] [i_1] [i_4 + 1])))))), (((/* implicit */int) ((var_2) == (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [1LL] [6LL] [i_2 + 2] [i_3] [(signed char)3] [i_4 + 2])))))));
                                arr_18 [i_1] [i_2] [(short)0] &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)128)))))) < (((unsigned long long int) (unsigned char)113))));
                                var_20 ^= ((/* implicit */int) ((max((16777216), (((/* implicit */int) (unsigned char)114)))) != (((/* implicit */int) arr_13 [(signed char)3] [i_4 + 1] [i_4 - 1] [(signed char)3] [i_4 + 1] [0U]))));
                            }
                        } 
                    } 
                    arr_19 [i_0] [i_1 - 2] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1))))) | (((/* implicit */int) ((arr_14 [(_Bool)1] [(signed char)8] [i_2] [i_0] [i_1] [i_1 + 2] [i_2]) != (((/* implicit */int) var_6))))))), ((+(((/* implicit */int) max((((/* implicit */unsigned short) arr_7 [i_0])), (arr_10 [i_0] [i_1 - 1] [i_2 + 3]))))))));
                    var_21 = ((/* implicit */int) ((((/* implicit */unsigned int) (+(((((/* implicit */int) var_4)) << (((((/* implicit */int) var_3)) - (48309)))))))) <= (((arr_11 [i_2] [i_2] [i_1] [i_0] [i_0 - 2] [i_0 - 1]) >> (((arr_11 [i_0] [i_0] [i_0 - 1] [i_1] [i_1] [(_Bool)1]) - (683828717U)))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) var_11);
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 16; i_5 += 4) 
    {
        for (short i_6 = 1; i_6 < 15; i_6 += 4) 
        {
            {
                var_23 -= ((/* implicit */signed char) (short)-30389);
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 3; i_7 < 16; i_7 += 2) 
                {
                    for (short i_8 = 1; i_8 < 16; i_8 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) (signed char)96)))) != (((/* implicit */int) ((((((/* implicit */_Bool) arr_32 [i_8] [i_7] [i_7] [i_6] [i_6] [i_5 + 1])) ? (arr_26 [0] [i_6 - 1] [12U]) : (((/* implicit */unsigned long long int) arr_32 [(unsigned short)10] [i_6] [i_5] [i_8 - 1] [i_7 - 2] [i_5 + 1])))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_7))))))))))));
                            var_25 = ((/* implicit */short) arr_20 [i_5 - 1] [i_6]);
                        }
                    } 
                } 
            }
        } 
    } 
}
