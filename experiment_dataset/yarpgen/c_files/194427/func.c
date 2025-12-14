/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194427
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
    var_14 = ((/* implicit */unsigned int) ((var_4) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)10945)) : (((/* implicit */int) (short)4644))))) ? (min((((/* implicit */unsigned long long int) (short)-4657)), (var_4))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-4645)) ? (((/* implicit */int) (short)-4674)) : (((/* implicit */int) (short)-4674)))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551614ULL)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [4])))))) ? (((unsigned long long int) var_3)) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_9), (arr_1 [i_0])))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_7 [i_1] = ((/* implicit */short) ((int) (!(((/* implicit */_Bool) (+(1ULL)))))));
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) 2955483585U)) / (var_10)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) 2769583879U)) : (3433692080084364714LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) == (((/* implicit */int) var_12))))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)16)) ? (12ULL) : (18446744073709551599ULL)))) ? (max((arr_0 [i_2]), (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18272))))) : (4398046510976ULL)));
                    arr_8 [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) 2955483585U);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 4; i_3 < 12; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                arr_15 [i_1] = ((/* implicit */int) 18446744073709551615ULL);
                                var_16 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_1 - 1] [i_1] [i_3 + 3] [i_3 + 3] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (792584154U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)31))) : (18446744073709551605ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) max((((/* implicit */unsigned long long int) 2325970795U)), (var_8))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (signed char i_5 = 2; i_5 < 17; i_5 += 1) 
    {
        arr_20 [i_5 + 2] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) arr_19 [i_5 - 1])), (min((((/* implicit */unsigned long long int) ((2147483630) << (((var_13) - (7140596485454098537LL)))))), (((var_4) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)200)))))))));
        arr_21 [i_5] [i_5] = ((/* implicit */int) max((((((/* implicit */_Bool) arr_16 [i_5])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)24750)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)82))))) : (arr_16 [i_5]))), (((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */unsigned long long int) var_10)) == (arr_16 [i_5])))))));
        arr_22 [i_5] = ((/* implicit */short) ((min((max((var_0), (((/* implicit */long long int) (short)4671)))), (var_3))) + (((/* implicit */long long int) (~(((/* implicit */int) var_2)))))));
    }
    for (short i_6 = 0; i_6 < 22; i_6 += 4) 
    {
        arr_27 [(unsigned char)13] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_24 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_4))) - (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_24 [i_6]), (((/* implicit */unsigned short) (_Bool)1))))))));
        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) (!(((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_5)) ? (-3588950549044657032LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))))))));
    }
}
