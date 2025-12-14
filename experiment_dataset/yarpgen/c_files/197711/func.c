/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197711
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
    var_17 = ((/* implicit */int) min((((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_5)) ? (2701646830U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18276))))) : (((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (-126466981)))))), (((/* implicit */unsigned int) -1246348644))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)18280))) != (((long long int) min(((unsigned short)47256), ((unsigned short)58955))))));
        var_19 = ((unsigned long long int) ((arr_2 [i_0] [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) var_3)))));
        var_20 |= ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */signed char) arr_2 [i_1 + 1] [i_1 + 1]);
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_22 -= ((/* implicit */unsigned short) ((_Bool) ((arr_9 [i_0] [i_1 + 2] [4LL] [i_1 + 2]) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18276))))));
                                var_23 = ((/* implicit */short) arr_2 [i_0] [i_1]);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_24 = ((((arr_5 [i_0] [i_0] [i_0]) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)47260))))) ? (min((((/* implicit */int) (signed char)6)), (-677090032))) : (((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */int) (unsigned short)18275)) : (((/* implicit */int) (unsigned char)206)))));
    }
    for (unsigned short i_5 = 3; i_5 < 17; i_5 += 4) 
    {
        var_25 = ((/* implicit */unsigned short) min((var_25), ((unsigned short)20189)));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_6 = 0; i_6 < 18; i_6 += 4) 
        {
            /* LoopNest 3 */
            for (long long int i_7 = 1; i_7 < 15; i_7 += 3) 
            {
                for (long long int i_8 = 2; i_8 < 15; i_8 += 4) 
                {
                    for (short i_9 = 0; i_9 < 18; i_9 += 4) 
                    {
                        {
                            arr_23 [i_5] [i_6] [i_7] [i_7] [i_5] = ((/* implicit */long long int) (-(((/* implicit */int) arr_13 [i_5 - 3] [i_7 + 1]))));
                            var_26 = ((/* implicit */unsigned char) ((long long int) arr_22 [i_5 + 1] [i_6] [i_5 - 2] [i_8] [i_9]));
                            var_27 = ((/* implicit */int) ((unsigned long long int) (short)-24454));
                        }
                    } 
                } 
            } 
            var_28 += ((/* implicit */signed char) ((3976725366U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_5 - 1] [i_5 - 3])))));
            /* LoopSeq 2 */
            for (unsigned long long int i_10 = 3; i_10 < 17; i_10 += 2) 
            {
                var_29 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) ((unsigned char) 6506343595194243704ULL)))));
                var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -11041880)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (var_0)))) : ((+(((/* implicit */int) (signed char)11)))))))));
            }
            for (long long int i_11 = 0; i_11 < 18; i_11 += 3) 
            {
                var_31 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-6)) ? (arr_21 [i_5 - 3] [i_5 - 3] [i_11] [i_6] [i_11]) : (((/* implicit */int) (_Bool)1))));
                arr_32 [i_5] [i_6] [i_6] [i_11] &= ((/* implicit */short) (~((((_Bool)0) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
                arr_33 [i_5] [i_5] [(signed char)14] [i_6] = ((/* implicit */short) (+(((/* implicit */int) arr_20 [i_5] [i_6] [i_6] [i_11]))));
                var_32 = ((/* implicit */int) var_0);
            }
        }
        for (unsigned short i_12 = 3; i_12 < 17; i_12 += 4) 
        {
            arr_37 [i_5] [i_12] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_10)), (0ULL)))) ? (((/* implicit */int) (unsigned short)20061)) : (var_10)));
            var_33 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [(unsigned short)9]))) & (((unsigned long long int) var_5))));
        }
        arr_38 [i_5] [11LL] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) (_Bool)1)))));
    }
}
