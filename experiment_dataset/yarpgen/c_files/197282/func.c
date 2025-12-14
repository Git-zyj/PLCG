/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197282
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_3 [(unsigned short)6])), (min((arr_0 [(unsigned short)11] [i_0]), (((/* implicit */unsigned int) var_2))))))) ? (((/* implicit */int) (unsigned char)241)) : (((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)38)), (arr_3 [12ULL])))) <= (((/* implicit */int) ((signed char) var_6))))))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_7 [i_1] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (~(((/* implicit */int) (short)-16923))))) ? (3743477202U) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_3))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-46)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (unsigned short)41020))))))))));
            var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_6 [i_0] [i_1] [2U])) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_1])) : (((/* implicit */int) (_Bool)1)))) > (((/* implicit */int) ((_Bool) arr_5 [i_0] [(unsigned char)4] [i_0]))))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_13 ^= ((/* implicit */signed char) arr_2 [i_0]);
            arr_10 [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)38)) ? (551490092U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)38)))));
            /* LoopSeq 1 */
            for (long long int i_3 = 0; i_3 < 13; i_3 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_4 = 0; i_4 < 13; i_4 += 2) 
                {
                    var_14 = ((/* implicit */unsigned long long int) arr_1 [7ULL]);
                    var_15 += ((/* implicit */unsigned short) ((unsigned char) max((((/* implicit */int) min(((short)12277), (((/* implicit */short) arr_9 [i_0] [i_4] [i_3]))))), (((((/* implicit */int) (_Bool)1)) << (((arr_8 [i_3] [i_3] [i_3]) - (1299662531U))))))));
                    arr_15 [(unsigned short)3] [i_2] [i_3] [i_4] [i_2] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) & ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2] [i_2] [i_3])))))))));
                    var_16 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 551490092U)) ? (arr_0 [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63246)))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (max((((/* implicit */unsigned long long int) arr_2 [i_0])), (arr_14 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) var_6)), ((short)8192)))))))));
                    var_17 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 1361635285)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_2] [i_2])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_8 [i_0] [i_2] [i_3])))));
                }
                for (unsigned int i_5 = 3; i_5 < 12; i_5 += 1) 
                {
                    var_18 = (!(((/* implicit */_Bool) ((int) -266096329))));
                    arr_19 [i_0] [i_2] [i_2] [i_2] [i_2] [i_5 - 3] = (i_2 % 2 == zero) ? (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_5] [i_2] [i_5 + 1])) >> (((((/* implicit */int) arr_5 [i_5 - 2] [i_5 + 1] [i_5 - 2])) - (13)))))) | ((~(((((/* implicit */_Bool) (signed char)-38)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63246))) : (arr_18 [i_0] [i_2] [i_2])))))))) : (((/* implicit */int) ((((/* implicit */long long int) ((((((/* implicit */int) arr_13 [i_5] [i_2] [i_5 + 1])) + (2147483647))) >> (((((/* implicit */int) arr_5 [i_5 - 2] [i_5 + 1] [i_5 - 2])) - (13)))))) | ((~(((((/* implicit */_Bool) (signed char)-38)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63246))) : (arr_18 [i_0] [i_2] [i_2]))))))));
                    arr_20 [i_2] [i_2] = ((/* implicit */unsigned int) (~(min((-1LL), (((/* implicit */long long int) 551490093U))))));
                }
                arr_21 [i_0] [i_3] [i_2] [i_0] = ((/* implicit */unsigned short) arr_18 [i_3] [i_2] [i_3]);
            }
            var_19 = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0]))) - (var_4))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_9 [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_9 [i_2] [i_2] [i_2])))))));
        }
        arr_22 [i_0] &= ((/* implicit */short) min(((-(max((((/* implicit */long long int) arr_5 [i_0] [i_0] [i_0])), (arr_1 [0ULL]))))), (((/* implicit */long long int) (((+(((/* implicit */int) (short)1)))) / (((/* implicit */int) (signed char)38)))))));
    }
    var_20 = ((/* implicit */long long int) (short)12277);
    var_21 = ((/* implicit */short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))))), (((((/* implicit */_Bool) ((long long int) 3743477210U))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_8)))) : (var_8)))));
}
