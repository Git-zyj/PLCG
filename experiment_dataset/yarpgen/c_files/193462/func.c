/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193462
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
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_7)) : (var_1)))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (-(((/* implicit */int) var_0))))), (var_4)))) : (((((var_5) / (((/* implicit */unsigned long long int) var_7)))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65519)) ? (var_1) : (((/* implicit */long long int) 0)))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (4799778898062641247LL))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 22; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 22; i_2 += 3) 
            {
                {
                    var_12 -= ((/* implicit */long long int) arr_3 [i_1 - 3] [i_2 - 3]);
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 23; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_13 -= ((/* implicit */signed char) (-(((arr_13 [15] [i_3 - 1] [3] [3] [3]) + (((/* implicit */long long int) var_6))))));
                                arr_14 [i_0] [i_1] [i_2 + 2] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_7 [i_1] [i_1])) - (((/* implicit */int) (signed char)-3)))) * ((+(((/* implicit */int) arr_3 [i_0] [i_3]))))));
                                arr_15 [i_1] [i_3] [i_2 - 2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)3)), (15327220910495239622ULL)))) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_5 [i_0 - 2]))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15677363787426727514ULL)) ? (var_7) : (var_10))))))))));
                                arr_16 [i_0 - 1] [6ULL] [i_1] [0ULL] [(_Bool)1] = ((/* implicit */unsigned int) (((-(((/* implicit */int) ((unsigned char) 11U))))) ^ (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) var_2)), (var_10)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2])) ? (2769380286282824109ULL) : (arr_5 [(unsigned char)5])))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (int i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        var_14 += ((_Bool) ((((/* implicit */_Bool) 15677363787426727514ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) : (2769380286282824109ULL)));
                        var_15 = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) 1541937724)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) var_3)))), (var_10)));
                    }
                    for (unsigned int i_6 = 2; i_6 < 22; i_6 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned int) max((max((2147483647), (((/* implicit */int) arr_21 [i_1] [i_2 + 1] [i_2] [i_6])))), ((~(((/* implicit */int) var_3))))));
                        arr_23 [i_0 + 2] [i_1] [i_2] [i_1] = ((((/* implicit */_Bool) (short)32767)) || (((/* implicit */_Bool) (short)32745)));
                    }
                }
            } 
        } 
    }
    var_17 = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */long long int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : (min((15677363787426727514ULL), (((/* implicit */unsigned long long int) var_4)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */int) (short)-32765))))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
}
