/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235189
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
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        {
                            var_14 = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) arr_6 [i_2])) : (max((var_10), (((/* implicit */unsigned long long int) (~(-2055526792)))))));
                            arr_13 [i_2] = ((/* implicit */int) (+(-4498300900431879744LL)));
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) (signed char)11)) && (((/* implicit */_Bool) 15331345125045275824ULL)))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) 637009284)), (var_6)))) : (11895858154436542335ULL)));
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_11 [i_0] [14ULL]), (arr_11 [i_0] [24LL])))) ? (((((/* implicit */_Bool) (-(var_1)))) ? (arr_8 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-116)))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (short i_4 = 3; i_4 < 13; i_4 += 2) 
    {
        var_17 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) -8098133186879385474LL)) * (3521469726574237094ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */int) (short)4095)), (var_12))))))) ? (((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned long long int) arr_16 [i_4 - 2] [i_4]))))) ? (var_7) : (((((/* implicit */_Bool) var_10)) ? (var_8) : (((/* implicit */unsigned long long int) arr_8 [i_4 - 3] [18ULL])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_9 [i_4] [(short)21] [i_4] [i_4 - 3] [i_4]), (arr_9 [0] [i_4] [i_4 + 2] [i_4 + 1] [i_4])))))));
        var_18 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [0ULL])) ? (arr_12 [i_4 - 2] [i_4] [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_8))))))) ? (((((/* implicit */_Bool) (~(arr_4 [i_4 - 1] [i_4])))) ? (arr_1 [i_4 - 1] [i_4 + 2]) : (((/* implicit */int) var_0)))) : (var_3)));
    }
    for (int i_5 = 3; i_5 < 16; i_5 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned char i_6 = 2; i_6 < 16; i_6 += 4) 
        {
            for (unsigned short i_7 = 3; i_7 < 15; i_7 += 2) 
            {
                for (short i_8 = 1; i_8 < 13; i_8 += 2) 
                {
                    {
                        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) arr_12 [i_6 - 1] [i_6 - 2] [i_7 - 2] [i_6]))) ? (min((((var_2) ? (var_10) : (((/* implicit */unsigned long long int) arr_6 [i_6])))), (((((/* implicit */unsigned long long int) var_11)) + (var_10))))) : (min((((/* implicit */unsigned long long int) ((52776558133248LL) != (((/* implicit */long long int) 1335004387U))))), (((((/* implicit */_Bool) var_3)) ? (11322903889345188242ULL) : (((/* implicit */unsigned long long int) 1))))))));
                        arr_30 [i_8] [i_6] = max((((((/* implicit */_Bool) arr_23 [i_6 - 1] [i_6 - 1])) ? (var_6) : (arr_2 [i_7 - 1] [i_6 - 1]))), (((/* implicit */unsigned int) arr_23 [i_6 + 1] [i_6 - 1])));
                    }
                } 
            } 
        } 
        var_20 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) arr_2 [i_5] [i_5])) : (var_8)))) ? ((+(((/* implicit */int) var_2)))) : ((-(((/* implicit */int) var_2))))))) ? (((((/* implicit */_Bool) arr_29 [i_5 - 1] [i_5 - 1] [i_5 - 2] [i_5 - 1] [i_5])) ? (arr_29 [i_5 - 1] [i_5 - 3] [i_5] [i_5 + 1] [i_5]) : (arr_29 [i_5 - 3] [i_5 - 1] [i_5 - 3] [i_5 - 1] [i_5 - 2]))) : ((+(((/* implicit */int) var_4))))));
    }
    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
    {
        arr_33 [i_9] [12ULL] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_11)))) ? (((/* implicit */long long int) max((0), (((/* implicit */int) (short)22377))))) : (((long long int) arr_4 [i_9] [i_9 - 1])))))));
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) (!(((/* implicit */_Bool) (+(max((((/* implicit */unsigned long long int) var_3)), (arr_32 [i_9] [2LL])))))))))));
        var_22 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((_Bool) var_9))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_2 [i_9 - 1] [(_Bool)1])) <= (var_5))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) arr_6 [(short)8])) / (var_6)))) | (arr_8 [i_9 - 1] [i_9 - 1])))) : (((((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_9]))) >= (4553834194554528871LL))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_9 - 1])))))));
        var_23 &= ((/* implicit */long long int) (+(min((arr_1 [i_9 - 1] [i_9 - 1]), (((/* implicit */int) ((unsigned char) arr_31 [(unsigned char)16])))))));
    }
}
