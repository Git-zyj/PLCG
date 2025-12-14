/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53861
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) var_1)), (-10LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) 134217727)) ? (((/* implicit */unsigned int) var_4)) : (var_7))))))) | (var_2))))));
                    var_14 = ((/* implicit */int) arr_6 [i_2] [i_1] [i_1] [i_0]);
                    arr_7 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) ((((arr_3 [i_0] [i_1] [i_2]) ? (-12LL) : (((/* implicit */long long int) 583180720)))) == (2872373660637707561LL))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34125))) <= (var_7)))), (var_5))))));
    /* LoopSeq 2 */
    for (int i_3 = 0; i_3 < 22; i_3 += 3) 
    {
        arr_11 [i_3] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (var_2))), (((/* implicit */unsigned long long int) (+(arr_9 [i_3] [i_3]))))));
        var_16 -= ((/* implicit */int) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) (unsigned char)24)), (var_2))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)19)) ? (4294967274U) : (((/* implicit */unsigned int) var_0)))))))) ? (((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) var_1)) : (var_12))) % (((/* implicit */long long int) min((((/* implicit */unsigned int) var_4)), (4294967290U)))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (signed char)82)), ((short)-25874)))))));
        var_17 = ((/* implicit */unsigned short) (unsigned char)210);
        arr_12 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_3])) && (((/* implicit */_Bool) 4294967274U))))) % (min((-349358355), (((/* implicit */int) arr_8 [i_3] [i_3]))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((0) <= (((/* implicit */int) (unsigned char)71)))))) : (arr_10 [i_3])));
        var_18 = ((/* implicit */int) max((var_18), (((((((((/* implicit */_Bool) (signed char)71)) ? (var_1) : (((/* implicit */int) var_11)))) << (((((/* implicit */int) arr_8 [i_3] [i_3])) - (63))))) | (((/* implicit */int) (_Bool)1))))));
    }
    /* vectorizable */
    for (short i_4 = 0; i_4 < 23; i_4 += 1) 
    {
        arr_16 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 21U)) ? ((+(5629487014884876263ULL))) : (((/* implicit */unsigned long long int) var_8))));
        var_19 = ((((/* implicit */_Bool) 5U)) ? (((/* implicit */int) arr_13 [i_4])) : (((/* implicit */int) (unsigned char)24)));
    }
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 24; i_5 += 1) 
    {
        for (int i_6 = 0; i_6 < 24; i_6 += 3) 
        {
            {
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) var_4))));
                arr_22 [i_5] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_6] [i_5])) ? ((+(arr_17 [i_6] [i_5]))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) var_9)), (arr_19 [i_5]))))));
                var_21 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_21 [i_5] [i_5])) & (((/* implicit */int) arr_21 [i_5] [i_5]))))) ? (var_0) : (((((/* implicit */_Bool) arr_19 [i_5])) ? (((/* implicit */int) (unsigned short)18509)) : (-1599243758)))));
            }
        } 
    } 
    var_22 ^= max((-270579946), (((/* implicit */int) (short)22325)));
}
