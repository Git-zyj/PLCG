/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191049
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
    for (unsigned char i_0 = 2; i_0 < 24; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_3 = 4; i_3 < 23; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 4; i_4 < 24; i_4 += 3) 
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (1599723797) : (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_2 [i_2] [i_3])))))));
                            var_11 *= ((/* implicit */unsigned short) ((9016216641402010086ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)32))))))));
                        }
                        var_12 = ((/* implicit */signed char) (((_Bool)1) ? (((arr_9 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_5))))));
                        var_13 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)7993)) ^ (((/* implicit */int) var_2)))) / (((/* implicit */int) ((arr_7 [i_0] [i_1] [i_2] [i_3]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3] [i_2] [i_1]))))))));
                        arr_11 [i_0] = ((/* implicit */int) var_4);
                        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((arr_9 [i_3] [i_1] [i_2] [i_2] [i_1] [i_0 - 2]) % (arr_9 [i_2] [i_3] [i_2] [i_1] [i_3] [i_0 - 2]))))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (+(((((/* implicit */int) ((arr_6 [i_5] [i_2] [i_1] [i_0]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39804)))))) % (((((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])) & (((/* implicit */int) (signed char)40)))))))))));
                        arr_14 [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)43)) : (((/* implicit */int) ((_Bool) (~(((/* implicit */int) (unsigned short)57526))))))));
                    }
                    var_16 = ((/* implicit */signed char) max((var_10), (((/* implicit */int) var_7))));
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((unsigned long long int) var_10)) >> (((max((((/* implicit */unsigned int) var_2)), (1037977631U))) - (1037977583U)))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (9016216641402010088ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_1] [i_2])) != (((/* implicit */int) var_2)))))) : (((unsigned long long int) arr_3 [i_0] [i_1] [i_2])))) : ((-(arr_8 [i_1] [i_1] [i_1] [i_1] [i_1])))));
                    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (+(((arr_6 [i_0 - 2] [i_0] [i_0] [i_0]) >> (((arr_6 [i_0 + 1] [i_0] [i_0] [i_0]) - (9246356344515318591ULL))))))))));
                }
            } 
        } 
        arr_15 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_2 [i_0] [i_0])))) >> (((max((9430527432307541530ULL), (((/* implicit */unsigned long long int) arr_13 [i_0] [i_0])))) - (18446744073709551536ULL)))))) != (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) ^ (arr_6 [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9016216641402010072ULL)) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) (unsigned short)57562))))) : (arr_9 [i_0 + 1] [i_0] [i_0] [i_0] [(unsigned char)18] [i_0])))));
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))) + (9016216641402010065ULL))) : (((/* implicit */unsigned long long int) ((unsigned int) var_9)))))))))));
        arr_16 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) arr_3 [i_0] [i_0] [i_0 - 2]))));
    }
    var_20 = ((/* implicit */_Bool) min((min((((/* implicit */unsigned int) ((int) (unsigned short)57555))), (var_9))), (((/* implicit */unsigned int) (+(((/* implicit */int) ((9016216641402010080ULL) != (((/* implicit */unsigned long long int) var_10))))))))));
    /* LoopNest 2 */
    for (unsigned char i_6 = 0; i_6 < 24; i_6 += 3) 
    {
        for (unsigned int i_7 = 3; i_7 < 21; i_7 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned short) ((((min((arr_7 [i_6] [i_6] [i_7] [i_7]), (((/* implicit */unsigned long long int) var_0)))) * ((+(9016216641402010077ULL))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)63)))));
                var_22 -= ((/* implicit */unsigned char) var_8);
                arr_21 [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9016216641402010087ULL)) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) (unsigned char)163))))) ? (max((((/* implicit */unsigned long long int) ((unsigned char) 2893491923U))), (min((((/* implicit */unsigned long long int) arr_5 [i_6] [i_6] [i_6] [i_6])), (9430527432307541523ULL))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-85)))) & ((~(((/* implicit */int) var_7)))))))));
            }
        } 
    } 
}
