/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32484
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 16; i_2 += 1) 
                {
                    for (short i_3 = 3; i_3 < 14; i_3 += 1) 
                    {
                        {
                            var_18 = ((((/* implicit */unsigned long long int) min((min((2179414188U), (((/* implicit */unsigned int) var_10)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_5 [i_2] [i_1] [i_0])) : (((/* implicit */int) (signed char)-16)))))))) < (((((/* implicit */_Bool) (-(((/* implicit */int) (short)32767))))) ? (15034540759216577940ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
                            arr_11 [i_0] [i_0] [i_1] [i_2] [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((short)32767), ((short)-32764)))) ? (((((/* implicit */_Bool) (short)-32764)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [(unsigned short)2] [(unsigned short)2]))) : (arr_10 [4] [i_3] [1ULL] [i_3]))) : (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0])) / (((/* implicit */int) (short)32763)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)206)) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */int) arr_1 [i_3] [i_2])) << (((((/* implicit */int) (unsigned short)38069)) - (38062)))))))) : (((4329837018378110818LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned long long int) max((var_19), (min((((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 1] [i_1 + 1]))) : (var_5))), (((/* implicit */unsigned long long int) min((arr_0 [i_1 + 2]), (((/* implicit */unsigned short) (_Bool)1)))))))));
            }
        } 
    } 
    var_20 ^= ((/* implicit */unsigned short) ((var_5) * (((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((((/* implicit */unsigned char) var_12)), ((unsigned char)0)))), (max((((/* implicit */long long int) 1702791251)), (2668986886711931322LL))))))));
    /* LoopNest 2 */
    for (long long int i_4 = 0; i_4 < 11; i_4 += 2) 
    {
        for (signed char i_5 = 3; i_5 < 10; i_5 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_6 = 0; i_6 < 11; i_6 += 3) 
                {
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        for (unsigned char i_8 = 1; i_8 < 10; i_8 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_0) : (((/* implicit */int) arr_13 [i_5]))))) ? (max((-2LL), (((/* implicit */long long int) 2147483647)))) : (-4286431646059752788LL))), (((/* implicit */long long int) min((((/* implicit */int) arr_7 [i_7 - 1] [i_7 - 1] [i_6])), (2147483647))))));
                                arr_23 [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_15 [i_5] [i_5] [i_7])) : (((/* implicit */int) var_16))))) || (((/* implicit */_Bool) (short)21942)))))) : (var_4)));
                                var_22 = ((/* implicit */unsigned char) (+(((((/* implicit */int) (!(arr_13 [i_4])))) / (((/* implicit */int) ((-2147483636) != (((/* implicit */int) (unsigned short)10646)))))))));
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */_Bool) max((((((((/* implicit */_Bool) arr_4 [i_4] [i_4])) && ((_Bool)1))) ? (min((3598372194U), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8229805811524129893LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_12))))) ? (((/* implicit */int) (!((_Bool)0)))) : (((/* implicit */int) (unsigned char)177)))))));
                var_24 = ((/* implicit */long long int) max(((unsigned short)37344), (((/* implicit */unsigned short) (_Bool)0))));
            }
        } 
    } 
}
