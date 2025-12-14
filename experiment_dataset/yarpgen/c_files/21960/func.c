/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21960
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
    var_16 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 5164106947042557177ULL)) && (((/* implicit */_Bool) 21ULL)))) || (((((/* implicit */_Bool) ((var_2) & (var_3)))) && (((/* implicit */_Bool) ((var_6) / (var_0))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((arr_4 [i_0]) - (var_0))) != (((541165879296ULL) / (arr_0 [i_0] [i_1])))))) <= (((/* implicit */int) ((((var_8) >= (var_0))) || (((var_9) == (var_14))))))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((23ULL) & (var_13))) & (((18446743532543672295ULL) / (var_14)))))) && (((/* implicit */_Bool) ((((var_3) << (((139637976727552ULL) - (139637976727496ULL))))) ^ (((13304089887177936891ULL) + (15101653476126966055ULL))))))));
                arr_8 [i_0] = ((((((arr_4 [i_0]) / (var_8))) << (((((arr_3 [i_0]) & (arr_4 [i_1]))) - (3767825225203376258ULL))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((541165879296ULL) % (arr_5 [i_0]))) != (((18446743532543672295ULL) % (arr_4 [i_0]))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 2; i_2 < 11; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 1; i_4 < 11; i_4 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_5 = 4; i_5 < 10; i_5 += 1) 
                    {
                        var_17 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_2])) && (((/* implicit */_Bool) 9007182074871808ULL))))) << (((/* implicit */int) ((15753688943315278477ULL) < (arr_20 [i_5] [i_2] [i_3] [i_2]))))));
                        arr_21 [i_3] [i_3] [i_3] [i_3] |= ((((arr_19 [i_4 + 2] [i_4] [i_4] [i_4] [i_4]) >> (((541165879296ULL) - (541165879272ULL))))) & (((18446744073709551615ULL) / (arr_19 [i_2] [i_2] [i_3] [i_4] [i_5]))));
                        arr_22 [i_4] [i_5] [i_4] [i_3] [i_2] = ((((var_9) / (arr_13 [i_2] [i_3] [i_2]))) >> (((6091153679116776098ULL) * (0ULL))));
                    }
                    for (unsigned long long int i_6 = 1; i_6 < 10; i_6 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_2] [i_3] [i_4] [i_4] [i_6])) || (((/* implicit */_Bool) var_8))))) > (((/* implicit */int) ((var_11) < (arr_15 [i_6] [i_4] [i_3] [i_2]))))))) << (((((((var_6) & (9889727798912469784ULL))) & (((15101653476126966055ULL) >> (((18446744073709551597ULL) - (18446744073709551583ULL))))))) - (567349107769347ULL)))));
                        arr_25 [i_6] = ((((((7792842349052728481ULL) >> (((10951711402981624289ULL) - (10951711402981624236ULL))))) % (10281773908409882612ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((arr_19 [i_4] [i_3] [i_4] [i_6] [i_6]) ^ (7495032670727927344ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) || (((/* implicit */_Bool) arr_11 [i_2] [i_3])))))))))));
                        var_19 = ((/* implicit */unsigned long long int) ((((18446744073709551606ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((9583756747433587035ULL) > (138595015474075137ULL))))))) > (2693055130394273139ULL)));
                        arr_26 [i_2] [i_3] [i_4] [i_6] [i_3] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((arr_20 [i_2] [i_3] [i_3] [i_3]) / (var_10))) > (((var_7) - (arr_13 [i_3] [i_3] [i_2])))))) / (((/* implicit */int) ((((9701400208311229186ULL) != (arr_9 [i_2]))) && (((/* implicit */_Bool) ((var_8) & (arr_17 [i_3])))))))));
                    }
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((arr_18 [i_4] [i_3] [i_3]) & (9958294968905410915ULL))) >> (((arr_13 [i_2] [i_3] [i_2]) / (arr_20 [i_2] [i_2] [i_4] [i_3])))))) || (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) 10961465158742035248ULL)) && (((/* implicit */_Bool) 9223371968135299072ULL))))) >> (((var_6) / (12355590394592775517ULL)))))))))));
                    var_21 = ((/* implicit */unsigned long long int) ((((((1847704478291962386ULL) + (10893950286839041461ULL))) ^ (((10961465158742035248ULL) - (18446744073709551608ULL))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) ((18308149058235476478ULL) == (var_6)))) * (((/* implicit */int) ((var_0) < (arr_17 [i_2])))))))));
                }
            } 
        } 
    } 
}
