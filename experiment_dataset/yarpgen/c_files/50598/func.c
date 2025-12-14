/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50598
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
    var_11 ^= ((/* implicit */int) ((((/* implicit */_Bool) (~(max((((/* implicit */long long int) 2345536052U)), (3064551143645883965LL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((short)32758), (((/* implicit */short) (unsigned char)8)))))) : (((((/* implicit */_Bool) max((70351564308480ULL), (((/* implicit */unsigned long long int) (short)32748))))) ? (((/* implicit */unsigned int) (+(24576)))) : (((((/* implicit */_Bool) var_0)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))));
    var_12 |= ((((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8)))) >= (((1117495287) ^ (((/* implicit */int) (short)32757)))))) ? (((/* implicit */unsigned long long int) var_2)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (short)-18991)) : (((/* implicit */int) (short)32757))))) : (min((14493779640052127811ULL), (((/* implicit */unsigned long long int) (short)32744)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)7936)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_3]))) : (3026522071152175907ULL))) % (((/* implicit */unsigned long long int) (~(1060186014))))))) ? (((/* implicit */unsigned long long int) arr_5 [i_0] [3] [i_2] [i_3])) : ((+(8536274832626064626ULL)))));
                            arr_9 [i_2] [i_3] [i_2] [i_1] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_1] [i_3])) ? (min((arr_1 [i_3] [i_2]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_3])) ? (arr_8 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))))) : ((((_Bool)1) ? (((((/* implicit */_Bool) (unsigned short)7625)) ? (((/* implicit */unsigned long long int) 2147483647)) : (70351564308483ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */long long int) -1937506269)) : (-3624641424522240843LL))))))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((-(arr_4 [i_0]))), (((((/* implicit */_Bool) 7021232406713042065LL)) ? (((/* implicit */int) (unsigned char)183)) : (((/* implicit */int) (unsigned short)19934))))))) ? (((((/* implicit */_Bool) (unsigned short)65532)) ? (((((/* implicit */_Bool) (short)2610)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (10894316797858128777ULL))) : (((/* implicit */unsigned long long int) (-2147483647 - 1))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 281474976677888ULL)) ? (((/* implicit */unsigned long long int) 541025077U)) : (6535013041348223178ULL)))) ? (min((((/* implicit */unsigned long long int) arr_6 [i_1] [i_1] [i_0] [i_0])), (70351564308483ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 18446673704965373952ULL)))))))))))));
                arr_10 [i_0] [i_0] [i_0] &= ((/* implicit */short) (-(-1103460663078568929LL)));
                var_15 ^= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (17991027559169010824ULL)));
            }
        } 
    } 
}
