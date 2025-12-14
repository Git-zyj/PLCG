/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26564
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
    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)243))) != (18445580403558967058ULL)))), (var_11)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)13)) ? (3146626186U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)4)))))) : (5767627321237898441ULL))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_3 = 3; i_3 < 15; i_3 += 4) 
                    {
                        var_13 |= ((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_2] [i_3]);
                        arr_12 [i_3 + 1] [i_3] [i_3 + 1] [i_3 - 2] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)12))) : (3556256264U)));
                    }
                    /* vectorizable */
                    for (signed char i_4 = 0; i_4 < 16; i_4 += 2) 
                    {
                        arr_15 [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 3544832325U)) ? (((/* implicit */int) arr_14 [i_4] [i_2] [i_1] [i_1] [i_1] [i_0])) : (((/* implicit */int) (signed char)(-127 - 1))))) * (((/* implicit */int) arr_1 [i_0]))));
                        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3833597122U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (10166685881416912106ULL)))) ? (((((/* implicit */_Bool) 3702288167U)) ? (((/* implicit */int) (unsigned short)25238)) : (arr_8 [i_0] [i_1] [i_0] [i_0]))) : ((~(((/* implicit */int) arr_1 [i_0]))))));
                    }
                    for (unsigned char i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        arr_18 [i_0] [i_0] [i_0] [i_2] [i_2] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)64))) <= (1116720061U)));
                        var_15 = ((/* implicit */unsigned char) min((((((/* implicit */int) (unsigned char)243)) != (((/* implicit */int) ((((/* implicit */_Bool) -1549517813)) && (((/* implicit */_Bool) var_6))))))), (((((((/* implicit */_Bool) (signed char)-48)) ? (592679128U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)42699)))))))));
                        arr_19 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-48)) & (((/* implicit */int) (unsigned short)42699))))) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) arr_4 [i_0] [i_2]))))) | (1116720061U)));
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-48)) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [14U] [i_0])) : (((((/* implicit */_Bool) 18355883132128323258ULL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_16 [i_5] [i_1] [i_1] [i_5]))))));
                        arr_20 [i_0] [(_Bool)1] [(unsigned short)4] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 4370115809374809027LL)) ? (3533707515U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2] [i_1] [i_2] [i_5])))))))) + (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -644585735073105478LL)) && ((_Bool)0)))), (arr_7 [i_5] [i_2] [i_1] [i_0])))));
                    }
                    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_3 [i_0]), (((/* implicit */unsigned short) arr_14 [(signed char)5] [i_1] [i_1] [i_1] [i_1] [i_1]))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) != (3702288167U)))) : (((/* implicit */int) arr_3 [i_1]))))))))));
                    arr_21 [2U] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_2] [i_2] [4ULL] [4ULL] [i_0] [i_0])) && (((((/* implicit */int) (unsigned char)255)) > (((/* implicit */int) (unsigned char)228))))));
                    arr_22 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 1116720061U)) ? (((/* implicit */int) var_4)) : (arr_8 [i_2] [i_2] [i_2] [i_0])))))) | (31457280U)));
                    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) - (arr_17 [i_2] [i_1] [i_0])))) ? (((10806827291386330985ULL) << (((((/* implicit */int) arr_4 [(unsigned char)7] [i_2])) - (36193))))) : (((/* implicit */unsigned long long int) (+((~(arr_17 [7] [i_1] [i_0])))))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) min(((((!(((/* implicit */_Bool) var_7)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (11105655408672417008ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)228)) ? (-644585735073105478LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)163)))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1967773026U)))))));
}
