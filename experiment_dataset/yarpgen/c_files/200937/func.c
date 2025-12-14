/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200937
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
    var_10 = ((/* implicit */int) ((min((var_8), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1))))))) | (min((var_5), (((var_5) >> (((var_9) - (4528074553525857412ULL)))))))));
    var_11 |= ((unsigned long long int) ((var_5) / (5550912521823785401ULL)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 13; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_2 = 2; i_2 < 13; i_2 += 3) 
                {
                    var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (arr_7 [i_0] [i_0] [i_2]) : (((/* implicit */int) var_0)))))));
                    arr_9 [i_2] [i_2] [i_2] [4U] = ((/* implicit */unsigned long long int) arr_4 [i_1]);
                    var_13 = ((/* implicit */long long int) var_3);
                }
                for (int i_3 = 1; i_3 < 12; i_3 += 2) 
                {
                    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [4ULL] [i_3 + 2] [i_3 + 2])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_3))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 280925220896768LL))))))))));
                    arr_12 [i_0] [i_3] [i_0] [i_3] = ((/* implicit */unsigned char) arr_11 [i_0 - 2] [i_1] [i_1] [i_1]);
                    var_15 = ((/* implicit */short) ((((((/* implicit */_Bool) max(((unsigned short)28383), ((unsigned short)6729)))) && (((/* implicit */_Bool) (~(var_9)))))) ? (min((min((var_9), (var_9))), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                }
                for (int i_4 = 0; i_4 < 14; i_4 += 4) 
                {
                    arr_15 [i_0] = ((/* implicit */unsigned char) arr_5 [i_0] [i_0] [i_0]);
                    arr_16 [i_0] [5] [i_4] = min((((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37153))) / (var_5))) >> (((/* implicit */int) arr_11 [i_0] [i_0 - 1] [i_0] [i_0 - 1])))), (((((/* implicit */_Bool) min((((/* implicit */int) var_6)), (arr_10 [12ULL] [i_1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [(unsigned short)1] [i_0] [i_0]))) / (var_4)))) : ((+(var_8))))));
                    arr_17 [i_0] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_4 [i_1])) || (((/* implicit */_Bool) arr_5 [i_4] [i_1] [(signed char)4])))) ? (((/* implicit */int) ((((/* implicit */_Bool) -1952532051)) || (((/* implicit */_Bool) (short)-10737))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))) ? (((/* implicit */unsigned long long int) ((((var_2) && (((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_14 [i_4] [i_4] [i_4] [i_4]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))) : (var_9)));
                }
                arr_18 [i_0] [i_0 - 2] &= ((/* implicit */unsigned char) (-(((/* implicit */int) (short)-10737))));
                var_16 = ((/* implicit */int) ((_Bool) var_0));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 14; i_5 += 3) 
                {
                    for (int i_6 = 0; i_6 < 14; i_6 += 4) 
                    {
                        for (unsigned long long int i_7 = 2; i_7 < 11; i_7 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned long long int) arr_23 [i_7 - 2] [i_7] [i_0 + 1]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_7 + 3] [i_7 + 3] [i_0 - 2])) || (((/* implicit */_Bool) arr_23 [i_7 - 1] [i_5] [i_0 + 1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
                                arr_28 [i_5] [(unsigned char)3] [0LL] [i_1] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((~(var_9))) - (((((/* implicit */_Bool) var_8)) ? (6362671637080141785ULL) : (((/* implicit */unsigned long long int) var_4))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) min((18446744073709551605ULL), (((/* implicit */unsigned long long int) arr_14 [i_1] [i_5] [9LL] [i_7]))))))) : (((arr_20 [i_1]) | (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_1])) << (((((/* implicit */int) (short)10736)) - (10723))))))))));
                                var_18 *= (+(arr_19 [i_0] [i_5]));
                            }
                        } 
                    } 
                } 
                var_19 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0 - 4] [i_0 + 1] [i_0 - 4])) ? (arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 2]) : (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0 - 2] [i_0 + 1] [i_0 - 4])) || (((/* implicit */_Bool) arr_3 [i_0 - 3] [i_0 - 3] [i_0 - 1])))))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) min((((/* implicit */int) var_0)), (var_3)));
}
