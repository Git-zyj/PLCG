/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236360
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
    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) var_11))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_16 = ((/* implicit */_Bool) arr_1 [i_0]);
        arr_2 [i_0] = ((/* implicit */_Bool) ((arr_1 [i_0]) / (min((((/* implicit */int) (unsigned short)37023)), (arr_1 [i_0])))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            var_17 = ((/* implicit */unsigned long long int) (unsigned short)28501);
            /* LoopSeq 2 */
            for (short i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                arr_8 [(signed char)18] [i_0] [i_2] [(signed char)6] |= ((/* implicit */short) arr_6 [i_0] [i_1] [i_0]);
                var_18 = ((/* implicit */signed char) (~(((/* implicit */int) (((~(((/* implicit */int) arr_0 [i_2] [i_2])))) == (1099289683))))));
            }
            for (int i_3 = 0; i_3 < 19; i_3 += 3) 
            {
                var_19 = ((/* implicit */_Bool) ((unsigned char) min(((unsigned short)37042), ((unsigned short)1016))));
                var_20 = ((/* implicit */signed char) (+(min((var_1), (((/* implicit */long long int) min((var_4), (((/* implicit */int) (_Bool)1)))))))));
                arr_11 [i_0] [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned int) (~(((((/* implicit */_Bool) -916049792)) ? (((/* implicit */int) arr_7 [i_3] [i_1] [i_0])) : (((/* implicit */int) (signed char)80))))))), (((((/* implicit */_Bool) min((arr_0 [i_3] [i_1]), (((/* implicit */short) var_2))))) ? (min((((/* implicit */unsigned int) var_14)), (arr_5 [(unsigned short)0] [i_0] [i_3] [(signed char)7]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_1] [i_1] [i_1])) == (((/* implicit */int) (signed char)-98))))))))));
            }
            /* LoopNest 2 */
            for (signed char i_4 = 0; i_4 < 19; i_4 += 1) 
            {
                for (int i_5 = 2; i_5 < 17; i_5 += 3) 
                {
                    {
                        arr_18 [i_1] [i_5] [12] [i_4] [12] [i_1] = ((/* implicit */int) (((~(min((arr_5 [4U] [i_1] [i_4] [4U]), (((/* implicit */unsigned int) (signed char)20)))))) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)21325))))) == (((((/* implicit */_Bool) (unsigned char)173)) ? (arr_13 [i_1] [(unsigned char)12] [i_1]) : (((/* implicit */unsigned long long int) 2874006802U))))))))));
                        var_21 &= ((/* implicit */signed char) min((((/* implicit */long long int) min(((~(arr_5 [i_0] [i_0] [i_4] [i_5 + 2]))), (1836047919U)))), (min((((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)184)), (var_0)))), (((var_1) + (((/* implicit */long long int) -1265730794))))))));
                        var_22 = (((~(arr_1 [i_5 + 2]))) % (((/* implicit */int) ((((/* implicit */int) arr_3 [i_4] [i_1])) == (((/* implicit */int) arr_3 [i_1] [i_1]))))));
                    }
                } 
            } 
        }
        for (unsigned char i_6 = 0; i_6 < 19; i_6 += 3) 
        {
            arr_21 [i_6] [14LL] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)18)) == (((/* implicit */int) (short)24261)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) && ((_Bool)1)))) : ((((~(((/* implicit */int) (unsigned short)54336)))) - (((((/* implicit */int) (short)15)) + (((/* implicit */int) var_6))))))));
            arr_22 [i_0] [i_6] = ((/* implicit */short) ((4294967295U) + (((/* implicit */unsigned int) 8388607))));
        }
        /* vectorizable */
        for (long long int i_7 = 0; i_7 < 19; i_7 += 3) 
        {
            var_23 = ((/* implicit */unsigned char) ((1168577867) < (((/* implicit */int) (signed char)-74))));
            arr_26 [i_7] = ((/* implicit */signed char) arr_24 [i_0] [(unsigned char)17] [i_0]);
        }
        arr_27 [i_0] = ((/* implicit */signed char) (+(((((/* implicit */long long int) ((((/* implicit */_Bool) (short)26465)) ? (var_8) : (var_12)))) | (8313676912151593168LL)))));
        var_24 = ((/* implicit */signed char) ((((unsigned long long int) max(((unsigned short)1016), (((/* implicit */unsigned short) arr_0 [i_0] [i_0]))))) == (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
    }
    var_25 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) == (((/* implicit */int) ((_Bool) (unsigned char)173))))))) == (-2244366518984162978LL)));
    var_26 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) ((var_4) < (((/* implicit */int) var_5))))) | (var_12)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (12511611991318295644ULL)));
}
