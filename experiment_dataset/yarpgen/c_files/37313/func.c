/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37313
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_0] [i_3] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) (((+(arr_4 [i_1] [i_1] [i_2]))) << (((max((var_1), (arr_8 [i_0] [i_2]))) - (470685520))))))));
                                arr_13 [i_0] [i_0] [i_2] [8] [12] = ((unsigned long long int) ((((/* implicit */_Bool) ((-966633127) | (1180182974)))) ? (((((/* implicit */_Bool) 2887476178476078110ULL)) ? (11702468968439490218ULL) : (((/* implicit */unsigned long long int) var_14)))) : (10218743536973285723ULL)));
                                arr_14 [i_0] [i_0] [i_4 + 2] = ((/* implicit */int) min(((+(var_7))), (((unsigned long long int) var_5))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) -966633116))));
                    var_18 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((1683025770) - (var_5))) >> (((var_0) ^ (var_0)))))), ((~(3195489086887568935ULL)))));
                    arr_15 [i_0] [i_0] [i_2] = ((/* implicit */int) ((7071443724705187540ULL) << (((((((/* implicit */_Bool) (-(-966633145)))) ? (max((654579640), (arr_5 [i_0] [i_1] [4]))) : (1163205677))) - (654579622)))));
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        arr_18 [7ULL] [i_5] [i_0] [i_1] [3ULL] = ((/* implicit */unsigned long long int) var_16);
                        var_19 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_4 [i_5] [i_0 + 1] [i_0 + 1])) && (((/* implicit */_Bool) 16536187547136916803ULL)))) ? (((/* implicit */unsigned long long int) arr_7 [i_0])) : (((unsigned long long int) var_2))));
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 12; i_6 += 3) 
                {
                    for (int i_7 = 2; i_7 < 12; i_7 += 3) 
                    {
                        {
                            arr_24 [i_0] [i_0] [12] [i_0] [i_0] [12] |= 7369160756308883998ULL;
                            var_20 = ((/* implicit */int) ((((/* implicit */unsigned long long int) var_1)) & ((-(arr_9 [i_0 - 1] [i_6 - 1] [i_7 + 1])))));
                        }
                    } 
                } 
                arr_25 [i_0] [i_1] [0] = var_3;
            }
        } 
    } 
    var_21 = ((/* implicit */int) ((unsigned long long int) ((unsigned long long int) 10946479544053955195ULL)));
}
