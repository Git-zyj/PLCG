/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38888
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
    var_10 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) & (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)91)) : (((/* implicit */int) min((var_3), (var_1)))))) : (((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 2; i_2 < 22; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (signed char i_4 = 1; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_11 -= ((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)110)) == (((/* implicit */int) (short)-31602)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)30786)) ? (((/* implicit */int) (unsigned short)3)) : (((/* implicit */int) (signed char)-90))))))))) : (((((/* implicit */_Bool) -3450351970468823457LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) >= (((/* implicit */int) (unsigned short)16)))))) : ((~(9223372036854775794LL)))))));
                                arr_14 [i_4] [i_1] [3] [i_3] [(short)12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) ((_Bool) arr_13 [i_0] [i_1] [i_2] [i_3] [i_4])))) ? (((int) 248U)) : (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_12 [i_0] [i_4] [i_4] [17U] [i_4])))) <= (((((/* implicit */_Bool) 10330687124232555474ULL)) ? (var_9) : (((/* implicit */int) arr_7 [i_4] [i_3] [(_Bool)1] [i_1])))))))));
                            }
                        } 
                    } 
                } 
                var_12 = min((min((((((/* implicit */_Bool) arr_4 [(signed char)17])) ? (var_4) : (((/* implicit */unsigned long long int) 81809851)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)30786)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-30786))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-1))))));
                var_13 = ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_8 [i_1] [i_0] [i_0] [i_0]))))), (var_6))), (((/* implicit */unsigned long long int) min((arr_5 [i_0] [i_1] [i_0] [i_0]), (((/* implicit */long long int) var_5)))))));
                arr_15 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */int) ((short) (_Bool)1))) >= (((/* implicit */int) ((((/* implicit */int) (signed char)-50)) <= (((/* implicit */int) (short)-17535))))))) ? ((-(((((/* implicit */_Bool) arr_11 [i_1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5)))))) : (((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) (unsigned short)45306)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_1] [i_1])))) : (((((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])) + (((/* implicit */int) var_8))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) / (var_9)))) : ((-(11687040919600233411ULL)))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)1)) > (((/* implicit */int) (signed char)-3))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) 2048635457U)) : (8116056949476996142ULL)))) ? (((/* implicit */int) (signed char)107)) : (((/* implicit */int) var_8))))));
}
