/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237503
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((max((var_11), (((/* implicit */unsigned int) var_13)))) != (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 17; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((max((10745740519433454255ULL), (var_4))), (((/* implicit */unsigned long long int) var_11))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)252)) % (1149971026)))) : (((((/* implicit */_Bool) -1130536684012945027LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_4)))));
                                var_16 = ((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) ((((/* implicit */_Bool) 1149971016)) ? (((/* implicit */unsigned int) 1149971040)) : (4294967293U)))), (((long long int) (unsigned short)17323)))), (((/* implicit */long long int) ((((((/* implicit */_Bool) 7607307374843570205LL)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)17332)) : (((/* implicit */int) var_0))))))))));
                                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((-1149971016), (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_3)) ? (5148073515066281007LL) : (((/* implicit */long long int) var_13)))), (((var_3) + (((/* implicit */long long int) var_11))))))) : (max((8188093418556902058ULL), (((/* implicit */unsigned long long int) (signed char)-108)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) max((var_9), (((/* implicit */long long int) min((((((/* implicit */_Bool) -1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8)))), (var_13))))));
    /* LoopNest 3 */
    for (long long int i_5 = 0; i_5 < 10; i_5 += 4) 
    {
        for (int i_6 = 0; i_6 < 10; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 4) 
            {
                {
                    arr_25 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(-1LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-46))) : (18446744073709551614ULL)));
                    arr_26 [i_5] [i_5] [(signed char)4] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (min((((/* implicit */long long int) (unsigned short)25970)), (1189289635138474583LL))) : (((/* implicit */long long int) var_2))));
                }
            } 
        } 
    } 
    var_19 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17321))))))) ? (max((var_6), (((/* implicit */unsigned long long int) ((4294967293U) >> (((((/* implicit */int) (unsigned short)14445)) - (14431)))))))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_0)), (min((((/* implicit */long long int) var_13)), (-17LL))))))));
    var_20 -= ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551609ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)51090)) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) % (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)48203)))))) : (7205203727961561399ULL)));
}
