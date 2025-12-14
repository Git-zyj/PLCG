/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23990
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
    var_19 = ((((/* implicit */_Bool) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_9)))))))) ? (((((/* implicit */_Bool) var_17)) ? (min((var_9), (((/* implicit */unsigned long long int) var_17)))) : (((((/* implicit */_Bool) -3332315205508563322LL)) ? (211106232532992ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) > (min((((/* implicit */unsigned long long int) 16)), (16779603980269677571ULL))))))));
    var_20 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) 2147483647)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 7752429706263257015ULL)))))) : (((((/* implicit */_Bool) 211106232532992ULL)) ? (var_4) : (((/* implicit */unsigned long long int) (-2147483647 - 1))))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((3332315205508563321LL), (((/* implicit */long long int) (unsigned char)69))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_7)), (3428191400656370724ULL))))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_0 [i_1])), (((arr_2 [i_0] [i_1 + 1]) ? (((/* implicit */int) arr_2 [i_0] [i_1 + 1])) : (((/* implicit */int) arr_0 [i_0]))))))) ? (min(((~(4792496272436838270ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_1]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)166)))));
                var_21 += ((/* implicit */long long int) arr_0 [i_0]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 1; i_2 < 22; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_4 = 3; i_4 < 21; i_4 += 2) 
                {
                    arr_16 [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_12 [i_2]);
                    var_22 -= ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2])) ? (2941904488U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_4] [i_3] [(signed char)18])))))) ? (((arr_11 [i_2]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3] [i_2 - 1]))))) : (((unsigned long long int) arr_11 [i_4])))), (min((arr_11 [i_2]), (((/* implicit */unsigned long long int) min((((/* implicit */short) arr_14 [i_2] [i_3])), (arr_9 [i_4] [i_4]))))))));
                }
                arr_17 [(unsigned char)2] [(unsigned char)2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) 15745075795949009579ULL)) ? (((/* implicit */int) arr_8 [i_2 - 1])) : (((/* implicit */int) arr_15 [i_2] [i_2 + 1] [i_2]))))), (-9057738692961956142LL)))) ? ((~(((/* implicit */int) min((((/* implicit */unsigned short) arr_9 [i_2] [i_2 - 1])), ((unsigned short)65517)))))) : (((/* implicit */int) arr_14 [i_2 + 1] [i_2]))));
                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_2 + 1] [i_2] [i_2] [i_2 + 1])) || (((/* implicit */_Bool) 9146792854121541086LL))));
                arr_18 [i_2 - 1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 10170729493227483427ULL)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)8))))) : (2701668277760542036ULL))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_2] [i_3])) ? (((((/* implicit */_Bool) (unsigned char)110)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (arr_7 [i_3]))) : (-2163317464938060600LL))))));
            }
        } 
    } 
}
