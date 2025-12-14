/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227423
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((max((1358366909), (32767))) / (((/* implicit */int) var_15))))) || (((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) != (((/* implicit */int) ((((/* implicit */unsigned int) -32770)) != (386663233U))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    arr_6 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (!(((((/* implicit */int) var_7)) == (((/* implicit */int) (signed char)44))))))) : (arr_5 [i_0])));
                    arr_7 [i_0] [i_2] = ((/* implicit */unsigned char) ((int) ((((/* implicit */long long int) (+(((/* implicit */int) (signed char)-104))))) & (var_13))));
                    arr_8 [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_0)), (((((((/* implicit */unsigned long long int) 1231707372U)) * (var_14))) / (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0 - 2] [i_0])) & (((/* implicit */int) var_3)))))))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            var_20 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_7)), (var_8)))) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) ((var_8) < (((/* implicit */unsigned int) arr_10 [i_0 + 1] [i_0 + 1] [i_3] [i_4]))))))))) || (((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) 32781)), (var_4))))))));
                            var_21 = ((/* implicit */unsigned char) ((max((min((arr_10 [i_0 - 3] [i_2] [i_1] [i_0 - 3]), (((/* implicit */int) arr_1 [i_0] [i_2])))), (((/* implicit */int) (signed char)7)))) ^ (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1]))));
                            arr_15 [i_0] [i_3] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) || (((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1] [i_0]))) == (var_4)))) < (((((/* implicit */_Bool) -1731317757)) ? (arr_5 [i_0]) : (((/* implicit */int) (signed char)-86))))))));
                        }
                        for (signed char i_5 = 0; i_5 < 19; i_5 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned int) arr_0 [i_0 - 1] [i_0 - 1]);
                            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_10 [i_0] [i_0 - 2] [i_0 - 3] [i_0]) % (32770)))) ? (((((/* implicit */_Bool) -32770)) ? (arr_17 [i_0 - 3] [i_0 - 3] [i_0 - 3] [i_3] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-118))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0])) && (((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_1]))))))))) ? (((((/* implicit */unsigned long long int) arr_18 [i_2] [i_1])) / (max((((/* implicit */unsigned long long int) arr_5 [i_0 - 3])), (var_14))))) : (min((((/* implicit */unsigned long long int) ((signed char) (signed char)-110))), (((var_17) / (arr_12 [i_0] [i_0 + 2] [i_0] [i_0 - 1] [i_0 + 2] [i_0 - 1])))))));
                            var_24 = max((((-7489836520104947082LL) % (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0 + 1] [i_0 + 1]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0 + 1] [i_0 - 3])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_11 [i_0 - 2] [i_0 - 2]))))));
                            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) ((short) 7858665972687631428ULL))) ? (((/* implicit */int) (short)-25089)) : (32767))))));
                            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) ((((/* implicit */unsigned int) 32786)) < (3557651784U)))), (arr_9 [i_2] [i_0])))) ? ((+(((/* implicit */int) min(((unsigned short)39875), ((unsigned short)16132)))))) : (((/* implicit */int) max((((/* implicit */short) ((((/* implicit */int) (short)-1)) < (((/* implicit */int) arr_1 [i_0] [i_1]))))), ((short)-11275))))));
                        }
                        for (int i_6 = 0; i_6 < 19; i_6 += 3) 
                        {
                            var_27 ^= ((/* implicit */_Bool) var_11);
                            arr_21 [i_0] [i_0] [i_0] [i_0 - 3] [i_0 - 3] = ((/* implicit */signed char) var_0);
                            var_28 = ((/* implicit */unsigned char) ((var_9) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            arr_22 [i_0] [i_0] [i_2] [i_3] [i_0] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_0] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 32776)) && (((/* implicit */_Bool) arr_14 [i_0 - 2] [i_0 - 2] [i_2] [i_2] [i_6]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 0U)))))))));
                        }
                        arr_23 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) min((arr_13 [i_0 + 2]), (arr_13 [i_0 - 2])))) == (((((/* implicit */_Bool) arr_13 [i_0 - 1])) ? (((/* implicit */int) arr_13 [i_0 - 2])) : (32791)))));
                    }
                }
                var_29 = ((/* implicit */int) min((((/* implicit */unsigned int) max((arr_13 [i_0 - 1]), (arr_13 [i_0 + 2])))), (((((/* implicit */_Bool) arr_13 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1]))) : (4056868171U)))));
                arr_24 [i_0] = ((/* implicit */short) var_9);
                var_30 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_0 - 2])) / (((/* implicit */int) arr_13 [i_0 - 2]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-15)) ? (arr_5 [i_0 - 3]) : (((/* implicit */int) var_3))))) ? (max((((/* implicit */long long int) 1505524327U)), (-5881452319942151480LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (short)-18)) : (arr_20 [i_1] [i_0] [i_1] [i_0] [i_0]))))))));
            }
        } 
    } 
}
