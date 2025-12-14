/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205372
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) max((arr_3 [i_0]), (((/* implicit */unsigned int) var_17))))) || (((/* implicit */_Bool) max((var_4), (((/* implicit */short) var_10)))))))));
        arr_5 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)-32754)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32756))) : (351994262908859527ULL))) ^ (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)-21830)), (arr_3 [i_0]))))))) ? (max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_19)) : (arr_0 [i_0]))), (((((/* implicit */_Bool) (short)21830)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_18))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */long long int) 1885551171))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-19)) ? (((/* implicit */int) (short)9404)) : (((/* implicit */int) var_11))))) : (max((arr_1 [i_0]), (((/* implicit */unsigned int) var_2)))))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((378481373U) >> (((-1885551172) + (1885551179)))))) ? ((+(((((/* implicit */_Bool) arr_8 [i_2] [i_1] [i_0])) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))) : (max((((arr_0 [i_0]) + (((/* implicit */long long int) ((/* implicit */int) var_7))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_0])))))))));
                    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) min(((short)32754), (((/* implicit */short) arr_7 [i_1] [i_2]))))), (((((/* implicit */_Bool) -1885551172)) ? (var_16) : (((/* implicit */long long int) arr_1 [i_0]))))))) ? (((((/* implicit */_Bool) arr_3 [i_2])) ? (max((10671108569654986525ULL), (((/* implicit */unsigned long long int) arr_9 [i_2] [i_1] [i_1] [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)21830), (var_14))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)9404)))))))))));
                }
            } 
        } 
    }
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)40))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) var_12)), (var_3))))) : (var_6)))) ? ((+(max((var_8), (((/* implicit */long long int) var_10)))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3451003764U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_6))))))))));
    var_23 = ((/* implicit */unsigned int) (+(-1039352924)));
}
