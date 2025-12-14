/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216915
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
    var_15 ^= ((/* implicit */short) ((((/* implicit */int) var_12)) % (((((/* implicit */_Bool) 1135899668)) ? (-1722772811) : (((/* implicit */int) (short)-16522))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (short)-18245)) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (1135899651))), (((/* implicit */int) arr_0 [i_0 - 1]))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            arr_5 [i_1] [i_0] [i_0] &= ((/* implicit */unsigned char) ((int) ((_Bool) (short)19218)));
            arr_6 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (signed char)-34))) ? (((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */int) arr_3 [i_1] [i_0])) : (-1135899671))) : (-1135899651)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)19218))) : (((((/* implicit */_Bool) (+(1135899651)))) ? (((/* implicit */unsigned long long int) ((int) 1722772829))) : (var_1)))));
            /* LoopNest 2 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (int i_3 = 1; i_3 < 15; i_3 += 4) 
                {
                    {
                        arr_12 [i_0] [i_1] [i_0] [15ULL] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), (arr_4 [i_2] [i_1])))) ? (((/* implicit */unsigned long long int) ((var_4) & (((/* implicit */unsigned int) var_10))))) : ((((_Bool)1) ? (15631497318440188600ULL) : (((/* implicit */unsigned long long int) 1131985987)))))));
                        arr_13 [i_0] [i_0] &= ((/* implicit */unsigned long long int) var_13);
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_17 = arr_10 [i_0] [i_0] [i_2] [i_3] [i_1];
                            arr_17 [i_0 - 1] [i_1] [i_2] [i_3 + 3] [i_4] = ((/* implicit */int) max((max((9ULL), (((/* implicit */unsigned long long int) (short)21299)))), (((/* implicit */unsigned long long int) -1LL))));
                            arr_18 [i_0 + 2] [i_1] [i_2] [i_2] [(_Bool)1] [i_3] [i_4] = ((/* implicit */int) (((((_Bool)0) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11663141438444239314ULL)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_2])))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (1919045454152635021ULL))))) << (((/* implicit */int) (_Bool)1))));
                        }
                    }
                } 
            } 
            var_18 = ((/* implicit */unsigned long long int) (short)22506);
            arr_19 [i_0] [i_0] [i_1] = ((/* implicit */signed char) max((((var_1) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (var_10) : (arr_15 [i_0] [i_0 + 2] [i_1] [i_1] [i_1] [i_1])))))), ((-(7943120988104379589ULL)))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */_Bool) var_7);
            arr_22 [i_0] = ((/* implicit */unsigned char) (unsigned short)41123);
            var_20 = ((/* implicit */int) ((unsigned short) (~(((((/* implicit */_Bool) (unsigned short)65535)) ? (361855681) : (((/* implicit */int) (unsigned char)112)))))));
            /* LoopSeq 1 */
            for (int i_6 = 3; i_6 < 15; i_6 += 2) 
            {
                arr_26 [i_6] [i_6] [i_6] [i_6] = ((_Bool) var_8);
                var_21 ^= ((/* implicit */unsigned long long int) 1135899650);
            }
        }
    }
    for (unsigned short i_7 = 0; i_7 < 14; i_7 += 4) 
    {
        var_22 = ((/* implicit */int) var_4);
        var_23 = ((/* implicit */long long int) 1490360408);
        var_24 = ((/* implicit */unsigned char) (short)3598);
        var_25 = arr_9 [i_7];
    }
}
