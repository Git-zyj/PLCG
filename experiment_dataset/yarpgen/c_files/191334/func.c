/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191334
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
    var_15 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned int) (unsigned short)23694))))) ? (((((/* implicit */_Bool) var_0)) ? (4348972511703629485LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)41819))))) : (((/* implicit */long long int) ((unsigned int) var_12)))))) ? (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)41841))))) >> ((((~(((/* implicit */int) var_9)))) + (186)))))) : (((((/* implicit */_Bool) (-(var_1)))) ? (((((/* implicit */_Bool) var_10)) ? (var_3) : (var_12))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                arr_16 [i_1] [i_1] [7U] [i_3] [8ULL] = ((/* implicit */signed char) (~(((/* implicit */int) arr_4 [i_1]))));
                                var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) arr_11 [i_1]))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_5 = 0; i_5 < 25; i_5 += 2) 
                {
                    for (unsigned char i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 25; i_7 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) (unsigned short)41848)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [8LL] [i_1] [i_5]))) : (var_14))) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4088615266U)) ? (((/* implicit */int) (unsigned short)23709)) : (((/* implicit */int) (unsigned short)23716))))))) ? (5306099949904114309LL) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_22 [i_0] [i_1] [i_5] [i_6] [i_7]))))));
                                var_18 ^= ((/* implicit */long long int) (+((-(((/* implicit */int) arr_9 [i_0] [i_1] [i_5]))))));
                                var_19 += ((/* implicit */long long int) arr_2 [i_0] [1]);
                                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned int) (unsigned short)38896)), (arr_7 [(unsigned char)19] [i_1] [18ULL]))), (((/* implicit */unsigned int) ((((/* implicit */int) (short)-10591)) & (((/* implicit */int) var_8)))))))) ? (((long long int) ((unsigned int) 3879759103U))) : (((/* implicit */long long int) (((~(arr_13 [i_0] [i_1] [(unsigned char)12] [i_6]))) >> (((max((((/* implicit */int) arr_9 [i_0] [i_6] [i_1])), (arr_23 [i_7] [i_6] [i_5] [i_1] [i_0] [i_0]))) - (1550571551))))))));
                                var_21 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_5)))) ? (((/* implicit */int) arr_8 [i_5] [i_1] [(short)14])) : ((~(((/* implicit */int) arr_9 [i_0] [i_1] [i_1]))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_8 = 0; i_8 < 11; i_8 += 4) 
    {
        var_22 = ((/* implicit */unsigned int) (+((~(min((var_5), (((/* implicit */long long int) arr_4 [i_8]))))))));
        var_23 &= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) >= (((long long int) 3879759082U))));
        arr_28 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_8])) ? (((/* implicit */long long int) arr_25 [i_8])) : (var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_8)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3879759083U)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41822)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (423905414U)))));
        var_24 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */int) (unsigned short)23729)) != (((/* implicit */int) (unsigned short)38879)))));
    }
}
