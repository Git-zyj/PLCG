/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214123
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        var_18 -= ((/* implicit */long long int) arr_5 [3ULL] [i_1]);
                        var_19 &= ((/* implicit */unsigned long long int) (((~(((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (-391785835869366469LL))))) <= (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_6 [i_3])) > (arr_1 [i_0] [8U])))) * (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_0 [i_2] [i_1])) : (((/* implicit */int) (unsigned char)148)))))))));
                    }
                    for (signed char i_4 = 3; i_4 < 6; i_4 += 1) 
                    {
                        var_20 = max((((18027107312419928704ULL) | (419636761289622911ULL))), ((~(419636761289622911ULL))));
                        var_21 = ((/* implicit */_Bool) 419636761289622912ULL);
                        var_22 |= ((((/* implicit */_Bool) (+(10912997687236943465ULL)))) ? (((/* implicit */unsigned long long int) -1886489285)) : (min((max((((/* implicit */unsigned long long int) arr_1 [i_1] [(signed char)8])), (8572833050486757834ULL))), (((/* implicit */unsigned long long int) var_16)))));
                    }
                    var_23 = ((/* implicit */unsigned long long int) ((long long int) ((((((/* implicit */_Bool) (short)-25643)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [(signed char)4]))) : (arr_4 [i_2] [i_1] [(_Bool)1]))) == (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1]))))));
                    /* LoopSeq 3 */
                    for (int i_5 = 1; i_5 < 7; i_5 += 4) 
                    {
                        var_24 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) ((((((/* implicit */int) arr_6 [i_5])) + (2147483647))) << (((((/* implicit */int) var_7)) - (72))))))) ? (min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) arr_1 [i_0] [3ULL])) : (arr_10 [i_0] [i_0] [6ULL] [i_0] [i_0] [i_0]))), (((/* implicit */long long int) arr_3 [i_1] [i_5 + 2])))) : (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                        var_25 = ((/* implicit */unsigned int) (+(min((((/* implicit */unsigned long long int) (~(4331302564455188797LL)))), ((~(12738175057957762637ULL)))))));
                        arr_14 [i_5] [i_5] [i_5] [i_2] [(unsigned short)8] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)14)) >> (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */int) (signed char)127)) : (0)));
                    }
                    for (signed char i_6 = 0; i_6 < 10; i_6 += 1) 
                    {
                        arr_18 [i_0] [i_0] [i_1] [i_2] [i_1] = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_15 [i_0] [i_1] [(_Bool)1] [i_6])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_12 [i_0] [i_2] [5ULL] [i_2] [i_2] [i_1])))) % (((/* implicit */int) ((_Bool) arr_17 [i_0] [i_0] [i_2] [i_6])))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) var_9)))))) : (min((((/* implicit */unsigned long long int) ((unsigned char) -4331302564455188808LL))), (min((((/* implicit */unsigned long long int) 1448934911U)), (6955146626543350629ULL))))));
                        var_26 = ((/* implicit */long long int) (~(max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_1])), ((~(9873911023222793781ULL)))))));
                    }
                    /* vectorizable */
                    for (signed char i_7 = 0; i_7 < 10; i_7 += 4) 
                    {
                        var_27 &= ((((/* implicit */int) (unsigned char)108)) >= (((/* implicit */int) arr_0 [i_0] [i_1])));
                        var_28 &= ((/* implicit */short) ((((_Bool) 9873911023222793782ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                    }
                    arr_21 [i_1] [(unsigned char)3] [2LL] [i_0] = ((/* implicit */signed char) (!((!(((((/* implicit */_Bool) arr_19 [3U] [i_1] [i_1] [i_1] [3U])) || (((/* implicit */_Bool) 1148640154U))))))));
                }
            } 
        } 
    } 
    var_29 &= ((/* implicit */unsigned char) ((min((max((1469252577), (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) (unsigned char)152)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (signed char)0)))))) << (((var_13) - (120445979U)))));
}
